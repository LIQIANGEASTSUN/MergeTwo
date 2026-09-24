/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityOrderLike$$get_DisplayToken RVA 0x298e180 =====

int FUN_0299e180(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6605,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6605,0);
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
  return *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x78);
}



// ===== FAT.ActivityOrderLike$$get_CurToken RVA 0x298e1dc =====

undefined4 FUN_0299e1dc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x500,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x500,0);
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



// ===== FAT.ActivityOrderLike$$get_MaxToken RVA 0x298e230 =====

undefined4 FUN_0299e230(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x501,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x501,0);
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
  iVar1 = *(int *)(param_1 + 0x94);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x18);
}



// ===== FAT.ActivityOrderLike$$get_ReadyToClaim RVA 0x298e294 =====

undefined4 FUN_0299e294(undefined4 param_1)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x4ff,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4ff,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = FUN_0299e1dc(param_1);
  iVar3 = FUN_0299e230(param_1);
  if (iVar3 <= iVar1) {
    iVar1 = FUN_0299e230(param_1);
    uVar4 = 0;
    if (0 < iVar1) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.ActivityOrderLike$$get_TokenId RVA 0x298e31c =====

undefined4 FUN_0299e31c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6606,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6606,0);
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
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x54);
}



// ===== FAT.ActivityOrderLike$$get_IsCorner RVA 0x298e380 =====

uint FUN_0299e380(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x6607,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6607,0);
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
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  return (uint)*(byte *)(iVar2 + 0x2c);
}



// ===== FAT.ActivityOrderLike$$get_Win RVA 0x298e3e4 =====

uint FUN_0299e3e4(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x6608,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6608,0);
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
  return (uint)*(byte *)(param_1 + 0xb0);
}



// ===== FAT.ActivityOrderLike$$get_RaceToken RVA 0x298e438 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0299e438(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r2;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
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
  
  iVar1 = func_0x0229f06c(0x62c,0);
  if (iVar1 == 0) {
    pcVar6 = (char *)(_UNK_0299e59c + 0x299e4a4);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0299e5a0 + 0x299e4b8));
      func_0x01384978(*(undefined4 *)(_UNK_0299e5a4 + 0x299e4c4));
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x62d,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x90);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      else {
        iVar2 = *(int *)(iVar1 + 0x44);
        iVar5 = extraout_r2;
        if (iVar2 != 0) {
          iVar5 = *(int *)(iVar2 + 0xc);
        }
        if (iVar2 != 0 && iVar5 != 0) {
          iVar3 = *(int *)(param_1 + 0x9c);
          if ((iVar3 < 0) || (iVar5 <= iVar3)) {
            iVar5 = *(int *)(iVar1 + 0x20);
            if (iVar5 == 0) goto LAB_0299e55c;
          }
          else {
            iVar5 = func_0x0364c9b8(iVar2,iVar3,**(undefined4 **)(_UNK_0299e5a8 + 0x299e550));
          }
          iVar1 = func_0x01806d68(iVar5,0);
          if (iVar1 != 0) {
            return *(undefined4 *)(iVar1 + 0x20);
          }
          iVar1 = *(int *)(param_1 + 0x90);
          if (iVar1 == 0) {
            func_0x01384bf0(0);
          }
          return *(undefined4 *)(iVar1 + 0x54);
        }
      }
LAB_0299e55c:
      return *(undefined4 *)(iVar1 + 0x54);
    }
    iVar1 = func_0x0229f13c(0x62d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x62c,0);
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
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4,0,0);
  uVar7 = func_0x0245498c(&uStack_30,0,0);
  return uVar7;
}



// ===== FAT.ActivityOrderLike$$GetRaceRoundToken RVA 0x298e490 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0299e490(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r2;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_0299e59c + 0x299e4a4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0299e5a0 + 0x299e4b8));
    func_0x01384978(*(undefined4 *)(_UNK_0299e5a4 + 0x299e4c4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x62d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x62d,0);
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
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4,0,0);
    uVar7 = func_0x0245498c(&uStack_30,0,0);
    return uVar7;
  }
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x44);
    iVar5 = extraout_r2;
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + 0xc);
    }
    if (iVar2 != 0 && iVar5 != 0) {
      iVar3 = *(int *)(param_1 + 0x9c);
      if ((iVar3 < 0) || (iVar5 <= iVar3)) {
        iVar5 = *(int *)(iVar1 + 0x20);
        if (iVar5 == 0) goto LAB_0299e55c;
      }
      else {
        iVar5 = func_0x0364c9b8(iVar2,iVar3,**(undefined4 **)(_UNK_0299e5a8 + 0x299e550));
      }
      iVar1 = func_0x01806d68(iVar5,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x90);
        if (iVar1 == 0) {
          func_0x01384bf0(0);
        }
        return *(undefined4 *)(iVar1 + 0x54);
      }
      return *(undefined4 *)(iVar1 + 0x20);
    }
  }
LAB_0299e55c:
  return *(undefined4 *)(iVar1 + 0x54);
}



// ===== FAT.ActivityOrderLike$$get_RankRewards RVA 0x298e5ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0299e5ac(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6609,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6609,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0223ff14 + 0x223fe34);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0223ff18 + 0x223fe48),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0223ff1c + 0x223ff04));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xd0);
}



// ===== FAT.ActivityOrderLike$$get_RaceBots RVA 0x298e600 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0299e600(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x660a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x660a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0224001c + 0x223ff3c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02240020 + 0x223ff50),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02240024 + 0x224000c));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0xb8);
}



// ===== FAT.ActivityOrderLike$$get_RoundStartRes RVA 0x298e654 =====

void FUN_0299e654(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x44);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityOrderLike$$get_HelpRes RVA 0x298e668 =====

void FUN_0299e668(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x4c);
  *param_1 = *(undefined4 *)(param_2 + 0x48);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityOrderLike$$get_MainRes RVA 0x298e674 =====

void FUN_0299e674(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x58);
  *param_1 = uVar1;
  return;
}



// ===== FAT.ActivityOrderLike$$get_VisualTip RVA 0x298e688 =====

void FUN_0299e688(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x60);
  *param_1 = *(undefined4 *)(param_2 + 0x5c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityOrderLike$$TryGetRaceRoundData RVA 0x298e69c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0299e69c(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_r3;
  int extraout_r3_00;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_0299e8b8 + 0x299e6bc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0299e8bc + 0x299e6d4));
    func_0x01384978(*(undefined4 *)(_UNK_0299e8c0 + 0x299e6e0));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x631,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x631,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02190dc4(iVar2,param_1,param_2,param_3,param_4,0);
    return uVar3;
  }
  cVar1 = *(char *)(param_1 + 0xb0);
  *param_3 = 0;
  *param_2 = 0;
  *param_4 = 0;
  iVar2 = extraout_r3;
  if (((cVar1 == '\0') || (*(int *)(param_1 + 0xb4) < 1)) ||
     (iVar4 = func_0x01806d68(*(int *)(param_1 + 0xb4),0), iVar2 = extraout_r3_00, iVar4 == 0)) {
    iVar4 = *(int *)(param_1 + 0x90);
    if (iVar4 == 0) {
      return 0;
    }
    iVar5 = *(int *)(iVar4 + 0x44);
    if (iVar5 != 0) {
      iVar2 = *(int *)(iVar5 + 0xc);
    }
    if (iVar5 == 0 || iVar2 == 0) {
      return 0;
    }
    iVar6 = *(int *)(param_1 + 0x9c);
    if ((iVar6 < 0) || (iVar2 <= iVar6)) {
      iVar2 = *(int *)(iVar4 + 0x20);
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = func_0x0364c9b8(iVar5,iVar6,**(undefined4 **)(_UNK_0299e8c8 + 0x299e804));
    }
    iVar2 = func_0x01806d68(iVar2,0);
    if (iVar2 == 0) {
      return 0;
    }
    iVar4 = *(int *)(iVar2 + 0x14);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar4 + 0xc) < 1) {
      uVar3 = 0;
    }
    else {
      iVar4 = *(int *)(iVar2 + 0x14);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0364c9b8(iVar4,0,**(undefined4 **)(_UNK_0299e8cc + 0x299e884));
    }
    *param_3 = *(undefined4 *)(iVar2 + 0x18);
    *param_2 = uVar3;
    uVar3 = *(undefined4 *)(iVar2 + 0x1c);
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar2 + 0xc) < 1) {
      uVar3 = 0;
    }
    else {
      iVar2 = *(int *)(iVar4 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0364c9b8(iVar2,0,**(undefined4 **)(_UNK_0299e8c4 + 0x299e7b4));
    }
    *param_3 = *(undefined4 *)(iVar4 + 0x18);
    *param_2 = uVar3;
    uVar3 = *(undefined4 *)(iVar4 + 0x1c);
  }
  *param_4 = uVar3;
  return 1;
}



// ===== FAT.ActivityOrderLike$$GetRaceRoundLifeTimeSeconds RVA 0x298e8d0 =====

undefined4 FUN_0299e8d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0x630,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0299e69c(param_1,&uStack_14,&uStack_18,&uStack_1c);
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x630,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x0217493c(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityOrderLike$$GetRaceRoundCountdown RVA 0x298e95c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0299e95c(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_0299ea4c + 0x299e974);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0299ea50 + 0x299e988));
    *pcVar3 = '\x01';
  }
  iVar4 = 0;
  iStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0x660b,0);
  if (iVar1 == 0) {
    iVar2 = FUN_0299e69c(param_1,&iStack_14,&uStack_18,&uStack_1c);
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0xa8);
      iVar4 = func_0x03668dfc(**(undefined4 **)(_UNK_0299ea54 + 0x299ea10));
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x01c359e8(iVar4,0);
      iVar4 = (iVar2 + iVar1) - iVar4;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x660b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0217493c(iVar1,param_1,0);
  }
  return iVar4;
}



// ===== FAT.ActivityOrderLike$$GetPreviousScores RVA 0x298ea58 =====

void FUN_0299ea58(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x660c,0);
  if (iVar1 == 0) {
    *param_2 = *(undefined4 *)(param_1 + 0xe0);
    *param_3 = *(undefined4 *)(param_1 + 0xe4);
    *param_4 = *(undefined4 *)(param_1 + 0xe8);
  }
  else {
    iVar1 = func_0x0229f13c(0x660c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021a7d0c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$SetPreviousScores RVA 0x298eae0 =====

void FUN_0299eae0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x660d,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xe0) = param_2;
    *(undefined4 *)(param_1 + 0xe4) = param_3;
    *(undefined4 *)(param_1 + 0xe8) = param_4;
  }
  else {
    iVar1 = func_0x0229f13c(0x660d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$GetRaceBotAvatarIndex RVA 0x298eb5c =====

undefined4 FUN_0299eb5c(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x660e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x660e,0);
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
  if (param_2 == 1) {
    uVar4 = *(undefined4 *)(param_1 + 200);
  }
  else {
    uVar4 = 0xffffffff;
    if (param_2 == 0) {
      return *(undefined4 *)(param_1 + 0xc4);
    }
  }
  return uVar4;
}



// ===== FAT.ActivityOrderLike$$_RandomizeRaceBotAvatars RVA 0x298ebd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0299ebd4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_0299f0b8 + 0x299ebec);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0299f0bc + 0x299ec00));
    func_0x01384978(*(undefined4 *)(_UNK_0299f0c0 + 0x299ec0c));
    func_0x01384978(*(undefined4 *)(_UNK_0299f0c4 + 0x299ec18));
    func_0x01384978(*(undefined4 *)(_UNK_0299f0c8 + 0x299ec24));
    func_0x01384978(*(undefined4 *)(_UNK_0299f0cc + 0x299ec30));
    func_0x01384978(*(undefined4 *)(_UNK_0299f0d0 + 0x299ec3c));
    func_0x01384978(*(undefined4 *)(_UNK_0299f0d4 + 0x299ec48));
    func_0x01384978(*(undefined4 *)(_UNK_0299f0d8 + 0x299ec54));
    func_0x01384978(*(undefined4 *)(_UNK_0299f0dc + 0x299ec60));
    func_0x01384978(*(undefined4 *)(_UNK_0299f0e0 + 0x299ec6c));
    func_0x01384978(*(undefined4 *)(_UNK_0299f0e4 + 0x299ec78));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x660f,0);
  if (iVar1 == 0) {
    puVar2 = *(undefined4 **)(_UNK_0299f0e8 + 0x299ecd4);
    *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
    *(undefined4 *)(param_1 + 200) = 0xffffffff;
    iVar1 = func_0x01384be4(*puVar2);
    func_0x03258f24(iVar1,4,**(undefined4 **)(_UNK_0299f0ec + 0x299ecf4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(uint *)(iVar1 + 0xc);
    piVar8 = *(int **)(_UNK_0299f0f0 + 0x299ed28);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar9 = *piVar8;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (uVar5 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar5 + 1;
      *(undefined4 *)(iVar6 + uVar5 * 4 + 0x10) = 1;
    }
    else {
      func_0x0325970c(iVar1,1,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(uint *)(iVar1 + 0xc);
    iVar9 = *piVar8;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (uVar5 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar5 + 1;
      *(undefined4 *)(iVar6 + uVar5 * 4 + 0x10) = 2;
    }
    else {
      func_0x0325970c(iVar1,2,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(uint *)(iVar1 + 0xc);
    iVar9 = *piVar8;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (uVar5 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar5 + 1;
      *(undefined4 *)(iVar6 + uVar5 * 4 + 0x10) = 3;
    }
    else {
      func_0x0325970c(iVar1,3,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(uint *)(iVar1 + 0xc);
    iVar9 = *piVar8;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (uVar5 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar5 + 1;
      *(undefined4 *)(iVar6 + uVar5 * 4 + 0x10) = 4;
    }
    else {
      func_0x0325970c(iVar1,4,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
    }
    iVar6 = *(int *)(param_1 + 0xb8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar6 + 0xc)) {
      uVar3 = func_0x02450284(0,*(undefined4 *)(iVar1 + 0xc),0);
      uVar3 = func_0x03259410(iVar1,uVar3,**(undefined4 **)(_UNK_0299f0f4 + 0x299eecc));
      puVar2 = *(undefined4 **)(_UNK_0299f0f8 + 0x299eee4);
      *(undefined4 *)(param_1 + 0xc4) = uVar3;
      func_0x0325aeb0(iVar1,uVar3,*puVar2);
    }
    iVar6 = *(int *)(param_1 + 0xb8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (1 < *(int *)(iVar6 + 0xc)) {
      uVar3 = func_0x02450284(0,*(undefined4 *)(iVar1 + 0xc),0);
      uVar3 = func_0x03259410(iVar1,uVar3,**(undefined4 **)(_UNK_0299f0fc + 0x299ef2c));
      *(undefined4 *)(param_1 + 200) = uVar3;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x88);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x01e7ab80(iVar1,0);
    if (iVar6 != 0) {
      iVar6 = *(int *)(param_1 + 0xcc);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar6 + 0xc) = 0;
      iVar9 = *(int *)(param_1 + 0xb8);
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(param_1 + 0xcc);
      uVar7 = *(undefined4 *)(iVar9 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e790b4(iVar1,uVar7,uVar3,0);
      iVar1 = 0;
      puVar2 = *(undefined4 **)(_UNK_0299f100 + 0x299efe8);
      puVar10 = *(undefined4 **)(_UNK_0299f104 + 0x299eff0);
      while( true ) {
        iVar6 = *(int *)(param_1 + 0xb8);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar6 + 0xc) <= iVar1) break;
        iVar6 = *(int *)(param_1 + 0xb8);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x0328eea8(iVar6,iVar1,*puVar2);
        iVar9 = *(int *)(param_1 + 0xcc);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        if (iVar1 < *(int *)(iVar9 + 0xc)) {
          iVar9 = *(int *)(param_1 + 0xcc);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          func_0x04488470(&uStack_40,iVar9,iVar1,*puVar10);
          uStack_28 = uStack_38;
          uStack_30 = uStack_40;
        }
        else {
          uStack_30 = 0;
          uStack_28 = 0;
        }
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar1 = iVar1 + 1;
        *(undefined4 *)(iVar6 + 0x30) = uStack_28;
        *(undefined8 *)(iVar6 + 0x28) = uStack_30;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x660f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$.ctor RVA 0x298f108 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0299f108(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
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
  
  pcVar5 = (char *)(_UNK_0299f3a4 + 0x299f124);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0299f3a8 + 0x299f138));
    func_0x01384978(*(undefined4 *)(_UNK_0299f3ac + 0x299f144));
    func_0x01384978(*(undefined4 *)(_UNK_0299f3b0 + 0x299f150));
    func_0x01384978(*(undefined4 *)(_UNK_0299f3b4 + 0x299f15c));
    func_0x01384978(*(undefined4 *)(_UNK_0299f3b8 + 0x299f168));
    func_0x01384978(*(undefined4 *)(_UNK_0299f3bc + 0x299f174));
    func_0x01384978(*(undefined4 *)(_UNK_0299f3c0 + 0x299f180));
    func_0x01384978(*(undefined4 *)(_UNK_0299f3c4 + 0x299f18c));
    func_0x01384978(*(undefined4 *)(_UNK_0299f3c8 + 0x299f198));
    func_0x01384978(*(undefined4 *)(_UNK_0299f3cc + 0x299f1a4));
    func_0x01384978(*(undefined4 *)(_UNK_0299f3d0 + 0x299f1b0));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_0299f3d4 + 0x299f1cc);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x02b64854(&uStack_30,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x578),0);
  iVar1 = *piVar6;
  *(undefined4 *)(param_1 + 0x44) = uStack_28;
  *(ulonglong *)(param_1 + 0x3c) = CONCAT44(uStack_2c,uStack_30);
  uStack_34 = 0;
  uStack_38 = 0;
  func_0x02b644a0(&uStack_38,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x57c),0);
  uStack_44 = 0;
  *(undefined4 *)(param_1 + 0x48) = uStack_38;
  *(undefined4 *)(param_1 + 0x4c) = uStack_34;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x02b64854(&uStack_48,*(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x574),0);
  iVar1 = *piVar6;
  *(undefined4 *)(param_1 + 0x58) = uStack_40;
  *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_44,uStack_48);
  uStack_4c = 0;
  uStack_50 = 0;
  func_0x02b644a0(&uStack_50,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x584),0);
  *(undefined4 *)(param_1 + 0x5c) = uStack_50;
  *(undefined4 *)(param_1 + 0x60) = uStack_4c;
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_0299f3d8 + 0x299f2a8));
  func_0x03d59324(uVar2,**(undefined4 **)(_UNK_0299f3dc + 0x299f2bc));
  puVar3 = *(undefined4 **)(_UNK_0299f3e0 + 0x299f2d0);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar2 = func_0x01384be4(*puVar3);
  func_0x03d34a50(uVar2,**(undefined4 **)(_UNK_0299f3e4 + 0x299f2e8));
  puVar3 = *(undefined4 **)(_UNK_0299f3e8 + 0x299f300);
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  uVar4 = *puVar3;
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  uVar2 = func_0x01384be4(uVar4);
  func_0x0328e950(uVar2,**(undefined4 **)(_UNK_0299f3ec + 0x299f320));
  puVar3 = *(undefined4 **)(_UNK_0299f3f0 + 0x299f334);
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  uVar4 = *puVar3;
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  uVar2 = func_0x01384be4(uVar4);
  func_0x04487f18(uVar2,**(undefined4 **)(_UNK_0299f3f4 + 0x299f354));
  puVar3 = *(undefined4 **)(_UNK_0299f3f8 + 0x299f368);
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  uVar2 = func_0x01384be4(*puVar3);
  func_0x0328e950(uVar2,**(undefined4 **)(_UNK_0299f3fc + 0x299f380));
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  func_0x02b4dc04(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== FAT.ActivityOrderLike$$FAT.IBoardEntry.BoardEntryAsset RVA 0x298f400 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0299f400(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_0299f574 + 0x299f418);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0299f578 + 0x299f42c));
    func_0x01384978(*(undefined4 *)(_UNK_0299f57c + 0x299f438));
    func_0x01384978(*(undefined4 *)(_UNK_0299f580 + 0x299f444));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x6610,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01cc0100(iVar1,0x8f,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x90);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
      if (*(char *)(iVar1 + 0x2c) == '\0') {
        iVar1 = *(int *)(param_1 + 0x54);
        if (iVar1 == 0) {
          uVar2 = func_0x01384bf0(0);
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          uVar2 = func_0x01384bf0(uVar2);
        }
        iVar1 = *(int *)(iVar1 + 0x14);
        if (iVar1 == 0) {
          func_0x01384bf0(uVar2);
        }
        iVar1 = func_0x03470a60(iVar1,**(undefined4 **)(_UNK_0299f58c + 0x299f554),&uStack_14,
                                **(undefined4 **)(_UNK_0299f588 + 0x299f548));
        uVar2 = uStack_14;
        if (iVar1 == 0) {
          uVar2 = 0;
        }
      }
    }
    else {
      uVar2 = **(undefined4 **)(_UNK_0299f584 + 0x299f4e4);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6610,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02173e78(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.ActivityOrderLike$$ResolveFlyingToken RVA 0x298f590 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0299f590(int param_1,int param_2)

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
  undefined4 uStack_18;
  
  pcVar5 = (char *)(_UNK_0299f75c + 0x299f5ac);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0299f760 + 0x299f5c0));
    func_0x01384978(*(undefined4 *)(_UNK_0299f764 + 0x299f5cc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4fe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4fe,0);
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
  iVar1 = *(int *)(param_1 + 0x78);
  if (param_2 <= iVar1) {
    iVar1 = iVar1 - param_2;
    *(int *)(param_1 + 0x78) = iVar1;
  }
  if (((iVar1 < 1) && (iVar1 = FUN_0299e294(param_1), iVar1 != 0)) &&
     (iVar1 = func_0x0299f76c(param_1), iVar1 != 0)) {
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_0299f768 + 0x299f664));
    iVar3 = *(int *)(param_1 + 0x50);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(iVar3 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eeaa54(iVar1,uVar4,0,0);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 0xd0) == 0) || (*(int *)(*(int *)(param_1 + 0xd0) + 0xc) < 1)) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xfc);
        uVar4 = *(undefined4 *)(param_1 + 0x58);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 0;
      }
      else {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar4 = *(undefined4 *)(param_1 + 0x58);
        iVar1 = *(int *)(iVar1 + 0xfc);
        uVar2 = *(undefined4 *)(param_1 + 0xd0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
      }
      uStack_18 = 0;
      func_0x01e7437c(iVar1,uVar4,0,uVar2);
    }
  }
  return;
}



// ===== FAT.ActivityOrderLike$$CanPopupOnMainBoard RVA 0x298f76c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0299f76c(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
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
  int iStack_14;
  
  pcVar5 = (char *)(_UNK_0299f8f0 + 0x299f780);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0299f8f4 + 0x299f794));
    func_0x01384978(*(undefined4 *)(_UNK_0299f8f8 + 0x299f7a0));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x502,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x502,0);
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
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar4,uVar7,&uStack_30,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01dbb000(iVar2,0);
  iVar4 = func_0x01c24918(0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0xe4);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar4 + 0x14);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x01d64a88(iVar4,0);
  if (((iVar2 != 0) && (iVar4 == 0)) && (iVar2 = func_0x02139cf4(iVar2,0), iVar2 != 0)) {
    iVar2 = func_0x034aaa34(**(undefined4 **)(_UNK_0299f8fc + 0x299f898));
    piVar6 = *(int **)(_UNK_0299f900 + 0x299f8ac);
    iVar4 = *piVar6;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar6;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x3c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_01eea3ac + 0x1eea2d4);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01eea3b0 + 0x1eea2e8),uVar7,0);
      *pcVar5 = '\x01';
    }
    iStack_14 = 0;
    iVar4 = func_0x0229f06c(0x506,0);
    if (iVar4 == 0) {
      iVar2 = *(int *)(iVar2 + 0x80);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x03e220bc(iVar2,uVar7,&iStack_14,**(undefined4 **)(_UNK_01eea3b4 + 0x1eea364));
      iVar2 = iStack_14;
      if (iVar4 == 0) {
        uVar1 = 0;
      }
      else {
        if (iStack_14 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01ee3008(iVar2);
        uVar1 = (uint)(iVar2 != 0);
      }
    }
    else {
      iVar4 = func_0x0229f13c(0x506,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar1 = func_0x021734d8(iVar4,iVar2,uVar7,0);
    }
    return uVar1;
  }
  return 0;
}



// ===== FAT.ActivityOrderLike$$ClearRankRewards RVA 0x298f904 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0299f904(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_0299f9c0 + 0x299f918);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0299f9c4 + 0x299f92c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6611,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6611,0);
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
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xd0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar5 < 1) {
    return;
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x03409d30(*(undefined4 *)(iRam0484e708 + 0x484e654),0,iVar5,0);
    uVar4 = func_0x03409cd0();
    uVar7 = func_0x03409d30(*(undefined4 *)(iRam0484e70c + 0x484e668));
    func_0x04785e24(uVar4,uVar7,0);
  }
  else {
    if (iVar5 < 0) {
      func_0x03409d30(*(undefined4 *)(iRam0484e710 + 0x484e688),0,iVar5,0);
      uVar4 = func_0x03409cd0();
      uVar7 = *(undefined4 *)(iRam0484e714 + 0x484e69c);
    }
    else {
      iVar2 = func_0x0340a884(iVar1,0);
      if (iVar2 < 1) {
        iVar3 = func_0x048424dc(iVar1);
        if (-iVar2 <= iVar3 - iVar5) {
          (*(code *)&UNK_013c1aa4)(iVar1,-iVar2,iVar5);
          return;
        }
        func_0x03409d30(*(undefined4 *)(_UNK_0484e724 + 0x484e6c8));
        uVar4 = func_0x03409cd0();
        uVar7 = *(undefined4 *)(_UNK_0484e728 + 0x484e6dc);
      }
      else {
        func_0x03409d30(*(undefined4 *)(_UNK_0484e71c + 0x484e6a8));
        uVar4 = func_0x03409cd0();
        uVar7 = *(undefined4 *)(_UNK_0484e720 + 0x484e6bc);
      }
    }
    uVar7 = func_0x03409d30(uVar7);
    func_0x0481f540(uVar4,uVar7,0);
  }
  uVar7 = func_0x03409d30(*(undefined4 *)(_UNK_0484e718 + 0x484e6f8));
  func_0x03409d8c(uVar4,uVar7);
  func_0x03409d9c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.ActivityOrderLike$$TryClaimReward RVA 0x298f9c8 =====

/* WARNING: Removing unreachable block (ram,0x029a01d8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0299f9c8(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 uVar16;
  int *piVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  longlong lVar20;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int aiStack_48 [2];
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  pcVar10 = (char *)(_UNK_029a02c8 + 0x299f9ec);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a02cc + 0x299fa00));
    func_0x01384978(*(undefined4 *)(_UNK_029a02d0 + 0x299fa0c));
    func_0x01384978(*(undefined4 *)(_UNK_029a02d4 + 0x299fa18));
    func_0x01384978(*(undefined4 *)(_UNK_029a02d8 + 0x299fa24));
    func_0x01384978(*(undefined4 *)(_UNK_029a02dc + 0x299fa30));
    func_0x01384978(*(undefined4 *)(_UNK_029a02e0 + 0x299fa3c));
    func_0x01384978(*(undefined4 *)(_UNK_029a02e4 + 0x299fa48));
    func_0x01384978(*(undefined4 *)(_UNK_029a02e8 + 0x299fa54));
    func_0x01384978(*(undefined4 *)(_UNK_029a02ec + 0x299fa60));
    func_0x01384978(*(undefined4 *)(_UNK_029a02f0 + 0x299fa6c));
    func_0x01384978(*(undefined4 *)(_UNK_029a02f4 + 0x299fa78));
    func_0x01384978(*(undefined4 *)(_UNK_029a02f8 + 0x299fa84));
    func_0x01384978(*(undefined4 *)(_UNK_029a02fc + 0x299fa90));
    func_0x01384978(*(undefined4 *)(_UNK_029a0300 + 0x299fa9c));
    func_0x01384978(*(undefined4 *)(_UNK_029a0304 + 0x299faa8));
    func_0x01384978(*(undefined4 *)(_UNK_029a0308 + 0x299fab4));
    func_0x01384978(*(undefined4 *)(_UNK_029a030c + 0x299fac0));
    *pcVar10 = '\x01';
  }
  uVar13 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  aiStack_48[1] = 0;
  aiStack_48[0] = 0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  iVar2 = func_0x0229f06c(0x6612,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_029a0310 + 0x299fb44));
    func_0x029a8ea4(iVar2,0);
    iVar3 = FUN_0299e294(param_1);
    if (iVar3 != 0) {
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(param_1 + 0x94);
      *(undefined4 *)(iVar2 + 8) = 0x3e4ccccd;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x1c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      puVar14 = *(undefined4 **)(_UNK_029a0314 + 0x299fbb0);
      uVar4 = func_0x0364c9b8(iVar3,0,*puVar14);
      iVar3 = *(int *)(param_1 + 0x94);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x1c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0364c9b8(iVar3,1,*puVar14);
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x4c);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar13 = 0;
      iVar3 = func_0x01dbb000(iVar3,0);
      if (iVar3 != 0) {
        uVar13 = 0;
        iVar3 = func_0x02139cf4(iVar3,0);
        if (iVar3 != 0) {
          iVar6 = func_0x020d80e4(0x14,0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar8 = *(int *)(**(int **)(_UNK_029a0318 + 0x299fc6c) + 0x74);
          *(int *)(iVar6 + 0x1c) = param_1;
          if (iVar8 == 0) {
            func_0x01384ab4();
          }
          func_0x024500c4(&uStack_68,0);
          iVar11 = 0;
          uStack_38 = uStack_60;
          iVar8 = 0;
          piVar17 = *(int **)(_UNK_029a031c + 0x299fcb8);
          iStack_6c = 0;
          uVar13 = extraout_r1;
          while( true ) {
            iVar15 = *(int *)(param_1 + 0x94);
            *(int *)(iVar2 + 0xc) = iVar11;
            if (iVar15 == 0) {
              func_0x01384bf0(iVar8,uVar13);
            }
            if (*(int *)(iVar15 + 0x20) <= iVar11) break;
            iVar8 = func_0x01c24918(0);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            iVar8 = *(int *)(iVar8 + 0x58);
            if (iVar8 == 0) {
              func_0x01384bf0();
            }
            iVar8 = func_0x01dc50c4(iVar8,uVar4,uVar5,0,0);
            if (iVar8 < 1) {
              if (*(int *)(**(int **)(_UNK_029a0320 + 0x299fe14) + 0x74) == 0) {
                func_0x01384ab4();
              }
              lVar20 = func_0x028c2944(**(undefined4 **)(_UNK_029a0324 + 0x299fe30),0);
            }
            else {
              if (*(int *)(*piVar17 + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x01e9e5d8(&uStack_40,iVar8,0);
              iVar15 = *(int *)(param_1 + 0x94);
              iVar11 = *(int *)(iVar2 + 0xc);
              if (iVar15 == 0) {
                func_0x01384bf0();
              }
              if (iVar11 < *(int *)(iVar15 + 0x20) + -1) {
                if (*(int *)(*piVar17 + 0x74) == 0) {
                  func_0x01384ab4();
                }
                iVar11 = **(int **)(_UNK_029a0328 + 0x299fd8c);
                if (*(char *)(_UNK_029a032c + 0x299fd98) == '\0') {
                  func_0x01384978(piVar17);
                  *(undefined1 *)(_UNK_029a0330 + 0x299fdb8) = 1;
                }
                if (*(char *)(_UNK_029a0334 + 0x299fdc4) == '\0') {
                  func_0x01384978(*(undefined4 *)(_UNK_029a0338 + 0x299fdd8));
                  *(undefined1 *)(_UNK_029a033c + 0x299fde8) = 1;
                }
                if (iVar11 == 0) {
                  uVar12 = 0;
                  uVar13 = 0;
                }
                else {
                  uVar13 = func_0x0466f590(iVar11,0);
                  uVar12 = *(undefined4 *)(iVar11 + 8);
                }
                if (*(int *)(*piVar17 + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x019a7f14(&uStack_40,uVar13,uVar12,0);
              }
              iVar11 = func_0x01c24918(0);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar11 = *(int *)(iVar11 + 0x58);
              if (iVar11 == 0) {
                func_0x01384bf0();
              }
              iVar11 = func_0x01dc688c(iVar11,iVar8,aiStack_48 + 1,aiStack_48,0);
              iVar15 = *(int *)(iVar2 + 0x10);
              if (iVar11 != 0) {
                iStack_6c = iStack_6c + aiStack_48[0];
              }
              if (iVar15 == 0) {
                iVar15 = func_0x01384be4(**(undefined4 **)(_UNK_029a0340 + 0x299fed8));
                func_0x041c33bc(iVar15,iVar2,**(undefined4 **)(_UNK_029a0344 + 0x299feec),0);
                *(int *)(iVar2 + 0x10) = iVar15;
              }
              if (*(int *)(**(int **)(_UNK_029a0348 + 0x299ff0c) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x0245019c(iVar15,0);
              if (*(int *)(**(int **)(_UNK_029a034c + 0x299ff34) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x0205048c(0x24,&uStack_58,0);
              uVar1 = uStack_50;
              uVar12 = uStack_54;
              uVar13 = uStack_58;
              uVar16 = *(undefined4 *)(iVar2 + 0xc);
              fVar19 = *(float *)(iVar2 + 8);
              if (*(int *)(**(int **)(_UNK_029a0350 + 0x299ff68) + 0x74) == 0) {
                func_0x01384ab4();
              }
              fVar18 = (float)VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x16) & 3);
              func_0x01dd7838(iVar8,uVar13,uVar12,uVar1,fVar19 * fVar18,0);
              lVar20 = func_0x020e2888(iVar3,iVar8,0x10,iVar6,0);
              piVar17 = *(int **)(_UNK_029a0354 + 0x299ffd0);
              if ((int)lVar20 == 0) {
                if (*(int *)(**(int **)(_UNK_029a0358 + 0x299ffdc) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x01dd7dfc(0);
                iVar11 = func_0x01c24918(0);
                if (iVar11 == 0) {
                  func_0x01384bf0();
                }
                iVar15 = *(int *)(iVar11 + 0x40);
                iVar11 = **(int **)(_UNK_029a035c + 0x29a0018);
                if (*(int *)(iVar11 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar11 = **(int **)(_UNK_029a0360 + 0x29a0038);
                }
                uVar13 = *(undefined4 *)(*(int *)(iVar11 + 0x5c) + 0x244);
                if (iVar15 == 0) {
                  func_0x01384bf0();
                }
                uVar7 = func_0x01cdcbac(iVar15,iVar8,1,uVar13,0,0,0,0x180,
                                        **(undefined4 **)(_UNK_029a0364 + 0x29a0058),
                                        **(undefined4 **)(_UNK_029a0368 + 0x29a0064),0);
                lVar20 = (ulonglong)uVar7 << 0x20;
                if (param_2 != (int *)0x0) {
                  fVar19 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0xc),
                                                      (byte)(in_fpscr >> 0x16) & 3);
                  uStack_64 = 0;
                  uStack_68 = 0;
                  func_0x0390c1c8(&uStack_68,uVar7,*(float *)(iVar2 + 8) * fVar19,
                                  **(undefined4 **)(_UNK_029a036c + 0x29a00c0));
                  uVar12 = uStack_64;
                  uVar13 = uStack_68;
                  iVar8 = *param_2;
                  uVar7 = (uint)*(ushort *)(iVar8 + 0xb6);
                  if (uVar7 != 0) {
                    piVar9 = (int *)(*(int *)(iVar8 + 0x58) + 4);
                    do {
                      if (piVar9[-1] == **(int **)(_UNK_029a0370 + 0x29a00f4)) {
                        puVar14 = (undefined4 *)(iVar8 + *piVar9 * 8 + 0xd0);
                        goto LAB_029a013c;
                      }
                      uVar7 = uVar7 - 1;
                      piVar9 = piVar9 + 2;
                    } while (uVar7 != 0);
                  }
                  puVar14 = (undefined4 *)
                            func_0x014002dc(param_2,**(int **)(_UNK_029a0370 + 0x29a00f4),2);
LAB_029a013c:
                  lVar20 = (*(code *)*puVar14)(param_2,uVar13,uVar12,puVar14[1]);
                }
              }
            }
            uVar13 = (undefined4)((ulonglong)lVar20 >> 0x20);
            if (iVar2 == 0) {
              func_0x01384bf0((int)lVar20,uVar13);
              uVar13 = extraout_r1_00;
            }
            iVar8 = *(int *)(iVar2 + 0xc);
            iVar11 = iVar8 + 1;
          }
          if (*(int *)(*piVar17 + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar13 = func_0x0148d6d8(&uStack_40,0);
          func_0x029a037c(param_1,uVar13,iStack_6c);
          func_0x029a041c(param_1);
          uVar13 = 1;
          if (*(int *)(*piVar17 + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x019a8084(&uStack_40,0);
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x6612,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar13 = func_0x021734d8(iVar2,param_1,param_2,0);
  }
  return uVar13;
}



// ===== FAT.ActivityOrderLike$$TrackReward RVA 0x299037c =====

void FUN_029a037c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0x6617,0);
  if (iVar1 == 0) {
    iVar1 = func_0x029a3260(param_1);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x9c);
    }
    func_0x019b7290(param_1,*(undefined4 *)(param_1 + 100),param_3,param_2,uVar2,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x6617,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$MoveToNextRound RVA 0x299041c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a041c(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar4;
  uint extraout_r2;
  uint uVar5;
  undefined4 uVar6;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar8 = (char *)(_UNK_029a0608 + 0x29a0434);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a060c + 0x29a0448));
    func_0x01384978(*(undefined4 *)(_UNK_029a0610 + 0x29a0454));
    func_0x01384978(*(undefined4 *)(_UNK_029a0614 + 0x29a0460));
    func_0x01384978(*(undefined4 *)(_UNK_029a0618 + 0x29a046c));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6618,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar2,**(undefined4 **)(_UNK_029a061c + 0x29a04f0));
    func_0x029a0628(param_1);
    if (*(int *)(**(int **)(_UNK_029a0620 + 0x29a050c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_029a0624 + 0x29a0528));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3fd8(iVar2,0);
    bVar1 = *(byte *)(param_1 + 0xb0);
    iVar2 = *(int *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xb0) = 0;
    uVar9 = extraout_r1;
    if (iVar2 == 0) {
      func_0x01384bf0();
      uVar9 = extraout_r1_00;
    }
    iVar2 = *(int *)(iVar2 + 0x44);
    if (iVar2 == 0) {
      func_0x01384bf0();
      uVar9 = extraout_r1_01;
    }
    if (0 < *(int *)(iVar2 + 0xc)) {
      uVar3 = func_0x029a0b20(param_1,uVar9,*(undefined4 *)(param_1 + 0xa8),
                              *(undefined4 *)(param_1 + 0xac));
      uVar5 = extraout_r2;
      if (-1 < (int)uVar3) {
        uVar5 = *(uint *)(param_1 + 0x98);
      }
      if ((-1 >= (int)uVar3 || (int)uVar5 < 0) || (uVar4 = 0, uVar3 != uVar5)) {
        uVar4 = ~uVar3 >> 0x1f;
      }
      if ((uVar4 & bVar1) != 0) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
        *(undefined4 *)(param_1 + 0xac) = 0;
        return;
      }
      func_0x029a0ca8(param_1);
      if (*(char *)(param_1 + 0xd4) != '\0') {
        func_0x029a116c(param_1);
      }
    }
    iVar7 = 0;
    iVar2 = func_0x0229f06c(0x661d,0);
    if (iVar2 == 0) {
      iVar2 = func_0x029a3260(param_1);
      uVar9 = *(undefined4 *)(param_1 + 100);
      if (iVar2 != 0) {
        iVar7 = *(int *)(param_1 + 0x9c) + 1;
      }
      pcVar8 = (char *)(_UNK_019b70ec + 0x19b6fe8);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_019b70f0 + 0x19b6ffc),uVar9,iVar7,0);
        func_0x01384978(*(undefined4 *)(_UNK_019b70f4 + 0x19b7008));
        *pcVar8 = '\x01';
      }
      iVar2 = func_0x0229f06c(0x9e1,0);
      if (iVar2 == 0) {
        if (*(int *)(**(int **)(_UNK_019b70f8 + 0x19b706c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x02f74dec(**(undefined4 **)(_UNK_019b70fc + 0x19b7088));
        if (param_1 == 0) {
          func_0x01384bf0();
        }
        func_0x02b489c0(&uStack_2c,param_1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar2 + 0x4c) = uStack_28;
        *(undefined4 *)(iVar2 + 0x50) = uStack_24;
        *(undefined4 *)(iVar2 + 0x54) = uVar9;
        *(undefined4 *)(iVar2 + 0x48) = uStack_2c;
        *(int *)(iVar2 + 0x58) = iVar7;
        func_0x019930d8(iVar2,0,0);
      }
      else {
        iVar2 = func_0x0229f13c(0x9e1,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_30 = 0;
        func_0x02179a68(iVar2,param_1,uVar9,iVar7);
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x661d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x6618,0);
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
  uVar6 = 2;
  if (iVar2 == 0) {
    uVar6 = 1;
  }
  func_0x0245495c(iVar7,uVar9,&uStack_30,uVar6,0,0);
  return;
}



// ===== FAT.ActivityOrderLike$$RefreshRoundConf RVA 0x2990628 =====

/* WARNING: Removing unreachable block (ram,0x029a09f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a0628(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_029a0acc + 0x29a0640);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a0ad0 + 0x29a0654));
    func_0x01384978(*(undefined4 *)(_UNK_029a0ad4 + 0x29a0660));
    func_0x01384978(*(undefined4 *)(_UNK_029a0ad8 + 0x29a066c));
    func_0x01384978(*(undefined4 *)(_UNK_029a0adc + 0x29a0678));
    func_0x01384978(*(undefined4 *)(_UNK_029a0ae0 + 0x29a0684));
    func_0x01384978(*(undefined4 *)(_UNK_029a0ae4 + 0x29a0690));
    func_0x01384978(*(undefined4 *)(_UNK_029a0ae8 + 0x29a069c));
    func_0x01384978(*(undefined4 *)(_UNK_029a0aec + 0x29a06a8));
    func_0x01384978(*(undefined4 *)(_UNK_029a0af0 + 0x29a06b4));
    func_0x01384978(*(undefined4 *)(_UNK_029a0af4 + 0x29a06c0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6619,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6619,0);
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
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar5,0,0);
    return;
  }
  iVar8 = *(int *)(param_1 + 0x90);
  iVar1 = *(int *)(param_1 + 100);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x3c);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar9 = *(int *)(param_1 + 0x90);
  iVar8 = *(int *)(iVar8 + 0xc);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  if (iVar1 < iVar8) {
    iVar1 = *(int *)(iVar9 + 0x3c);
    uVar10 = *(undefined4 *)(param_1 + 100);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar10 = func_0x0364c9b8(iVar1,uVar10,**(undefined4 **)(_UNK_029a0af8 + 0x29a0774));
  }
  else {
    uVar10 = *(undefined4 *)(iVar9 + 0x1c);
  }
  uVar10 = func_0x01805a78(uVar10,0);
  iVar1 = *(int *)(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x94) = uVar10;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d3570c(iVar1,**(undefined4 **)(_UNK_029a0afc + 0x29a07ac));
  iVar1 = *(int *)(param_1 + 0x94);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_029a0b00 + 0x29a07e0));
  piVar11 = *(int **)(_UNK_029a0b04 + 0x29a0800);
  puVar12 = *(undefined4 **)(_UNK_029a0b08 + 0x29a0808);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_029a0860;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_029a0860:
    iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar1 == 0) break;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_029a0b0c + 0x29a0894)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_029a08dc;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_029a0b0c + 0x29a0894),0);
LAB_029a08dc:
    uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (*(int *)(**(int **)(_UNK_029a0b10 + 0x29a08fc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02566088(&uStack_30,uVar10,0);
    uVar5 = uStack_2c;
    uVar10 = uStack_30;
    iVar1 = *(int *)(param_1 + 0x8c);
    uStack_2c = 0;
    uStack_30 = 0;
    func_0x038fd264(&uStack_30,uVar5,uStack_28,**(undefined4 **)(_UNK_029a0b14 + 0x29a0938));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = *puVar12;
    func_0x03d354b0(iVar1,uVar10,uStack_30,uStack_2c);
  } while( true );
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_029a0b18 + 0x29a0990)) {
          puVar12 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
          goto LAB_029a09d8;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar4 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_029a0b18 + 0x29a0990),0);
LAB_029a09d8:
    (*(code *)*puVar12)(piVar2,puVar12[1]);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$_FindRaceWindowIndexAtTS RVA 0x2990b20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_029a0b20(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  
  pcVar5 = (char *)(_UNK_029a0c98 + 0x29a0b3c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a0c9c + 0x29a0b50));
    func_0x01384978(*(undefined4 *)(_UNK_029a0ca0 + 0x29a0b5c));
    *pcVar5 = '\x01';
  }
  uVar12 = func_0x0229f06c(0x661a,0);
  if ((int)uVar12 == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    uVar12 = CONCAT44((int)((ulonglong)uVar12 >> 0x20),iVar1);
    iVar2 = -1;
    if (iVar1 != 0) {
      iVar8 = *(int *)(iVar1 + 0x14);
      iVar1 = *(int *)(iVar1 + 0x24);
      if (iVar8 == 0) {
        uVar12 = func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar8 + 0xc);
      if (iVar1 == 0) {
        uVar12 = func_0x01384bf0();
      }
      iVar7 = *(int *)(iVar1 + 0xc);
      if (iVar6 < *(int *)(iVar1 + 0xc)) {
        iVar7 = iVar6;
      }
      if (0 < iVar7) {
        iVar2 = 0;
        puVar9 = *(undefined4 **)(_UNK_029a0ca4 + 0x29a0c0c);
        do {
          uVar10 = *(uint *)(param_1 + 0x28);
          iVar6 = *(int *)(param_1 + 0x2c);
          if (iVar8 == 0) {
            func_0x01384bf0((int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
          }
          uVar3 = func_0x0364c9b8(iVar8,iVar2,*puVar9);
          uVar11 = uVar10 + uVar3;
          iVar6 = iVar6 + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar10,uVar3);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar10 = func_0x0364c9b8(iVar1,iVar2,*puVar9);
          iVar4 = param_4 - (iVar6 + (uint)(param_3 < uVar11));
          if (iVar4 < 0 ==
              (SBORROW4(param_4,iVar6) != SBORROW4(param_4 - iVar6,(uint)(param_3 < uVar11)))) {
            uVar3 = uVar11 + uVar10;
            iVar6 = iVar6 + ((int)uVar10 >> 0x1f) + (uint)CARRY4(uVar11,uVar10);
            iVar4 = param_3 - uVar3;
            uVar10 = param_4 - (iVar6 + (uint)(param_3 < uVar3));
            if ((int)uVar10 < 0 !=
                (SBORROW4(param_4,iVar6) != SBORROW4(param_4 - iVar6,(uint)(param_3 < uVar3)))) {
              return iVar2;
            }
          }
          uVar12 = CONCAT44(iVar4,uVar10);
          iVar2 = iVar2 + 1;
        } while (iVar7 != iVar2);
        iVar2 = -1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x661a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x021911e0(iVar1,param_1,param_3,param_4,0);
  }
  return iVar2;
}



// ===== FAT.ActivityOrderLike$$UpdateRaceWindow RVA 0x2990ca8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a0ca8(int param_1)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  int iStack_48;
  undefined4 uStack_44;
  uint *puStack_40;
  int iStack_3c;
  int iStack_38;
  uint *puStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_029a1124 + 0x29a0cc0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a1128 + 0x29a0cd4));
    func_0x01384978(*(undefined4 *)(_UNK_029a112c + 0x29a0ce0));
    func_0x01384978(*(undefined4 *)(_UNK_029a1130 + 0x29a0cec));
    func_0x01384978(*(undefined4 *)(_UNK_029a1134 + 0x29a0cf8));
    func_0x01384978(*(undefined4 *)(_UNK_029a1138 + 0x29a0d04));
    func_0x01384978(*(undefined4 *)(_UNK_029a113c + 0x29a0d10));
    func_0x01384978(*(undefined4 *)(_UNK_029a1140 + 0x29a0d1c));
    func_0x01384978(*(undefined4 *)(_UNK_029a1144 + 0x29a0d28));
    func_0x01384978(*(undefined4 *)(_UNK_029a1148 + 0x29a0d34));
    func_0x01384978(*(undefined4 *)(_UNK_029a114c + 0x29a0d40));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x661b,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x661b,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    iStack_2c = uStack_44;
    uStack_28 = puStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar9 = *(int *)(iVar3 + 8);
    uVar10 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&iStack_30,uVar6,0,0);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x90);
  if (iVar3 != 0) {
    iVar11 = *(int *)(iVar3 + 0x14);
    iVar9 = *(int *)(iVar3 + 0x24);
    uVar16 = func_0x01c34eb8(0);
    iVar3 = (int)((ulonglong)uVar16 >> 0x20);
    uVar4 = (uint)uVar16;
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar12 = *(int *)(iVar11 + 0xc);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    puStack_40 = (uint *)(param_1 + 0xd8);
    iStack_30 = *(int *)(iVar9 + 0xc);
    if (iVar12 < *(int *)(iVar9 + 0xc)) {
      iStack_30 = iVar12;
    }
    iStack_3c = param_1;
    iStack_2c = iVar9;
    if (0 < iStack_30) {
      iVar9 = 0;
      puStack_34 = (uint *)(param_1 + 0x28);
      puVar8 = *(undefined4 **)(_UNK_029a1150 + 0x29a0e14);
      iStack_38 = iVar11;
      do {
        iVar11 = iStack_38;
        uVar14 = *puStack_34;
        uVar13 = puStack_34[1];
        if (iStack_38 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x0364c9b8(iVar11,iVar9,*puVar8);
        iVar11 = iStack_2c;
        uVar15 = uVar14 + uVar5;
        iVar12 = uVar13 + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar14,uVar5);
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x0364c9b8(iVar11,iVar9,*puVar8);
        iVar11 = iStack_3c;
        puVar2 = puStack_40;
        uVar14 = uVar15 + uVar13;
        uVar13 = iVar12 + ((int)uVar13 >> 0x1f) + (uint)CARRY4(uVar15,uVar13);
        if (((int)(iVar3 - (iVar12 + (uint)(uVar4 < uVar15))) < 0 ==
             (SBORROW4(iVar3,iVar12) != SBORROW4(iVar3 - iVar12,(uint)(uVar4 < uVar15)))) &&
           ((int)(iVar3 - (uVar13 + (uVar4 < uVar14))) < 0 !=
            (SBORROW4(iVar3,uVar13) != SBORROW4(iVar3 - uVar13,(uint)(uVar4 < uVar14))))) {
          iVar3 = *(int *)(iStack_3c + 0x90);
          *(undefined1 *)(iStack_3c + 0xd4) = 1;
          if (*(int *)(iStack_3c + 0x98) < iVar9) {
            iVar12 = 0;
            *(undefined4 *)(iStack_3c + 0x9c) = 0;
          }
          else {
            iVar12 = *(int *)(iStack_3c + 0x9c);
          }
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0x44);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar3 + 0xc) <= iVar12) {
            iVar3 = *(int *)(iVar11 + 0x90);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            if (*(int *)(iVar3 + 0x20) == 0) {
              *(undefined1 *)(iVar11 + 0xd4) = 0;
            }
          }
          *(int *)(iVar11 + 0x98) = iVar9;
          *puVar2 = uVar14;
          puVar2[1] = uVar13;
          return;
        }
        iVar9 = iVar9 + 1;
      } while (iStack_30 != iVar9);
    }
    iVar3 = iStack_3c;
    *puStack_40 = 0;
    puStack_40[1] = 0;
    *(undefined4 *)(iStack_3c + 0x98) = 0xffffffff;
    cVar1 = *(char *)(iStack_3c + 0xd4);
    *(undefined1 *)(iStack_3c + 0xa0) = 1;
    *(undefined1 *)(iStack_3c + 0xd4) = 0;
    if (cVar1 != '\0') {
      iVar9 = *(int *)(iStack_3c + 0xb8);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if ((0 < *(int *)(iVar9 + 0xc)) && (iVar9 = FUN_0299e3e4(iVar3), iVar9 == 0)) {
        iVar9 = func_0x034aaa34(**(undefined4 **)(_UNK_029a1154 + 0x29a0f18));
        iVar11 = *(int *)(iVar3 + 0x50);
        if (iVar11 == 0) {
          func_0x01384bf0();
        }
        uVar10 = *(undefined4 *)(iVar11 + 0xc);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        iVar9 = func_0x01eeaa54(iVar9,uVar10,0,0);
        if (iVar9 == 0) {
          iVar9 = func_0x01c24918(0);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          uStack_28 = 0xffffffff;
          uVar6 = *(undefined4 *)(iVar3 + 0x58);
          iVar9 = *(int *)(iVar9 + 0xfc);
          uVar10 = func_0x01384abc(**(undefined4 **)(_UNK_029a1168 + 0x29a109c),&uStack_28);
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          iStack_48 = 0;
          func_0x01e7437c(iVar9,uVar6,0,uVar10);
        }
        else {
          if (*(int *)(**(int **)(_UNK_029a1158 + 0x29a0f68) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar9 = func_0x0300d558(**(undefined4 **)(_UNK_029a115c + 0x29a0f84));
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          func_0x0349da44(iVar9,0,**(undefined4 **)(_UNK_029a1160 + 0x29a0fa8));
          iVar9 = func_0x0300d558(**(undefined4 **)(_UNK_029a1164 + 0x29a0fbc));
          if (iVar9 == 0) {
            func_0x01384bf0();
          }
          func_0x028c3fd8(iVar9,0);
        }
      }
    }
    iVar3 = *(int *)(iVar3 + 0xb8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar9 = *(int *)(iVar3 + 0xc);
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    if (0 < iVar9) {
      func_0x0484e5ec(*(undefined4 *)(iVar3 + 8),0,iVar9,0);
    }
  }
  return;
}



// ===== FAT.ActivityOrderLike$$TryStartRaceRound RVA 0x299116c =====

/* WARNING: Removing unreachable block (ram,0x029a17f0) */
/* WARNING: Removing unreachable block (ram,0x029a17fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a116c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *apiStack_3c [6];
  
  pcVar8 = (char *)(_UNK_029a190c + 0x29a118c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a1910 + 0x29a11a0));
    func_0x01384978(*(undefined4 *)(_UNK_029a1914 + 0x29a11ac));
    func_0x01384978(*(undefined4 *)(_UNK_029a1918 + 0x29a11b8));
    func_0x01384978(*(undefined4 *)(_UNK_029a191c + 0x29a11c4));
    func_0x01384978(*(undefined4 *)(_UNK_029a1920 + 0x29a11d0));
    func_0x01384978(*(undefined4 *)(_UNK_029a1924 + 0x29a11dc));
    func_0x01384978(*(undefined4 *)(_UNK_029a1928 + 0x29a11e8));
    func_0x01384978(*(undefined4 *)(_UNK_029a192c + 0x29a11f4));
    func_0x01384978(*(undefined4 *)(_UNK_029a1930 + 0x29a1200));
    func_0x01384978(*(undefined4 *)(_UNK_029a1934 + 0x29a120c));
    func_0x01384978(*(undefined4 *)(_UNK_029a1938 + 0x29a1218));
    func_0x01384978(*(undefined4 *)(_UNK_029a193c + 0x29a1224));
    func_0x01384978(*(undefined4 *)(_UNK_029a1940 + 0x29a1230));
    func_0x01384978(*(undefined4 *)(_UNK_029a1944 + 0x29a123c));
    *pcVar8 = '\x01';
  }
  apiStack_3c[0] = (int *)0x0;
  uStack_40 = 0;
  uStack_44 = 0;
  iVar1 = func_0x0229f06c(0x661c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x661c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
    return;
  }
  uVar2 = FUN_0299e8d0(param_1);
  if ((int)uVar2 < 1) {
    return;
  }
  uVar17 = func_0x01c34eb8(0);
  if ((int)(*(int *)(param_1 + 0xdc) -
           ((int)((ulonglong)uVar17 >> 0x20) + (uint)(*(uint *)(param_1 + 0xd8) < (uint)uVar17))) <
      (int)(uint)(*(uint *)(param_1 + 0xd8) - (uint)uVar17 < uVar2)) {
    iVar1 = *(int *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined1 *)(param_1 + 0xa0) = 1;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar6 < 1) {
      return;
    }
    func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar6,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = uVar17;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar6) {
    func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar6,0);
  }
  iVar1 = FUN_0299e69c(param_1,&uStack_40,&uStack_44,apiStack_3c);
  piVar10 = apiStack_3c[0];
  if (iVar1 != 0) {
    if (apiStack_3c[0] == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar10;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_029a1948 + 0x29a13b8)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_029a1404;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_029a1948 + 0x29a13b8),0);
LAB_029a1404:
    iVar1 = (*(code *)*puVar3)(piVar10,puVar3[1]);
    iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_029a194c + 0x29a1424));
    func_0x03258f24(iVar6,iVar1 + 1,**(undefined4 **)(_UNK_029a1950 + 0x29a143c));
    iVar1 = 0;
    puVar3 = *(undefined4 **)(_UNK_029a1954 + 0x29a1454);
    piVar10 = *(int **)(_UNK_029a1958 + 0x29a145c);
    do {
      if (iVar6 == 0) {
        func_0x01384bf0();
        iVar4 = func_0x03259250(0,*puVar3);
        if (iVar4 <= iVar1) goto LAB_029a14f8;
        func_0x01384bf0();
      }
      else {
        iVar4 = func_0x03259250(iVar6,*puVar3);
        if (iVar4 <= iVar1) goto LAB_029a14f8;
      }
      iVar9 = *(int *)(iVar6 + 8);
      uVar2 = *(uint *)(iVar6 + 0xc);
      iVar4 = *piVar10;
      *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (uVar2 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(iVar6 + 0xc) = uVar2 + 1;
        *(int *)(iVar9 + uVar2 * 4 + 0x10) = iVar1;
      }
      else {
        func_0x0325970c(iVar6,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38))
        ;
      }
      iVar1 = iVar1 + 1;
    } while( true );
  }
  goto LAB_029a1804;
LAB_029a14f8:
  func_0x030046d0(iVar6,**(undefined4 **)(_UNK_029a195c + 0x29a1504));
  piVar10 = apiStack_3c[0];
  if (apiStack_3c[0] == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar10;
  uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar2 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_029a1960 + 0x29a152c)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
        goto LAB_029a1574;
      }
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_029a1960 + 0x29a152c),0);
LAB_029a1574:
  piVar10 = (int *)(*(code *)*puVar3)(piVar10,puVar3[1]);
  uVar13 = 0;
  uVar14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar15 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar16 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar1 = 0;
LAB_029a1590:
  if (piVar10 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = *piVar10;
  uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar2 != 0) {
    piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_029a1974 + 0x29a15ac)) {
        puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
        goto LAB_029a15f4;
      }
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_029a1974 + 0x29a15ac),0);
LAB_029a15f4:
  iVar4 = (*(code *)*puVar3)(piVar10,puVar3[1]);
  if (iVar4 != 0) {
    if (piVar10 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar4 = *piVar10;
    uVar2 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_029a1964 + 0x29a1628)) {
          puVar3 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
          goto LAB_029a1670;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_029a1964 + 0x29a1628),0);
LAB_029a1670:
    uVar5 = (*(code *)*puVar3)(piVar10,puVar3[1]);
    iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_029a1968 + 0x29a1690));
    func_0x029a89dc(iVar4,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar4 + 8) = uVar5;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x03259410(iVar6,iVar1,**(undefined4 **)(_UNK_029a196c + 0x29a16c8));
    *(undefined4 *)(iVar4 + 0x20) = 0;
    *(undefined4 *)(iVar4 + 0x10) = uVar13;
    *(undefined4 *)(iVar4 + 0x14) = uVar14;
    *(undefined4 *)(iVar4 + 0x18) = uVar15;
    *(undefined4 *)(iVar4 + 0x1c) = uVar16;
    *(undefined4 *)(iVar4 + 0xc) = uVar5;
    iVar9 = *(int *)(param_1 + 0xb8);
    *(undefined4 *)(iVar4 + 0x24) = 0;
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar12 = *(int *)(iVar9 + 8);
    uVar2 = *(uint *)(iVar9 + 0xc);
    piVar7 = *(int **)(_UNK_029a1970 + 0x29a1720);
    *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
    iVar11 = *piVar7;
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    iVar1 = iVar1 + 1;
    if (uVar2 < *(uint *)(iVar12 + 0xc)) {
      *(uint *)(iVar9 + 0xc) = uVar2 + 1;
      *(int *)(iVar12 + uVar2 * 4 + 0x10) = iVar4;
    }
    else {
      func_0x0328f170(iVar9,iVar4,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
    }
    goto LAB_029a1590;
  }
  if (piVar10 != (int *)0x0) {
    iVar1 = *piVar10;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_029a1978 + 0x29a1790)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_029a17d8;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(_UNK_029a1978 + 0x29a1790),0);
LAB_029a17d8:
    (*(code *)*puVar3)(piVar10,puVar3[1]);
  }
LAB_029a1804:
  FUN_0299ebd4(param_1);
  FUN_0299eae0(param_1,0,0,0);
  return;
}



// ===== FAT.ActivityOrderLike$$TrackRoundStart RVA 0x2991980 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a1980(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  iVar1 = func_0x0229f06c(0x661d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x029a3260(param_1);
    uVar4 = *(undefined4 *)(param_1 + 100);
    if (iVar1 != 0) {
      iVar3 = *(int *)(param_1 + 0x9c) + 1;
    }
    pcVar5 = (char *)(_UNK_019b70ec + 0x19b6fe8);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_019b70f0 + 0x19b6ffc),uVar4,iVar3,0);
      func_0x01384978(*(undefined4 *)(_UNK_019b70f4 + 0x19b7008));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x9e1,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_019b70f8 + 0x19b706c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x02f74dec(**(undefined4 **)(_UNK_019b70fc + 0x19b7088));
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b489c0(&uStack_2c,param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 0x4c) = uStack_28;
      *(undefined4 *)(iVar1 + 0x50) = uStack_24;
      *(undefined4 *)(iVar1 + 0x54) = uVar4;
      *(undefined4 *)(iVar1 + 0x48) = uStack_2c;
      *(int *)(iVar1 + 0x58) = iVar3;
      func_0x019930d8(iVar1,0,0);
    }
    else {
      iVar1 = func_0x0229f13c(0x9e1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_30 = 0;
      func_0x02179a68(iVar1,param_1,uVar4,iVar3);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x661d,0);
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



// ===== FAT.ActivityOrderLike$$GetTippedTokens RVA 0x29919fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_029a19fc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  int aiStack_48 [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar3 = (char *)(_UNK_029a1c40 + 0x29a1a14);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a1c44 + 0x29a1a28));
    func_0x01384978(*(undefined4 *)(_UNK_029a1c48 + 0x29a1a34));
    func_0x01384978(*(undefined4 *)(_UNK_029a1c4c + 0x29a1a40));
    func_0x01384978(*(undefined4 *)(_UNK_029a1c50 + 0x29a1a4c));
    func_0x01384978(*(undefined4 *)(_UNK_029a1c54 + 0x29a1a58));
    func_0x01384978(*(undefined4 *)(_UNK_029a1c58 + 0x29a1a64));
    func_0x01384978(*(undefined4 *)(_UNK_029a1c5c + 0x29a1a70));
    *pcVar3 = '\x01';
  }
  aiStack_48[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  aiStack_48[2] = 0;
  uStack_30 = 0;
  aiStack_48[1] = 0;
  aiStack_48[0] = 0;
  iVar2 = func_0x0229f06c(0x661e,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x68);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_60,iVar2,**(undefined4 **)(_UNK_029a1c60 + 0x29a1b04));
    aiStack_48[2] = uStack_60;
    aiStack_48[3] = uStack_5c;
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    iStack_64 = 0;
    puVar6 = *(undefined4 **)(_UNK_029a1c64 + 0x29a1b3c);
    puVar5 = *(undefined4 **)(_UNK_029a1c68 + 0x29a1b44);
    while (iVar2 = func_0x03f9975c(aiStack_48 + 2,*puVar6), uVar1 = uStack_34, iVar2 != 0) {
      iVar4 = *(int *)(param_1 + 0x8c);
      iVar2 = (int)uStack_30;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x03d37358(iVar4,uVar1,aiStack_48,*puVar5);
      if (iVar4 != 0) {
        iStack_64 = aiStack_48[0] * iVar2 + iStack_64;
      }
    }
    func_0x03f9989c(aiStack_48 + 2,**(undefined4 **)(_UNK_029a1c6c + 0x29a1ba4));
  }
  else {
    iVar2 = func_0x0229f13c(0x661e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_64 = func_0x0217493c(iVar2,param_1,0);
  }
  return iStack_64;
}



// ===== FAT.ActivityOrderLike$$LoadSetup RVA 0x2991c78 =====

/* WARNING: Removing unreachable block (ram,0x029a246c) */
/* WARNING: Removing unreachable block (ram,0x029a2478) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a1c78(int param_1,int param_2)

{
  double dVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  int iVar19;
  uint in_fpscr;
  undefined8 uVar20;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  pcVar12 = (char *)(_UNK_029a2780 + 0x29a1c9c);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a2784 + 0x29a1cb0));
    func_0x01384978(*(undefined4 *)(_UNK_029a2788 + 0x29a1cbc));
    func_0x01384978(*(undefined4 *)(_UNK_029a278c + 0x29a1cc8));
    func_0x01384978(*(undefined4 *)(_UNK_029a2790 + 0x29a1cd4));
    func_0x01384978(*(undefined4 *)(_UNK_029a2794 + 0x29a1ce0));
    func_0x01384978(*(undefined4 *)(_UNK_029a2798 + 0x29a1cec));
    func_0x01384978(*(undefined4 *)(_UNK_029a279c + 0x29a1cf8));
    func_0x01384978(*(undefined4 *)(_UNK_029a27a0 + 0x29a1d04));
    func_0x01384978(*(undefined4 *)(_UNK_029a27a4 + 0x29a1d10));
    func_0x01384978(*(undefined4 *)(_UNK_029a27a8 + 0x29a1d1c));
    func_0x01384978(*(undefined4 *)(_UNK_029a27ac + 0x29a1d28));
    func_0x01384978(*(undefined4 *)(_UNK_029a27b0 + 0x29a1d34));
    func_0x01384978(*(undefined4 *)(_UNK_029a27b4 + 0x29a1d40));
    func_0x01384978(*(undefined4 *)(_UNK_029a27b8 + 0x29a1d4c));
    func_0x01384978(*(undefined4 *)(_UNK_029a27bc + 0x29a1d58));
    func_0x01384978(*(undefined4 *)(_UNK_029a27c0 + 0x29a1d64));
    *pcVar12 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x661f,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x661f,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = iStack_4c;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar3 + 8);
    uVar13 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar3 == 0) {
      uVar9 = 2;
    }
    func_0x0245495c(iVar11,uVar13,&uStack_38,uVar9,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_2 + 0x28);
  uVar13 = func_0x01c23c30(0,iVar3,0);
  *(undefined4 *)(param_1 + 100) = uVar13;
  uVar13 = func_0x01c23c30(1,iVar3,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar13;
  uVar13 = func_0x01c23c30(2,iVar3,0);
  *(undefined4 *)(param_1 + 0x70) = uVar13;
  uVar2 = func_0x01c23b88(3,iVar3,0);
  *(undefined1 *)(param_1 + 0x74) = uVar2;
  uVar13 = func_0x01c23c30(4,iVar3,0);
  *(undefined4 *)(param_1 + 0x98) = uVar13;
  uVar13 = func_0x01c23c30(5,iVar3,0);
  *(undefined4 *)(param_1 + 0x9c) = uVar13;
  iVar11 = func_0x01c23c30(6,iVar3,0);
  *(int *)(param_1 + 0xa8) = iVar11;
  *(int *)(param_1 + 0xac) = iVar11 >> 0x1f;
  uVar13 = func_0x01c23c30(7,iVar3,0);
  *(undefined4 *)(param_1 + 0xbc) = uVar13;
  uVar2 = func_0x01c23b88(8,iVar3,0);
  *(undefined1 *)(param_1 + 0xa0) = uVar2;
  uVar13 = func_0x01c23c30(9,iVar3,0);
  *(undefined4 *)(param_1 + 0xc0) = uVar13;
  uVar2 = func_0x01c23b88(10,iVar3,0);
  *(undefined1 *)(param_1 + 0xb0) = uVar2;
  uVar13 = func_0x01c23c30(0xb,iVar3,0);
  *(undefined4 *)(param_1 + 0xc4) = uVar13;
  uVar13 = func_0x01c23c30(0xc,iVar3,0);
  iVar11 = *(int *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 200) = uVar13;
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar11 + 0xc);
  *(undefined4 *)(iVar11 + 0xc) = 0;
  *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
  if (0 < iVar8) {
    func_0x0484e5ec(*(undefined4 *)(iVar11 + 8),0,iVar8,0);
  }
  iStack_44 = param_1;
  iVar11 = func_0x01c23c30(100,iVar3,0);
  iStack_48 = iVar3;
  if (iVar11 == 0) {
    iVar11 = 0xf;
    piVar7 = *(int **)(_UNK_029a27c4 + 0x29a2344);
    while( true ) {
      iVar3 = iStack_48;
      if (iStack_48 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar3 + 0xc) <= iVar11) break;
      uVar13 = func_0x01c23c30(iVar11 + -2,iVar3,0);
      uVar9 = func_0x01c23c30(iVar11 + -1,iVar3,0);
      uVar5 = func_0x01c23c30(iVar11,iVar3,0);
      iVar8 = *(int *)(iStack_44 + 0xb8);
      iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_029a27c8 + 0x29a23a8));
      func_0x029a89dc(iVar3,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar3 + 8) = uVar13;
      *(undefined4 *)(iVar3 + 0xc) = uVar9;
      uVar20 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
      *(undefined8 *)(iVar3 + 0x10) = uVar20;
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar8 + 8);
      uVar14 = *(uint *)(iVar8 + 0xc);
      iVar19 = *piVar7;
      *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (uVar14 < *(uint *)(iVar4 + 0xc)) {
        *(uint *)(iVar8 + 0xc) = uVar14 + 1;
        *(int *)(iVar4 + uVar14 * 4 + 0x10) = iVar3;
      }
      else {
        func_0x0328f170(iVar8,iVar3,*(undefined4 *)(*(int *)(*(int *)(iVar19 + 0x10) + 0x60) + 0x38)
                       );
      }
      iVar11 = iVar11 + 3;
    }
  }
  else {
    iVar11 = func_0x01c23c30(0x65,iVar3,0);
    iStack_4c = func_0x01c23c30(0x66,iVar3,0);
    if (0 < iVar11) {
      iVar8 = 0x73;
      do {
        iVar19 = *(int *)(iStack_44 + 0xb8);
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_029a27cc + 0x29a1f7c));
        func_0x029a89dc(iVar4,0);
        uVar13 = func_0x01c23c30(iVar8 + -5,iVar3,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar4 + 8) = uVar13;
        uVar13 = func_0x01c23c30(iVar8 + -4,iVar3,0);
        *(undefined4 *)(iVar4 + 0xc) = uVar13;
        uVar13 = func_0x01c23c30(iVar8 + -3,iVar3,0);
        uVar20 = VectorSignedToFloat(uVar13,(byte)(in_fpscr >> 0x16) & 3);
        *(undefined8 *)(iVar4 + 0x10) = uVar20;
        uVar13 = func_0x01c23c30(iVar8 + -2,iVar3,0);
        uVar9 = func_0x01c23c30(iVar8 + -1,iVar3,0);
        uVar5 = func_0x01c23c30(iVar8,iVar3,0);
        uStack_3c = 0;
        uStack_40 = 0;
        uStack_38 = 0;
        uStack_50 = 0;
        func_0x01e78dc0(&uStack_40,uVar13,uVar9,uVar5);
        *(undefined4 *)(iVar4 + 0x30) = uStack_38;
        *(ulonglong *)(iVar4 + 0x28) = CONCAT44(uStack_3c,uStack_40);
        if (iVar19 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar19 + 8);
        uVar14 = *(uint *)(iVar19 + 0xc);
        piVar7 = *(int **)(_UNK_029a27d0 + 0x29a2080);
        *(int *)(iVar19 + 0x10) = *(int *)(iVar19 + 0x10) + 1;
        iVar16 = *piVar7;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (uVar14 < *(uint *)(iVar3 + 0xc)) {
          *(uint *)(iVar19 + 0xc) = uVar14 + 1;
          *(int *)(iVar3 + uVar14 * 4 + 0x10) = iVar4;
        }
        else {
          func_0x0328f170(iVar19,iVar4,
                          *(undefined4 *)(*(int *)(*(int *)(iVar16 + 0x10) + 0x60) + 0x38));
        }
        iVar11 = iVar11 + -1;
        iVar8 = iVar8 + iStack_4c;
        iVar3 = iStack_48;
      } while (iVar11 != 0);
    }
  }
  iVar11 = func_0x01c24918(0);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar8 = iStack_44;
  iVar11 = *(int *)(iVar11 + 0x88);
  uVar13 = *(undefined4 *)(iStack_44 + 0xb8);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x0302a9b4(iVar11,uVar13,**(undefined4 **)(_UNK_029a27d4 + 0x29a2114));
  func_0x029a280c(iVar8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  piVar7 = (int *)func_0x03653608(iVar3,**(undefined4 **)(_UNK_029a27d8 + 0x29a213c));
  piVar15 = *(int **)(_UNK_029a27dc + 0x29a2154);
  piVar18 = *(int **)(_UNK_029a27e0 + 0x29a215c);
  pcVar12 = (char *)(_UNK_029a27e4 + 0x29a2168);
  piVar17 = *(int **)(_UNK_029a27e8 + 0x29a216c);
LAB_029a2168:
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar3 = *piVar7;
  uVar14 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar14 != 0) {
    piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar10[-1] == *piVar15) {
        puVar6 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
        goto LAB_029a21c4;
      }
      uVar14 = uVar14 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar14 != 0);
  }
  puVar6 = (undefined4 *)func_0x014002dc(piVar7,*piVar15,0);
LAB_029a21c4:
  iVar11 = (*(code *)*puVar6)(piVar7,puVar6[1]);
  iVar3 = iStack_44;
  if (iVar11 != 0) {
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar3 = *piVar7;
    uVar14 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar14 != 0) {
      piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar10[-1] == *piVar18) {
          puVar6 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
          goto LAB_029a2238;
        }
        uVar14 = uVar14 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar7,*piVar18,0);
LAB_029a2238:
    iVar3 = (*(code *)*puVar6)(piVar7,puVar6[1]);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar14 = *(uint *)(iVar3 + 0xc);
    if (0x7fffffff < uVar14) {
      iVar11 = *(int *)(iStack_44 + 0x68);
      if (*pcVar12 == '\0') {
        func_0x01384978(piVar17);
        *pcVar12 = '\x01';
      }
      if (*(int *)(*piVar17 + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar13 = *(undefined4 *)(iVar3 + 0x10);
      if ((int)uVar14 < 0) {
        uVar14 = -uVar14;
      }
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar11,uVar14,uVar13,**(undefined4 **)(_UNK_029a27ec + 0x29a22c0));
    }
    goto LAB_029a2168;
  }
  if (piVar7 != (int *)0x0) {
    iVar11 = *piVar7;
    uVar14 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar15[-1] == **(int **)(_UNK_029a27f0 + 0x29a22f8)) {
          puVar6 = (undefined4 *)(iVar11 + *piVar15 * 8 + 0xc0);
          goto LAB_029a2454;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar14 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_029a27f0 + 0x29a22f8),0);
LAB_029a2454:
    (*(code *)*puVar6)(piVar7,puVar6[1]);
  }
  func_0x029a2a5c(iVar3);
  if (*(int *)(**(int **)(_UNK_029a27f4 + 0x29a2494) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar11 = func_0x0300d558(**(undefined4 **)(_UNK_029a27f8 + 0x29a24b0));
  uVar13 = func_0x01384be4(**(undefined4 **)(_UNK_029a27fc + 0x29a24c4));
  func_0x0478dedc(uVar13,iVar3,**(undefined4 **)(_UNK_029a2800 + 0x29a24e0),0);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x028be400(iVar11,uVar13,0);
  iVar11 = *(int *)(iVar3 + 0xb8);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  if (1 < *(int *)(iVar11 + 0xc)) {
    iVar11 = *(int *)(iVar3 + 0xb8);
    uVar13 = *(undefined4 *)(iVar3 + 0x6c);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    puVar6 = *(undefined4 **)(_UNK_029a2804 + 0x29a2548);
    iVar11 = func_0x0328eea8(iVar11,0,*puVar6);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    dVar1 = _UNK_029a2778;
    if ((*(double *)(iVar11 + 0x10) == _UNK_029a2778) ||
       ((int)(longlong)*(double *)(iVar11 + 0x10) < 0)) {
      uVar9 = FUN_0299e230(iVar3);
    }
    else {
      iVar11 = *(int *)(iVar3 + 0xb8);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x0328eea8(iVar11,0,*puVar6);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      uVar9 = (undefined4)(longlong)*(double *)(iVar11 + 0x10);
      if (*(double *)(iVar11 + 0x10) == dVar1) {
        uVar9 = 0x80000000;
      }
    }
    iVar11 = *(int *)(iVar3 + 0xb8);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = func_0x0328eea8(iVar11,1,*puVar6);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    if ((*(double *)(iVar11 + 0x10) == dVar1) || ((int)(longlong)*(double *)(iVar11 + 0x10) < 0)) {
      uVar5 = FUN_0299e230(iVar3);
    }
    else {
      iVar11 = *(int *)(iVar3 + 0xb8);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x0328eea8(iVar11,1,*puVar6);
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      uVar5 = (undefined4)(longlong)*(double *)(iVar11 + 0x10);
      if (*(double *)(iVar11 + 0x10) == dVar1) {
        uVar5 = 0x80000000;
      }
    }
    FUN_0299eae0(iVar3,uVar13,uVar9,uVar5);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$_AddOfflineRaceScore RVA 0x299280c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a280c(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_029a2a2c + 0x29a2824);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a2a30 + 0x29a2838));
    func_0x01384978(*(undefined4 *)(_UNK_029a2a34 + 0x29a2844));
    func_0x01384978(*(undefined4 *)(_UNK_029a2a38 + 0x29a2850));
    func_0x01384978(*(undefined4 *)(_UNK_029a2a3c + 0x29a285c));
    func_0x01384978(*(undefined4 *)(_UNK_029a2a40 + 0x29a2868));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x6620,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xa0) == '\0') {
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_029a2a44 + 0x29a28d8));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar8 = func_0x01c359e8(iVar1,0);
      uVar3 = *(uint *)(param_1 + 0xc0);
      iVar1 = (uint)uVar8 - uVar3;
      iVar6 = (int)((ulonglong)uVar8 >> 0x20) - (((int)uVar3 >> 0x1f) + (uint)((uint)uVar8 < uVar3))
      ;
      if ((int)(uint)(iVar1 == 0) <= iVar6) {
        iVar5 = *(int *)(param_1 + 0xb8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_30,iVar5,**(undefined4 **)(_UNK_029a2a48 + 0x29a2934));
        puVar7 = *(undefined4 **)(_UNK_029a2a4c + 0x29a294c);
        while (uVar8 = func_0x03f5f428(&uStack_30,*puVar7), iVar5 = iStack_24,
              uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20), (int)uVar8 != 0) {
          if (iStack_24 == 0) {
            func_0x01384bf0();
            uVar2 = extraout_r1;
          }
          func_0x029a8808(iVar5,uVar2,iVar1,iVar6,0);
        }
        func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_029a2a50 + 0x29a2990));
        func_0x029a6c90(param_1);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6620,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$InitConf RVA 0x2992a5c =====

/* WARNING: Removing unreachable block (ram,0x029a09f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a2a5c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
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
  
  iVar2 = func_0x0229f06c(0x6624,0);
  if (iVar2 == 0) {
    piVar9 = *(int **)(param_1 + 0x10);
    if (piVar9 == (int *)0x0) {
      func_0x01384bf0();
    }
    uVar10 = (**(code **)(*piVar9 + 0x100))(piVar9,*(undefined4 *)(*piVar9 + 0x104));
    iVar2 = func_0x018055bc(uVar10,0);
    if (iVar2 == 0) {
      return;
    }
    *(int *)(param_1 + 0x90) = iVar2;
    pcVar6 = (char *)(_UNK_029a0acc + 0x29a0640);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_029a0ad0 + 0x29a0654));
      func_0x01384978(*(undefined4 *)(_UNK_029a0ad4 + 0x29a0660));
      func_0x01384978(*(undefined4 *)(_UNK_029a0ad8 + 0x29a066c));
      func_0x01384978(*(undefined4 *)(_UNK_029a0adc + 0x29a0678));
      func_0x01384978(*(undefined4 *)(_UNK_029a0ae0 + 0x29a0684));
      func_0x01384978(*(undefined4 *)(_UNK_029a0ae4 + 0x29a0690));
      func_0x01384978(*(undefined4 *)(_UNK_029a0ae8 + 0x29a069c));
      func_0x01384978(*(undefined4 *)(_UNK_029a0aec + 0x29a06a8));
      func_0x01384978(*(undefined4 *)(_UNK_029a0af0 + 0x29a06b4));
      func_0x01384978(*(undefined4 *)(_UNK_029a0af4 + 0x29a06c0));
      *pcVar6 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x6619,0);
    if (iVar2 == 0) {
      iVar7 = *(int *)(param_1 + 0x90);
      iVar2 = *(int *)(param_1 + 100);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(iVar7 + 0x3c);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(param_1 + 0x90);
      iVar7 = *(int *)(iVar7 + 0xc);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (iVar2 < iVar7) {
        iVar2 = *(int *)(iVar8 + 0x3c);
        uVar10 = *(undefined4 *)(param_1 + 100);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar10 = func_0x0364c9b8(iVar2,uVar10,**(undefined4 **)(_UNK_029a0af8 + 0x29a0774));
      }
      else {
        uVar10 = *(undefined4 *)(iVar8 + 0x1c);
      }
      uVar10 = func_0x01805a78(uVar10,0);
      iVar2 = *(int *)(param_1 + 0x8c);
      *(undefined4 *)(param_1 + 0x94) = uVar10;
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03d3570c(iVar2,**(undefined4 **)(_UNK_029a0afc + 0x29a07ac));
      iVar2 = *(int *)(param_1 + 0x94);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar9 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_029a0b00 + 0x29a07e0));
      piVar11 = *(int **)(_UNK_029a0b04 + 0x29a0800);
      puVar12 = *(undefined4 **)(_UNK_029a0b08 + 0x29a0808);
      do {
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar9;
        uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar11) {
              puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
              goto LAB_029a0860;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined4 *)func_0x014002dc(piVar9,*piVar11,0);
LAB_029a0860:
        iVar2 = (*(code *)*puVar1)(piVar9,puVar1[1]);
        if (iVar2 == 0) goto LAB_029a0974;
        if (piVar9 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar9;
        uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_029a0b0c + 0x29a0894)) {
              puVar1 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
              goto LAB_029a08dc;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar1 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_029a0b0c + 0x29a0894),0);
LAB_029a08dc:
        uVar10 = (*(code *)*puVar1)(piVar9,puVar1[1]);
        if (*(int *)(**(int **)(_UNK_029a0b10 + 0x29a08fc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02566088(&uStack_30,uVar10,0);
        uVar4 = uStack_2c;
        uVar10 = uStack_30;
        iVar2 = *(int *)(param_1 + 0x8c);
        uStack_2c = 0;
        uStack_30 = 0;
        func_0x038fd264(&uStack_30,uVar4,uStack_28,**(undefined4 **)(_UNK_029a0b14 + 0x29a0938));
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = *puVar12;
        func_0x03d354b0(iVar2,uVar10,uStack_30,uStack_2c);
      } while( true );
    }
    iVar2 = func_0x0229f13c(0x6619,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x6624,0);
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
  uVar10 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar7,uVar10,&uStack_30,uVar4,0,0);
  return;
LAB_029a0974:
  if (piVar9 != (int *)0x0) {
    iVar2 = *piVar9;
    uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar3 != 0) {
      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_029a0b18 + 0x29a0990)) {
          puVar12 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
          goto LAB_029a09d8;
        }
        uVar3 = uVar3 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar3 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar9,**(int **)(_UNK_029a0b18 + 0x29a0990),0);
LAB_029a09d8:
    (*(code *)*puVar12)(piVar9,puVar12[1]);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$AfterLoad RVA 0x2992af0 =====

void FUN_029a2af0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x6627,0);
  if (iVar1 == 0) {
    func_0x029a2d18(param_1);
    iVar1 = func_0x029a3260(param_1);
    iVar3 = *(int *)(param_1 + 0x90);
    uStack_28 = *(undefined8 *)(param_1 + 0x50);
    uStack_20 = *(undefined4 *)(param_1 + 0x58);
    if (iVar1 == 0) {
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_28,*(undefined4 *)(iVar3 + 0x28),param_1,0,1,0);
      uStack_30 = *(undefined4 *)(param_1 + 0x48);
      uStack_2c = *(undefined4 *)(param_1 + 0x4c);
      iVar1 = *(int *)(param_1 + 0x90);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x30),0);
      iVar1 = *(int *)(param_1 + 0x90);
      uStack_28 = *(undefined8 *)(param_1 + 0x3c);
      uStack_20 = *(undefined4 *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x34),param_1,0,1,0);
      iVar1 = *(int *)(param_1 + 0x90);
      uStack_30 = *(undefined4 *)(param_1 + 0x5c);
      uStack_2c = *(undefined4 *)(param_1 + 0x60);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = *(undefined4 *)(iVar1 + 0x38);
    }
    else {
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_28,*(undefined4 *)(iVar3 + 0x4c),param_1,0,1,0);
      uStack_30 = *(undefined4 *)(param_1 + 0x48);
      uStack_2c = *(undefined4 *)(param_1 + 0x4c);
      iVar1 = *(int *)(param_1 + 0x90);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&uStack_30,*(undefined4 *)(iVar1 + 0x40),0);
      iVar1 = *(int *)(param_1 + 0x90);
      uStack_28 = *(undefined8 *)(param_1 + 0x3c);
      uStack_20 = *(undefined4 *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x48),param_1,0,1,0);
      iVar1 = *(int *)(param_1 + 0x90);
      uStack_30 = *(undefined4 *)(param_1 + 0x5c);
      uStack_2c = *(undefined4 *)(param_1 + 0x60);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = *(undefined4 *)(iVar1 + 0x50);
    }
    func_0x02b64540(&uStack_30,uVar2,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x6627,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$_OnSecondRace RVA 0x2992d18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a2d18(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_r1;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_029a31f0 + 0x29a2d30);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a31f4 + 0x29a2d44));
    func_0x01384978(*(undefined4 *)(_UNK_029a31f8 + 0x29a2d50));
    func_0x01384978(*(undefined4 *)(_UNK_029a31fc + 0x29a2d5c));
    func_0x01384978(*(undefined4 *)(_UNK_029a3200 + 0x29a2d68));
    func_0x01384978(*(undefined4 *)(_UNK_029a3204 + 0x29a2d74));
    func_0x01384978(*(undefined4 *)(_UNK_029a3208 + 0x29a2d80));
    func_0x01384978(*(undefined4 *)(_UNK_029a320c + 0x29a2d8c));
    func_0x01384978(*(undefined4 *)(_UNK_029a3210 + 0x29a2d98));
    func_0x01384978(*(undefined4 *)(_UNK_029a3214 + 0x29a2da4));
    func_0x01384978(*(undefined4 *)(_UNK_029a3218 + 0x29a2db0));
    func_0x01384978(*(undefined4 *)(_UNK_029a321c + 0x29a2dbc));
    func_0x01384978(*(undefined4 *)(_UNK_029a3220 + 0x29a2dc8));
    func_0x01384978(*(undefined4 *)(_UNK_029a3224 + 0x29a2dd4));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x6625,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((0 < *(int *)(iVar1 + 0xc)) && (FUN_029a0ca8(param_1), *(char *)(param_1 + 0xd4) != '\0')) {
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_029a3228 + 0x29a2e78));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar10 = func_0x01c359e8(iVar1,0);
      iVar1 = (int)((ulonglong)uVar10 >> 0x20);
      uVar2 = (uint)uVar10;
      iVar5 = *(int *)(param_1 + 0xb8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_48,iVar5,**(undefined4 **)(_UNK_029a322c + 0x29a2ecc));
      uVar9 = 0;
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar8 = *(undefined4 **)(_UNK_029a3230 + 0x29a2eec);
      while (uVar10 = func_0x03f5f428(&uStack_38,*puVar8), iVar5 = iStack_2c,
            uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20), (int)uVar10 != 0) {
        if (iStack_2c == 0) {
          func_0x01384bf0();
          uVar6 = extraout_r1;
        }
        uVar3 = func_0x029a8560(iVar5,uVar6,uVar2,iVar1,0);
        uVar9 = uVar9 | uVar3;
      }
      func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_029a3254 + 0x29a2f34));
      if ((uVar9 & 1) != 0) {
        func_0x029a6c90(param_1);
        if (*(int *)(**(int **)(_UNK_029a3238 + 0x29a2f5c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar5 = func_0x0300d558(**(undefined4 **)(_UNK_029a323c + 0x29a2f78));
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x028c3fd8(iVar5,0);
      }
      if ((*(char *)(param_1 + 0xa0) == '\0') && (uVar9 = FUN_0299e8d0(param_1), 0 < (int)uVar9)) {
        if (((int)(uint)(uVar2 - *(uint *)(param_1 + 0xa8) < uVar9) <=
             (int)(iVar1 - (*(int *)(param_1 + 0xac) + (uint)(uVar2 < *(uint *)(param_1 + 0xa8)))))
           && (*(char *)(param_1 + 0xb0) == '\0')) {
          iVar1 = *(int *)(param_1 + 0xb8);
          *(undefined1 *)(param_1 + 0xa0) = 1;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          *(undefined4 *)(iVar1 + 0xc) = 0;
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          if (0 < iVar5) {
            func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
          }
          iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_029a3240 + 0x29a3034));
          iVar5 = *(int *)(param_1 + 0x50);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar6 = *(undefined4 *)(iVar5 + 0xc);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01eeaa54(iVar1,uVar6,0,0);
          if (iVar1 == 0) {
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uStack_48 = 0xffffffff;
            uVar7 = *(undefined4 *)(param_1 + 0x58);
            iVar1 = *(int *)(iVar1 + 0xfc);
            uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_029a325c + 0x29a3124),&uStack_48);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x01e7437c(iVar1,uVar7,0,uVar6,0);
          }
          else {
            if (*(int *)(**(int **)(_UNK_029a3244 + 0x29a3084) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_029a3248 + 0x29a30a0));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x0349da44(iVar1,0,**(undefined4 **)(_UNK_029a324c + 0x29a30c4));
            iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_029a3250 + 0x29a30d8));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x028c3fd8(iVar1,0);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6625,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$IsInRaceRound RVA 0x2993260 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_029a3260(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined8 uVar9;
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
  
  pcVar7 = (char *)(_UNK_029a3398 + 0x29a3274);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a339c + 0x29a3288));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x62f,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x62f,0);
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
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar5,0,0);
    uVar1 = func_0x0245496c(&uStack_30,0,0);
    return uVar1;
  }
  uVar1 = 1;
  if ((((*(char *)(param_1 + 0xb0) == '\0') && (uVar1 = 0, *(char *)(param_1 + 0xd4) != '\0')) &&
      (*(char *)(param_1 + 0xa0) == '\0')) && (uVar3 = FUN_0299e8d0(param_1), 0 < (int)uVar3)) {
    iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_029a33a0 + 0x29a332c));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar1 = 0;
    uVar9 = func_0x01c359e8(iVar2,0);
    iVar2 = (int)((ulonglong)uVar9 >> 0x20);
    uVar4 = (uint)uVar9;
    if ((int)(iVar2 - (*(int *)(param_1 + 0xac) + (uint)(uVar4 < *(uint *)(param_1 + 0xa8)))) <
        (int)(uint)(uVar4 - *(uint *)(param_1 + 0xa8) < uVar3)) {
      uVar1 = *(uint *)(param_1 + 0xd8);
      iVar6 = *(int *)(param_1 + 0xdc);
      return (uint)(iVar6 < (int)(uint)(uVar1 == 0) ||
                   (int)(iVar2 - (iVar6 + (uint)(uVar4 < uVar1))) < 0 !=
                   (SBORROW4(iVar2,iVar6) != SBORROW4(iVar2 - iVar6,(uint)(uVar4 < uVar1))));
    }
  }
  return uVar1;
}



// ===== FAT.ActivityOrderLike$$SaveSetup RVA 0x29933a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a33a8(int param_1,int param_2)

{
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_60 [12];
  int iStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcVar6 = (char *)(_UNK_029a3af8 + 0x29a33cc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a3afc + 0x29a33e0));
    func_0x01384978(*(undefined4 *)(_UNK_029a3b00 + 0x29a33ec));
    func_0x01384978(*(undefined4 *)(_UNK_029a3b04 + 0x29a33f8));
    func_0x01384978(*(undefined4 *)(_UNK_029a3b08 + 0x29a3404));
    func_0x01384978(*(undefined4 *)(_UNK_029a3b0c + 0x29a3410));
    func_0x01384978(*(undefined4 *)(_UNK_029a3b10 + 0x29a341c));
    func_0x01384978(*(undefined4 *)(_UNK_029a3b14 + 0x29a3428));
    func_0x01384978(*(undefined4 *)(_UNK_029a3b18 + 0x29a3434));
    func_0x01384978(*(undefined4 *)(_UNK_029a3b1c + 0x29a3440));
    func_0x01384978(*(undefined4 *)(_UNK_029a3b20 + 0x29a344c));
    *pcVar6 = '\x01';
  }
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x662b,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_2 + 0x28);
    uVar3 = func_0x01c23578(0,*(undefined4 *)(param_1 + 100),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    puVar9 = *(undefined4 **)(_UNK_029a3b24 + 0x29a34fc);
    func_0x03652b00(iVar2,uVar3,*puVar9);
    uVar3 = func_0x01c23578(1,*(undefined4 *)(param_1 + 0x6c),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar2,uVar3,*puVar9);
    uVar3 = func_0x01c23578(2,*(undefined4 *)(param_1 + 0x70),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar2,uVar3,*puVar9);
    uVar3 = func_0x01c23ac8(3,*(undefined1 *)(param_1 + 0x74),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar2,uVar3,*puVar9);
    uVar3 = func_0x01c23578(4,*(undefined4 *)(param_1 + 0x98),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar2,uVar3,*puVar9);
    uVar3 = func_0x01c23578(5,*(undefined4 *)(param_1 + 0x9c),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar2,uVar3,*puVar9);
    uVar3 = func_0x01c23578(6,*(undefined4 *)(param_1 + 0xa8),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar2,uVar3,*puVar9);
    uVar3 = func_0x01c23578(7,*(undefined4 *)(param_1 + 0xbc),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar2,uVar3,*puVar9);
    uVar3 = func_0x01c23ac8(8,*(undefined1 *)(param_1 + 0xa0),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar2,uVar3,*puVar9);
    iVar4 = func_0x03668dfc(**(undefined4 **)(_UNK_029a3b28 + 0x29a368c));
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01c359e8(iVar4,0);
    *(undefined4 *)(param_1 + 0xc0) = uVar3;
    uVar3 = func_0x01c23578(9,uVar3,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar2,uVar3,*puVar9);
    uVar3 = func_0x01c23ac8(10,*(undefined1 *)(param_1 + 0xb0),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar2,uVar3,*puVar9);
    uVar3 = func_0x01c23578(0xb,*(undefined4 *)(param_1 + 0xc4),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar2,uVar3,*puVar9);
    uVar3 = func_0x01c23578(0xc,*(undefined4 *)(param_1 + 200),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar2,uVar3,*puVar9);
    uVar3 = func_0x01c23578(100,1,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar2,uVar3,*puVar9);
    iVar4 = *(int *)(param_1 + 0xb8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01c23578(0x65,*(undefined4 *)(iVar4 + 0xc),0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar2,uVar3,*puVar9);
    iVar4 = 0;
    uVar3 = func_0x01c23578(0x66,6,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar2,uVar3,*puVar9);
    dVar1 = _UNK_029a3af0;
    iVar7 = 0x73;
    puVar8 = *(undefined4 **)(_UNK_029a3b2c + 0x29a3828);
    while( true ) {
      iVar5 = *(int *)(param_1 + 0xb8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar5 + 0xc) <= iVar4) break;
      iVar5 = *(int *)(param_1 + 0xb8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0328eea8(iVar5,iVar4,*puVar8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x01c23578(iVar7 + -5,*(undefined4 *)(iVar5 + 8),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar2,uVar3,*puVar9);
      uVar3 = func_0x01c23578(iVar7 + -4,*(undefined4 *)(iVar5 + 0xc),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar2,uVar3,*puVar9);
      uVar3 = (undefined4)(longlong)*(double *)(iVar5 + 0x10);
      if (*(double *)(iVar5 + 0x10) == dVar1) {
        uVar3 = 0x80000000;
      }
      uVar3 = func_0x01c23578(iVar7 + -3,uVar3,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar2,uVar3,*puVar9);
      uVar3 = func_0x01c23578(iVar7 + -2,*(undefined4 *)(iVar5 + 0x28),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar2,uVar3,*puVar9);
      uVar3 = func_0x01c23578(iVar7 + -1,*(undefined4 *)(iVar5 + 0x2c),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar2,uVar3,*puVar9);
      uVar3 = func_0x01c23578(iVar7,*(undefined4 *)(iVar5 + 0x30),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar2,uVar3,*puVar9);
      iVar7 = iVar7 + 6;
      iVar4 = iVar4 + 1;
    }
    iVar4 = *(int *)(param_1 + 0x68);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(auStack_60,iVar4,**(undefined4 **)(_UNK_029a3b30 + 0x29a39d4));
    uStack_40._4_4_ = iStack_54;
    uStack_38 = uStack_50;
    puVar8 = *(undefined4 **)(_UNK_029a3b34 + 0x29a3a04);
    while (iVar4 = func_0x03f9975c(&uStack_48,*puVar8), iVar4 != 0) {
      uVar3 = func_0x01c23578(-uStack_40._4_4_,(undefined4)uStack_38,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar2,uVar3,*puVar9);
    }
    func_0x03f9989c(&uStack_48,**(undefined4 **)(_UNK_029a3b38 + 0x29a3a54));
  }
  else {
    iVar2 = func_0x0229f13c(0x662b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$Open RVA 0x2993b44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a3b44(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  pcVar6 = (char *)(_UNK_029a3c48 + 0x29a3b58);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a3c4c + 0x29a3b6c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x662c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x662c,0);
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
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar7,&uStack_30,uVar3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_029a3c50 + 0x29a3bd8),1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar2 + 0x20));
  if (iVar4 == 0) {
    uVar7 = func_0x01384c10();
    func_0x01384aa0(uVar7,0);
  }
  if (piVar2[3] == 0) {
    func_0x01384bf4();
  }
  piVar2[4] = param_1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_01ef598c + 0x1ef58f0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ef5990 + 0x1ef5904),piVar2,0);
    *pcVar6 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x541,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x541,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,piVar2,0);
    iVar5 = *(int *)(iVar4 + 8);
    uVar7 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
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
  iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01ef5994 + 0x1ef5960));
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0229f06c(0xd,0,piVar2,0);
  if (iVar5 == 0) {
    func_0x01ee81d4(iVar4,iVar1,0,piVar2);
  }
  else {
    iVar5 = func_0x0229f13c(0xd,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar5,iVar4,iVar1,piVar2);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$OpenRoundStart RVA 0x2993c54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a3c54(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  pcVar6 = (char *)(_UNK_029a3d58 + 0x29a3c68);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a3d5c + 0x29a3c7c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x662d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x662d,0);
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
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar7,&uStack_30,uVar3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_029a3d60 + 0x29a3ce8),1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar2 + 0x20));
  if (iVar4 == 0) {
    uVar7 = func_0x01384c10();
    func_0x01384aa0(uVar7,0);
  }
  if (piVar2[3] == 0) {
    func_0x01384bf4();
  }
  piVar2[4] = param_1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_01ef598c + 0x1ef58f0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ef5990 + 0x1ef5904),piVar2,0);
    *pcVar6 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x541,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x541,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,piVar2,0);
    iVar5 = *(int *)(iVar4 + 8);
    uVar7 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
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
  iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01ef5994 + 0x1ef5960));
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0229f06c(0xd,0,piVar2,0);
  if (iVar5 == 0) {
    func_0x01ee81d4(iVar4,iVar1,0,piVar2);
  }
  else {
    iVar5 = func_0x0229f13c(0xd,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar5,iVar4,iVar1,piVar2);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$TryOpenRaceMainOrRoundStart RVA 0x2993d64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a3d64(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uStack_40;
  undefined1 uStack_39;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_029a4170 + 0x29a3d7c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a4174 + 0x29a3d90));
    func_0x01384978(*(undefined4 *)(_UNK_029a4178 + 0x29a3d9c));
    func_0x01384978(*(undefined4 *)(_UNK_029a417c + 0x29a3da8));
    func_0x01384978(*(undefined4 *)(_UNK_029a4180 + 0x29a3db4));
    func_0x01384978(*(undefined4 *)(_UNK_029a4184 + 0x29a3dc0));
    func_0x01384978(*(undefined4 *)(_UNK_029a4188 + 0x29a3dcc));
    func_0x01384978(*(undefined4 *)(_UNK_029a418c + 0x29a3dd8));
    *pcVar6 = '\x01';
  }
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x662e,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) < 1) {
      FUN_029a3c54(param_1);
    }
    else {
      iVar1 = FUN_029a3260(param_1);
      if (iVar1 == 0) {
        func_0x029a439c(param_1);
        FUN_029a3c54(param_1);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x90);
        uStack_30 = *(undefined8 *)(param_1 + 0x3c);
        uStack_28 = *(undefined4 *)(param_1 + 0x44);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x48),param_1,0,1,0);
        iVar1 = *(int *)(param_1 + 0x90);
        uStack_30 = *(undefined8 *)(param_1 + 0x50);
        uStack_28 = *(undefined4 *)(param_1 + 0x58);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x4c),param_1,0,1,0);
        uStack_38 = *(undefined4 *)(param_1 + 0x48);
        uStack_34 = *(undefined4 *)(param_1 + 0x4c);
        iVar1 = *(int *)(param_1 + 0x90);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02b64540(&uStack_38,*(undefined4 *)(iVar1 + 0x40),0);
        iVar1 = *(int *)(param_1 + 0x90);
        uStack_38 = *(undefined4 *)(param_1 + 0x5c);
        uStack_34 = *(undefined4 *)(param_1 + 0x60);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02b64540(&uStack_38,*(undefined4 *)(iVar1 + 0x50),0);
        iVar1 = *(int *)(param_1 + 0x50);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_029a4190 + 0x29a3f78),2);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar2 + 0x20));
        if (iVar3 == 0) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if (piVar2[3] == 0) {
          func_0x01384bf4();
        }
        piVar2[4] = param_1;
        uStack_39 = 1;
        iVar3 = func_0x01384abc(**(undefined4 **)(_UNK_029a4194 + 0x29a3fd8),&uStack_39);
        if ((iVar3 != 0) &&
           (iVar5 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
          uVar4 = func_0x01384c10();
          func_0x01384aa0(uVar4,0);
        }
        if ((uint)piVar2[3] < 2) {
          func_0x01384bf4();
        }
        piVar2[5] = iVar3;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01ef58d8(iVar1,piVar2,0);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_40 = 1;
        uVar7 = *(undefined4 *)(param_1 + 0x58);
        iVar1 = *(int *)(iVar1 + 0xfc);
        uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_029a4198 + 0x29a406c),&uStack_40);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01e7437c(iVar1,uVar7,0,uVar4,0);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x029a41a8(param_1,*(undefined4 *)(iVar1 + 0xfc),0);
      }
      if (*(int *)(**(int **)(_UNK_029a419c + 0x29a4100) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_029a41a0 + 0x29a411c));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar1,0);
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_029a41a4 + 0x29a4148));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar1,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x662e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$TryQueueRoundStartPopup RVA 0x29941a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a41a8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_029a4378 + 0x29a41c8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a437c + 0x29a41dc));
    func_0x01384978(*(undefined4 *)(_UNK_029a4380 + 0x29a41e8));
    func_0x01384978(*(undefined4 *)(_UNK_029a4384 + 0x29a41f4));
    func_0x01384978(*(undefined4 *)(_UNK_029a4388 + 0x29a4200));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x662f,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xe4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01d64a88(iVar1,0);
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x44);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(param_2,uVar2,param_3,0,0);
    }
    else {
      *(int *)(param_1 + 0x80) = param_2;
      *(undefined4 *)(param_1 + 0x84) = param_3;
      *(undefined1 *)(param_1 + 0x7c) = 1;
      if (*(char *)(param_1 + 0x88) == '\0') {
        if (*(int *)(**(int **)(_UNK_029a438c + 0x29a42c8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_029a4390 + 0x29a42e4));
        uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_029a4394 + 0x29a42f8));
        func_0x0478dedc(uVar2,param_1,**(undefined4 **)(_UNK_029a4398 + 0x29a4314),0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x028be400(iVar1,uVar2,0);
        *(undefined1 *)(param_1 + 0x88) = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x662f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$SetupNormalThemeAndPopup RVA 0x299439c =====

void FUN_029a439c(int param_1)

{
  int iVar1;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_34 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x6632,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    uStack_30 = *(undefined8 *)(param_1 + 0x3c);
    uStack_28 = *(undefined4 *)(param_1 + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x34),param_1,0,1,0);
    iVar1 = *(int *)(param_1 + 0x90);
    uStack_30 = *(undefined8 *)(param_1 + 0x50);
    uStack_28 = *(undefined4 *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x28),param_1,0,1,0);
    uStack_38 = *(undefined4 *)(param_1 + 0x48);
    uStack_34 = *(undefined4 *)(param_1 + 0x4c);
    iVar1 = *(int *)(param_1 + 0x90);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_38,*(undefined4 *)(iVar1 + 0x30),0);
    iVar1 = *(int *)(param_1 + 0x90);
    uStack_38 = *(undefined4 *)(param_1 + 0x5c);
    uStack_34 = *(undefined4 *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02b64540(&uStack_38,*(undefined4 *)(iVar1 + 0x38),0);
  }
  else {
    iVar1 = func_0x0229f13c(0x6632,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$OpenHelp RVA 0x29944e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a44e0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  pcVar6 = (char *)(_UNK_029a45e4 + 0x29a44f4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a45e8 + 0x29a4508));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6633,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6633,0);
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
    uStack_4c = 0;
    func_0x0245495c(iVar4,uVar7,&uStack_30,uVar3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_029a45ec + 0x29a4574),1);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar2 + 0x20));
  if (iVar4 == 0) {
    uVar7 = func_0x01384c10();
    func_0x01384aa0(uVar7,0);
  }
  if (piVar2[3] == 0) {
    func_0x01384bf4();
  }
  piVar2[4] = param_1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_01ef598c + 0x1ef58f0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ef5990 + 0x1ef5904),piVar2,0);
    *pcVar6 = '\x01';
  }
  iVar4 = func_0x0229f06c(0x541,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x541,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar4 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,piVar2,0);
    iVar5 = *(int *)(iVar4 + 8);
    uVar7 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
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
  iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_01ef5994 + 0x1ef5960));
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0229f06c(0xd,0,piVar2,0);
  if (iVar5 == 0) {
    func_0x01ee81d4(iVar4,iVar1,0,piVar2);
  }
  else {
    iVar5 = func_0x0229f13c(0xd,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar5,iVar4,iVar1,piVar2);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$MarkPopupDone RVA 0x29945f0 =====

void FUN_029a45f0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6634,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6634,0);
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
  *(undefined1 *)(param_1 + 0x74) = 1;
  return;
}



// ===== FAT.ActivityOrderLike$$SetupFresh RVA 0x2994648 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a4648(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_029a4b48 + 0x29a4660);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a4b4c + 0x29a4674));
    func_0x01384978(*(undefined4 *)(_UNK_029a4b50 + 0x29a4680));
    func_0x01384978(*(undefined4 *)(_UNK_029a4b54 + 0x29a468c));
    func_0x01384978(*(undefined4 *)(_UNK_029a4b58 + 0x29a4698));
    func_0x01384978(*(undefined4 *)(_UNK_029a4b5c + 0x29a46a4));
    func_0x01384978(*(undefined4 *)(_UNK_029a4b60 + 0x29a46b0));
    func_0x01384978(*(undefined4 *)(_UNK_029a4b64 + 0x29a46bc));
    func_0x01384978(*(undefined4 *)(_UNK_029a4b68 + 0x29a46c8));
    *pcVar4 = '\x01';
  }
  uStack_34 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x6635,0);
  if (iVar1 == 0) {
    FUN_029a2a5c(param_1);
    FUN_029a2d18(param_1);
    iVar1 = FUN_029a3260(param_1);
    iVar5 = *(int *)(param_1 + 0x90);
    uStack_30 = *(undefined8 *)(param_1 + 0x50);
    uStack_28 = *(undefined4 *)(param_1 + 0x58);
    if (iVar1 == 0) {
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_30,*(undefined4 *)(iVar5 + 0x28),param_1,0,1,0);
      iVar1 = *(int *)(param_1 + 0x90);
      uStack_38 = *(undefined4 *)(param_1 + 0x48);
      uStack_34 = *(undefined4 *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&uStack_38,*(undefined4 *)(iVar1 + 0x30),0);
      iVar1 = *(int *)(param_1 + 0x90);
      uStack_30 = *(undefined8 *)(param_1 + 0x3c);
      uStack_28 = *(undefined4 *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x34),param_1,0,1,0);
      iVar1 = *(int *)(param_1 + 0x90);
      uStack_38 = *(undefined4 *)(param_1 + 0x5c);
      uStack_34 = *(undefined4 *)(param_1 + 0x60);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar2 = (undefined4 *)(iVar1 + 0x38);
    }
    else {
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_30,*(undefined4 *)(iVar5 + 0x4c),param_1,0,1,0);
      iVar1 = *(int *)(param_1 + 0x90);
      uStack_38 = *(undefined4 *)(param_1 + 0x48);
      uStack_34 = *(undefined4 *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64540(&uStack_38,*(undefined4 *)(iVar1 + 0x40),0);
      iVar1 = *(int *)(param_1 + 0x90);
      uStack_30 = *(undefined8 *)(param_1 + 0x3c);
      uStack_28 = *(undefined4 *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x48),param_1,0,1,0);
      iVar1 = *(int *)(param_1 + 0x90);
      uStack_38 = *(undefined4 *)(param_1 + 0x5c);
      uStack_34 = *(undefined4 *)(param_1 + 0x60);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      puVar2 = (undefined4 *)(iVar1 + 0x50);
    }
    func_0x02b64540(&uStack_38,*puVar2,0);
    iVar1 = *(int *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined1 *)(param_1 + 0xd4) = 0;
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar5) {
      func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
    }
    puVar2 = *(undefined4 **)(_UNK_029a4b6c + 0x29a4954);
    iVar1 = *(int *)(param_1 + 0xb8);
    uVar3 = func_0x01384be4(*puVar2);
    func_0x029a89dc(uVar3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(uint *)(iVar1 + 0xc);
    piVar7 = *(int **)(_UNK_029a4b70 + 0x29a4994);
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    iVar8 = *piVar7;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (uVar6 < *(uint *)(iVar5 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar6 + 1;
      *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = uVar3;
    }
    else {
      func_0x0328f170(iVar1,uVar3,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
    }
    iVar1 = *(int *)(param_1 + 0xb8);
    uVar3 = func_0x01384be4(*puVar2);
    func_0x029a89dc(uVar3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(uint *)(iVar1 + 0xc);
    iVar8 = *piVar7;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (uVar6 < *(uint *)(iVar5 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar6 + 1;
      *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = uVar3;
    }
    else {
      func_0x0328f170(iVar1,uVar3,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
    }
    *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
    *(undefined4 *)(param_1 + 200) = 0xffffffff;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x88);
    uVar3 = *(undefined4 *)(param_1 + 0xb8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a9b4(iVar1,uVar3,**(undefined4 **)(_UNK_029a4b74 + 0x29a4aa0));
    if (*(int *)(**(int **)(_UNK_029a4b78 + 0x29a4ab4) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_029a4b7c + 0x29a4ad0));
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_029a4b80 + 0x29a4ae4));
    func_0x0478dedc(uVar3,param_1,**(undefined4 **)(_UNK_029a4b84 + 0x29a4b00),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028be400(iVar1,uVar3,0);
    FUN_0299eae0(param_1,0,0,0);
    FUN_029a1980(param_1);
  }
  else {
    iVar1 = func_0x0229f13c(0x6635,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$AddToken RVA 0x2994b88 =====

/* WARNING: Removing unreachable block (ram,0x029a5504) */
/* WARNING: Removing unreachable block (ram,0x029a5510) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a4b88(int param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  bool bVar17;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  
  pcVar10 = (char *)(_UNK_029a4dd8 + 0x29a4ba8);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a4ddc + 0x29a4bc0));
    func_0x01384978(*(undefined4 *)(_UNK_029a4de0 + 0x29a4bcc));
    func_0x01384978(*(undefined4 *)(_UNK_029a4de4 + 0x29a4bd8));
    func_0x01384978(*(undefined4 *)(_UNK_029a4de8 + 0x29a4be4));
    func_0x01384978(*(undefined4 *)(_UNK_029a4dec + 0x29a4bf0));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x62b,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x90);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar2 + 0x54) == param_2) || (iVar2 = FUN_0299e438(param_1), iVar2 == param_2)) {
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + param_3;
      iVar11 = *(int *)(param_1 + 0x6c) + param_3;
      iVar2 = FUN_0299e230(param_1);
      if (iVar2 < iVar11) {
        iVar11 = FUN_0299e230(param_1);
      }
      *(int *)(param_1 + 0x6c) = iVar11;
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      func_0x029a4dfc(param_1,param_4);
      if (*(int *)(**(int **)(_UNK_029a4df0 + 0x29a4ccc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_029a4df4 + 0x29a4ce8));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar2,0);
      uVar3 = FUN_0299e1dc(param_1);
      piVar12 = *(int **)(_UNK_029a4df8 + 0x29a4d24);
      iVar2 = *piVar12;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar12;
      }
      piStack_28 = (int *)0x0;
      func_0x019a4b9c(param_2,param_3,uVar3,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x244));
      iVar2 = *(int *)(param_1 + 0x90);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x44);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar2 + 0xc)) {
        iVar2 = *(int *)(param_1 + 0xd0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(iVar2 + 0xc);
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        if (0 < iVar11) {
          func_0x0484e5ec(*(undefined4 *)(iVar2 + 8),0,iVar11,0);
        }
        pcVar10 = (char *)(_UNK_029a56b8 + 0x29a4f00);
        if (*pcVar10 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_029a56bc + 0x29a4f14));
          func_0x01384978(*(undefined4 *)(_UNK_029a56c0 + 0x29a4f20));
          func_0x01384978(*(undefined4 *)(_UNK_029a56c4 + 0x29a4f2c));
          func_0x01384978(*(undefined4 *)(_UNK_029a56c8 + 0x29a4f38));
          func_0x01384978(*(undefined4 *)(_UNK_029a56cc + 0x29a4f44));
          func_0x01384978(*(undefined4 *)(_UNK_029a56d0 + 0x29a4f50));
          func_0x01384978(*(undefined4 *)(_UNK_029a56d4 + 0x29a4f5c));
          func_0x01384978(*(undefined4 *)(_UNK_029a56d8 + 0x29a4f68));
          func_0x01384978(*(undefined4 *)(_UNK_029a56dc + 0x29a4f74));
          func_0x01384978(*(undefined4 *)(_UNK_029a56e0 + 0x29a4f80));
          func_0x01384978(*(undefined4 *)(_UNK_029a56e4 + 0x29a4f8c));
          func_0x01384978(*(undefined4 *)(_UNK_029a56e8 + 0x29a4f98));
          func_0x01384978(*(undefined4 *)(_UNK_029a56ec + 0x29a4fa4));
          func_0x01384978(*(undefined4 *)(_UNK_029a56f0 + 0x29a4fb0));
          *pcVar10 = '\x01';
        }
        piStack_28 = (int *)0x0;
        uStack_2c = 0;
        uStack_30 = 0;
        iVar2 = func_0x0229f06c(0x633,0);
        if (iVar2 == 0) {
          if (*(char *)(param_1 + 0xd4) != '\0') {
            cVar1 = *(char *)(param_1 + 0xa0);
            bVar17 = cVar1 == '\0';
            if (bVar17) {
              cVar1 = *(char *)(param_1 + 0xb0);
            }
            if (bVar17 && cVar1 == '\0') {
              iVar2 = FUN_0299e1dc(param_1);
              iVar11 = FUN_0299e230(param_1);
              if ((iVar11 <= iVar2) &&
                 (iVar2 = FUN_0299e69c(param_1,&uStack_2c,&piStack_28,&uStack_30),
                 piVar12 = piStack_28, iVar2 != 0)) {
                iVar2 = *(int *)(param_1 + 0xbc);
                if (piStack_28 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar11 = *piVar12;
                iVar9 = iVar2 + 1;
                uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
                  do {
                    if (piVar8[-1] == **(int **)(_UNK_029a56f4 + 0x29a5094)) {
                      puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
                      goto LAB_029a50dc;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 2;
                  } while (uVar7 != 0);
                }
                puVar4 = (undefined4 *)
                         func_0x014002dc(piVar12,**(int **)(_UNK_029a56f4 + 0x29a5094),0);
LAB_029a50dc:
                iVar11 = (*(code *)*puVar4)(piVar12,puVar4[1]);
                piVar12 = piStack_28;
                if (iVar9 <= iVar11) {
                  if (piStack_28 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar11 = *piVar12;
                  uVar7 = (uint)*(ushort *)(iVar11 + 0xb6);
                  if (uVar7 != 0) {
                    piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
                    do {
                      if (piVar8[-1] == **(int **)(_UNK_029a56f8 + 0x29a5118)) {
                        puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
                        goto LAB_029a5160;
                      }
                      uVar7 = uVar7 - 1;
                      piVar8 = piVar8 + 2;
                    } while (uVar7 != 0);
                  }
                  puVar4 = (undefined4 *)
                           func_0x014002dc(piVar12,**(int **)(_UNK_029a56f8 + 0x29a5118),0);
LAB_029a5160:
                  uVar3 = (*(code *)*puVar4)(piVar12,iVar2,puVar4[1]);
                  iVar2 = func_0x01807224(uVar3,0);
                  if (iVar2 != 0) {
                    iVar5 = *(int *)(param_1 + 0x90);
                    iVar11 = 0;
                    if (iVar5 != 0) {
                      iVar11 = *(int *)(iVar5 + 0x44);
                    }
                    if ((((iVar5 != 0 && iVar11 != 0) && (0 < *(int *)(iVar11 + 0xc))) &&
                        (iVar5 = *(int *)(param_1 + 0x9c), -1 < iVar5)) &&
                       (iVar5 < *(int *)(iVar11 + 0xc))) {
                      uVar3 = func_0x0364c9b8(iVar11,iVar5,
                                              **(undefined4 **)(_UNK_029a56fc + 0x29a54d4));
                      *(undefined4 *)(param_1 + 0xb4) = uVar3;
                    }
                    iVar11 = *(int *)(param_1 + 0xd0);
                    if (iVar11 == 0) {
                      func_0x01384bf0();
                    }
                    iVar5 = *(int *)(iVar11 + 0xc);
                    *(undefined4 *)(iVar11 + 0xc) = 0;
                    *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
                    if (0 < iVar5) {
                      func_0x0484e5ec(*(undefined4 *)(iVar11 + 8),0,iVar5,0);
                    }
                    iVar2 = *(int *)(iVar2 + 0x1c);
                    if (iVar2 == 0) {
                      func_0x01384bf0();
                    }
                    piVar12 = (int *)func_0x03653608(iVar2,**(undefined4 **)
                                                             (_UNK_029a5700 + 0x29a51f8));
LAB_029a5208:
                    if (piVar12 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar2 = *piVar12;
                    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
                    if (uVar7 != 0) {
                      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                      do {
                        if (piVar8[-1] == **(int **)(_UNK_029a5720 + 0x29a5224)) {
                          puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
                          goto LAB_029a526c;
                        }
                        uVar7 = uVar7 - 1;
                        piVar8 = piVar8 + 2;
                      } while (uVar7 != 0);
                    }
                    puVar4 = (undefined4 *)
                             func_0x014002dc(piVar12,**(int **)(_UNK_029a5720 + 0x29a5224),0);
LAB_029a526c:
                    iVar2 = (*(code *)*puVar4)(piVar12,puVar4[1]);
                    if (iVar2 != 0) {
                      if (piVar12 == (int *)0x0) {
                        func_0x01384bf0();
                      }
                      iVar2 = *piVar12;
                      uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
                      if (uVar7 != 0) {
                        piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == **(int **)(_UNK_029a5704 + 0x29a52a0)) {
                            puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
                            goto LAB_029a52e8;
                          }
                          uVar7 = uVar7 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar7 != 0);
                      }
                      puVar4 = (undefined4 *)
                               func_0x014002dc(piVar12,**(int **)(_UNK_029a5704 + 0x29a52a0),0);
LAB_029a52e8:
                      uVar3 = (*(code *)*puVar4)(piVar12,puVar4[1]);
                      if (*(int *)(**(int **)(_UNK_029a5708 + 0x29a5308) + 0x74) == 0) {
                        func_0x01384ab4();
                      }
                      func_0x02566088(&uStack_3c,uVar3,0);
                      uVar6 = uStack_38;
                      uVar3 = uStack_3c;
                      iVar11 = *(int *)(param_1 + 0xd0);
                      iVar2 = func_0x01c24918(0);
                      if (iVar2 == 0) {
                        func_0x01384bf0();
                      }
                      iVar5 = *(int *)(iVar2 + 0x40);
                      iVar2 = **(int **)(_UNK_029a570c + 0x29a5358);
                      if (*(int *)(iVar2 + 0x74) == 0) {
                        func_0x01384ab4();
                        iVar2 = **(int **)(_UNK_029a5710 + 0x29a5378);
                      }
                      uVar15 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x248);
                      if (iVar5 == 0) {
                        func_0x01384bf0();
                      }
                      uVar3 = func_0x01cdcbac(iVar5,uVar3,uVar6,uVar15,0,0,0,0x481,
                                              **(undefined4 **)(_UNK_029a5714 + 0x29a5398),
                                              **(undefined4 **)(_UNK_029a5718 + 0x29a53a4),0);
                      if (iVar11 == 0) {
                        func_0x01384bf0();
                      }
                      iVar2 = *(int *)(iVar11 + 8);
                      uVar7 = *(uint *)(iVar11 + 0xc);
                      piVar8 = *(int **)(_UNK_029a571c + 0x29a5404);
                      *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
                      iVar5 = *piVar8;
                      if (iVar2 == 0) {
                        func_0x01384bf0();
                      }
                      if (uVar7 < *(uint *)(iVar2 + 0xc)) {
                        *(uint *)(iVar11 + 0xc) = uVar7 + 1;
                        *(undefined4 *)(iVar2 + uVar7 * 4 + 0x10) = uVar3;
                      }
                      else {
                        func_0x0328f170(iVar11,uVar3,
                                        *(undefined4 *)
                                         (*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
                      }
                      goto LAB_029a5208;
                    }
                    if (piVar12 != (int *)0x0) {
                      iVar2 = *piVar12;
                      uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
                      if (uVar7 != 0) {
                        piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                        do {
                          if (piVar8[-1] == **(int **)(_UNK_029a5724 + 0x29a546c)) {
                            puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
                            goto LAB_029a54ec;
                          }
                          uVar7 = uVar7 - 1;
                          piVar8 = piVar8 + 2;
                        } while (uVar7 != 0);
                      }
                      puVar4 = (undefined4 *)
                               func_0x014002dc(piVar12,**(int **)(_UNK_029a5724 + 0x29a546c),0);
LAB_029a54ec:
                      (*(code *)*puVar4)(piVar12,puVar4[1]);
                    }
                    *(undefined1 *)(param_1 + 0xb0) = 1;
                    func_0x029a6f04(param_1);
                  }
                }
                iVar2 = FUN_0299e1dc(param_1);
                iVar11 = FUN_0299e230(param_1);
                uVar3 = FUN_0299e1dc(param_1);
                uVar6 = FUN_0299e230(param_1);
                uVar15 = *(undefined4 *)(param_1 + 0x9c);
                iVar5 = func_0x01c34eb8(0);
                iVar16 = *(int *)(param_1 + 0x90);
                iVar13 = *(int *)(param_1 + 0x9c);
                iVar14 = *(int *)(param_1 + 0xa8);
                if (iVar16 == 0) {
                  func_0x01384bf0();
                }
                iVar16 = *(int *)(iVar16 + 0x44);
                if (iVar16 == 0) {
                  func_0x01384bf0();
                }
                func_0x019b73e4(param_1,iVar9,iVar11 <= iVar2,uVar3,uVar6,uVar15,iVar5 - iVar14,
                                *(int *)(iVar16 + 0xc) <= iVar13,0);
              }
            }
          }
        }
        else {
          iVar2 = func_0x0229f13c(0x633,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x02173f80(iVar2,param_1,0);
        }
        return;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x62b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    piStack_28 = param_4;
    func_0x02179c40(iVar2,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$TrackMilestone RVA 0x2994dfc =====

void FUN_029a4dfc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar6 = 0;
  iVar1 = func_0x0229f06c(0x62e,0);
  if (iVar1 == 0) {
    iVar1 = FUN_029a3260(param_1);
    uStack_28 = *(undefined4 *)(param_1 + 0x70);
    uVar4 = *(undefined4 *)(param_1 + 100);
    iVar2 = FUN_0299e1dc(param_1);
    iVar3 = FUN_0299e230(param_1);
    uVar5 = FUN_0299e1dc(param_1);
    uStack_38 = FUN_0299e230(param_1);
    if (iVar1 != 0) {
      iVar6 = *(int *)(param_1 + 0x9c) + 1;
    }
    uStack_40 = (uint)(iVar3 <= iVar2);
    uStack_30 = 0;
    uStack_3c = uVar5;
    iStack_34 = iVar6;
    func_0x019b7108(param_1,uVar4,param_2,uStack_28);
    return;
  }
  iVar1 = func_0x0229f13c(0x62e,0);
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
  iVar6 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar6,uVar5,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.ActivityOrderLike$$TryCheckRacePlayerFinish RVA 0x2994ee8 =====

/* WARNING: Removing unreachable block (ram,0x029a5504) */
/* WARNING: Removing unreachable block (ram,0x029a5510) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a4ee8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  bool bVar17;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *piStack_28;
  
  pcVar11 = (char *)(_UNK_029a56b8 + 0x29a4f00);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a56bc + 0x29a4f14));
    func_0x01384978(*(undefined4 *)(_UNK_029a56c0 + 0x29a4f20));
    func_0x01384978(*(undefined4 *)(_UNK_029a56c4 + 0x29a4f2c));
    func_0x01384978(*(undefined4 *)(_UNK_029a56c8 + 0x29a4f38));
    func_0x01384978(*(undefined4 *)(_UNK_029a56cc + 0x29a4f44));
    func_0x01384978(*(undefined4 *)(_UNK_029a56d0 + 0x29a4f50));
    func_0x01384978(*(undefined4 *)(_UNK_029a56d4 + 0x29a4f5c));
    func_0x01384978(*(undefined4 *)(_UNK_029a56d8 + 0x29a4f68));
    func_0x01384978(*(undefined4 *)(_UNK_029a56dc + 0x29a4f74));
    func_0x01384978(*(undefined4 *)(_UNK_029a56e0 + 0x29a4f80));
    func_0x01384978(*(undefined4 *)(_UNK_029a56e4 + 0x29a4f8c));
    func_0x01384978(*(undefined4 *)(_UNK_029a56e8 + 0x29a4f98));
    func_0x01384978(*(undefined4 *)(_UNK_029a56ec + 0x29a4fa4));
    func_0x01384978(*(undefined4 *)(_UNK_029a56f0 + 0x29a4fb0));
    *pcVar11 = '\x01';
  }
  piStack_28 = (int *)0x0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar2 = func_0x0229f06c(0x633,0);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0xd4) != '\0') {
      cVar1 = *(char *)(param_1 + 0xa0);
      bVar17 = cVar1 == '\0';
      if (bVar17) {
        cVar1 = *(char *)(param_1 + 0xb0);
      }
      if (bVar17 && cVar1 == '\0') {
        iVar2 = FUN_0299e1dc(param_1);
        iVar3 = FUN_0299e230(param_1);
        if ((iVar3 <= iVar2) &&
           (iVar2 = FUN_0299e69c(param_1,&uStack_2c,&piStack_28,&uStack_30), piVar7 = piStack_28,
           iVar2 != 0)) {
          iVar2 = *(int *)(param_1 + 0xbc);
          if (piStack_28 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = *piVar7;
          iVar12 = iVar2 + 1;
          uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar10[-1] == **(int **)(_UNK_029a56f4 + 0x29a5094)) {
                puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
                goto LAB_029a50dc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 2;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_029a56f4 + 0x29a5094),0);
LAB_029a50dc:
          iVar3 = (*(code *)*puVar4)(piVar7,puVar4[1]);
          piVar7 = piStack_28;
          if (iVar12 <= iVar3) {
            if (piStack_28 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar3 = *piVar7;
            uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar10[-1] == **(int **)(_UNK_029a56f8 + 0x29a5118)) {
                  puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
                  goto LAB_029a5160;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 2;
              } while (uVar9 != 0);
            }
            puVar4 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_029a56f8 + 0x29a5118),0);
LAB_029a5160:
            uVar5 = (*(code *)*puVar4)(piVar7,iVar2,puVar4[1]);
            iVar2 = func_0x01807224(uVar5,0);
            if (iVar2 != 0) {
              iVar6 = *(int *)(param_1 + 0x90);
              iVar3 = 0;
              if (iVar6 != 0) {
                iVar3 = *(int *)(iVar6 + 0x44);
              }
              if ((((iVar6 != 0 && iVar3 != 0) && (0 < *(int *)(iVar3 + 0xc))) &&
                  (iVar6 = *(int *)(param_1 + 0x9c), -1 < iVar6)) && (iVar6 < *(int *)(iVar3 + 0xc))
                 ) {
                uVar5 = func_0x0364c9b8(iVar3,iVar6,**(undefined4 **)(_UNK_029a56fc + 0x29a54d4));
                *(undefined4 *)(param_1 + 0xb4) = uVar5;
              }
              iVar3 = *(int *)(param_1 + 0xd0);
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              iVar6 = *(int *)(iVar3 + 0xc);
              *(undefined4 *)(iVar3 + 0xc) = 0;
              *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
              if (0 < iVar6) {
                func_0x0484e5ec(*(undefined4 *)(iVar3 + 8),0,iVar6,0);
              }
              iVar2 = *(int *)(iVar2 + 0x1c);
              if (iVar2 == 0) {
                func_0x01384bf0();
              }
              piVar7 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_029a5700 + 0x29a51f8));
LAB_029a5208:
              if (piVar7 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar2 = *piVar7;
              uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                do {
                  if (piVar10[-1] == **(int **)(_UNK_029a5720 + 0x29a5224)) {
                    puVar4 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
                    goto LAB_029a526c;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 2;
                } while (uVar9 != 0);
              }
              puVar4 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_029a5720 + 0x29a5224),0)
              ;
LAB_029a526c:
              iVar2 = (*(code *)*puVar4)(piVar7,puVar4[1]);
              if (iVar2 != 0) {
                if (piVar7 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar2 = *piVar7;
                uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                  do {
                    if (piVar10[-1] == **(int **)(_UNK_029a5704 + 0x29a52a0)) {
                      puVar4 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
                      goto LAB_029a52e8;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 2;
                  } while (uVar9 != 0);
                }
                puVar4 = (undefined4 *)
                         func_0x014002dc(piVar7,**(int **)(_UNK_029a5704 + 0x29a52a0),0);
LAB_029a52e8:
                uVar5 = (*(code *)*puVar4)(piVar7,puVar4[1]);
                if (*(int *)(**(int **)(_UNK_029a5708 + 0x29a5308) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x02566088(&uStack_3c,uVar5,0);
                uVar8 = uStack_38;
                uVar5 = uStack_3c;
                iVar3 = *(int *)(param_1 + 0xd0);
                iVar2 = func_0x01c24918(0);
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                iVar6 = *(int *)(iVar2 + 0x40);
                iVar2 = **(int **)(_UNK_029a570c + 0x29a5358);
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar2 = **(int **)(_UNK_029a5710 + 0x29a5378);
                }
                uVar15 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x248);
                if (iVar6 == 0) {
                  func_0x01384bf0();
                }
                uVar5 = func_0x01cdcbac(iVar6,uVar5,uVar8,uVar15,0,0,0,0x481,
                                        **(undefined4 **)(_UNK_029a5714 + 0x29a5398),
                                        **(undefined4 **)(_UNK_029a5718 + 0x29a53a4),0);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                iVar2 = *(int *)(iVar3 + 8);
                uVar9 = *(uint *)(iVar3 + 0xc);
                piVar10 = *(int **)(_UNK_029a571c + 0x29a5404);
                *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
                iVar6 = *piVar10;
                if (iVar2 == 0) {
                  func_0x01384bf0();
                }
                if (uVar9 < *(uint *)(iVar2 + 0xc)) {
                  *(uint *)(iVar3 + 0xc) = uVar9 + 1;
                  *(undefined4 *)(iVar2 + uVar9 * 4 + 0x10) = uVar5;
                }
                else {
                  func_0x0328f170(iVar3,uVar5,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
                }
                goto LAB_029a5208;
              }
              if (piVar7 != (int *)0x0) {
                iVar2 = *piVar7;
                uVar9 = (uint)*(ushort *)(iVar2 + 0xb6);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
                  do {
                    if (piVar10[-1] == **(int **)(_UNK_029a5724 + 0x29a546c)) {
                      puVar4 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
                      goto LAB_029a54ec;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 2;
                  } while (uVar9 != 0);
                }
                puVar4 = (undefined4 *)
                         func_0x014002dc(piVar7,**(int **)(_UNK_029a5724 + 0x29a546c),0);
LAB_029a54ec:
                (*(code *)*puVar4)(piVar7,puVar4[1]);
              }
              *(undefined1 *)(param_1 + 0xb0) = 1;
              func_0x029a6f04(param_1);
            }
          }
          iVar2 = FUN_0299e1dc(param_1);
          iVar3 = FUN_0299e230(param_1);
          uVar5 = FUN_0299e1dc(param_1);
          uVar8 = FUN_0299e230(param_1);
          uVar15 = *(undefined4 *)(param_1 + 0x9c);
          iVar6 = func_0x01c34eb8(0);
          iVar16 = *(int *)(param_1 + 0x90);
          iVar13 = *(int *)(param_1 + 0x9c);
          iVar14 = *(int *)(param_1 + 0xa8);
          if (iVar16 == 0) {
            func_0x01384bf0();
          }
          iVar16 = *(int *)(iVar16 + 0x44);
          if (iVar16 == 0) {
            func_0x01384bf0();
          }
          func_0x019b73e4(param_1,iVar12,iVar3 <= iVar2,uVar5,uVar8,uVar15,iVar6 - iVar14,
                          *(int *)(iVar16 + 0xc) <= iVar13,0);
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x633,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$WhenActive RVA 0x299572c =====

void FUN_029a572c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
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
  
  iVar2 = func_0x0229f06c(0x6636,0);
  if (iVar2 == 0) {
    if (param_2 != 0) {
      cVar1 = *(char *)(param_1 + 0x74);
      bVar6 = cVar1 == '\0';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0x75);
      }
      if (bVar6 && cVar1 == '\0') {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0xfc);
        uVar5 = *(undefined4 *)(param_1 + 0x58);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_18 = 0;
        func_0x01e7437c(iVar2,uVar5,0,0);
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        FUN_029a41a8(param_1,*(undefined4 *)(iVar2 + 0xfc),0);
        *(undefined1 *)(param_1 + 0x75) = 1;
      }
    }
    return;
  }
  iVar2 = func_0x0229f13c(0x6636,0);
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
  func_0x01485228(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
  return;
}



// ===== FAT.ActivityOrderLike$$TryPopup RVA 0x2995828 =====

void FUN_029a5828(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  iVar2 = func_0x0229f06c(0x6637,0);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_1 + 0x74);
    bVar4 = cVar1 == '\0';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x75);
    }
    if (bVar4 && cVar1 == '\0') {
      uVar3 = *(undefined4 *)(param_1 + 0x58);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(param_2,uVar3,param_3,0,0);
      FUN_029a41a8(param_1,param_2,param_3);
      *(undefined1 *)(param_1 + 0x75) = 1;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x6637,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$OnMergeBoardMainOpenForRoundStartPopup RVA 0x29958f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_029a58f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x6630,0);
  if (iVar1 == 0) {
    bVar6 = *(char *)(param_1 + 0x7c) != '\0';
    iVar1 = 0;
    if (bVar6) {
      iVar1 = *(int *)(param_1 + 0x80);
    }
    if (!bVar6 || iVar1 == 0) {
      return;
    }
    uStack_18 = 0;
    func_0x01e7437c(iVar1,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x84),0);
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    pcVar4 = (char *)(_UNK_029a5ab8 + 0x29a59a0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_029a5abc + 0x29a59b4));
      func_0x01384978(*(undefined4 *)(_UNK_029a5ac0 + 0x29a59c0));
      func_0x01384978(*(undefined4 *)(_UNK_029a5ac4 + 0x29a59cc));
      func_0x01384978(*(undefined4 *)(_UNK_029a5ac8 + 0x29a59d8));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x6631,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x88) != '\0') {
        if (*(int *)(**(int **)(_UNK_029a5acc + 0x29a5a3c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_029a5ad0 + 0x29a5a58));
        uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_029a5ad4 + 0x29a5a6c));
        func_0x0478dedc(uVar5,param_1,**(undefined4 **)(_UNK_029a5ad8 + 0x29a5a8c),0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x028beac8(iVar1,uVar5,0);
        *(undefined1 *)(param_1 + 0x88) = 0;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x6631,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6630,0);
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
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2);
  return;
}



// ===== FAT.ActivityOrderLike$$RemoveRoundStartMainBoardOpenListener RVA 0x299598c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a598c(int param_1)

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
  
  pcVar4 = (char *)(_UNK_029a5ab8 + 0x29a59a0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a5abc + 0x29a59b4));
    func_0x01384978(*(undefined4 *)(_UNK_029a5ac0 + 0x29a59c0));
    func_0x01384978(*(undefined4 *)(_UNK_029a5ac4 + 0x29a59cc));
    func_0x01384978(*(undefined4 *)(_UNK_029a5ac8 + 0x29a59d8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6631,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6631,0);
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
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    if (*(int *)(**(int **)(_UNK_029a5acc + 0x29a5a3c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_029a5ad0 + 0x29a5a58));
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_029a5ad4 + 0x29a5a6c));
    func_0x0478dedc(uVar5,param_1,**(undefined4 **)(_UNK_029a5ad8 + 0x29a5a8c),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028beac8(iVar1,uVar5,0);
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  return;
}



// ===== FAT.ActivityOrderLike$$TryGetScoreTipText RVA 0x2995adc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029a5adc(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  
  pcVar6 = (char *)(_UNK_029a5c9c + 0x29a5afc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a5ca0 + 0x29a5b14));
    func_0x01384978(*(undefined4 *)(_UNK_029a5ca4 + 0x29a5b20));
    func_0x01384978(*(undefined4 *)(_UNK_029a5ca8 + 0x29a5b2c));
    func_0x01384978(*(undefined4 *)(_UNK_029a5cac + 0x29a5b38));
    func_0x01384978(*(undefined4 *)(_UNK_029a5cb0 + 0x29a5b44));
    *pcVar6 = '\x01';
  }
  uVar9 = 0;
  iVar1 = func_0x0229f06c(0x6638,0);
  if (iVar1 == 0) {
    *param_4 = 0;
    if ((param_2 < param_3) && (iVar1 = *(int *)(param_1 + 0x94), iVar1 != 0)) {
      iVar5 = *(int *)(iVar1 + 0x28);
      iVar1 = *(int *)(iVar1 + 0x24);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar5 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)(iVar1 + 0xc);
      if (iVar8 < *(int *)(iVar1 + 0xc)) {
        piVar2 = (int *)(iVar5 + 0xc);
      }
      iVar8 = *piVar2;
      puVar7 = *(undefined4 **)(_UNK_029a5cb4 + 0x29a5c04);
      do {
        iVar8 = iVar8 + -1;
        if (iVar8 < 0) {
          return 0;
        }
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x0364c9b8(iVar5,iVar8,*puVar7);
      } while ((iVar3 <= param_2) || (param_3 < iVar3));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar9 = func_0x03653d1c(iVar1,iVar8,**(undefined4 **)(_UNK_029a5cb8 + 0x29a5c54));
      if (*(int *)(**(int **)(_UNK_029a5cbc + 0x29a5c6c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar4 = func_0x028c1350(uVar9,0);
      uVar9 = 1;
      *param_4 = uVar4;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6638,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x02240028(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar9;
}



// ===== FAT.ActivityOrderLike$$GetExtraRewardMiniThemeRes RVA 0x2995cc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029a5cc0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_029a5f34 + 0x29a5cdc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a5f38 + 0x29a5cf0));
    func_0x01384978(*(undefined4 *)(_UNK_029a5f3c + 0x29a5cfc));
    func_0x01384978(*(undefined4 *)(_UNK_029a5f40 + 0x29a5d08));
    func_0x01384978(*(undefined4 *)(_UNK_029a5f44 + 0x29a5d14));
    func_0x01384978(*(undefined4 *)(_UNK_029a5f48 + 0x29a5d20));
    func_0x01384978(*(undefined4 *)(_UNK_029a5f4c + 0x29a5d2c));
    func_0x01384978(*(undefined4 *)(_UNK_029a5f50 + 0x29a5d38));
    func_0x01384978(*(undefined4 *)(_UNK_029a5f54 + 0x29a5d44));
    func_0x01384978(*(undefined4 *)(_UNK_029a5f58 + 0x29a5d50));
    *pcVar5 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x6639,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_029a5f5c + 0x29a5db4));
    func_0x029a89e4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 8) = param_1;
    if (param_2 == 0) {
      param_2 = func_0x01384be4(**(undefined4 **)(_UNK_029a5f60 + 0x29a5e5c));
      func_0x041cf488(param_2,iVar1,**(undefined4 **)(_UNK_029a5f64 + 0x29a5e7c),0);
      iVar2 = func_0x018252fc(param_2,0);
      if (iVar2 != 0) {
        param_2 = *(int *)(iVar2 + 0x10);
      }
      if (iVar2 == 0 || param_2 == 0) {
        uStack_18 = *(undefined4 *)(iVar1 + 8);
        puVar6 = *(undefined4 **)(_UNK_029a5f68 + 0x29a5eb0);
        uVar3 = func_0x01384abc(*puVar6,&uStack_18);
        uStack_1c = 0;
        uVar4 = func_0x01384abc(*puVar6,&uStack_1c);
        uVar3 = func_0x0467272c(**(undefined4 **)(_UNK_029a5f6c + 0x29a5ee8),uVar3,uVar4,0);
        if (*(int *)(**(int **)(_UNK_029a5f70 + 0x29a5efc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2874(uVar3,0);
        return **(undefined4 **)(**(int **)(_UNK_029a5f74 + 0x29a5f24) + 0x5c);
      }
    }
    iVar1 = func_0x018055bc(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01822f2c(*(undefined4 *)(iVar1 + 0x28),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03470a60(iVar1,**(undefined4 **)(_UNK_029a5f7c + 0x29a5e40),&uStack_14,
                    **(undefined4 **)(_UNK_029a5f78 + 0x29a5e34));
  }
  else {
    iVar1 = func_0x0229f13c(0x6639,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x021ae998(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityOrderLike$$FAT.IActivityOrderHandler.IsValidForBoard RVA 0x2995f80 =====

uint FUN_029a5f80(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
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
  
  iVar2 = func_0x0229f06c(0x663c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x663c,0);
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
    func_0x01485238(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    uVar1 = func_0x0245496c(&uStack_38,0,0);
    return uVar1;
  }
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  return (uint)(*(int *)(iVar2 + 0x18) == param_2);
}



// ===== FAT.ActivityOrderLike$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x2995ff8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_029a5ff8(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  pcVar9 = (char *)(_UNK_029a6634 + 0x29a6018);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a6638 + 0x29a6030));
    func_0x01384978(*(undefined4 *)(_UNK_029a663c + 0x29a603c));
    func_0x01384978(*(undefined4 *)(_UNK_029a6640 + 0x29a6048));
    func_0x01384978(*(undefined4 *)(_UNK_029a6644 + 0x29a6054));
    func_0x01384978(*(undefined4 *)(_UNK_029a6648 + 0x29a6060));
    *pcVar9 = '\x01';
  }
  iStack_2c = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  iVar1 = func_0x0229f06c(0x663d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x663d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
    return iVar1;
  }
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_029a664c + 0x29a60e8)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x310);
          goto LAB_029a6130;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_029a664c + 0x29a60e8),0x4a);
LAB_029a6130:
    iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (iVar1 != 0) {
      return 0;
    }
  }
  uStack_44 = func_0x02b4429c(param_1,0);
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_40 = *(undefined4 *)(iVar1 + 0x54);
  uVar3 = func_0x02b449f8(param_1,0);
  piVar8 = *(int **)(_UNK_029a6650 + 0x29a6190);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x01e41d38(param_2,uVar3,0);
  iVar10 = *(int *)(*(int *)(*piVar8 + 0x5c) + 0x1c);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  iVar10 = func_0x01e4b23c(iVar10,param_2,0);
  if (iVar10 == 0) {
LAB_029a6240:
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x01e4b23c(iVar1,param_2,0);
    if (iVar10 != 0) {
      uVar3 = func_0x02b449f8(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
        iVar10 = func_0x01e4ef14(0,param_2,uVar3,0);
        if (iVar10 == 0) {
          func_0x01384bf0();
          goto LAB_029a62c0;
        }
      }
      else {
        iVar10 = func_0x01e4ef14(iVar1,param_2,uVar3,0);
        if (iVar10 == 0) {
LAB_029a62c0:
          func_0x01e4df68(iVar1,param_2,0);
        }
      }
    }
    iVar10 = *(int *)(param_1 + 0x8c);
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = param_2[5];
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = func_0x03d37358(iVar10,iVar11,&iStack_30,**(undefined4 **)(_UNK_029a6654 + 0x29a6304));
    if (iVar10 == 0) {
      return 0;
    }
    iVar10 = *(int *)(param_1 + 0x94);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0x18);
    iVar11 = FUN_029a19fc(param_1);
    iVar10 = iVar10 - iVar11;
    if (iVar10 < 1) {
      return 0;
    }
    iVar11 = *(int *)(param_1 + 0x90);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    if ((*(char *)(iVar11 + 0x2d) != '\0') && (iVar10 < iStack_30)) {
      return 0;
    }
    iVar4 = *(int *)(param_1 + 0x68);
    iVar11 = param_2[5];
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x03d5bb20(iVar4,iVar11,&iStack_34,**(undefined4 **)(_UNK_029a6658 + 0x29a6390));
    iVar11 = iStack_34;
    if (iVar4 == 0) {
      iVar11 = *(int *)(param_1 + 0x68);
      iVar4 = param_2[5];
      if (iVar11 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar11,iVar4,1,**(undefined4 **)(_UNK_029a6660 + 0x29a6414));
    }
    else {
      if (iStack_2c <= iStack_34) {
        return 0;
      }
      iVar4 = *(int *)(param_1 + 0x68);
      iVar5 = param_2[5];
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar4,iVar5,iVar11 + 1,**(undefined4 **)(_UNK_029a665c + 0x29a63dc));
    }
    iVar11 = *(int *)(param_1 + 0x90);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    if (iStack_30 <= iVar10) {
      iVar10 = iStack_30;
    }
    piVar8 = *(int **)(_UNK_029a6664 + 0x29a6444);
    iVar4 = *piVar8;
    if (*(char *)(iVar11 + 0x2d) != '\0') {
      iVar10 = iStack_30;
    }
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar8;
    }
    iVar11 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x1c);
    uVar3 = func_0x02b449f8(param_1,0);
    uVar6 = func_0x02b4429c(param_1,0);
    iVar4 = *(int *)(param_1 + 0x90);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar12 = *(undefined4 *)(iVar4 + 0x54);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x01e4bc70(iVar11,param_2,uVar3,uVar6,uVar12,iVar10,0);
    iVar11 = 1;
    piVar8 = *(int **)(_UNK_029a6668 + 0x29a64e4);
  }
  else {
    iVar10 = *piVar8;
    if (*(int *)(iVar10 + 0x74) == 0) {
      func_0x01384ab4();
      iVar10 = *piVar8;
    }
    iVar10 = *(int *)(*(int *)(iVar10 + 0x5c) + 0x1c);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar11 = 0;
    iVar4 = func_0x01e4b2b0(iVar10,param_2,0);
    iVar5 = func_0x02b449f8(param_1,0);
    iVar10 = 0;
    if (iVar4 != iVar5) goto LAB_029a6240;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar4 = func_0x01e4b23c(0,param_2,0);
    if (iVar4 != 0) {
      func_0x01384bf0();
      goto LAB_029a6528;
    }
  }
  else {
    iVar4 = func_0x01e4b23c(iVar1,param_2,0);
    if (iVar4 != 0) {
LAB_029a6528:
      iVar13 = 0;
      iVar4 = func_0x01e4b2b0(iVar1,param_2,0);
      iVar5 = func_0x02b449f8(param_1,0);
      if (iVar4 == iVar5) goto LAB_029a6618;
    }
  }
  if (iVar11 == 0) {
    iVar10 = *piVar8;
    if (*(int *)(iVar10 + 0x74) == 0) {
      func_0x01384ab4();
      iVar10 = *piVar8;
    }
    iVar10 = *(int *)(*(int *)(iVar10 + 0x5c) + 0x1c);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uStack_44 = func_0x01e4bb68(iVar10,param_2,0);
    iVar10 = *(int *)(*(int *)(*piVar8 + 0x5c) + 0x1c);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    func_0x01e4b3b8(&uStack_3c,iVar10,param_2,0);
    uStack_40 = uStack_3c;
    iVar10 = iStack_38;
  }
  uVar3 = func_0x02b449f8(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4bc70(iVar1,param_2,uVar3,uStack_44,uStack_40,iVar10,0);
  iVar13 = 1;
LAB_029a6618:
  iVar1 = func_0x01f2a218(0);
  if (iVar1 != 0) {
    iVar11 = iVar13;
  }
  return iVar11;
}



// ===== FAT.ActivityOrderLike$$get_corner_entry_res_key RVA 0x299666c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029a666c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_029a6788 + 0x29a6684);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a678c + 0x29a6698));
    func_0x01384978(*(undefined4 *)(_UNK_029a6790 + 0x29a66a4));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x663e,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(iVar1 + 0x2c) == '\0') {
      uStack_14 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03470a60(iVar1,**(undefined4 **)(_UNK_029a6798 + 0x29a6760),&uStack_14,
                              **(undefined4 **)(_UNK_029a6794 + 0x29a6754));
      if (iVar1 == 0) {
        uStack_14 = 0;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x663e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityOrderLike$$get_buff_entry_res_key RVA 0x299679c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029a679c(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_029a6894 + 0x29a67b4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a6898 + 0x29a67c8));
    func_0x01384978(*(undefined4 *)(_UNK_029a689c + 0x29a67d4));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x663f,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03470a60(iVar1,**(undefined4 **)(_UNK_029a68a4 + 0x29a6874),&uStack_14,
                            **(undefined4 **)(_UNK_029a68a0 + 0x29a6868));
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x663f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityOrderLike$$get_trail_res_key RVA 0x29968a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029a68a8(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_029a69a0 + 0x29a68c0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a69a4 + 0x29a68d4));
    func_0x01384978(*(undefined4 *)(_UNK_029a69a8 + 0x29a68e0));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x6640,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03470a60(iVar1,**(undefined4 **)(_UNK_029a69b0 + 0x29a6980),&uStack_14,
                            **(undefined4 **)(_UNK_029a69ac + 0x29a6974));
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6640,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityOrderLike$$FAT.Merge.ISpawnEffectWithTrail.AddTrail RVA 0x29969b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a69b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_029a6b58 + 0x29a69d4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a6b5c + 0x29a69e8));
    func_0x01384978(*(undefined4 *)(_UNK_029a6b60 + 0x29a69f4));
    func_0x01384978(*(undefined4 *)(_UNK_029a6b64 + 0x29a6a00));
    func_0x01384978(*(undefined4 *)(_UNK_029a6b68 + 0x29a6a0c));
    func_0x01384978(*(undefined4 *)(_UNK_029a6b6c + 0x29a6a18));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6641,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_029a6b70 + 0x29a6a7c));
    func_0x029a8a28(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar2 = *(undefined4 **)(_UNK_029a6b74 + 0x29a6aa4);
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = param_1;
    uVar3 = *puVar2;
    *(undefined4 *)(iVar1 + 0x10) = param_3;
    iVar4 = func_0x034aaa34(uVar3);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x01ee906c(iVar4,9,0);
    iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_029a6b78 + 0x29a6ae8));
    uVar5 = FUN_029a68a8(param_1);
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_029a6b7c + 0x29a6b08));
    func_0x03ccb96c(uVar6,iVar1,**(undefined4 **)(_UNK_029a6b80 + 0x29a6b24),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x0244a2c0(iVar4,uVar5,uVar3,uVar6,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x6641,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$SliderPrefabAsset RVA 0x2996b84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029a6b84(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_029a6c7c + 0x29a6b9c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a6c80 + 0x29a6bb0));
    func_0x01384978(*(undefined4 *)(_UNK_029a6c84 + 0x29a6bbc));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x6647,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03470a60(iVar1,**(undefined4 **)(_UNK_029a6c8c + 0x29a6c5c),&uStack_14,
                            **(undefined4 **)(_UNK_029a6c88 + 0x29a6c50));
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6647,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityOrderLike$$TryCheckRaceFinishByBots RVA 0x2996c90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a6c90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint in_fpscr;
  double dVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_029a6edc + 0x29a6cac);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a6ee0 + 0x29a6cc0));
    func_0x01384978(*(undefined4 *)(_UNK_029a6ee4 + 0x29a6ccc));
    func_0x01384978(*(undefined4 *)(_UNK_029a6ee8 + 0x29a6cd8));
    func_0x01384978(*(undefined4 *)(_UNK_029a6eec + 0x29a6ce4));
    *pcVar5 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x6623,0);
  if (iVar1 == 0) {
    if ((*(char *)(param_1 + 0xa0) == '\0') &&
       (iVar1 = FUN_0299e69c(param_1,&uStack_28,&uStack_24,&uStack_2c), iVar1 != 0)) {
      uVar2 = FUN_0299e230(param_1);
      iVar1 = *(int *)(param_1 + 0xb8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_40,iVar1,**(undefined4 **)(_UNK_029a6ef0 + 0x29a6da4));
      dVar7 = (double)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      puVar6 = *(undefined4 **)(_UNK_029a6ef4 + 0x29a6dc0);
      while (iVar1 = func_0x03f5f428(&uStack_40,*puVar6), iVar1 != 0) {
        iVar1 = uStack_38._4_4_;
        if (uStack_38._4_4_ == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x029a8400(iVar1,0);
        if (iVar3 == 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar4 = in_fpscr & 0xfffffff | (uint)(*(double *)(iVar1 + 0x10) < dVar7) << 0x1f;
          in_fpscr = uVar4 | (uint)(NAN(*(double *)(iVar1 + 0x10)) || NAN(dVar7)) << 0x1c;
          if ((byte)(uVar4 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
            uVar4 = *(uint *)(param_1 + 0xbc);
            *(uint *)(param_1 + 0xbc) = uVar4 + 1;
            uVar8 = VectorSignedToFloat(~uVar4,(byte)(in_fpscr >> 0x16) & 3);
            *(undefined8 *)(iVar1 + 0x10) = uVar8;
          }
        }
      }
      func_0x03f5f424(&uStack_40,**(undefined4 **)(_UNK_029a6efc + 0x29a6e3c));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6623,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike$$MoveRaceToNextRoundOrEnd RVA 0x2996f04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a6f04(int param_1)

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
  
  pcVar4 = (char *)(_UNK_029a6fbc + 0x29a6f18);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a6fc0 + 0x29a6f2c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x634,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x634,0);
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
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x90) + 0x44);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0xc);
    }
    if (iVar3 != 0 && iVar1 != 0) {
      if (*(int *)(param_1 + 0x9c) < iVar1 + -1) {
        iVar1 = *(int *)(param_1 + 0x9c) + 1;
      }
      *(int *)(param_1 + 0x9c) = iVar1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xd4) = 0;
  return;
}



// ===== FAT.ActivityOrderLike$$WhenReset RVA 0x2996fc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a6fc4(int param_1)

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
  
  pcVar4 = (char *)(_UNK_029a70f0 + 0x29a6fd8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a70f4 + 0x29a6fec));
    func_0x01384978(*(undefined4 *)(_UNK_029a70f8 + 0x29a6ff8));
    func_0x01384978(*(undefined4 *)(_UNK_029a70fc + 0x29a7004));
    func_0x01384978(*(undefined4 *)(_UNK_029a7100 + 0x29a7010));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6648,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_029a7104 + 0x29a7068) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_029a7108 + 0x29a7084));
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_029a710c + 0x29a7098));
    func_0x0478dedc(uVar5,param_1,**(undefined4 **)(_UNK_029a7110 + 0x29a70b8),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028beac8(iVar1,uVar5,0);
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    pcVar4 = (char *)(_UNK_029a5ab8 + 0x29a59a0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_029a5abc + 0x29a59b4));
      func_0x01384978(*(undefined4 *)(_UNK_029a5ac0 + 0x29a59c0));
      func_0x01384978(*(undefined4 *)(_UNK_029a5ac4 + 0x29a59cc));
      func_0x01384978(*(undefined4 *)(_UNK_029a5ac8 + 0x29a59d8));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x6631,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x88) != '\0') {
        if (*(int *)(**(int **)(_UNK_029a5acc + 0x29a5a3c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_029a5ad0 + 0x29a5a58));
        uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_029a5ad4 + 0x29a5a6c));
        func_0x0478dedc(uVar5,param_1,**(undefined4 **)(_UNK_029a5ad8 + 0x29a5a8c),0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x028beac8(iVar1,uVar5,0);
        *(undefined1 *)(param_1 + 0x88) = 0;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x6631,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6648,0);
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
  return;
}



// ===== FAT.ActivityOrderLike$$WhenEnd RVA 0x2997114 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a7114(int param_1)

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
  
  pcVar4 = (char *)(_UNK_029a7234 + 0x29a7128);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a7238 + 0x29a713c));
    func_0x01384978(*(undefined4 *)(_UNK_029a723c + 0x29a7148));
    func_0x01384978(*(undefined4 *)(_UNK_029a7240 + 0x29a7154));
    func_0x01384978(*(undefined4 *)(_UNK_029a7244 + 0x29a7160));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6649,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_029a7248 + 0x29a71b8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_029a724c + 0x29a71d4));
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_029a7250 + 0x29a71e8));
    func_0x0478dedc(uVar5,param_1,**(undefined4 **)(_UNK_029a7254 + 0x29a7204),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028beac8(iVar1,uVar5,0);
    pcVar4 = (char *)(_UNK_029a5ab8 + 0x29a59a0);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_029a5abc + 0x29a59b4));
      func_0x01384978(*(undefined4 *)(_UNK_029a5ac0 + 0x29a59c0));
      func_0x01384978(*(undefined4 *)(_UNK_029a5ac4 + 0x29a59cc));
      func_0x01384978(*(undefined4 *)(_UNK_029a5ac8 + 0x29a59d8));
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x6631,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x88) != '\0') {
        if (*(int *)(**(int **)(_UNK_029a5acc + 0x29a5a3c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_029a5ad0 + 0x29a5a58));
        uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_029a5ad4 + 0x29a5a6c));
        func_0x0478dedc(uVar5,param_1,**(undefined4 **)(_UNK_029a5ad8 + 0x29a5a8c),0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x028beac8(iVar1,uVar5,0);
        *(undefined1 *)(param_1 + 0x88) = 0;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x6631,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6649,0);
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
  return;
}



// ===== FAT.ActivityOrderLike$$DebugAddRaceRobotScore RVA 0x2997258 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a7258(int param_1)

{
  int iVar1;
  int *piVar2;
  int extraout_r2;
  undefined4 uVar3;
  uint uVar4;
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
  
  pcVar7 = (char *)(_UNK_029a7350 + 0x29a726c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a7354 + 0x29a7280));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x664a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x664a,0);
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
    func_0x01485238(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar3);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x02b43c64(iVar1,0x2f,0);
  if (piVar2 != (int *)0x0) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_029a7358 + 0x29a7318) + 0xb8);
    if (*(byte *)(*piVar2 + 0xb8) < uVar4) {
      return;
    }
    if (*(int *)(*(int *)(*piVar2 + 100) + uVar4 * 4 + -4) == **(int **)(_UNK_029a7358 + 0x29a7318))
    {
      pcVar7 = (char *)(_UNK_029a74dc + 0x29a7374);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_029a74e0 + 0x29a7388));
        func_0x01384978(*(undefined4 *)(_UNK_029a74e4 + 0x29a7394));
        func_0x01384978(*(undefined4 *)(_UNK_029a74e8 + 0x29a73a0));
        func_0x01384978(*(undefined4 *)(_UNK_029a74ec + 0x29a73ac));
        *pcVar7 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x664b,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x664b,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,param_1,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,piVar2,0);
        func_0x01485238(&uStack_38,param_1,0);
        iVar6 = *(int *)(iVar1 + 8);
        uVar8 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
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
      iVar6 = piVar2[0x2e];
      iVar1 = extraout_r2;
      if (iVar6 != 0) {
        iVar1 = *(int *)(iVar6 + 0xc);
      }
      if ((iVar6 == 0 || iVar1 == 0) || (iVar1 <= (int)(uint)(param_1 == 2))) {
        return;
      }
      iVar1 = func_0x0328eea8(iVar6,(uint)(param_1 == 2),
                              **(undefined4 **)(_UNK_029a74f0 + 0x29a7434));
      if (iVar1 == 0) {
        func_0x01384bf0();
        iVar6 = func_0x029a8400(0,0);
        if (iVar6 != 0) {
          return;
        }
        func_0x01384bf0();
      }
      else {
        iVar6 = func_0x029a8400(iVar1,0);
        if (iVar6 != 0) {
          return;
        }
      }
      *(double *)(iVar1 + 0x10) = *(double *)(iVar1 + 0x10) + 1.0;
      FUN_029a6c90(piVar2);
      if (*(int *)(**(int **)(_UNK_029a74f4 + 0x29a749c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_029a74f8 + 0x29a74b8));
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
      uVar8 = *(undefined4 *)(iVar6 + 0xc);
      iVar1 = *(int *)(iVar6 + 0x10);
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
  }
  return;
}



// ===== FAT.ActivityOrderLike$$_DebugAddRaceRobotScoreInternal RVA 0x299735c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a735c(int param_1,int param_2)

{
  int iVar1;
  int extraout_r2;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_029a74dc + 0x29a7374);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a74e0 + 0x29a7388));
    func_0x01384978(*(undefined4 *)(_UNK_029a74e4 + 0x29a7394));
    func_0x01384978(*(undefined4 *)(_UNK_029a74e8 + 0x29a73a0));
    func_0x01384978(*(undefined4 *)(_UNK_029a74ec + 0x29a73ac));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x664b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x664b,0);
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  iVar4 = *(int *)(param_1 + 0xb8);
  iVar1 = extraout_r2;
  if (iVar4 != 0) {
    iVar1 = *(int *)(iVar4 + 0xc);
  }
  if ((iVar4 != 0 && iVar1 != 0) && ((int)(uint)(param_2 == 2) < iVar1)) {
    iVar1 = func_0x0328eea8(iVar4,(uint)(param_2 == 2),**(undefined4 **)(_UNK_029a74f0 + 0x29a7434))
    ;
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar4 = func_0x029a8400(0,0);
      if (iVar4 != 0) {
        return;
      }
      func_0x01384bf0();
    }
    else {
      iVar4 = func_0x029a8400(iVar1,0);
      if (iVar4 != 0) {
        return;
      }
    }
    *(double *)(iVar1 + 0x10) = *(double *)(iVar1 + 0x10) + 1.0;
    FUN_029a6c90(param_1);
    if (*(int *)(**(int **)(_UNK_029a74f4 + 0x29a749c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_029a74f8 + 0x29a74b8));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0229f06c(0x3f,0);
    if (iVar4 == 0) {
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar4 = func_0x0229f13c(0x3f,0);
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
    func_0x01485278(&uStack_30,iVar1,0);
    iVar3 = *(int *)(iVar4 + 8);
    uVar5 = *(undefined4 *)(iVar4 + 0xc);
    iVar1 = *(int *)(iVar4 + 0x10);
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
  return;
}



// ===== FAT.ActivityOrderLike$$<>iFixBaseProxy_AfterLoad RVA 0x29974fc =====

void FUN_029a74fc(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x1f1,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1f1,0);
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



// ===== FAT.ActivityOrderLike$$<>iFixBaseProxy_SetupFresh RVA 0x2997504 =====

void FUN_029a7504(undefined4 param_1)

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



// ===== FAT.ActivityOrderLike$$<>iFixBaseProxy_WhenActive RVA 0x299750c =====

void FUN_029a750c(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x201,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x201,0);
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



// ===== FAT.ActivityOrderLike$$<>iFixBaseProxy_TryPopup RVA 0x2997514 =====

void FUN_029a7514(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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



// ===== FAT.ActivityOrderLike$$<>iFixBaseProxy_WhenReset RVA 0x299751c =====

void FUN_029a751c(undefined4 param_1)

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



// ===== FAT.ActivityOrderLike$$<>iFixBaseProxy_WhenEnd RVA 0x2997524 =====

void FUN_029a7524(undefined4 param_1)

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



// ===== FAT.ActivityOrderLike.OrderLikeRaceBot$$get_Finished RVA 0x2998400 =====

uint FUN_029a8400(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x6622,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x6622,0);
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
  return (uint)(*(double *)(param_1 + 0x10) < 0.0);
}



// ===== FAT.ActivityOrderLike.OrderLikeRaceBot$$GetProfile RVA 0x2998468 =====

void FUN_029a8468(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x664c,0);
  if (iVar1 == 0) {
    uStack_18 = *(undefined4 *)(param_2 + 0x30);
    uStack_20 = *(undefined8 *)(param_2 + 0x28);
  }
  else {
    iVar1 = func_0x0229f13c(0x664c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021f53bc(&uStack_20,iVar1,param_2,0);
  }
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}



// ===== FAT.ActivityOrderLike.OrderLikeRaceBot$$SetProfile RVA 0x29984e0 =====

void FUN_029a84e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x664d,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
    *(undefined4 *)(param_1 + 0x2c) = param_3;
    *(undefined4 *)(param_1 + 0x30) = param_4;
  }
  else {
    iVar1 = func_0x0229f13c(0x664d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02204448(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike.OrderLikeRaceBot$$UpdateOnline RVA 0x2998560 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029a8560(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint in_fpscr;
  uint uVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  
  pcVar8 = (char *)(_UNK_029a87f0 + 0x29a8588);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a87f4 + 0x29a859c));
    func_0x01384978(*(undefined4 *)(_UNK_029a87f8 + 0x29a85a8));
    *pcVar8 = '\x01';
  }
  uVar11 = 0;
  iVar3 = func_0x0229f06c(0x6626,0);
  if (iVar3 == 0) {
    iVar3 = FUN_029a8400(param_1);
    if (iVar3 == 0) {
      puVar9 = (uint *)(param_1 + 0x18);
      if (*puVar9 == 0 && *(int *)(param_1 + 0x1c) == 0) {
        iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_029a87fc + 0x29a8634));
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar19 = func_0x01c359e8(iVar3,0);
        *(undefined8 *)puVar9 = uVar19;
      }
      uVar11 = 0;
      iVar3 = func_0x018076e0(*(undefined4 *)(param_1 + 8),0);
      if (iVar3 != 0) {
        iVar10 = *(int *)(iVar3 + 0x20);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar11 = 0;
        puVar12 = *(undefined4 **)(_UNK_029a8800 + 0x29a869c);
        uVar4 = func_0x0364c9b8(iVar10,0,*puVar12);
        iVar10 = *(int *)(iVar3 + 0x20);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x0364c9b8(iVar10,1,*puVar12);
        uVar4 = func_0x02450284(uVar4,uVar5,0);
        fVar7 = _UNK_029a87e8;
        fVar14 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
        fVar14 = fVar14 / _UNK_029a87e8;
        fVar6 = (float)func_0x01457e28(param_3 - *puVar9,
                                       param_4 - (*(int *)(param_1 + 0x1c) +
                                                 (uint)(param_3 < *puVar9)));
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar14 < fVar6) << 0x1f |
                (uint)(fVar14 == fVar6) << 0x1e;
        uVar13 = uVar1 | (uint)(NAN(fVar14) || NAN(fVar6)) << 0x1c;
        bVar2 = (byte)(uVar1 >> 0x18);
        if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar13 >> 0x1c) & 1)) {
          iVar10 = *(int *)(iVar3 + 0x1c);
          *puVar9 = param_3;
          *(int *)(param_1 + 0x1c) = param_4;
          if (iVar10 == 0) {
            func_0x01384bf0();
          }
          puVar12 = *(undefined4 **)(_UNK_029a8804 + 0x29a8734);
          uVar4 = func_0x0364c9b8(iVar10,0,*puVar12);
          iVar3 = *(int *)(iVar3 + 0x1c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar11 = 1;
          uVar5 = func_0x0364c9b8(iVar3,1,*puVar12);
          uVar4 = func_0x02450284(uVar4,uVar5,0);
          fVar15 = (float)VectorSignedToFloat(uVar4,(byte)(uVar13 >> 0x16) & 3);
          dVar17 = *(double *)(param_1 + 0x20) + (double)(((fVar6 / fVar14) * fVar15) / fVar7);
          dVar16 = *(double *)(param_1 + 0x10);
          fVar7 = (float)func_0x02450364((float)dVar17);
          dVar18 = (double)VectorSignedToFloat((int)fVar7,(byte)(uVar13 >> 0x16) & 3);
          if (fVar7 == _UNK_029a87ec) {
            dVar18 = _UNK_029a87e0;
          }
          *(double *)(param_1 + 0x20) = dVar17 - dVar18;
          *(double *)(param_1 + 0x10) = dVar16 + dVar18;
        }
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x6626,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar11 = func_0x02224eb8(iVar3,param_1,param_3,param_4,0);
  }
  return uVar11;
}



// ===== FAT.ActivityOrderLike.OrderLikeRaceBot$$UpdateOffline RVA 0x2998808 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a8808(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint in_fpscr;
  uint uVar9;
  double dVar10;
  double dVar11;
  
  pcVar5 = (char *)(_UNK_029a89d0 + 0x29a882c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a89d4 + 0x29a8840));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x6621,0);
  if (iVar2 == 0) {
    iVar2 = FUN_029a8400(param_1);
    if ((iVar2 == 0) && (iVar2 = func_0x018076e0(*(undefined4 *)(param_1 + 8),0), iVar2 != 0)) {
      iVar6 = *(int *)(iVar2 + 0x18);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      puVar8 = *(undefined4 **)(_UNK_029a89d8 + 0x29a88e4);
      uVar3 = func_0x0364c9b8(iVar6,0,*puVar8);
      iVar6 = *(int *)(iVar2 + 0x18);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x0364c9b8(iVar6,1,*puVar8);
      iVar6 = func_0x02450284(uVar3,uVar4,0);
      iVar7 = *(int *)(iVar2 + 0x14);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0364c9b8(iVar7,0,*puVar8);
      iVar2 = *(int *)(iVar2 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x0364c9b8(iVar2,1,*puVar8);
      iVar2 = func_0x02450284(uVar3,uVar4,0);
      dVar10 = *(double *)(param_1 + 0x10);
      uVar1 = in_fpscr & 0xfffffff | (uint)(dVar10 < 0.0) << 0x1f;
      uVar9 = uVar1 | (uint)NAN(dVar10) << 0x1c;
      if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar9 >> 0x1c) & 1)) {
        iVar6 = func_0x01457ae8(param_3,iVar6 / 100);
        dVar11 = (double)VectorSignedToFloat((iVar6 * iVar2) / 100,(byte)(uVar9 >> 0x16) & 3);
        *(double *)(param_1 + 0x10) = dVar10 + dVar11;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x6621,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02197394(iVar2,param_1,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityOrderLike.OrderLikeRaceBot$$.ctor RVA 0x29989dc =====

void FUN_029a89dc(void)

{
  return;
}



// ===== FAT.ActivityOrderLike.<>c__DisplayClass109_0$$.ctor RVA 0x29989e4 =====

void FUN_029a89e4(void)

{
  return;
}



// ===== FAT.ActivityOrderLike.<>c__DisplayClass109_0$$<GetExtraRewardMiniThemeRes>b__0 RVA 0x29989ec =====

bool FUN_029a89ec(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  bVar1 = false;
  if (*(int *)(param_2 + 0xc) == *(int *)(param_1 + 8)) {
    bVar1 = *(int *)(param_2 + 0x14) == 0x2f;
  }
  return bVar1;
}



// ===== FAT.ActivityOrderLike.<>c__DisplayClass118_0$$.ctor RVA 0x2998a28 =====

void FUN_029a8a28(void)

{
  return;
}



// ===== FAT.ActivityOrderLike.<>c__DisplayClass118_0$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__0 RVA 0x2998a30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a8a30(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_029a8d74 + 0x29a8a4c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a8d78 + 0x29a8a60));
    func_0x01384978(*(undefined4 *)(_UNK_029a8d7c + 0x29a8a6c));
    func_0x01384978(*(undefined4 *)(_UNK_029a8d80 + 0x29a8a78));
    func_0x01384978(*(undefined4 *)(_UNK_029a8d84 + 0x29a8a84));
    func_0x01384978(*(undefined4 *)(_UNK_029a8d88 + 0x29a8a90));
    func_0x01384978(*(undefined4 *)(_UNK_029a8d8c + 0x29a8a9c));
    func_0x01384978(*(undefined4 *)(_UNK_029a8d90 + 0x29a8aa8));
    func_0x01384978(*(undefined4 *)(_UNK_029a8d94 + 0x29a8ab4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_029a8d98 + 0x29a8ac8));
  func_0x04874ed4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 8) = param_2;
  *(int *)(iVar1 + 0x14) = param_1;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(param_2,0,0);
  iVar4 = *(int *)(iVar1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x024504c0(iVar4,0);
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x0244fc34(iVar5,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_2c,iVar5,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar4,uStack_2c,uStack_28,uStack_24,0);
  iVar4 = *(int *)(iVar1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar4,1,0);
  iVar4 = func_0x02fd6f60(*(undefined4 *)(iVar1 + 8),**(undefined4 **)(_UNK_029a8d9c + 0x29a8bc4));
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = FUN_029a68a8(iVar5,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0266fcac(iVar4,uVar2,0x40000000,0);
  iVar4 = *(int *)(iVar1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x024504c0(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x02450178(iVar4,**(undefined4 **)(_UNK_029a8da0 + 0x29a8c4c),0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x0244ffd4(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0244ffe4(iVar4,1,0);
  iVar4 = func_0x02cebcfc(*(undefined4 *)(param_1 + 0x10),0);
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x10);
    iVar4 = iVar5;
    if (iVar5 == 0) {
      func_0x01384bf0();
      iVar4 = *(int *)(param_1 + 0x10);
    }
    puVar6 = *(undefined4 **)(_UNK_029a8da4 + 0x29a8cc8);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar5 + 0x44);
    uVar2 = func_0x01384be4(*puVar6);
    func_0x02ce3d80(uVar2,iVar1,**(undefined4 **)(_UNK_029a8da8 + 0x29a8cec),0);
    func_0x0309eb60(iVar4,uVar2,**(undefined4 **)(_UNK_029a8dac + 0x29a8d04));
    iVar5 = *(int *)(param_1 + 0x10);
    iVar4 = iVar5;
    if (iVar5 == 0) {
      func_0x01384bf0();
      iVar4 = *(int *)(param_1 + 0x10);
    }
    uVar2 = *puVar6;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar5 + 0x4c);
    uVar2 = func_0x01384be4(uVar2);
    func_0x02ce3d80(uVar2,iVar1,**(undefined4 **)(_UNK_029a8db0 + 0x29a8d4c),0);
    func_0x0309ead4(iVar4,uVar2,**(undefined4 **)(_UNK_029a8db4 + 0x29a8d64));
  }
  return;
}



// ===== FAT.ActivityOrderLike.<>c__DisplayClass118_1$$.ctor RVA 0x2998db8 =====

void FUN_029a8db8(void)

{
  return;
}



// ===== FAT.ActivityOrderLike.<>c__DisplayClass118_1$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__1 RVA 0x2998dc0 =====

void FUN_029a8dc0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x024504c0(iVar1,0);
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0244fc34(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0244fd3c(&uStack_24,iVar2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024503d4(iVar1,uStack_24,uStack_20,uStack_1c,0);
  return;
}



// ===== FAT.ActivityOrderLike.<>c__DisplayClass118_1$$<FAT.Merge.ISpawnEffectWithTrail.AddTrail>b__2 RVA 0x2998e88 =====

void FUN_029a8e88(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x029a8ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.ActivityOrderLike.<>c__DisplayClass84_0$$.ctor RVA 0x2998ea4 =====

void FUN_029a8ea4(void)

{
  return;
}



// ===== FAT.ActivityOrderLike.<>c__DisplayClass84_0$$<TryClaimReward>b__0 RVA 0x2998eac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_029a8eac(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_029a8f18 + 0x29a8ec4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a8f1c + 0x29a8ed8));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_24 = 0xffffffff;
  uStack_20 = 0;
  uStack_1c = param_1;
  func_0x02f49040(&uStack_20,&uStack_24,**(undefined4 **)(_UNK_029a8f20 + 0x29a8ef8));
  return 0;
}



// ===== FAT.ActivityOrderLike.<>c__DisplayClass84_0.<<TryClaimReward>b__0>d$$MoveNext RVA 0x2998f24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029a8f24(int *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  int *piStack_30;
  int iStack_2c;
  int *piStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_029a93c8 + 0x29a8f40);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a93cc + 0x29a8f54));
    func_0x01384978(*(undefined4 *)(_UNK_029a93d0 + 0x29a8f60));
    func_0x01384978(*(undefined4 *)(_UNK_029a93d4 + 0x29a8f6c));
    *pcVar5 = '\x01';
  }
  iVar7 = param_1[2];
  iStack_24 = 0;
  piStack_28 = (int *)0x0;
  if (*param_1 == 0) {
    piStack_28 = (int *)param_1[3];
    iStack_24 = param_1[4];
    *param_1 = -1;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    piVar6 = *(int **)(_UNK_029a93d8 + 0x29a8fa8);
    uVar8 = *(undefined4 *)(iVar7 + 0xc);
    fVar10 = *(float *)(iVar7 + 8);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    fVar9 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
    func_0x024500e4(&piStack_30,fVar10 * fVar9,0,8,0,0,0);
    pcVar5 = (char *)(_UNK_029a93dc + 0x29a9000);
    iStack_24 = iStack_2c;
    piStack_28 = piStack_30;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_029a93e0 + 0x29a9020));
      *pcVar5 = '\x01';
    }
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar5 = (char *)(_UNK_029a93e4 + 0x29a9048);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_029a93e8 + 0x29a905c));
      *pcVar5 = '\x01';
    }
    piVar6 = piStack_28;
    if (piStack_28 != (int *)0x0) {
      iVar7 = *piStack_28;
      uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
      sVar1 = (short)iStack_24;
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_029a93ec + 0x29a9080)) {
            puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xc0);
            goto LAB_029a90f0;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_029a93ec + 0x29a9080),0);
LAB_029a90f0:
      iVar7 = (*(code *)*puVar2)(piVar6,(int)sVar1,puVar2[1]);
      if (iVar7 == 0) {
        puVar2 = *(undefined4 **)(_UNK_029a93f0 + 0x29a92f0);
        param_1[3] = (int)piStack_28;
        param_1[4] = iStack_24;
        uVar8 = *puVar2;
        *param_1 = 0;
        func_0x029c1bf0(param_1 + 1,&piStack_28,param_1,uVar8);
        return;
      }
    }
  }
  pcVar5 = (char *)(_UNK_029a93f4 + 0x29a9118);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a93f8 + 0x29a912c));
    *pcVar5 = '\x01';
  }
  piVar6 = piStack_28;
  if (piStack_28 != (int *)0x0) {
    iVar7 = *piStack_28;
    uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
    sVar1 = (short)iStack_24;
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_029a93fc + 0x29a9150)) {
          puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 0xd0);
          goto LAB_029a919c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piStack_28,**(int **)(_UNK_029a93fc + 0x29a9150),2);
LAB_029a919c:
    (*(code *)*puVar2)(piVar6,(int)sVar1,puVar2[1]);
  }
  iVar7 = func_0x01c24918(0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x01bf3284(iVar7,**(undefined4 **)(_UNK_029a9400 + 0x29a91e4),0);
  iVar7 = _UNK_029a9404;
  *param_1 = -2;
  if (*(char *)(iVar7 + 0x29a9204) == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_029a9408 + 0x29a9218));
    func_0x01384978(*(undefined4 *)(_UNK_029a940c + 0x29a9224));
    *(char *)(iVar7 + 0x29a9204) = '\x01';
  }
  piVar6 = (int *)param_1[1];
  if (piVar6 != (int *)0x0) {
    iVar7 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_029a9410 + 0x29a9248)) {
          puVar2 = (undefined4 *)(iVar7 + *piVar4 * 8 + 200);
          goto LAB_029a9290;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_029a9410 + 0x29a9248),1);
LAB_029a9290:
    uVar8 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    if (*(int *)(**(int **)(_UNK_029a9418 + 0x29a92b0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01489be8(0xd,uVar8,0);
    param_1[1] = 0;
  }
  return;
}



// ===== FAT.ActivityOrderLike.<>c__DisplayClass84_0.<<TryClaimReward>b__0>d$$SetStateMachine RVA 0x2999420 =====

void FUN_029a9420(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04f7167c)(param_1 + 4,param_2,0);
  return;
}


