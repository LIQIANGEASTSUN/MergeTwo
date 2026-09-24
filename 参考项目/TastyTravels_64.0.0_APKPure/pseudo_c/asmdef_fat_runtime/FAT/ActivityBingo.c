/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityBingo$$get_Visual RVA 0x2b011c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b111c0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x1400,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1400,0);
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
  return *(undefined4 *)(param_1 + 0x70);
}



// ===== FAT.ActivityBingo$$get_BadgeAsset RVA 0x2b01214 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b11214(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02b1130c + 0x2b1122c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b11310 + 0x2b11240));
    func_0x01384978(*(undefined4 *)(_UNK_02b11314 + 0x2b1124c));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x1401,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x70);
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
    iVar1 = func_0x03470a60(iVar1,**(undefined4 **)(_UNK_02b1131c + 0x2b112ec),&uStack_14,
                            **(undefined4 **)(_UNK_02b11318 + 0x2b112e0));
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1401,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityBingo$$BoardEntryAsset RVA 0x2b01320 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b11320(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02b1140c + 0x2b11338);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b11410 + 0x2b1134c));
    func_0x01384978(*(undefined4 *)(_UNK_02b11414 + 0x2b11358));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x1402,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x70);
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
    func_0x03470a60(iVar1,**(undefined4 **)(_UNK_02b1141c + 0x2b113f8),&uStack_14,
                    **(undefined4 **)(_UNK_02b11418 + 0x2b113ec));
  }
  else {
    iVar1 = func_0x0229f13c(0x1402,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityBingo$$CollectDetectorExcludeItemMap RVA 0x2b01420 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b11420(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
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
  
  pcVar6 = (char *)(_UNK_02b11514 + 0x2b11438);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b11518 + 0x2b1144c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1403,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1403,0);
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
    return;
  }
  uVar5 = *(undefined4 *)(param_1 + 100);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 8);
  uVar7 = *(uint *)(param_2 + 0xc);
  piVar2 = *(int **)(_UNK_02b1151c + 0x2b114cc);
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  iVar1 = *piVar2;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  if (uVar7 < *(uint *)(iVar4 + 0xc)) {
    *(uint *)(param_2 + 0xc) = uVar7 + 1;
    *(undefined4 *)(iVar4 + uVar7 * 4 + 0x10) = uVar5;
    return;
  }
  uVar7 = *(uint *)(param_2 + 0xc);
  func_0x0328f754(param_2,uVar7 + 1,
                  *(undefined4 *)
                   (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38) +
                                     0x10) + 0x60) + 0x3c));
  iVar1 = *(int *)(param_2 + 8);
  *(uint *)(param_2 + 0xc) = uVar7 + 1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar7) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + uVar7 * 4 + 0x10) = uVar5;
  return;
}



// ===== FAT.ActivityBingo$$LoadSetup RVA 0x2b01520 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b11520(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
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
  
  pcVar5 = (char *)(_UNK_02b11694 + 0x2b11538);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b11698 + 0x2b1154c));
    func_0x01384978(*(undefined4 *)(_UNK_02b1169c + 0x2b11558));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1404,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1404,0);
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar4 = func_0x01c23c30(0,uVar2,0);
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  uVar4 = func_0x01c23c30(1,uVar2,0);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  uVar4 = func_0x01c23c30(2,uVar2,0);
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  uVar4 = func_0x01c23c30(3,uVar2,0);
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  if (0 < *(int *)(param_1 + 0x3c)) {
    iVar1 = *(int *)(param_1 + 0x54);
    uVar4 = func_0x02b116a4(*(int *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328f380(iVar1,uVar4,**(undefined4 **)(_UNK_02b116a0 + 0x2b11644));
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0xc)) {
    func_0x02b1194c(*(undefined4 *)(param_1 + 0x54),param_2,4);
  }
  func_0x02b11ac8(param_1);
  func_0x02b11dc8(param_1);
  iVar1 = func_0x0229f06c(0x143b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x143b,0);
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
  iVar1 = func_0x02b16ea8(*(undefined4 *)(param_1 + 0x68));
  iVar3 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x02b61a50(iVar3,uVar4,uVar2,0);
  iVar3 = *(int *)(param_1 + 0x7c);
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  uVar4 = *(undefined4 *)(iVar1 + 0x18);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x02b61a50(iVar3,uVar4,uVar2,0);
  iVar3 = *(int *)(param_1 + 0x84);
  uVar2 = *(undefined4 *)(param_1 + 0x88);
  uVar4 = *(undefined4 *)(iVar1 + 0x28);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x02b61a50(iVar3,uVar4,uVar2,0);
  piVar6 = *(int **)(param_1 + 0x74);
  uVar2 = *(undefined4 *)(param_1 + 0x70);
  uVar4 = *(undefined4 *)(param_1 + 0x78);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  uStack_28 = *(undefined4 *)(*piVar6 + 300);
  uStack_2c = 1;
  uStack_30 = 0;
  (**(code **)(*piVar6 + 0x128))(piVar6,param_1,uVar2,uVar4);
  iVar3 = *(int *)(param_1 + 0x8c);
  uVar2 = *(undefined4 *)(param_1 + 0x90);
  uVar4 = *(undefined4 *)(iVar1 + 0x20);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x02b61a50(iVar3,uVar4,uVar2,0);
  piVar6 = *(int **)(param_1 + 0x94);
  uVar2 = *(undefined4 *)(param_1 + 0x8c);
  uVar4 = *(undefined4 *)(param_1 + 0x90);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  uStack_28 = *(undefined4 *)(*piVar6 + 300);
  uStack_30 = 0;
  uStack_2c = 0;
  (**(code **)(*piVar6 + 0x128))(piVar6,param_1,uVar2,uVar4);
  return;
}



// ===== FAT.ActivityBingo$$RefreshBingoItemMap RVA 0x2b01ac8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b11ac8(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_02b11d80 + 0x2b11ae0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b11d84 + 0x2b11af4));
    func_0x01384978(*(undefined4 *)(_UNK_02b11d88 + 0x2b11b00));
    func_0x01384978(*(undefined4 *)(_UNK_02b11d8c + 0x2b11b0c));
    func_0x01384978(*(undefined4 *)(_UNK_02b11d90 + 0x2b11b18));
    func_0x01384978(*(undefined4 *)(_UNK_02b11d94 + 0x2b11b24));
    func_0x01384978(*(undefined4 *)(_UNK_02b11d98 + 0x2b11b30));
    func_0x01384978(*(undefined4 *)(_UNK_02b11d9c + 0x2b11b3c));
    func_0x01384978(*(undefined4 *)(_UNK_02b11da0 + 0x2b11b48));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0x1437,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_48,iVar1,**(undefined4 **)(_UNK_02b11da4 + 0x2b11bc4));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar5 = *(undefined4 **)(_UNK_02b11da8 + 0x2b11be0);
    puVar6 = *(undefined4 **)(_UNK_02b11dac + 0x2b11be8);
    puVar7 = *(undefined4 **)(_UNK_02b11db0 + 0x2b11bf0);
    while (iVar2 = func_0x03f5f428(&uStack_38,*puVar5), iVar1 = iStack_2c, iVar2 != 0) {
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar1 + 0x14) == '\0') {
        iVar2 = *(int *)(param_1 + 100);
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x03d59fc8(iVar2,uVar4,*puVar6);
        uVar4 = *(undefined4 *)(iVar1 + 8);
        iVar1 = *(int *)(param_1 + 100);
        if (iVar2 == 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d7c(iVar1,uVar4,1,*puVar7);
        }
        else {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x03d59cc4(iVar1,uVar4,**(undefined4 **)(_UNK_02b11db4 + 0x2b11c68));
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d54(iVar1,uVar4,iVar2 + 1,**(undefined4 **)(_UNK_02b11db8 + 0x2b11c90));
        }
      }
    }
    func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_02b11dbc + 0x2b11cd4));
  }
  else {
    iVar1 = func_0x0229f13c(0x1437,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityBingo$$InitConf RVA 0x2b01dc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b11dc8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_02b11f04 + 0x2b11ddc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b11f08 + 0x2b11df0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1438,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1438,0);
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
  func_0x02b4429c(param_1,0);
  iVar1 = func_0x02b13304();
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_02b11f0c + 0x2b11e84);
  uVar5 = func_0x0364c9b8(iVar1,uVar5,*puVar6);
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  iVar1 = func_0x02b1392c(*(undefined4 *)(param_1 + 0x3c));
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x14);
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0364c9b8(iVar1,uVar5,*puVar6);
  }
  iVar1 = func_0x02b139c0(uVar5);
  if (iVar1 == 0) {
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    uVar2 = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(param_1 + 0x60) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  return;
}



// ===== FAT.ActivityBingo$$RefreshTheme RVA 0x2b01f10 =====

void FUN_02b11f10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x0229f06c(0x143b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x143b,0);
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
  iVar1 = func_0x02b16ea8(*(undefined4 *)(param_1 + 0x68));
  iVar3 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x02b61a50(iVar3,uVar4,uVar2,0);
  iVar3 = *(int *)(param_1 + 0x7c);
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  uVar4 = *(undefined4 *)(iVar1 + 0x18);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x02b61a50(iVar3,uVar4,uVar2,0);
  iVar3 = *(int *)(param_1 + 0x84);
  uVar2 = *(undefined4 *)(param_1 + 0x88);
  uVar4 = *(undefined4 *)(iVar1 + 0x28);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x02b61a50(iVar3,uVar4,uVar2,0);
  piVar5 = *(int **)(param_1 + 0x74);
  uVar2 = *(undefined4 *)(param_1 + 0x70);
  uVar4 = *(undefined4 *)(param_1 + 0x78);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  uStack_28 = *(undefined4 *)(*piVar5 + 300);
  uStack_2c = 1;
  uStack_30 = 0;
  (**(code **)(*piVar5 + 0x128))(piVar5,param_1,uVar2,uVar4);
  iVar3 = *(int *)(param_1 + 0x8c);
  uVar2 = *(undefined4 *)(param_1 + 0x90);
  uVar4 = *(undefined4 *)(iVar1 + 0x20);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x02b61a50(iVar3,uVar4,uVar2,0);
  piVar5 = *(int **)(param_1 + 0x94);
  uVar2 = *(undefined4 *)(param_1 + 0x8c);
  uVar4 = *(undefined4 *)(param_1 + 0x90);
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  uStack_28 = *(undefined4 *)(*piVar5 + 300);
  uStack_30 = 0;
  uStack_2c = 0;
  (**(code **)(*piVar5 + 0x128))(piVar5,param_1,uVar2,uVar4);
  return;
}



// ===== FAT.ActivityBingo$$SaveSetup RVA 0x2b020c8 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b120c8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *unaff_r7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint unaff_r9;
  undefined1 uVar11;
  undefined1 uVar12;
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
  
  pcVar5 = (char *)(_UNK_02b12300 + 0x2b120e0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b12304 + 0x2b120f4));
    func_0x01384978(*(undefined4 *)(_UNK_02b12308 + 0x2b12100));
    func_0x01384978(*(undefined4 *)(_UNK_02b1230c + 0x2b1210c));
    func_0x01384978(*(undefined4 *)(_UNK_02b12310 + 0x2b12118));
    func_0x01384978(*(undefined4 *)(_UNK_02b12314 + 0x2b12124));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x143e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x143e,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b12318 + 0x2b12180));
  func_0x04874ed4(iVar1,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x28);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar6 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(iVar1 + 0xc) = 1;
  *(int *)(iVar1 + 8) = iVar4;
  uVar6 = func_0x01c23578(0,uVar6,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  puVar9 = *(undefined4 **)(_UNK_02b1231c + 0x2b121ec);
  func_0x03652b00(iVar4,uVar6,*puVar9);
  iVar4 = *(int *)(iVar1 + 0xc);
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  *(int *)(iVar1 + 0xc) = iVar4 + 1;
  iVar7 = *(int *)(iVar1 + 8);
  uVar6 = func_0x01c23578(iVar4,uVar6,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar7,uVar6,*puVar9);
  iVar4 = *(int *)(iVar1 + 0xc);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  *(int *)(iVar1 + 0xc) = iVar4 + 1;
  iVar7 = *(int *)(iVar1 + 8);
  uVar6 = func_0x01c23578(iVar4,uVar6,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar7,uVar6,*puVar9);
  iVar4 = *(int *)(iVar1 + 0xc);
  uVar6 = *(undefined4 *)(param_1 + 0x48);
  *(int *)(iVar1 + 0xc) = iVar4 + 1;
  iVar7 = *(int *)(iVar1 + 8);
  uVar6 = func_0x01c23578(iVar4,uVar6,0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x03652b00(iVar7,uVar6,*puVar9);
  iVar7 = *(int *)(param_1 + 0x54);
  iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02b12320 + 0x2b122b4));
  func_0x03ccb96c(iVar4,iVar1,**(undefined4 **)(_UNK_02b12324 + 0x2b122d0),0);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  if (iVar4 == 0) {
    func_0x04839ccc(0x21,0,**(undefined4 **)(_UNK_02b12328 + 0x2b122f4));
  }
  if (0 < *(int *)(iVar7 + 0xc)) {
    uVar10 = *(uint *)(iVar7 + 0x10);
    uVar8 = 0;
    uVar2 = uVar10;
    do {
      if (uVar10 != uVar2) break;
      iVar1 = *(int *)(iVar7 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar8) {
        func_0x01384bf4();
      }
      uVar6 = *(undefined4 *)(iVar1 + uVar8 * 4 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),uVar6,*(undefined4 *)(iVar4 + 0x14));
      uVar8 = uVar8 + 1;
      uVar2 = *(uint *)(iVar7 + 0x10);
    } while ((int)uVar8 < *(int *)(iVar7 + 0xc));
    uVar12 = uVar2 <= uVar10;
    uVar11 = uVar10 == uVar2;
    if (!(bool)uVar11) {
      func_0x03409d30(*(undefined4 *)(iRam0484c7d8 + 0x484c798));
      uVar6 = func_0x03409cd0();
      uVar3 = func_0x03409d30(*(undefined4 *)(iRam0484c7dc + 0x484c7ac));
      func_0x04824950(uVar6,uVar3,0);
      uVar3 = func_0x03409d30(*(undefined4 *)(iRam0484c7e0 + 0x484c7c8));
      func_0x03409d8c(uVar6,uVar3);
      uVar13 = func_0x03409d9c();
      iVar1 = (int)((ulonglong)uVar13 >> 0x20);
      if ((bool)uVar11) {
        iVar1 = ((int)uVar13 << (unaff_r9 & 0xff)) - ((int)unaff_r7 + (uint)!(bool)uVar12);
      }
      func_0x03409d30(*(undefined4 *)(iRam0484c834 + 0x484c7f4),iVar1);
      uVar6 = func_0x03409cd0();
      uVar3 = func_0x03409d30(*(undefined4 *)(iRam0484c838 + 0x484c808));
      func_0x04824950(uVar6,uVar3,0);
      uVar3 = func_0x03409d30(*(undefined4 *)(_UNK_0484c83c + 0x484c824));
      func_0x03409d8c(uVar6,uVar3);
      func_0x03409d9c();
      if ((bool)uVar11) {
        *unaff_r7 = extraout_r1;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}



// ===== FAT.ActivityBingo.<>c__DisplayClass31_0$$.ctor RVA 0x2b0232c =====

void FUN_02b1232c(void)

{
  return;
}



// ===== FAT.ActivityBingo$$Open RVA 0x2b02334 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b12334(int param_1)

{
  int iVar1;
  int *piVar2;
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
  undefined4 uStack_14;
  
  pcVar6 = (char *)(_UNK_02b124b0 + 0x2b1234c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b124b4 + 0x2b12360));
    func_0x01384978(*(undefined4 *)(_UNK_02b124b8 + 0x2b1236c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1441,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1441,0);
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
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02b124bc + 0x2b123dc),2);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar2 + 0x20));
  if (iVar5 == 0) {
    uVar7 = func_0x01384c10();
    func_0x01384aa0(uVar7,0);
  }
  if (piVar2[3] == 0) {
    func_0x01384bf4();
  }
  piVar2[4] = param_1;
  uStack_14 = uStack_14 & 0xffffff;
  iVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02b124c0 + 0x2b1243c),(int)&uStack_14 + 3);
  if ((iVar5 != 0) && (iVar3 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0))
  {
    uVar7 = func_0x01384c10();
    func_0x01384aa0(uVar7,0);
  }
  if ((uint)piVar2[3] < 2) {
    func_0x01384bf4();
  }
  piVar2[5] = iVar5;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01ef58d8(iVar1,piVar2,0);
  return;
}



// ===== FAT.ActivityBingo$$SetupFresh RVA 0x2b024c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b124c4(int param_1)

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
  undefined4 auStack_20 [2];
  
  pcVar4 = (char *)(_UNK_02b12640 + 0x2b124dc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b12644 + 0x2b124f0));
    func_0x01384978(*(undefined4 *)(_UNK_02b12648 + 0x2b124fc));
    func_0x01384978(*(undefined4 *)(_UNK_02b1264c + 0x2b12508));
    func_0x01384978(*(undefined4 *)(_UNK_02b12650 + 0x2b12514));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1442,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1442,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    auStack_20[0] = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    auStack_20[0] = uStack_38;
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
  FUN_02b11dc8(param_1);
  FUN_02b11f10(param_1);
  iVar1 = func_0x02b12660(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x03d6463c(iVar1,**(undefined4 **)(_UNK_02b12654 + 0x2b12598));
  if (iVar3 == 1) {
    func_0x02f94918(auStack_20,iVar1,**(undefined4 **)(_UNK_02b12658 + 0x2b125b8));
    func_0x02b12720(param_1,auStack_20[0]);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x74);
  iVar1 = *(int *)(iVar1 + 0xfc);
  uStack_24 = CONCAT13(1,(undefined3)uStack_24);
  uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_02b1265c + 0x2b125f8),(int)&uStack_24 + 3);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  func_0x01e7437c(iVar1,uVar2,0,uVar5);
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



// ===== FAT.ActivityBingo$$GetOptionalBingoGroup RVA 0x2b02660 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b12660(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
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
  
  pcVar5 = (char *)(_UNK_02b12714 + 0x2b12674);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b12718 + 0x2b12688));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0x1443,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1443,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021ca734 + 0x21ca654);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021ca738 + 0x21ca668),param_1,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021ca73c + 0x21ca724));
    return uVar6;
  }
  func_0x02b4429c(param_1,0);
  iVar1 = func_0x02b13304();
  if (iVar1 != 0) {
    uVar6 = func_0x02f98e2c(*(undefined4 *)(iVar1 + 0x14),
                            **(undefined4 **)(_UNK_02b1271c + 0x2b126fc));
  }
  pcVar5 = (char *)(_UNK_02b138a0 + 0x2b133ac);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b138a4 + 0x2b133c0));
    func_0x01384978(*(undefined4 *)(_UNK_02b138a8 + 0x2b133cc));
    func_0x01384978(*(undefined4 *)(_UNK_02b138ac + 0x2b133d8));
    func_0x01384978(*(undefined4 *)(_UNK_02b138b0 + 0x2b133e4));
    func_0x01384978(*(undefined4 *)(_UNK_02b138b4 + 0x2b133f0));
    func_0x01384978(*(undefined4 *)(_UNK_02b138b8 + 0x2b133fc));
    func_0x01384978(*(undefined4 *)(_UNK_02b138bc + 0x2b13408));
    func_0x01384978(*(undefined4 *)(_UNK_02b138c0 + 0x2b13414));
    func_0x01384978(*(undefined4 *)(_UNK_02b138c4 + 0x2b13420));
    func_0x01384978(*(undefined4 *)(_UNK_02b138c8 + 0x2b1342c));
    func_0x01384978(*(undefined4 *)(_UNK_02b138cc + 0x2b13438));
    func_0x01384978(*(undefined4 *)(_UNK_02b138d0 + 0x2b13444));
    func_0x01384978(*(undefined4 *)(_UNK_02b138d4 + 0x2b13450));
    func_0x01384978(*(undefined4 *)(_UNK_02b138d8 + 0x2b1345c));
    func_0x01384978(*(undefined4 *)(_UNK_02b138dc + 0x2b13468));
    func_0x01384978(*(undefined4 *)(_UNK_02b138e0 + 0x2b13474));
    func_0x01384978(*(undefined4 *)(_UNK_02b138e4 + 0x2b13480));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1444,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1444,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021ca62c + 0x21ca54c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021ca630 + 0x21ca560),uVar6,0);
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
    func_0x01485238(&uStack_30,uVar6,0);
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
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021ca634 + 0x21ca61c));
    return uVar6;
  }
  iVar1 = func_0x02b16ea8(uVar6);
  if (iVar1 == 0) {
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02b13924 + 0x2b1387c));
    func_0x03d63eec(uVar6,**(undefined4 **)(_UNK_02b13928 + 0x2b13890));
  }
  else {
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar4 + 0xc);
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x2c);
    uVar2 = *(undefined4 *)(iVar1 + 0x24);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 0;
    uVar2 = func_0x01cf6408(iVar4,uVar2,0);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01caa114(iVar7,uVar2,0);
    if (iVar1 != 0) {
      piVar9 = *(int **)(_UNK_02b138e8 + 0x2b13574);
      uVar2 = *(undefined4 *)(iVar1 + 0x18);
      iVar1 = *piVar9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar9;
      }
      iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x34);
      if (iVar4 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar9;
        }
        uVar8 = **(undefined4 **)(iVar1 + 0x5c);
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02b138ec + 0x2b135c0));
        func_0x041cd8fc(iVar4,uVar8,**(undefined4 **)(_UNK_02b138f0 + 0x2b135e0),0);
        *(int *)(*(int *)(*piVar9 + 0x5c) + 0x34) = iVar4;
      }
      uVar2 = func_0x02fa99e8(uVar2,iVar4,**(undefined4 **)(_UNK_02b138f4 + 0x2b13604));
      iVar1 = *piVar9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar9;
      }
      iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x38);
      if (iVar4 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar9;
        }
        uVar8 = **(undefined4 **)(iVar1 + 0x5c);
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02b138f8 + 0x2b1365c));
        func_0x041cf488(iVar4,uVar8,**(undefined4 **)(_UNK_02b138fc + 0x2b1367c),0);
        *(int *)(*(int *)(*piVar9 + 0x5c) + 0x38) = iVar4;
      }
      iVar1 = func_0x02f9ae48(uVar2,iVar4,**(undefined4 **)(_UNK_02b13900 + 0x2b136a0));
      if (iVar1 != 0) {
        iVar4 = *piVar9;
        uVar6 = *(undefined4 *)(iVar1 + 0x1c);
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar9;
        }
        iVar1 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x3c);
        if (iVar1 == 0) {
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x01384ab4();
            iVar4 = *piVar9;
          }
          uVar2 = **(undefined4 **)(iVar4 + 0x5c);
          iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b13904 + 0x2b13704));
          func_0x041cd8fc(iVar1,uVar2,**(undefined4 **)(_UNK_02b13908 + 0x2b13724),0);
          *(int *)(*(int *)(*piVar9 + 0x5c) + 0x3c) = iVar1;
        }
        uVar6 = func_0x02fa99e8(uVar6,iVar1,**(undefined4 **)(_UNK_02b1390c + 0x2b13748));
        iVar1 = *piVar9;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar9;
        }
        iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x40);
        if (iVar4 == 0) {
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar9;
          }
          uVar2 = **(undefined4 **)(iVar1 + 0x5c);
          iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02b13910 + 0x2b137a0));
          func_0x041cf844(iVar4,uVar2,**(undefined4 **)(_UNK_02b13914 + 0x2b137c0),0);
          iVar1 = *piVar9;
          *(int *)(*(int *)(iVar1 + 0x5c) + 0x40) = iVar4;
        }
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar9;
        }
        iVar7 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x44);
        if (iVar7 == 0) {
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar9;
          }
          uVar2 = **(undefined4 **)(iVar1 + 0x5c);
          iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_02b13918 + 0x2b1381c));
          func_0x041cfbf8(iVar7,uVar2,**(undefined4 **)(_UNK_02b1391c + 0x2b1383c),0);
          *(int *)(*(int *)(*piVar9 + 0x5c) + 0x44) = iVar7;
        }
        iVar3 = **(int **)(_UNK_02b13920 + 0x2b13864);
        iVar1 = *(int *)(iVar3 + 0x1c);
        if (iVar1 == 0) {
          func_0x0140024c(iVar3);
          iVar1 = *(int *)(iVar3 + 0x1c);
        }
        uStack_20 = *(undefined4 *)(iVar1 + 0xc);
        uVar6 = func_0x02fb4240(uVar6,iVar4,iVar7,0);
        return uVar6;
      }
    }
  }
  return uVar6;
}



// ===== FAT.ActivityBingo$$ChooseGroup RVA 0x2b02720 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b12720(int param_1,undefined4 param_2)

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
  
  pcVar5 = (char *)(_UNK_02b129a8 + 0x2b12738);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b129ac + 0x2b1274c));
    func_0x01384978(*(undefined4 *)(_UNK_02b129b0 + 0x2b12758));
    func_0x01384978(*(undefined4 *)(_UNK_02b129b4 + 0x2b12764));
    func_0x01384978(*(undefined4 *)(_UNK_02b129b8 + 0x2b12770));
    func_0x01384978(*(undefined4 *)(_UNK_02b129bc + 0x2b1277c));
    func_0x01384978(*(undefined4 *)(_UNK_02b129c0 + 0x2b12788));
    func_0x01384978(*(undefined4 *)(_UNK_02b129c4 + 0x2b12794));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1446,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02b1392c(param_2);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x14);
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x3c) = param_2;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x0364c9b8(iVar1,0,**(undefined4 **)(_UNK_02b129c8 + 0x2b12824));
      iVar1 = *(int *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (0 < iVar3) {
        func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
      }
      iVar1 = *(int *)(param_1 + 0x54);
      uVar4 = func_0x02b116a4(param_2,*(undefined4 *)(param_1 + 0x40));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328f380(iVar1,uVar4,**(undefined4 **)(_UNK_02b129cc + 0x2b1289c));
      iVar1 = *(int *)(param_1 + 100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_02b129d0 + 0x2b128c0));
      FUN_02b11ac8(param_1);
      if (*(int *)(**(int **)(_UNK_02b129d4 + 0x2b128dc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02b129d8 + 0x2b128f8));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x028c3fd8(iVar1,0);
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02b129dc + 0x2b12924));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = 0;
      func_0x028c3fd8(iVar1,0);
      iVar1 = *(int *)(param_1 + 0x98);
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      }
      func_0x019b4768(param_1,*(int *)(param_1 + 0x24) + 1,0);
      iVar1 = func_0x02b139c0(*(undefined4 *)(param_1 + 0x6c));
      if (iVar1 != 0) {
        uVar4 = *(undefined4 *)(iVar1 + 0x18);
      }
      *(undefined4 *)(param_1 + 0x60) = uVar4;
      iVar1 = func_0x02b139c0(*(undefined4 *)(param_1 + 0x6c));
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 + 0x1c);
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x1446,0);
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



// ===== FAT.ActivityBingo$$TryPopup RVA 0x2b029e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b129e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  byte bStack_19;
  
  pcVar3 = (char *)(_UNK_02b12adc + 0x2b12a00);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b12ae0 + 0x2b12a14));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1447,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x58) == '\0') {
      uVar4 = *(undefined4 *)(param_1 + 0x74);
      bStack_19 = func_0x02b12ae8(param_1);
      bStack_19 = bStack_19 ^ 1;
      uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_02b12ae4 + 0x2b12a94),&bStack_19);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(param_2,uVar4,param_3,uVar2,0);
      *(undefined1 *)(param_1 + 0x58) = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1447,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityBingo$$CheckGroupStart RVA 0x2b02ae8 =====

uint FUN_02b12ae8(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x1448,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x1448,0);
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
  return (uint)(*(int *)(param_1 + 0x3c) != 0);
}



// ===== FAT.ActivityBingo$$.ctor RVA 0x2b02b44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b12b44(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  pcVar4 = (char *)(_UNK_02b12da4 + 0x2b12b60);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b12da8 + 0x2b12b74));
    func_0x01384978(*(undefined4 *)(_UNK_02b12dac + 0x2b12b80));
    func_0x01384978(*(undefined4 *)(_UNK_02b12db0 + 0x2b12b8c));
    func_0x01384978(*(undefined4 *)(_UNK_02b12db4 + 0x2b12b98));
    func_0x01384978(*(undefined4 *)(_UNK_02b12db8 + 0x2b12ba4));
    func_0x01384978(*(undefined4 *)(_UNK_02b12dbc + 0x2b12bb0));
    func_0x01384978(*(undefined4 *)(_UNK_02b12dc0 + 0x2b12bbc));
    func_0x01384978(*(undefined4 *)(_UNK_02b12dc4 + 0x2b12bc8));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b12dc8 + 0x2b12bdc));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_02b12dcc + 0x2b12bf0));
  puVar2 = *(undefined4 **)(_UNK_02b12dd0 + 0x2b12c04);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_02b12dd4 + 0x2b12c1c));
  puVar7 = *(undefined4 **)(_UNK_02b12dd8 + 0x2b12c30);
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = func_0x01384be4(*puVar7);
  func_0x02b635c4(uVar1,0);
  puVar2 = *(undefined4 **)(_UNK_02b12ddc + 0x2b12c50);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x01ea074c(uVar1,0);
  piVar8 = *(int **)(_UNK_02b12de0 + 0x2b12c70);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar8;
  }
  puVar5 = *(undefined4 **)(_UNK_02b12de4 + 0x2b12c98);
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x644);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar6,0);
  uVar6 = *puVar7;
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar1 = func_0x01384be4(uVar6);
  func_0x02b635c4(uVar1,0);
  iVar3 = *piVar8;
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x63c);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar6,0);
  uVar6 = *puVar7;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar1 = func_0x01384be4(uVar6);
  func_0x02b635c4(uVar1,0);
  iVar3 = *piVar8;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x640);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar6,0);
  uVar6 = *puVar7;
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  uVar1 = func_0x01384be4(uVar6);
  func_0x02b635c4(uVar1,0);
  iVar3 = *piVar8;
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x638);
  uVar1 = func_0x01384be4(*puVar5);
  func_0x02b63ca4(uVar1,uVar6,0);
  uVar6 = *puVar2;
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  uVar1 = func_0x01384be4(uVar6);
  func_0x01ea074c(uVar1,0);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  func_0x02b4dc04(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== FAT.ActivityBingo$$WhenEnd RVA 0x2b02de8 =====

void FUN_02b12de8(int param_1)

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
  undefined4 uStack_18;
  
  iVar1 = func_0x0229f06c(0x1449,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1449,0);
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
  func_0x019b489c(param_1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x4c),0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xfc);
  uVar4 = *(undefined4 *)(param_1 + 0x94);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  func_0x01e7437c(iVar1,uVar4,0,0);
  return;
}



// ===== FAT.ActivityBingo$$add_Invalidate RVA 0x2b02ea0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b12ea0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_02b12f34 + 0x2b12eb8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b12f38 + 0x2b12ecc));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02b12f3c + 0x2b12ee4);
  iVar1 = *(int *)(param_1 + 0x98);
  do {
    piVar2 = (int *)func_0x0487907c(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_02b12f14:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_02b12f14;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x98),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.ActivityBingo$$remove_Invalidate RVA 0x2b02f40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b12f40(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_02b12fd4 + 0x2b12f58);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b12fd8 + 0x2b12f6c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_02b12fdc + 0x2b12f84);
  iVar1 = *(int *)(param_1 + 0x98);
  do {
    piVar2 = (int *)func_0x0487929c(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_02b12fb4:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_02b12fb4;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0x98),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.ActivityBingo$$CheckIndicator RVA 0x2b02fe0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b12fe0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02b130a8 + 0x2b13000);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b130ac + 0x2b13014));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x144a,0);
  if (iVar1 == 0) {
    uVar2 = FUN_02b11214(param_1);
    *param_3 = uVar2;
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59fc8(iVar1,param_2,**(undefined4 **)(_UNK_02b130b0 + 0x2b13098));
  }
  else {
    iVar1 = func_0x0229f13c(0x144a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021ca740(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityBingo$$GetBingoCount RVA 0x2b030b4 =====

/* WARNING: Removing unreachable block (ram,0x02f930ac) */
/* WARNING: Removing unreachable block (ram,0x02f93540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b130b4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int extraout_r2;
  undefined *extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  int unaff_r5;
  char *pcVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  code *pcVar16;
  int *piVar17;
  int unaff_r8;
  int *piVar18;
  int *unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  int iVar19;
  undefined1 uVar20;
  bool bVar21;
  bool bVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [2];
  
  pcVar12 = (char *)(_UNK_02b131f4 + 0x2b130c8);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b131f8 + 0x2b130dc));
    func_0x01384978(*(undefined4 *)(_UNK_02b131fc + 0x2b130e8));
    func_0x01384978(*(undefined4 *)(_UNK_02b13200 + 0x2b130f4));
    func_0x01384978(*(undefined4 *)(_UNK_02b13204 + 0x2b13100));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x144b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x144b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    auStack_20[0] = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    auStack_20[0] = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar15 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar1 == 0) {
      uVar9 = 1;
    }
    func_0x0245495c(iVar11,uVar15,&uStack_30,uVar9,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  piVar17 = *(int **)(_UNK_02b13208 + 0x2b13158);
  piVar10 = *(int **)(param_1 + 0x54);
  iVar1 = *piVar17;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar17;
  }
  iVar11 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar11 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar17;
    }
    uVar15 = **(undefined4 **)(iVar1 + 0x5c);
    iVar11 = func_0x01384be4(**(undefined4 **)(_UNK_02b1320c + 0x2b131a4));
    func_0x041cf488(iVar11,uVar15,**(undefined4 **)(_UNK_02b13210 + 0x2b131c4),0);
    *(int *)(*(int *)(*piVar17 + 0x5c) + 4) = iVar11;
  }
  iVar1 = **(int **)(_UNK_02b13214 + 0x2b131e8);
  puVar4 = auStack_20;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f930c0 + 0x2f92d48));
    func_0x01384978(*(undefined4 *)(iRam02f930c4 + 0x2f92d54));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x0140024c(iVar1);
    }
  }
  if (piVar10 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f930c8 + 0x2f92fc4);
  }
  else {
    if (iVar11 != 0) {
      iVar6 = **(int **)(iVar1 + 0x1c);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x014001f0(iVar6);
      }
      iVar2 = *piVar10;
      uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          unaff_r5 = piVar17[-1];
          if (unaff_r5 == iVar6) {
            puVar3 = (undefined4 *)(iVar2 + *piVar17 * 8 + 0xc0);
            goto LAB_02f92de4;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar10,iVar6,0);
LAB_02f92de4:
      piVar10 = (int *)(*(code *)*puVar3)(piVar10,puVar3[1]);
      unaff_r8 = 0;
      unaff_r9 = *(int **)(iRam02f930d0 + 0x2f92e08);
LAB_02f92e04:
      do {
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *piVar10;
        uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            unaff_r5 = piVar17[-1];
            if (unaff_r5 == *unaff_r9) {
              puVar3 = (undefined4 *)(iVar6 + *piVar17 * 8 + 0xc0);
              goto LAB_02f92e60;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 2;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar10,*unaff_r9,0);
LAB_02f92e60:
        iVar6 = (*(code *)*puVar3)(piVar10,puVar3[1]);
        if (iVar6 == 0) {
          iVar1 = 0;
          goto LAB_02f92f30;
        }
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x014001f0(iVar6);
        }
        iVar2 = *piVar10;
        uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            unaff_r5 = piVar17[-1];
            if (unaff_r5 == iVar6) {
              puVar3 = (undefined4 *)(iVar2 + *piVar17 * 8 + 0xc0);
              goto LAB_02f92ef0;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 2;
          } while (uVar8 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar10,iVar6,0);
LAB_02f92ef0:
        uVar15 = (*(code *)*puVar3)(piVar10,puVar3[1]);
        iVar6 = (**(code **)(iVar11 + 0xc))
                          (*(undefined4 *)(iVar11 + 0x20),uVar15,*(undefined4 *)(iVar11 + 0x14));
      } while (iVar6 == 0);
      if (unaff_r8 != 0x7fffffff) {
        unaff_r8 = unaff_r8 + 1;
        goto LAB_02f92e04;
      }
      goto LAB_02f92fe4;
    }
    uVar15 = *(undefined4 *)(iRam02f930cc + 0x2f92fd0);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,iVar1);
  func_0x01384928();
LAB_02f92fe4:
  uVar15 = func_0x01384bf8();
  func_0x01384aa0(uVar15,iVar1);
  uVar23 = func_0x01384928();
  uVar15 = (undefined4)uVar23;
  if ((int)((ulonglong)uVar23 >> 0x20) != 1) {
    if (piVar10 != (int *)0x0) {
      iVar1 = *piVar10;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          unaff_r5 = piVar17[-1];
          if (unaff_r5 == **(int **)(iRam02f930d8 + 0x2f9304c)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar17 * 8 + 0xc0);
            goto LAB_02f93094;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f930d8 + 0x2f9304c),0);
LAB_02f93094:
      (*(code *)*puVar3)(piVar10,puVar3[1]);
    }
    uVar20 = 1;
    func_0x01459844(uVar15);
    uVar23 = func_0x01062280();
    iVar1 = (int)((ulonglong)uVar23 >> 0x20);
    piVar17 = (int *)uVar23;
    bVar21 = false;
    if ((bool)uVar20) {
      unaff_r5 = -0x2f9309e;
      iVar1 = (int)&UNK_00ac0000 - (int)piVar17;
      bVar21 = iVar1 == 0;
    }
    bVar22 = false;
    if (bVar21) {
      puVar4 = (undefined4 *)(-(int)piVar17 + -0x80000000);
      bVar22 = -(int)piVar17 == -0x80000000;
    }
    bVar21 = false;
    if (bVar22) {
      unaff_r9 = (int *)(0x4000 - extraout_r2);
      bVar21 = unaff_r9 == (int *)0x0;
    }
    bVar22 = false;
    if (bVar21) {
      iVar1 = 0x3e00000 - (int)piVar17;
      bVar22 = iVar1 == 0;
    }
    if (bVar22) {
      piVar10 = (int *)0xfd06d780;
    }
    puVar4[-1] = 0x2f930c0;
    puVar4[-2] = unaff_r11;
    puVar4[-3] = unaff_r10;
    puVar4[-4] = unaff_r9;
    puVar4[-5] = unaff_r8;
    puVar4[-6] = uVar15;
    puVar4[-7] = 0;
    puVar4[-8] = unaff_r5;
    puVar4[-9] = piVar10;
    puVar3 = puVar4 + -2;
    puVar4[-0xe] = iVar1;
    puVar4[-0xb] = **(undefined4 **)(iRam02f93554 + 0x2f93100);
    piVar10 = *(int **)(extraout_r2 + 0x1c);
    if (piVar10 == (int *)0x0) {
      func_0x01384978(*(undefined4 *)(iRam02f93558 + 0x2f9311c));
      func_0x01384978(*(undefined4 *)(iRam02f9355c + 0x2f93128));
      piVar10 = *(int **)(extraout_r2 + 0x1c);
      if (piVar10 == (int *)0x0) {
        func_0x0140024c(extraout_r2);
        piVar10 = *(int **)(extraout_r2 + 0x1c);
      }
    }
    iVar11 = *(int *)(piVar10[5] + 0x84);
    uVar8 = iVar11 + 7U & 0xfffffff8;
    iVar1 = (int)puVar4 + (-0x40 - uVar8);
    puVar13 = (undefined4 *)(iVar1 - uVar8);
    piVar18 = (int *)((int)puVar13 - uVar8);
    func_0x0145894c(piVar18,iVar11);
    if (piVar17 == (int *)0x0) goto LAB_02f93450;
    if (puVar4[-0xe] == 0) {
      uVar15 = *(undefined4 *)(iRam02f93564 + 0x2f93468);
      goto LAB_02f93464;
    }
    iVar6 = *piVar10;
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x014001f0(iVar6);
    }
    iVar2 = *piVar17;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar10[-1] == iVar6) {
          puVar5 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
          goto LAB_02f931f0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar17,iVar6,0);
LAB_02f931f0:
    piVar10 = (int *)(*(code *)*puVar5)(piVar17,puVar5[1]);
    iVar6 = 0;
    do {
      puVar4[-0xf] = iVar6;
      do {
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *piVar10;
        uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar17[-1] == **(int **)(iRam02f93568 + 0x2f93228)) {
              puVar5 = (undefined4 *)(iVar6 + *piVar17 * 8 + 0xc0);
              goto LAB_02f93270;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f93568 + 0x2f93228),0);
LAB_02f93270:
        iVar6 = (*(code *)*puVar5)(piVar10,puVar5[1]);
        if (iVar6 == 0) {
          iVar11 = 0;
          goto LAB_02f933ac;
        }
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(*(int *)(extraout_r2 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x014001f0(iVar6);
        }
        iVar2 = *piVar10;
        uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar17[-1] == iVar6) {
              iVar6 = iVar2 + *piVar17 * 8 + 0xc0;
              goto LAB_02f93300;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 2;
          } while (uVar8 != 0);
        }
        iVar6 = func_0x014002dc(piVar10,iVar6,0);
LAB_02f93300:
        iVar6 = *(int *)(iVar6 + 4);
        puVar4[-0xd] = iVar1;
        uVar15 = *(undefined4 *)(iVar6 + 4);
        pcVar16 = *(code **)(iVar6 + 8);
        *(int *)((int)piVar18 + -8) = iVar1;
        (*pcVar16)(uVar15,iVar6,piVar10,puVar4 + -0xd);
        func_0x01458934(piVar18,iVar1,iVar11);
        func_0x01458934(puVar13,piVar18,iVar11);
        puVar7 = *(undefined4 **)(*(int *)(extraout_r2 + 0x1c) + 0x18);
        puVar5 = puVar13;
        if (-1 < *(int *)(*(int *)(*(int *)(extraout_r2 + 0x1c) + 0x14) + 0x14)) {
          puVar5 = (undefined4 *)*puVar13;
        }
        uVar15 = *puVar7;
        pcVar16 = (code *)puVar7[2];
        puVar4[-0xd] = puVar5;
        *(int *)((int)piVar18 + -8) = (int)puVar4 + -0x2d;
        (*pcVar16)(uVar15,puVar7,puVar4[-0xe],puVar4 + -0xd);
      } while (*(char *)((int)puVar4 + -0x2d) == '\0');
      if (puVar4[-0xf] == 0x7fffffff) goto LAB_02f9347c;
      iVar6 = puVar4[-0xf] + 1;
    } while( true );
  }
  piVar17 = (int *)func_0x0145b008(uVar15);
  iVar1 = *piVar17;
  func_0x0145b0f8();
LAB_02f92f30:
  if (piVar10 != (int *)0x0) {
    iVar11 = *piVar10;
    uVar8 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar8 != 0) {
      piVar17 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar17[-1] == **(int **)(iRam02f930d4 + 0x2f92f48)) {
          puVar4 = (undefined4 *)(iVar11 + *piVar17 * 8 + 0xc0);
          goto LAB_02f92f90;
        }
        uVar8 = uVar8 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f930d4 + 0x2f92f48),0);
LAB_02f92f90:
    (*(code *)*puVar4)(piVar10,puVar4[1]);
  }
  if (iVar1 != 0) {
    func_0x01384bec(iVar1);
  }
  return unaff_r8;
LAB_02f9347c:
  while( true ) {
    uVar15 = func_0x01384bf8();
    func_0x01384aa0(uVar15,extraout_r2);
    uVar23 = func_0x01384928();
    iVar11 = (int)uVar23;
    if ((int)((ulonglong)uVar23 >> 0x20) != 1) break;
    piVar17 = (int *)func_0x0145b008(iVar11);
    iVar11 = *piVar17;
    func_0x0145b0f8();
LAB_02f933ac:
    if (piVar10 != (int *)0x0) {
      iVar6 = *piVar10;
      uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          iVar1 = piVar17[-1];
          if (iVar1 == **(int **)(iRam02f9356c + 0x2f933c4)) {
            puVar13 = (undefined4 *)(iVar6 + *piVar17 * 8 + 0xc0);
            goto LAB_02f9340c;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 2;
        } while (uVar8 != 0);
      }
      puVar13 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f9356c + 0x2f933c4),0);
LAB_02f9340c:
      (*(code *)*puVar13)(piVar10,puVar13[1]);
    }
    if (iVar11 != 0) {
      func_0x01384bec(iVar11);
    }
    if (**(int **)(iRam02f93570 + 0x2f93438) == puVar4[-0xb]) {
      return puVar4[-0xf];
    }
    func_0x0145b028(puVar4[-0xf]);
LAB_02f93450:
    uVar15 = *(undefined4 *)(iRam02f93560 + 0x2f9345c);
LAB_02f93464:
    uVar15 = func_0x01384988(uVar15);
    uVar15 = func_0x04a21c20(uVar15,0);
    func_0x01384aa0(uVar15,extraout_r2);
    func_0x01384928();
  }
  if (piVar10 != (int *)0x0) {
    iVar6 = *piVar10;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar17 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        iVar1 = piVar17[-1];
        if (iVar1 == **(int **)(iRam02f93574 + 0x2f934e0)) {
          puVar4 = (undefined4 *)(iVar6 + *piVar17 * 8 + 0xc0);
          goto LAB_02f93528;
        }
        uVar8 = uVar8 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f93574 + 0x2f934e0),0);
LAB_02f93528:
    (*(code *)*puVar4)(piVar10,puVar4[1]);
  }
  uVar20 = 1;
  func_0x01459844(iVar11);
  uVar24 = func_0x01062280();
  iVar2 = (int)(uVar24 >> 0x20);
  iVar6 = (int)uVar24;
  bVar21 = false;
  if ((bool)uVar20) {
    piVar10 = (int *)0xfd06f7ac;
    iVar2 = -0x28000000 - iVar6;
    bVar21 = iVar2 == 0;
  }
  bVar22 = false;
  if ((bVar21 && iVar6 == 0x1c00) && extraout_r2_00 == &UNK_02a00000) {
    iVar2 = 0x60000003 - iVar6;
    bVar22 = iVar2 == 0;
  }
  if (bVar22) {
    piVar10 = (int *)0xfd42caac;
  }
  *(undefined4 *)((int)piVar18 + -4) = 0x2f93554;
  *(undefined4 **)((int)piVar18 + -8) = puVar3;
  *(undefined4 *)((int)piVar18 + -0xc) = 0;
  *(int *)((int)piVar18 + -0x10) = (int)piVar10;
  if (*(int *)(iVar2 + 0x1c) == 0) {
    func_0x0140024c(iVar2);
  }
  if (iVar6 == 0) {
    uVar15 = func_0x01384988(*(undefined4 *)(iRam02f935d8 + 0x2f935c4));
    uVar15 = func_0x04a21c20(uVar15,0);
    func_0x01384aa0(uVar15,iVar2);
    uVar24 = func_0x01384928();
    iVar6 = (int)(uVar24 >> 0x20);
    *(undefined4 *)((int)piVar18 + -0x14) = 0x2f935d8;
    *(undefined4 **)((int)piVar18 + -0x18) = puVar3;
    *(undefined4 *)((int)piVar18 + -0x1c) = 0;
    piVar10 = (int *)((int)piVar18 + -0x20);
    *piVar10 = iVar2;
    if (*(int *)(iVar6 + 0x1c) == 0) {
      func_0x0140024c(iVar6);
    }
    if ((int)uVar24 == 0) {
      uVar15 = func_0x01384988(*(undefined4 *)(iRam02f9363c + 0x2f93628));
      uVar15 = func_0x04a21c20(uVar15,0);
      func_0x01384aa0(uVar15,iVar6);
      uVar23 = func_0x01384928();
      iVar2 = (int)((ulonglong)uVar23 >> 0x20);
      *(undefined4 *)((int)piVar18 + -0x24) = 0x2f9363c;
      *(undefined4 **)((int)piVar18 + -0x28) = puVar3;
      *(undefined4 *)((int)piVar18 + -0x2c) = 0;
      *(int *)((int)piVar18 + -0x30) = iVar6;
      if (*(int *)(iVar2 + 0x1c) == 0) {
        func_0x0140024c(iVar2);
      }
      if ((int)uVar23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02f93680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar1 = (*(code *)**(undefined4 **)(*(int *)(iVar2 + 0x1c) + 4))((int)uVar23,0);
        return iVar1;
      }
      uVar15 = func_0x01384988(*(undefined4 *)(iRam02f936a4 + 0x2f93690));
      uVar15 = func_0x04a21c20(uVar15,0);
      func_0x01384aa0(uVar15,iVar2);
      uVar24 = func_0x01384928();
      *(undefined4 *)((int)piVar18 + -0x34) = 0x2f936a4;
      *(int *)((int)piVar18 + -0x38) = iVar11;
      *(undefined4 *)((int)piVar18 + -0x3c) = 0;
      piVar10 = (int *)((int)piVar18 + -0x40);
      *piVar10 = iVar2;
      if (*(int *)(extraout_r2_01 + 0x1c) == 0) {
        func_0x0140024c(extraout_r2_01);
      }
      if ((int)uVar24 == 0) {
        uVar15 = func_0x01384988(*(undefined4 *)(iRam02f9370c + 0x2f936f8));
        uVar15 = func_0x04a21c20(uVar15,0);
        func_0x01384aa0(uVar15,extraout_r2_01);
        uVar23 = func_0x01384928();
        iVar14 = (int)((ulonglong)uVar23 >> 0x20);
        *(undefined4 *)((int)piVar18 + -0x44) = 0x2f9370c;
        *(undefined4 *)((int)piVar18 + -0x48) = 0;
        *(int *)((int)piVar18 + -0x4c) = (int)(uVar24 >> 0x20);
        piVar18 = (int *)((int)piVar18 + -0x50);
        *piVar18 = extraout_r2_01;
        if (*(int *)(extraout_r2_02 + 0x1c) == 0) {
          func_0x0140024c(extraout_r2_02);
        }
        if ((int)uVar23 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02f93754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar1 = (*(code *)**(undefined4 **)(*(int *)(extraout_r2_02 + 0x1c) + 8))
                            ((int)uVar23,iVar14);
          return iVar1;
        }
        uVar15 = func_0x01384988(*(undefined4 *)(iRam02f93778 + 0x2f93764));
        uVar15 = func_0x04a21c20(uVar15,0);
        func_0x01384aa0(uVar15,extraout_r2_02);
        iVar19 = 0x2f93778;
        uVar24 = func_0x01384928();
        iVar11 = 0;
        iVar6 = extraout_r2_03;
        iVar2 = extraout_r2_02;
        goto LAB_02f9377c;
      }
      iVar6 = *(int *)(*(int *)(extraout_r2_01 + 0x1c) + 8);
      iVar2 = *piVar10;
      iVar14 = *(int *)((int)piVar18 + -0x3c);
      iVar11 = *(int *)((int)piVar18 + -0x38);
      iVar19 = *(int *)((int)piVar18 + -0x34);
    }
    else {
      uVar24 = uVar24 & 0xffffffff;
      iVar6 = *(int *)(*(int *)(iVar6 + 0x1c) + 4);
      iVar2 = *piVar10;
      iVar14 = *(int *)((int)piVar18 + -0x1c);
      puVar3 = *(undefined4 **)((int)piVar18 + -0x18);
      iVar19 = *(int *)((int)piVar18 + -0x14);
    }
    piVar10[3] = iVar19;
    piVar10[2] = (int)puVar3;
    piVar10[1] = iVar1;
    *piVar10 = iVar11;
    piVar10[-1] = iVar14;
    piVar10[-2] = iVar2;
    piVar10 = *(int **)(iVar6 + 0x1c);
    if (piVar10 == (int *)0x0) {
      func_0x0140024c(iVar6);
      piVar10 = *(int **)(iVar6 + 0x1c);
    }
    if ((*(ushort *)(*piVar10 + 0xbd) & 1) == 0) {
      func_0x014001f0();
    }
    iVar1 = func_0x01384be4();
    func_0x0320b024(iVar1,0xfffffffe,*(undefined4 *)(*(int *)(iVar6 + 0x1c) + 4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar1 + 0x18) = (int)(uVar24 >> 0x20);
    *(int *)(iVar1 + 0x20) = (int)uVar24;
    return iVar1;
  }
  uVar24 = uVar24 & 0xffffffff;
  iVar6 = *(int *)(*(int *)(iVar2 + 0x1c) + 4);
  iVar2 = *(int *)((int)piVar18 + -0x10);
  iVar14 = *(int *)((int)piVar18 + -0xc);
  puVar3 = *(undefined4 **)((int)piVar18 + -8);
  iVar19 = *(int *)((int)piVar18 + -4);
LAB_02f9377c:
  piVar18[-1] = iVar19;
  piVar18[-2] = (int)puVar3;
  piVar18[-3] = iVar1;
  piVar18[-4] = iVar11;
  piVar18[-5] = iVar14;
  piVar18[-6] = iVar2;
  piVar10 = *(int **)(iVar6 + 0x1c);
  if (piVar10 == (int *)0x0) {
    func_0x0140024c(iVar6);
    piVar10 = *(int **)(iVar6 + 0x1c);
  }
  if ((*(ushort *)(*piVar10 + 0xbd) & 1) == 0) {
    func_0x014001f0();
  }
  iVar1 = func_0x01384be4();
  func_0x0320aac8(iVar1,0xfffffffe,*(undefined4 *)(*(int *)(iVar6 + 0x1c) + 4));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 0x18) = (int)(uVar24 >> 0x20);
  *(int *)(iVar1 + 0x20) = (int)uVar24;
  return iVar1;
}



// ===== FAT.ActivityBingo$$GetBingoTotalNum RVA 0x2b03218 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b13218(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02b132a4 + 0x2b1322c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b132a8 + 0x2b13240));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1451,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1451,0);
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
    uVar5 = func_0x0245498c(&uStack_30,0,0);
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0xc);
}



// ===== FAT.ActivityBingo$$GetBingoBoardIndex RVA 0x2b032ac =====

int FUN_02b132ac(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x1452,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1452,0);
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
  return *(int *)(param_1 + 0x40) + 1;
}



// ===== FAT.ActivityBingo$$GetBingoItemList RVA 0x2b03a54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b13a54(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x1453,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1453,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021ca994 + 0x21ca8b4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021ca998 + 0x21ca8c8),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021ca99c + 0x21ca984));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x54);
}



// ===== FAT.ActivityBingo$$RefreshBingoItemMap RVA 0x2b03aa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b13aa8(int param_1,int param_2)

{
  int iVar1;
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
  
  pcVar6 = (char *)(_UNK_02b13ccc + 0x2b13ac0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b13cd0 + 0x2b13ad4));
    func_0x01384978(*(undefined4 *)(_UNK_02b13cd4 + 0x2b13ae0));
    func_0x01384978(*(undefined4 *)(_UNK_02b13cd8 + 0x2b13aec));
    func_0x01384978(*(undefined4 *)(_UNK_02b13cdc + 0x2b13af8));
    func_0x01384978(*(undefined4 *)(_UNK_02b13ce0 + 0x2b13b04));
    func_0x01384978(*(undefined4 *)(_UNK_02b13ce4 + 0x2b13b10));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1454,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1454,0);
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(param_2 + 0x14) != '\0') {
    iVar1 = *(int *)(param_1 + 100);
    uVar5 = *(undefined4 *)(param_2 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d59fc8(iVar1,uVar5,**(undefined4 **)(_UNK_02b13ce8 + 0x2b13b9c));
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 100);
      uVar5 = *(undefined4 *)(param_2 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
        iVar4 = func_0x03d59cc4(0,uVar5,**(undefined4 **)(_UNK_02b13cf0 + 0x2b13bf4));
        func_0x01384bf0();
      }
      else {
        iVar4 = func_0x03d59cc4(iVar1,uVar5,**(undefined4 **)(_UNK_02b13cec + 0x2b13bcc));
      }
      func_0x03d59d54(iVar1,uVar5,iVar4 + -1,**(undefined4 **)(_UNK_02b13cf4 + 0x2b13c18));
      iVar1 = *(int *)(param_1 + 100);
      uVar5 = *(undefined4 *)(param_2 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x03d59cc4(iVar1,uVar5,**(undefined4 **)(_UNK_02b13cf8 + 0x2b13c44));
      if (iVar1 < 1) {
        iVar1 = *(int *)(param_1 + 100);
        uVar5 = *(undefined4 *)(param_2 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03d5b44c(iVar1,uVar5,**(undefined4 **)(_UNK_02b13cfc + 0x2b13c78));
      }
      if (*(int *)(**(int **)(_UNK_02b13d00 + 0x2b13c8c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02b13d04 + 0x2b13ca8));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x0229f06c(0x3f,0);
      if (iVar4 != 0) {
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
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      return;
    }
  }
  return;
}



// ===== FAT.ActivityBingo$$PreviewCompleteBingo RVA 0x2b03d08 =====

void FUN_02b13d08(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x1455,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02b13d98(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                            *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x6c));
    *param_3 = uVar2;
  }
  else {
    iVar1 = func_0x0229f13c(0x1455,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021cae4c(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityBingo$$CompleteBingo RVA 0x2b040ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b140ac(int param_1,int param_2,undefined4 *param_3,char *param_4,undefined1 *param_5)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_02b148a4 + 0x2b140d0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b148a8 + 0x2b140e4));
    func_0x01384978(*(undefined4 *)(_UNK_02b148ac + 0x2b140f0));
    func_0x01384978(*(undefined4 *)(_UNK_02b148b0 + 0x2b140fc));
    func_0x01384978(*(undefined4 *)(_UNK_02b148b4 + 0x2b14108));
    func_0x01384978(*(undefined4 *)(_UNK_02b148b8 + 0x2b14114));
    func_0x01384978(*(undefined4 *)(_UNK_02b148bc + 0x2b14120));
    func_0x01384978(*(undefined4 *)(_UNK_02b148c0 + 0x2b1412c));
    func_0x01384978(*(undefined4 *)(_UNK_02b148c4 + 0x2b14138));
    func_0x01384978(*(undefined4 *)(_UNK_02b148c8 + 0x2b14144));
    func_0x01384978(*(undefined4 *)(_UNK_02b148cc + 0x2b14150));
    func_0x01384978(*(undefined4 *)(_UNK_02b148d0 + 0x2b1415c));
    func_0x01384978(*(undefined4 *)(_UNK_02b148d4 + 0x2b14168));
    func_0x01384978(*(undefined4 *)(_UNK_02b148d8 + 0x2b14174));
    func_0x01384978(*(undefined4 *)(_UNK_02b148dc + 0x2b14180));
    func_0x01384978(*(undefined4 *)(_UNK_02b148e0 + 0x2b1418c));
    func_0x01384978(*(undefined4 *)(_UNK_02b148e4 + 0x2b14198));
    func_0x01384978(*(undefined4 *)(_UNK_02b148e8 + 0x2b141a4));
    *pcVar6 = '\x01';
  }
  iStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar3 = func_0x0229f06c(0x1465,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x1465,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x021cb56c(iVar3,param_1,param_2,param_3,param_4,param_5,0);
    return uVar4;
  }
  *param_3 = 0;
  *param_4 = '\0';
  *param_5 = 0;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(param_2 + 0x14) != '\0') {
    return 0;
  }
  piVar7 = *(int **)(_UNK_02b148ec + 0x2b14250);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar7;
  }
  iVar3 = **(int **)(iVar3 + 0x5c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0359c380(&uStack_30,iVar3,&iStack_28,**(undefined4 **)(_UNK_02b148f0 + 0x2b1428c));
  iVar3 = iStack_28;
  uVar14 = *(undefined4 *)(param_2 + 8);
  if (iStack_28 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar3 + 8);
  uVar4 = *(uint *)(iVar3 + 0xc);
  piVar7 = *(int **)(_UNK_02b148f4 + 0x2b142c8);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  iVar13 = *piVar7;
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  if (uVar4 < *(uint *)(iVar11 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar4 + 1;
    iVar11 = iVar11 + uVar4 * 8;
    *(undefined4 *)(iVar11 + 0x10) = uVar14;
    *(undefined4 *)(iVar11 + 0x14) = 1;
  }
  else {
    func_0x0326a8b0(iVar3,uVar14,1,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38))
    ;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x5c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar11 = func_0x01db7b78(iVar3,0);
  iVar3 = iStack_28;
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  iVar3 = func_0x021491b8(iVar11,iVar3,0,0,0);
  if (iVar3 == 0) goto LAB_02b147b0;
  uVar14 = *(undefined4 *)(param_1 + 0x54);
  uVar5 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined1 *)(param_2 + 0x14) = 1;
  func_0x02b13d98(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),uVar14,uVar5);
  uVar14 = func_0x02b14930();
  *param_3 = uVar14;
  uVar4 = func_0x02b14cd0(*(undefined4 *)(param_1 + 0x54),param_2);
  func_0x02b15400(*(undefined4 *)(param_1 + 0x54),uVar4,param_2);
  piVar7 = *(int **)(_UNK_02b148f8 + 0x2b143dc);
  uVar14 = *param_3;
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4(iVar3);
    iVar3 = *piVar7;
  }
  iVar11 = *(int *)(*(int *)(iVar3 + 0x5c) + 8);
  uVar5 = **(undefined4 **)(_UNK_02b148fc + 0x2b14414);
  if (iVar11 == 0) {
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4(iVar3);
      iVar3 = *piVar7;
    }
    uVar12 = **(undefined4 **)(iVar3 + 0x5c);
    iVar11 = func_0x01384be4(**(undefined4 **)(_UNK_02b14900 + 0x2b1445c));
    func_0x041cfbf8(iVar11,uVar12,**(undefined4 **)(_UNK_02b14904 + 0x2b14470),0);
    *(int *)(*(int *)(*piVar7 + 0x5c) + 8) = iVar11;
  }
  uVar14 = func_0x02fab288(uVar14,iVar11,**(undefined4 **)(_UNK_02b14908 + 0x2b1449c));
  uStack_3c = func_0x04672c80(uVar5,uVar14,0);
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar14 = *(undefined4 *)(param_2 + 0x18);
  uVar12 = *(undefined4 *)(param_2 + 0x1c);
  if (*(int *)(**(int **)(_UNK_02b1490c + 0x2b144c8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar5 = func_0x02b1eff0(**(undefined4 **)(_UNK_02b14910 + 0x2b144f0),uVar5,uVar14,uVar12,
                          **(undefined4 **)(_UNK_02b14914 + 0x2b144fc));
  uVar15 = uVar4 & 2;
  uVar8 = 1;
  uVar14 = 0;
  if (uVar15 == 0) {
    uVar14 = uStack_3c;
  }
  iVar3 = 0;
  uVar12 = 0;
  if (uVar15 == 0) {
    iVar3 = param_1;
    uVar12 = uVar5;
  }
  iVar11 = param_1;
  if (((uVar4 & 6) == 0) && (uVar5 = uVar12, iVar11 = iVar3, uStack_3c = uVar14, (uVar4 & 8) == 0))
  {
    uVar8 = (uVar4 & 0x1f) >> 4;
  }
  uVar14 = func_0x02f915a8(*(undefined4 *)(param_1 + 0x54),
                           **(undefined4 **)(_UNK_02b14918 + 0x2b14564));
  iVar3 = *piVar7;
  uVar12 = *(undefined4 *)(param_1 + 0x54);
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4(iVar3);
    iVar3 = *piVar7;
  }
  iVar13 = *(int *)(*(int *)(iVar3 + 0x5c) + 0xc);
  if (iVar13 == 0) {
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4(iVar3);
      iVar3 = *piVar7;
    }
    uVar9 = **(undefined4 **)(iVar3 + 0x5c);
    iVar13 = func_0x01384be4(**(undefined4 **)(_UNK_02b1491c + 0x2b145e0));
    func_0x041cf488(iVar13,uVar9,**(undefined4 **)(_UNK_02b14920 + 0x2b145f4),0);
    *(int *)(*(int *)(*piVar7 + 0x5c) + 0xc) = iVar13;
  }
  uVar12 = func_0x02f92d20(uVar12,iVar13,**(undefined4 **)(_UNK_02b14924 + 0x2b1461c));
  uVar10 = uVar4 & 0x20;
  func_0x019b42fc(iVar11,uVar5,uStack_3c,uVar8,uVar10 != 0,uVar14,uVar12,
                  *(int *)(param_1 + 0x40) + 1,*(int *)(param_1 + 0x24) + 1,0);
  uVar8 = 1;
  if ((uVar4 & 4) == 0) {
    if (uVar15 != 0) goto LAB_02b146a4;
    if ((uVar4 & 0x18) != 0) {
      uVar8 = 0;
      goto LAB_02b146a4;
    }
  }
  else {
    if (uVar15 == 0) {
      uVar8 = (uVar4 & 4) >> 2;
    }
LAB_02b146a4:
    iVar3 = *(int *)(param_1 + 0x48) + 1;
    *(int *)(param_1 + 0x48) = iVar3;
    func_0x019b4494(param_1,uVar8,(uVar4 & 0x18) != 0,uVar10 != 0,*(int *)(param_1 + 0x40) + 1,iVar3
                    ,*(int *)(param_1 + 0x24) + 1,uVar10 != 0,0);
  }
  if ((uVar4 & 1) != 0) {
    FUN_02b13aa8(param_1,param_2);
    if (*(int *)(**(int **)(_UNK_02b14928 + 0x2b1470c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_02b1492c + 0x2b14728));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3fd8(iVar3,0);
  }
  if (uVar10 == 0) {
    uVar2 = 0;
    *param_4 = '\0';
LAB_02b1478c:
    *param_5 = uVar2;
  }
  else {
    cVar1 = func_0x02b15b40(param_1);
    *param_4 = cVar1;
    if (*param_4 == '\0') {
      uVar2 = func_0x02b15ea4(param_1);
      goto LAB_02b1478c;
    }
  }
  iVar3 = *(int *)(param_1 + 0x98);
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
  }
LAB_02b147b0:
  func_0x028c98a0(&uStack_30,0);
  return uVar4;
}



// ===== FAT.ActivityBingo$$TryEnterNextBoard RVA 0x2b05b40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b15b40(int param_1)

{
  int iVar1;
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
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_02b15e58 + 0x2b15b58);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b15e5c + 0x2b15b6c));
    func_0x01384978(*(undefined4 *)(_UNK_02b15e60 + 0x2b15b78));
    func_0x01384978(*(undefined4 *)(_UNK_02b15e64 + 0x2b15b84));
    func_0x01384978(*(undefined4 *)(_UNK_02b15e68 + 0x2b15b90));
    func_0x01384978(*(undefined4 *)(_UNK_02b15e6c + 0x2b15b9c));
    func_0x01384978(*(undefined4 *)(_UNK_02b15e70 + 0x2b15ba8));
    func_0x01384978(*(undefined4 *)(_UNK_02b15e74 + 0x2b15bb4));
    func_0x01384978(*(undefined4 *)(_UNK_02b15e78 + 0x2b15bc0));
    func_0x01384978(*(undefined4 *)(_UNK_02b15e7c + 0x2b15bcc));
    func_0x01384978(*(undefined4 *)(_UNK_02b15e80 + 0x2b15bd8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1486,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1486,0);
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
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar6 = func_0x0245496c(&uStack_30,0,0);
    return uVar6;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  iVar1 = func_0x02b1392c(*(undefined4 *)(param_1 + 0x3c));
  uStack_20 = 0;
  func_0x019b461c(param_1,*(undefined4 *)(param_1 + 0x6c),*(int *)(param_1 + 0x40) + 1,
                  *(int *)(param_1 + 0x24) + 1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0x14);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_1 + 0x40) + 1;
  uVar6 = 0;
  if (iVar2 < *(int *)(iVar4 + 0xc)) {
    iVar4 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x40) = iVar2;
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (iVar4 == 0) {
      func_0x01384bf0(0);
    }
    iVar2 = *(int *)(iVar4 + 0xc);
    *(undefined4 *)(iVar4 + 0xc) = 0;
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
    if (0 < iVar2) {
      func_0x0484e5ec(*(undefined4 *)(iVar4 + 8),0,iVar2,0);
    }
    iVar4 = *(int *)(param_1 + 100);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar4,**(undefined4 **)(_UNK_02b15e84 + 0x2b15cfc));
    iVar1 = *(int *)(iVar1 + 0x14);
    uVar6 = *(undefined4 *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = func_0x0364c9b8(iVar1,uVar6,**(undefined4 **)(_UNK_02b15e88 + 0x2b15d28));
    *(undefined4 *)(param_1 + 0x6c) = uStack_1c;
    uVar6 = func_0x01384abc(**(undefined4 **)(_UNK_02b15e8c + 0x2b15d40),&uStack_1c);
    uVar6 = func_0x046604e4(**(undefined4 **)(_UNK_02b15e90 + 0x2b15d64),uVar6,0);
    if (*(int *)(**(int **)(_UNK_02b15e94 + 0x2b15d78) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02450924(uVar6,0);
    iVar1 = *(int *)(param_1 + 0x54);
    uVar6 = func_0x02b116a4(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328f380(iVar1,uVar6,**(undefined4 **)(_UNK_02b15e98 + 0x2b15dc4));
    FUN_02b11ac8(param_1);
    if (*(int *)(**(int **)(_UNK_02b15e9c + 0x2b15de0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02b15ea0 + 0x2b15dfc));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 0;
    func_0x028c3fd8(iVar1,0);
    iVar1 = func_0x02b139c0(*(undefined4 *)(param_1 + 0x6c));
    uVar6 = 0;
    if (iVar1 != 0) {
      uVar6 = *(undefined4 *)(iVar1 + 0x18);
    }
    *(undefined4 *)(param_1 + 0x60) = uVar6;
    iVar1 = func_0x02b139c0(*(undefined4 *)(param_1 + 0x6c));
    if (iVar1 != 0) {
      uVar3 = *(undefined4 *)(iVar1 + 0x1c);
    }
    uVar6 = 1;
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
  }
  return uVar6;
}



// ===== FAT.ActivityBingo$$TryEnterNextRound RVA 0x2b05ea4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b15ea4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
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
  
  pcVar4 = (char *)(_UNK_02b16288 + 0x2b15ebc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b1628c + 0x2b15ed0));
    func_0x01384978(*(undefined4 *)(_UNK_02b16290 + 0x2b15edc));
    func_0x01384978(*(undefined4 *)(_UNK_02b16294 + 0x2b15ee8));
    func_0x01384978(*(undefined4 *)(_UNK_02b16298 + 0x2b15ef4));
    func_0x01384978(*(undefined4 *)(_UNK_02b1629c + 0x2b15f00));
    func_0x01384978(*(undefined4 *)(_UNK_02b162a0 + 0x2b15f0c));
    func_0x01384978(*(undefined4 *)(_UNK_02b162a4 + 0x2b15f18));
    func_0x01384978(*(undefined4 *)(_UNK_02b162a8 + 0x2b15f24));
    func_0x01384978(*(undefined4 *)(_UNK_02b162ac + 0x2b15f30));
    func_0x01384978(*(undefined4 *)(_UNK_02b162b0 + 0x2b15f3c));
    func_0x01384978(*(undefined4 *)(_UNK_02b162b4 + 0x2b15f48));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1487,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1487,0);
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
    uVar5 = func_0x0245496c(&uStack_30,0,0);
    return uVar5;
  }
  func_0x02b4429c(param_1,0);
  iVar1 = func_0x02b13304();
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 0x14);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  if (iVar3 + 1 < *(int *)(iVar6 + 0xc)) {
    iVar3 = *(int *)(iVar1 + 0x14);
    iVar1 = *(int *)(param_1 + 0x24) + 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(int *)(param_1 + 0x24) = iVar1;
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    puVar8 = *(undefined4 **)(_UNK_02b162b8 + 0x2b1601c);
    uStack_1c = func_0x0364c9b8(iVar3,iVar1,*puVar8);
    *(undefined4 *)(param_1 + 0x68) = uStack_1c;
    puVar7 = *(undefined4 **)(_UNK_02b162bc + 0x2b16034);
    uVar5 = func_0x01384abc(*puVar7,&uStack_1c);
    uVar5 = func_0x046604e4(**(undefined4 **)(_UNK_02b162c0 + 0x2b16054),uVar5,0);
    if (*(int *)(**(int **)(_UNK_02b162c4 + 0x2b16068) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02450924(uVar5,0);
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0484e5ec(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
    }
    iVar1 = func_0x02b1392c(*(undefined4 *)(param_1 + 0x3c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = func_0x0364c9b8(iVar1,uVar5,*puVar8);
    uVar5 = *puVar7;
    *(undefined4 *)(param_1 + 0x6c) = uStack_20;
    uVar5 = func_0x01384abc(uVar5,&uStack_20);
    uVar5 = func_0x046604e4(**(undefined4 **)(_UNK_02b162c8 + 0x2b1612c),uVar5,0);
    func_0x02450924(uVar5,0);
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_02b162cc + 0x2b16154));
    iVar1 = *(int *)(param_1 + 0x54);
    uVar5 = func_0x02b116a4(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328f380(iVar1,uVar5,**(undefined4 **)(_UNK_02b162d0 + 0x2b1618c));
    FUN_02b11ac8(param_1);
    if (*(int *)(**(int **)(_UNK_02b162d4 + 0x2b161a8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_02b162d8 + 0x2b161c4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    func_0x028c3fd8(iVar1,0);
    func_0x019b4768(param_1,*(int *)(param_1 + 0x24) + 1,0);
    iVar1 = func_0x02b139c0(*(undefined4 *)(param_1 + 0x6c));
    uVar5 = 0;
    if (iVar1 != 0) {
      uVar5 = *(undefined4 *)(iVar1 + 0x18);
    }
    *(undefined4 *)(param_1 + 0x60) = uVar5;
    iVar1 = func_0x02b139c0(*(undefined4 *)(param_1 + 0x6c));
    uVar5 = 1;
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 0;
    func_0x02b49350(iVar1,param_1,0,0);
  }
  return uVar5;
}



// ===== FAT.ActivityBingo$$TryTakeOutItem RVA 0x2b062dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b162dc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
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
  undefined4 uStack_20;
  int aiStack_1c [2];
  
  iVar2 = func_0x0229f06c(0x1488,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x1488,0);
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
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar7,&uStack_38,uVar3,0,0);
    uVar7 = func_0x0245496c(&uStack_38,0,0);
    return uVar7;
  }
  pcVar5 = (char *)(_UNK_02b16888 + 0x2b16354);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b1688c + 0x2b16368));
    func_0x01384978(*(undefined4 *)(_UNK_02b16890 + 0x2b16374));
    func_0x01384978(*(undefined4 *)(_UNK_02b16894 + 0x2b16380));
    func_0x01384978(*(undefined4 *)(_UNK_02b16898 + 0x2b1638c));
    *pcVar5 = '\x01';
  }
  aiStack_1c[0] = 0;
  uStack_20 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0x1489,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01db7b78(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02139cf4(iVar2,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 0;
    iVar2 = func_0x020d842c(iVar2,0);
    if (iVar2 < 1) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar2 + 0x10);
      iVar6 = **(int **)(_UNK_02b1689c + 0x2b16640);
      iVar2 = *(int *)(iVar6 + 0x1c);
      if (iVar2 == 0) {
        func_0x0140024c(iVar6);
        iVar2 = *(int *)(iVar6 + 0x1c);
      }
      iVar2 = *(int *)(iVar2 + 8);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0();
      }
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0();
      }
      uVar7 = **(undefined4 **)(iVar2 + 0x5c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x01ca1c50(iVar4,0x14,uVar7,0);
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar7 = 0;
      func_0x01bf3284(iVar2,**(undefined4 **)(_UNK_02b168a0 + 0x2b166fc),0);
    }
    else {
      iVar2 = func_0x02b17dd8(param_2);
      if (iVar2 != 0) {
        iVar4 = func_0x01c24918(0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0x5c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x01db7b78(iVar4,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar7 = 0;
        iVar4 = func_0x02141880(iVar4,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = 0;
        func_0x021151b8(iVar4,iVar2,aiStack_1c,&uStack_20);
        iVar4 = func_0x02b16dfc(iVar2);
        if (iVar4 != 0 || aiStack_1c[0] != -1) {
          if (aiStack_1c[0] == -1) {
            iVar4 = func_0x01c24918(0);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            iVar4 = *(int *)(iVar4 + 0x5c);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            iVar4 = func_0x01db7b78(iVar4,0);
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            aiStack_1c[0] = func_0x021451e0(iVar4,iVar2,0);
            iVar2 = func_0x01c24918(0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0x5c);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x01db7b78(iVar2,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar4 = func_0x02139cf4(iVar2,0);
            iVar2 = aiStack_1c[0];
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            func_0x020e9e30(iVar4,iVar2,0);
          }
          else {
            if (*(int *)(**(int **)(_UNK_02b168a4 + 0x2b16528) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x0205048c(7,&uStack_30,0);
            uVar1 = uStack_28;
            uVar3 = uStack_2c;
            uVar7 = uStack_30;
            if (*(int *)(**(int **)(_UNK_02b168a8 + 0x2b1655c) + 0x74) == 0) {
              func_0x01384ab4();
            }
            uStack_38 = 0xbf800000;
            uStack_34 = 0;
            func_0x01dd7838(iVar2,uVar7,uVar3,uVar1);
            iVar2 = func_0x01c24918(0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar2 + 0x5c);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x01db7b78(iVar2,0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar4 = func_0x02139cf4(iVar2,0);
            iVar2 = aiStack_1c[0];
            uVar7 = uStack_20;
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            iVar2 = func_0x020e8724(iVar4,iVar2,uVar7,0);
            if (iVar2 == 0) {
              return 0;
            }
          }
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar2 + 0x10);
          iVar6 = **(int **)(_UNK_02b168ac + 0x2b167f8);
          iVar2 = *(int *)(iVar6 + 0x1c);
          if (iVar2 == 0) {
            func_0x0140024c(iVar6);
            iVar2 = *(int *)(iVar6 + 0x1c);
          }
          iVar2 = *(int *)(iVar2 + 8);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x014001f0();
          }
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar2 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x014001f0();
          }
          uVar7 = **(undefined4 **)(iVar2 + 0x5c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x01ca1c50(iVar4,0x3c,uVar7,0);
          uVar7 = 1;
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x1489,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar7 = func_0x021856f4(iVar2,param_2,0);
  }
  return uVar7;
}



// ===== FAT.ActivityBingo$$CheckBingoComplete RVA 0x2b068b0 =====

/* WARNING: Possible PIC construction at 0x02f868b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f868b8) */
/* WARNING: Removing unreachable block (ram,0x02f86468) */
/* WARNING: Removing unreachable block (ram,0x02f85c3c) */
/* WARNING: Removing unreachable block (ram,0x02f85fe4) */
/* WARNING: Removing unreachable block (ram,0x02f86830) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02b168b0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  int iVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  code *unaff_r7;
  code *pcVar16;
  code *pcVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  undefined1 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [4];
  int aiStack_10c [2];
  int aiStack_104 [9];
  int aiStack_e0 [2];
  int aiStack_d8 [10];
  int aiStack_b0 [12];
  int aiStack_80 [3];
  undefined4 *puStack_74;
  char cStack_6d;
  int iStack_6c;
  int *piStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  code *pcStack_58;
  
  pcVar13 = (char *)(_UNK_02b16a60 + 0x2b168c4);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b16a64 + 0x2b168d8));
    func_0x01384978(*(undefined4 *)(_UNK_02b16a68 + 0x2b168e4));
    func_0x01384978(*(undefined4 *)(_UNK_02b16a6c + 0x2b168f0));
    func_0x01384978(*(undefined4 *)(_UNK_02b16a70 + 0x2b168fc));
    *pcVar13 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x151a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x151a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0245494c(&stack0xffffffb8,0,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&stack0xffffffd0,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&stack0xffffffd0,param_1,0);
    iVar12 = *(int *)(iVar2 + 8);
    uVar14 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar8 = 2;
    if (iVar2 == 0) {
      uVar8 = 1;
    }
    func_0x0245495c(iVar12,uVar14,&stack0xffffffd0,uVar8);
    piVar1 = (int *)func_0x0245496c(&stack0xffffffd0,0,0);
    return piVar1;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x01db7bcc(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar1 = (int *)func_0x0214da98(iVar2,0);
  if (piVar1 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar1;
  uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_02b16a74 + 0x2b169b8)) {
        puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xd0);
        goto LAB_02b16a00;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_02b16a74 + 0x2b169b8),2);
LAB_02b16a00:
  piVar1 = (int *)(*(code *)*puVar3)(piVar1,puVar3[1]);
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02b16a78 + 0x2b16a20));
  func_0x041cd5a4(iVar2,param_1,**(undefined4 **)(_UNK_02b16a7c + 0x2b16a3c),0);
  iVar12 = **(int **)(_UNK_02b16a80 + 0x2b16a54);
  if (*(int *)(iVar12 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f85c50 + 0x2f858ec));
    func_0x01384978(*(undefined4 *)(iRam02f85c54 + 0x2f858f8));
    if (*(int *)(iVar12 + 0x1c) == 0) {
      func_0x0140024c(iVar12);
    }
  }
  if (piVar1 == (int *)0x0) {
    uVar14 = *(undefined4 *)(iRam02f85c58 + 0x2f85b64);
  }
  else {
    if (iVar2 != 0) {
      iVar6 = **(int **)(iVar12 + 0x1c);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x014001f0(iVar6);
      }
      iVar4 = *piVar1;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar6) {
            puVar3 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
            goto LAB_02f85988;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,iVar6,0);
LAB_02f85988:
      piVar1 = (int *)(*(code *)*puVar3)(piVar1,puVar3[1]);
      piVar9 = *(int **)(iRam02f85c60 + 0x2f859a8);
      do {
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *piVar1;
        uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar10[-1] == *piVar9) {
              puVar3 = (undefined4 *)(iVar6 + *piVar10 * 8 + 0xc0);
              goto LAB_02f85a00;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar1,*piVar9,0);
LAB_02f85a00:
        piVar10 = (int *)(*(code *)*puVar3)(piVar1,puVar3[1]);
        if (piVar10 == (int *)0x0) {
          iVar2 = 0;
          piVar10 = (int *)0x0;
          goto LAB_02f85ad0;
        }
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(*(int *)(iVar12 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x014001f0(iVar6);
        }
        iVar4 = *piVar1;
        uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar11[-1] == iVar6) {
              puVar3 = (undefined4 *)(iVar4 + *piVar11 * 8 + 0xc0);
              goto LAB_02f85a94;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar1,iVar6,0);
LAB_02f85a94:
        uVar14 = (*(code *)*puVar3)(piVar1,puVar3[1]);
        iVar6 = (**(code **)(iVar2 + 0xc))
                          (*(undefined4 *)(iVar2 + 0x20),uVar14,*(undefined4 *)(iVar2 + 0x14));
      } while (iVar6 == 0);
      iVar2 = 0;
      goto LAB_02f85ad0;
    }
    uVar14 = *(undefined4 *)(iRam02f85c5c + 0x2f85b70);
  }
  uVar14 = func_0x01384988(uVar14);
  uVar14 = func_0x04a21c20(uVar14,0);
  func_0x01384aa0(uVar14,iVar12);
  uVar24 = func_0x01384928();
  if ((int)((ulonglong)uVar24 >> 0x20) == 1) {
    piVar9 = (int *)func_0x0145b008((int)uVar24);
    iVar2 = *piVar9;
    piVar10 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f85ad0:
    if (piVar1 != (int *)0x0) {
      iVar12 = *piVar1;
      uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(iRam02f85c64 + 0x2f85ae8)) {
            puVar3 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
            goto LAB_02f85b30;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(iRam02f85c64 + 0x2f85ae8),0);
LAB_02f85b30:
      (*(code *)*puVar3)(piVar1,puVar3[1]);
    }
    if (iVar2 != 0) {
      func_0x01384bec(iVar2);
    }
    return piVar10;
  }
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar9[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f85c68 + 0x2f85bdc)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_02f85c24;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar1,(code *)**(int **)(iRam02f85c68 + 0x2f85bdc),0);
LAB_02f85c24:
    (*(code *)*puVar3)(piVar1,puVar3[1]);
  }
  uVar23 = 1;
  func_0x01459844((int)uVar24);
  uVar24 = func_0x01062280();
  iVar12 = (int)((ulonglong)uVar24 >> 0x20);
  piVar1 = (int *)uVar24;
  iVar2 = extraout_r2;
  if ((bool)uVar23) {
    iVar2 = 0x3607a3a8;
  }
  bVar21 = false;
  if (((bool)uVar23 && piVar1 == (int *)0x200) && iVar12 == 0x6800000) {
    unaff_r7 = (code *)(0xa0 - extraout_r3);
    bVar21 = unaff_r7 == (code *)0x0;
  }
  if (bVar21 && piVar1 == (int *)0x5800) {
    iVar2 = 0x3d07a39f;
  }
  if (*(int *)(iVar2 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f85ff8 + 0x2f85c94));
    func_0x01384978(*(undefined4 *)(iRam02f85ffc + 0x2f85ca0));
    if (*(int *)(iVar2 + 0x1c) == 0) {
      func_0x0140024c(iVar2);
    }
  }
  if (piVar1 == (int *)0x0) {
    uVar14 = *(undefined4 *)(iRam02f86000 + 0x2f85f0c);
  }
  else {
    if (iVar12 != 0) {
      iVar6 = **(int **)(iVar2 + 0x1c);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x014001f0(iVar6);
      }
      iVar4 = *piVar1;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar6) {
            puVar3 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
            goto LAB_02f85d30;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,iVar6,0);
LAB_02f85d30:
      piVar1 = (int *)(*(code *)*puVar3)(piVar1,puVar3[1]);
      piVar9 = *(int **)(iRam02f86008 + 0x2f85d50);
      do {
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *piVar1;
        uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar10[-1] == *piVar9) {
              puVar3 = (undefined4 *)(iVar6 + *piVar10 * 8 + 0xc0);
              goto LAB_02f85da8;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar1,*piVar9,0);
LAB_02f85da8:
        piVar10 = (int *)(*(code *)*puVar3)(piVar1,puVar3[1]);
        if (piVar10 == (int *)0x0) {
          iVar2 = 0;
          piVar10 = (int *)0x0;
          goto LAB_02f85e78;
        }
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(*(int *)(iVar2 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x014001f0(iVar6);
        }
        iVar4 = *piVar1;
        uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar11[-1] == iVar6) {
              puVar3 = (undefined4 *)(iVar4 + *piVar11 * 8 + 0xc0);
              goto LAB_02f85e3c;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar1,iVar6,0);
LAB_02f85e3c:
        uVar14 = (*(code *)*puVar3)(piVar1,puVar3[1]);
        iVar6 = (**(code **)(iVar12 + 0xc))
                          (*(undefined4 *)(iVar12 + 0x20),uVar14,*(undefined4 *)(iVar12 + 0x14));
      } while (iVar6 == 0);
      iVar2 = 0;
      goto LAB_02f85e78;
    }
    uVar14 = *(undefined4 *)(iRam02f86004 + 0x2f85f18);
  }
  uVar14 = func_0x01384988(uVar14);
  uVar14 = func_0x04a21c20(uVar14,0);
  func_0x01384aa0(uVar14,iVar2);
  uVar24 = func_0x01384928();
  iVar2 = (int)uVar24;
  if ((int)((ulonglong)uVar24 >> 0x20) != 1) {
    if (piVar1 != (int *)0x0) {
      iVar12 = *piVar1;
      uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
        do {
          unaff_r7 = (code *)piVar9[-1];
          if (unaff_r7 == (code *)**(int **)(iRam02f86010 + 0x2f85f84)) {
            puVar3 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
            goto LAB_02f85fcc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,(code *)**(int **)(iRam02f86010 + 0x2f85f84),0);
LAB_02f85fcc:
      (*(code *)*puVar3)(piVar1,puVar3[1]);
    }
    uVar23 = 1;
    func_0x01459844(iVar2);
    uVar24 = func_0x01062280();
    aiStack_80[1] = (int)((ulonglong)uVar24 >> 0x20);
    piVar9 = (int *)uVar24;
    iVar12 = extraout_r2_00;
    if ((bool)uVar23) {
      iVar12 = -0x42f85ffd;
    }
    bVar21 = false;
    if (((bool)uVar23 && (dword *)piVar9 == &__DT_REL[0x27d26].r_info) && aiStack_80[1] == 0xc) {
      iVar2 = 0xf800 - extraout_r3_00;
      bVar21 = iVar2 == 0;
    }
    if (bVar21 && piVar9 == (int *)&UNK_00b00000) {
      iVar12 = -0x2f85fd4;
      aiStack_80[1] = -0x2f85ee8;
    }
    uStack_60 = 0;
    iStack_6c = **(int **)(iRam02f8647c + 0x2f86038);
    piVar10 = *(int **)(iVar12 + 0x1c);
    piStack_64 = piVar1;
    iStack_5c = iVar2;
    pcStack_58 = unaff_r7;
    if (piVar10 == (int *)0x0) {
      func_0x01384978(*(undefined4 *)(iRam02f86480 + 0x2f86054));
      func_0x01384978(*(undefined4 *)(iRam02f86484 + 0x2f86060));
      piVar10 = *(int **)(iVar12 + 0x1c);
      if (piVar10 == (int *)0x0) {
        func_0x0140024c(iVar12);
        piVar10 = *(int **)(iVar12 + 0x1c);
      }
    }
    iVar6 = *(int *)(piVar10[5] + 0x84);
    uVar7 = iVar6 + 7U & 0xfffffff8;
    puVar15 = (undefined4 *)((int)aiStack_80 - uVar7);
    puVar3 = (undefined4 *)((int)puVar15 - uVar7);
    iVar2 = (int)puVar3 - uVar7;
    aiStack_80[2] = iVar12;
    func_0x0145894c(iVar2,iVar6);
    if (piVar9 == (int *)0x0) goto LAB_02f86388;
    if (aiStack_80[1] == 0) {
      uVar14 = *(undefined4 *)(iRam02f8648c + 0x2f863a0);
      goto LAB_02f8639c;
    }
    iVar12 = *piVar10;
    if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
      iVar12 = func_0x014001f0(iVar12);
    }
    iVar4 = *piVar9;
    uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar7 != 0) {
      piVar1 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar1[-1] == iVar12) {
          puVar5 = (undefined4 *)(iVar4 + *piVar1 * 8 + 0xc0);
          goto LAB_02f8612c;
        }
        uVar7 = uVar7 - 1;
        piVar1 = piVar1 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar9,iVar12,0);
LAB_02f8612c:
    piVar10 = (int *)(*(code *)*puVar5)(piVar9,puVar5[1]);
    do {
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar12 = *piVar10;
      uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar7 != 0) {
        piVar1 = (int *)(*(int *)(iVar12 + 0x58) + 4);
        do {
          unaff_r7 = (code *)piVar1[-1];
          if (unaff_r7 == (code *)**(int **)(iRam02f86490 + 0x2f8615c)) {
            puVar5 = (undefined4 *)(iVar12 + *piVar1 * 8 + 0xc0);
            goto LAB_02f861a4;
          }
          uVar7 = uVar7 - 1;
          piVar1 = piVar1 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar10,(code *)**(int **)(iRam02f86490 + 0x2f8615c),0)
      ;
LAB_02f861a4:
      piVar9 = (int *)(*(code *)*puVar5)(piVar10,puVar5[1]);
      if (piVar9 == (int *)0x0) {
        iVar12 = 0;
        piVar9 = (int *)0x0;
        goto LAB_02f862e4;
      }
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(*(int *)(aiStack_80[2] + 0x1c) + 0xc);
      if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
        iVar12 = func_0x014001f0(iVar12);
      }
      iVar4 = *piVar10;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar1 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar1[-1] == iVar12) {
            iVar12 = iVar4 + *piVar1 * 8 + 0xc0;
            goto LAB_02f8623c;
          }
          uVar7 = uVar7 - 1;
          piVar1 = piVar1 + 2;
        } while (uVar7 != 0);
      }
      iVar12 = func_0x014002dc(piVar10,iVar12,0);
LAB_02f8623c:
      iVar12 = *(int *)(iVar12 + 4);
      uVar14 = *(undefined4 *)(iVar12 + 4);
      pcVar16 = *(code **)(iVar12 + 8);
      puStack_74 = puVar15;
      *(undefined4 **)(iVar2 + -8) = puVar15;
      (*pcVar16)(uVar14,iVar12,piVar10,&puStack_74);
      func_0x01458934(iVar2,puVar15,iVar6);
      func_0x01458934(puVar3,iVar2,iVar6);
      puVar5 = *(undefined4 **)(*(int *)(aiStack_80[2] + 0x1c) + 0x18);
      puStack_74 = puVar3;
      if (-1 < *(int *)(*(int *)(*(int *)(aiStack_80[2] + 0x1c) + 0x14) + 0x14)) {
        puStack_74 = (undefined4 *)*puVar3;
      }
      uVar14 = *puVar5;
      unaff_r7 = (code *)puVar5[2];
      *(char **)(iVar2 + -8) = &cStack_6d;
      (*unaff_r7)(uVar14,puVar5,aiStack_80[1],&puStack_74);
    } while (cStack_6d == '\0');
    iVar12 = 0;
LAB_02f862e4:
    do {
      if (piVar10 != (int *)0x0) {
        iVar4 = *piVar10;
        uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar7 != 0) {
          piVar1 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            unaff_r7 = (code *)piVar1[-1];
            if (unaff_r7 == (code *)**(int **)(iRam02f86494 + 0x2f862fc)) {
              puVar3 = (undefined4 *)(iVar4 + *piVar1 * 8 + 0xc0);
              goto LAB_02f86344;
            }
            uVar7 = uVar7 - 1;
            piVar1 = piVar1 + 2;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined4 *)
                 func_0x014002dc(piVar10,(code *)**(int **)(iRam02f86494 + 0x2f862fc),0);
LAB_02f86344:
        (*(code *)*puVar3)(piVar10,puVar3[1]);
      }
      if (iVar12 != 0) {
        func_0x01384bec(iVar12);
      }
      if (**(int **)(iRam02f86498 + 0x2f86370) == iStack_6c) {
        return piVar9;
      }
      func_0x0145b028(**(int **)(iRam02f86498 + 0x2f86370));
LAB_02f86388:
      uVar14 = *(undefined4 *)(iRam02f86488 + 0x2f86394);
LAB_02f8639c:
      uVar14 = func_0x01384988(uVar14);
      uVar14 = func_0x04a21c20(uVar14,0);
      func_0x01384aa0(uVar14,aiStack_80[2]);
      uVar24 = func_0x01384928();
      iVar12 = (int)uVar24;
      if ((int)((ulonglong)uVar24 >> 0x20) != 1) goto LAB_02f863f0;
      piVar1 = (int *)func_0x0145b008(iVar12);
      iVar12 = *piVar1;
      piVar9 = (int *)0x0;
      func_0x0145b0f8();
    } while( true );
  }
  piVar9 = (int *)func_0x0145b008(iVar2);
  iVar2 = *piVar9;
  piVar10 = (int *)0x0;
  func_0x0145b0f8();
LAB_02f85e78:
  if (piVar1 != (int *)0x0) {
    iVar12 = *piVar1;
    uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(iRam02f8600c + 0x2f85e90)) {
          puVar3 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
          goto LAB_02f85ed8;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(iRam02f8600c + 0x2f85e90),0);
LAB_02f85ed8:
    (*(code *)*puVar3)(piVar1,puVar3[1]);
  }
  if (iVar2 != 0) {
    func_0x01384bec(iVar2);
  }
  return piVar10;
LAB_02f863f0:
  if (piVar10 != (int *)0x0) {
    iVar4 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar7 != 0) {
      piVar1 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar1[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f8649c + 0x2f86408)) {
          puVar3 = (undefined4 *)(iVar4 + *piVar1 * 8 + 0xc0);
          goto LAB_02f86450;
        }
        uVar7 = uVar7 - 1;
        piVar1 = piVar1 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,(code *)**(int **)(iRam02f8649c + 0x2f86408),0);
LAB_02f86450:
    (*(code *)*puVar3)(piVar10,puVar3[1]);
  }
  uVar23 = 1;
  func_0x01459844(iVar12);
  iVar19 = 0x2f8647c;
  uVar24 = func_0x01062280();
  iVar4 = (int)((ulonglong)uVar24 >> 0x20);
  piVar1 = (int *)uVar24;
  bVar21 = false;
  if ((bool)uVar23) {
    iVar4 = -0x2f85cc8;
    iVar19 = 0x28000000 - (int)piVar1;
    bVar21 = iVar19 == 0;
  }
  bVar22 = false;
  iVar18 = iVar2;
  if (bVar21) {
    iVar18 = 0x380 - iVar4;
    bVar22 = iVar18 == 0;
  }
  bVar21 = false;
  if (bVar22) {
    iVar12 = 0x700000 - extraout_r3_01;
    bVar21 = iVar12 == 0;
  }
  bVar22 = false;
  if (bVar21) {
    iVar19 = -0x5c000000 - (int)piVar1;
    bVar22 = iVar19 == 0;
  }
  if (bVar22) {
    iVar4 = -0x2ebe4a4;
  }
  *(int *)(iVar2 + -4) = iVar19;
  *(undefined1 **)(iVar2 + -8) = &stack0xffffffb8;
  *(int *)(iVar2 + -0xc) = iVar6;
  *(int *)(iVar2 + -0x10) = iVar18;
  *(int **)(iVar2 + -0x14) = piVar9;
  *(code **)(iVar2 + -0x18) = unaff_r7;
  *(int *)(iVar2 + -0x1c) = iVar12;
  *(undefined4 *)(iVar2 + -0x20) = 0;
  *(int **)(iVar2 + -0x24) = piVar10;
  if (*(int *)(extraout_r2_01 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f86844 + 0x2f864cc));
    func_0x01384978(*(undefined4 *)(iRam02f86848 + 0x2f864d8));
    if (*(int *)(extraout_r2_01 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_01);
    }
  }
  if (piVar1 == (int *)0x0) {
    uVar14 = *(undefined4 *)(iRam02f8684c + 0x2f86758);
  }
  else {
    if (iVar4 != 0) {
      iVar12 = **(int **)(extraout_r2_01 + 0x1c);
      if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
        iVar12 = func_0x014001f0(iVar12);
      }
      iVar6 = *piVar1;
      uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar12) {
            puVar3 = (undefined4 *)(iVar6 + *piVar9 * 8 + 0xc0);
            goto LAB_02f86568;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,iVar12,0);
LAB_02f86568:
      piVar1 = (int *)(*(code *)*puVar3)(piVar1,puVar3[1]);
      piVar9 = *(int **)(iRam02f86854 + 0x2f8658c);
      do {
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar12 = *piVar1;
        uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
        if (uVar7 != 0) {
          piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
          do {
            if (piVar10[-1] == *piVar9) {
              puVar3 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xc0);
              goto LAB_02f865e4;
            }
            uVar7 = uVar7 - 1;
            piVar10 = piVar10 + 2;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar1,*piVar9,0);
LAB_02f865e4:
        piVar10 = (int *)(*(code *)*puVar3)(piVar1,puVar3[1]);
        if (piVar10 == (int *)0x0) {
          iVar2 = 0;
          piVar10 = (int *)0x0;
          goto LAB_02f866c0;
        }
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar12 = *(int *)(*(int *)(extraout_r2_01 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
          iVar12 = func_0x014001f0(iVar12);
        }
        iVar6 = *piVar1;
        uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar11[-1] == iVar12) {
              puVar3 = (undefined4 *)(iVar6 + *piVar11 * 8 + 0xc0);
              goto LAB_02f86678;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar1,iVar12,0);
LAB_02f86678:
        (*(code *)*puVar3)(iVar2 + -0x30,piVar1,puVar3[1]);
        uVar14 = *(undefined4 *)(iVar4 + 0x20);
        pcVar16 = *(code **)(iVar4 + 0xc);
        *(undefined4 *)(iVar2 + -0x38) = *(undefined4 *)(iVar4 + 0x14);
        iVar12 = (*pcVar16)(uVar14,*(undefined4 *)(iVar2 + -0x30),*(undefined4 *)(iVar2 + -0x2c),
                            *(undefined4 *)(iVar2 + -0x28));
      } while (iVar12 == 0);
      iVar2 = 0;
      goto LAB_02f866c0;
    }
    uVar14 = *(undefined4 *)(iRam02f86850 + 0x2f86764);
  }
  uVar14 = func_0x01384988(uVar14);
  uVar14 = func_0x04a21c20(uVar14,0);
  func_0x01384aa0(uVar14,extraout_r2_01);
  uVar24 = func_0x01384928();
  iVar12 = (int)uVar24;
  if ((int)((ulonglong)uVar24 >> 0x20) != 1) {
    if (piVar1 != (int *)0x0) {
      iVar6 = *piVar1;
      uVar7 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          unaff_r7 = (code *)piVar10[-1];
          if (unaff_r7 == (code *)**(int **)(iRam02f8685c + 0x2f867d0)) {
            puVar3 = (undefined4 *)(iVar6 + *piVar10 * 8 + 0xc0);
            goto LAB_02f86818;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar1,(code *)**(int **)(iRam02f8685c + 0x2f867d0),0);
LAB_02f86818:
      (*(code *)*puVar3)(piVar1,puVar3[1]);
    }
    uVar23 = 1;
    func_0x01459844(iVar12);
    iVar19 = 0x2f86844;
    uVar24 = func_0x01062280();
    pcVar16 = (code *)((ulonglong)uVar24 >> 0x20);
    iVar6 = (int)uVar24;
    bVar21 = false;
    if ((bool)uVar23) {
      pcVar16 = (code *)0xfd07d7b4;
      iVar19 = 10 - iVar6;
      bVar21 = iVar19 == 0;
    }
    bVar22 = false;
    if (bVar21) {
      iVar18 = 0x74000 - (int)pcVar16;
      bVar22 = iVar18 == 0;
    }
    uVar24 = CONCAT44(extraout_r2_02,iVar18);
    bVar21 = false;
    if (bVar22) {
      iVar12 = -0x54000000 - extraout_r3_02;
      bVar21 = iVar12 == 0;
    }
    bVar22 = false;
    if (bVar21) {
      iVar19 = 0x74 - iVar6;
      bVar22 = iVar19 == 0;
    }
    if (bVar22) {
      pcVar16 = (code *)0xfd07979c;
    }
    uVar25 = CONCAT44(pcVar16,iVar6);
    *(int *)(iVar2 + -0x3c) = iVar19;
    *(int **)(iVar2 + -0x40) = piVar9;
    *(code **)(iVar2 + -0x44) = unaff_r7;
    *(int *)(iVar2 + -0x48) = iVar12;
    *(undefined4 *)(iVar2 + -0x4c) = 0;
    *(int **)(iVar2 + -0x50) = piVar1;
    pcVar17 = (code *)(iVar2 + -0x58);
    piVar1 = *(int **)(iVar2 + -0x38);
    if (piVar1[7] == 0) {
      func_0x0140024c(piVar1);
    }
    uVar23 = iVar6 == 0;
    if ((bool)uVar23) {
      uVar14 = func_0x01384988(*(undefined4 *)(iRam02f868e0 + 0x2f868cc));
      uVar14 = func_0x04a21c20(uVar14,0);
      func_0x01384aa0(uVar14,piVar1);
      uVar24 = func_0x01384928();
      iVar12 = (int)((ulonglong)uVar24 >> 0x20);
      if ((bool)uVar23) {
        iVar18 = -iVar12;
      }
      *(undefined4 *)(iVar2 + -0x5c) = 0x2f868e0;
      *(int *)(iVar2 + -0x60) = iVar4;
      *(int *)(iVar2 + -100) = iVar18;
      *(int **)(iVar2 + -0x68) = piVar1;
      *(code **)(iVar2 + -0x6c) = pcVar16;
      *(int *)(iVar2 + -0x70) = extraout_r2_02;
      *(int *)(iVar2 + -0x74) = extraout_r3_02;
      *(undefined4 *)(iVar2 + -0x78) = 0;
      iVar4 = iVar2 + -0x60;
      piVar1 = *(int **)(iRam02f869dc + 0x2f86908);
      *(int *)(iVar2 + -0x80) = *piVar1;
      iVar6 = *(int *)(extraout_r2_03 + 0x1c);
      *(int *)(iVar2 + -0x90) = iVar12;
      if (iVar6 == 0) {
        func_0x0140024c(extraout_r2_03);
        iVar6 = *(int *)(extraout_r2_03 + 0x1c);
      }
      pcVar17 = (code *)((iVar2 + -0x90) - (*(int *)(*(int *)(iVar6 + 4) + 0x84) + 7U & 0xfffffff8))
      ;
      uVar23 = (int)uVar24 == 0;
      pcVar16 = pcVar17;
      if (!(bool)uVar23) {
        iVar19 = iVar2 + -0x90;
        if (*(int *)(*(int *)(iVar6 + 4) + 0x14) < 0) {
          iVar19 = iVar12;
        }
        func_0x01458934(pcVar17,iVar19);
        puVar3 = *(undefined4 **)(iVar6 + 8);
        iVar19 = *(int *)(*(int *)(iVar6 + 4) + 0x14);
        uVar14 = *puVar3;
        *(int *)(iVar2 + -0x8c) = (int)uVar24;
        if (-1 < iVar19) {
          pcVar16 = *(code **)pcVar17;
        }
        *(code **)(iVar2 + -0x88) = pcVar16;
        pcVar16 = (code *)puVar3[2];
        *(int *)(pcVar17 + -8) = iVar2 + -0x84;
        (*pcVar16)(uVar14,puVar3,0,iVar2 + -0x8c);
        uVar23 = *piVar1 == *(int *)(iVar2 + -0x80);
        if ((bool)uVar23) {
          return *(int **)(iVar2 + -0x84);
        }
        func_0x0145b028(*(int **)(iVar2 + -0x84));
      }
      uVar14 = func_0x01384988(*(undefined4 *)(iRam02f869e0 + 0x2f869c8));
      uVar14 = func_0x04a21c20(uVar14,0);
      func_0x01384aa0(uVar14,extraout_r2_03);
      iVar20 = 0x2f869dc;
      uVar25 = func_0x01384928();
      iVar2 = extraout_r2_04;
      iVar19 = extraout_r3_03;
      iVar18 = extraout_r2_03;
      if ((bool)uVar23) {
        uVar25 = CONCAT44(0x9d07961c,(int)uVar25);
        uVar24 = CONCAT44(iVar12,0x62fc69e4);
      }
    }
    else {
      *(undefined4 *)(iVar2 + -0x58) = *(undefined4 *)(piVar1[7] + 8);
      iVar20 = 0x2f868b8;
      iVar2 = extraout_r2_02;
      iVar19 = extraout_r3_02;
      iVar18 = extraout_r3_02;
    }
    *(int *)(pcVar17 + -4) = iVar20;
    *(int *)(pcVar17 + -8) = iVar4;
    *(int *)(pcVar17 + -0xc) = (int)uVar24;
    *(int **)(pcVar17 + -0x10) = piVar1;
    *(code **)(pcVar17 + -0x14) = pcVar16;
    *(int *)(pcVar17 + -0x18) = (int)((ulonglong)uVar24 >> 0x20);
    *(int *)(pcVar17 + -0x1c) = iVar18;
    *(int *)(pcVar17 + -0x20) = iVar6;
    iVar12 = *(int *)pcVar17;
    piVar1 = *(int **)(iVar12 + 0x1c);
    if (piVar1 == (int *)0x0) {
      func_0x0140024c(iVar12);
      piVar1 = *(int **)(iVar12 + 0x1c);
    }
    if ((*(ushort *)(*piVar1 + 0xbd) & 1) == 0) {
      func_0x014001f0();
    }
    piVar1 = (int *)func_0x01384be4();
    func_0x03200f40(piVar1,0xfffffffe,*(undefined4 *)(*(int *)(iVar12 + 0x1c) + 4));
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    piVar1[8] = (int)uVar25;
    piVar1[0xc] = (int)((ulonglong)uVar25 >> 0x20);
    piVar1[0xd] = iVar2;
    piVar1[0xe] = iVar19;
    return piVar1;
  }
  piVar9 = (int *)func_0x0145b008(iVar12);
  iVar2 = *piVar9;
  piVar10 = (int *)0x0;
  func_0x0145b0f8();
LAB_02f866c0:
  if (piVar1 != (int *)0x0) {
    iVar12 = *piVar1;
    uVar7 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(iRam02f86858 + 0x2f866d8)) {
          puVar3 = (undefined4 *)(iVar12 + *piVar9 * 8 + 0xc0);
          goto LAB_02f86720;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(iRam02f86858 + 0x2f866d8),0);
LAB_02f86720:
    (*(code *)*puVar3)(piVar1,puVar3[1]);
  }
  if (iVar2 != 0) {
    func_0x01384bec(iVar2);
  }
  return piVar10;
}



// ===== FAT.ActivityBingo$$FindFirstSubmitItem RVA 0x2b06a84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b16a84(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_02b16c80 + 0x2b16a9c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b16c84 + 0x2b16ab0));
    func_0x01384978(*(undefined4 *)(_UNK_02b16c88 + 0x2b16abc));
    func_0x01384978(*(undefined4 *)(_UNK_02b16c8c + 0x2b16ac8));
    func_0x01384978(*(undefined4 *)(_UNK_02b16c90 + 0x2b16ad4));
    *pcVar4 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x151c,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_28,iVar1,**(undefined4 **)(_UNK_02b16c94 + 0x2b16b54));
    iVar1 = 0;
    puVar5 = *(undefined4 **)(_UNK_02b16c98 + 0x2b16b6c);
    while (iVar2 = func_0x03f5f428(&uStack_28,*puVar5), iVar3 = iStack_1c, iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02b16cac(*(undefined4 *)(iVar3 + 8));
      if ((iVar2 != 0) || (iVar3 = func_0x02b16dfc(*(undefined4 *)(iVar3 + 8)), iVar3 != 0)) {
        func_0x03f5f424(&uStack_28,**(undefined4 **)(_UNK_02b16ca8 + 0x2b16bc0));
        return iVar1;
      }
      iVar1 = iVar1 + 1;
    }
    func_0x03f5f424(&uStack_28,**(undefined4 **)(_UNK_02b16ca0 + 0x2b16bd8));
    iVar1 = -1;
  }
  else {
    iVar1 = func_0x0229f13c(0x151c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0217493c(iVar1,param_1,0);
  }
  return iVar1;
}



// ===== FAT.ActivityBingo$$<CheckBingoComplete>b__53_0 RVA 0x2b06f3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b16f3c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02b16f9c + 0x2b16f54);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b16fa0 + 0x2b16f68));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 100);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03d5a510(iVar2,param_2,
                          *(undefined4 *)
                           (*(int *)(*(int *)(**(int **)(_UNK_02b16fa4 + 0x2b16f90) + 0x10) + 0x60)
                           + 0x84));
  return ~uVar1 >> 0x1f;
}



// ===== FAT.ActivityBingo$$<>iFixBaseProxy_get_Visual RVA 0x2b06fa8 =====

undefined4 FUN_02b16fa8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.ActivityBingo$$<>iFixBaseProxy_SetupFresh RVA 0x2b06fb0 =====

void FUN_02b16fb0(undefined4 param_1)

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



// ===== FAT.ActivityBingo$$<>iFixBaseProxy_TryPopup RVA 0x2b06fb8 =====

void FUN_02b16fb8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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



// ===== FAT.ActivityBingo$$<>iFixBaseProxy_WhenEnd RVA 0x2b06fc0 =====

void FUN_02b16fc0(undefined4 param_1)

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



// ===== FAT.ActivityBingo.EntryWrapper$$get_Entry RVA 0x2b06fc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b16fc8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x151d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x151d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c82c8 + 0x21c81e8);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c82cc + 0x21c81fc),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c82d0 + 0x21c82b8));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.ActivityBingo.EntryWrapper$$.ctor RVA 0x2b0701c =====

/* WARNING: Possible PIC construction at 0x02b17158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028be4b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02b1715c) */
/* WARNING: Removing unreachable block (ram,0x02b17194) */
/* WARNING: Removing unreachable block (ram,0x02b17198) */
/* WARNING: Removing unreachable block (ram,0x028be4bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b1701c(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 **ppuVar10;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_1c;
  
  ppuVar10 = (undefined4 **)&stack0xffffffe8;
  pcVar7 = (char *)(_UNK_02b171ac + 0x2b17038);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b171b0 + 0x2b1704c));
    func_0x01384978(*(undefined4 *)(_UNK_02b171b4 + 0x2b17058));
    func_0x01384978(*(undefined4 *)(_UNK_02b171b8 + 0x2b17064));
    func_0x01384978(*(undefined4 *)(_UNK_02b171bc + 0x2b17070));
    func_0x01384978(*(undefined4 *)(_UNK_02b171c0 + 0x2b1707c));
    *pcVar7 = '\x01';
  }
  func_0x02b32ddc(param_1,0);
  param_1[2] = param_2;
  param_1[3] = param_3;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x5c);
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = FUN_02b11214(param_3);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  func_0x0267cc24(iVar6,uVar2,0);
  func_0x02b171d8(param_1);
  if (*(int *)(**(int **)(_UNK_02b171c4 + 0x2b170f0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  puVar3 = (undefined4 *)func_0x0300d558(**(undefined4 **)(_UNK_02b171c8 + 0x2b1710c));
  puVar9 = *(undefined4 **)(_UNK_02b171cc + 0x2b17120);
  uVar2 = func_0x01384be4(*puVar9);
  puVar8 = *(undefined4 **)(_UNK_02b171d0 + 0x2b1713c);
  func_0x0478dedc(uVar2,param_1,*puVar8,0);
  if (puVar3 == (undefined4 *)0x0) {
    func_0x01384bf0();
  }
  puStack_1c = (undefined4 *)0x2b1715c;
  pcVar7 = (char *)(_UNK_028be4f4 + 0x28be418);
  puStack_28 = param_1;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028be4f8 + 0x28be42c),uVar2,0);
    *pcVar7 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x10cb,0);
  if (iVar6 == 0) {
    piVar1 = (int *)func_0x0487907c(puVar3[2],uVar2,0);
    if (piVar1 == (int *)0x0) {
      puVar3[2] = 0;
      return;
    }
    iVar6 = **(int **)(_UNK_028be4fc + 0x28be4a8);
    if (*piVar1 == iVar6) {
      puVar3[2] = piVar1;
      puVar3 = puStack_28;
      if (*piVar1 == iVar6) {
        return;
      }
    }
    else {
      puStack_1c = (undefined4 *)0x28be4bc;
      ppuVar10 = &puStack_28;
    }
    ppuVar10[-1] = puStack_1c;
    ppuVar10[-2] = puVar3;
    func_0x0142996c(ppuVar10 + -5,*(undefined4 *)(*piVar1 + 0x20),iVar6);
    puVar3 = ppuVar10[-3];
    if (((uint)ppuVar10[-5] & 1) == 0) {
      puVar3 = (undefined4 *)((uint)(ppuVar10 + -5) | 1);
    }
    iVar6 = func_0x01419d2c(puVar3);
    *(undefined4 *)(iVar6 + 0x1c) = 0;
    *(undefined4 *)(iVar6 + 0x20) = 0;
    func_0x01418ff0(iVar6,0);
    if (((uint)ppuVar10[-5] & 1) != 0) {
      func_0x0148d9d4(ppuVar10[-3]);
    }
    return;
  }
  iVar6 = func_0x0229f13c(0x10cb,0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puStack_38 = puStack_28;
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_40 = 0;
  puStack_34 = puVar3;
  uStack_30 = uVar2;
  puStack_2c = puVar8;
  puStack_28 = puVar9;
  func_0x0245494c(&uStack_68,0,uVar2,0);
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  uStack_48 = uStack_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  if (*(int *)(iVar6 + 0x10) != 0) {
    func_0x01485278(&uStack_50,*(int *)(iVar6 + 0x10),0);
  }
  func_0x01485278(&uStack_50,puVar3,0);
  func_0x01485278(&uStack_50,uVar2,0);
  iVar5 = *(int *)(iVar6 + 8);
  uVar2 = *(undefined4 *)(iVar6 + 0xc);
  iVar6 = *(int *)(iVar6 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar6 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar5,uVar2,&uStack_50,uVar4,0,0);
  return;
}



// ===== FAT.ActivityBingo.EntryWrapper$$RefreshFlag RVA 0x2b071d8 =====

void FUN_02b171d8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x151f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x151f,0);
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
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = FUN_02b168b0(iVar3);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,uVar4,0);
  return;
}



// ===== FAT.ActivityBingo.EntryWrapper$$Clear RVA 0x2b07290 =====

/* WARNING: Possible PIC construction at 0x02b173b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028beb88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02b173b4) */
/* WARNING: Removing unreachable block (ram,0x02b173ec) */
/* WARNING: Removing unreachable block (ram,0x02b173f0) */
/* WARNING: Removing unreachable block (ram,0x028beb8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b17290(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r4;
  int iVar6;
  int unaff_r5;
  undefined4 uVar7;
  int unaff_r6;
  char *pcVar8;
  undefined4 *unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  int *piVar9;
  int unaff_lr;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar9 = (int *)&stack0xffffffe8;
  pcVar8 = (char *)(_UNK_02b17404 + 0x2b172a8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b17408 + 0x2b172bc));
    func_0x01384978(*(undefined4 *)(_UNK_02b1740c + 0x2b172c8));
    func_0x01384978(*(undefined4 *)(_UNK_02b17410 + 0x2b172d4));
    func_0x01384978(*(undefined4 *)(_UNK_02b17414 + 0x2b172e0));
    func_0x01384978(*(undefined4 *)(_UNK_02b17418 + 0x2b172ec));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x151e,0);
  if (iVar3 == 0) {
    if (*(int *)(**(int **)(_UNK_02b1741c + 0x2b17348) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_02b17420 + 0x2b17364));
    unaff_r8 = *(undefined4 **)(_UNK_02b17424 + 0x2b17378);
    param_2 = func_0x01384be4(*unaff_r8);
    unaff_r7 = *(undefined4 **)(_UNK_02b17428 + 0x2b17394);
    func_0x0478dedc(param_2,param_1,*unaff_r7,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iStack_1c = 0x2b173b4;
    pcVar8 = (char *)(_UNK_028bebc4 + 0x28beae0);
    iStack_28 = param_1;
    iStack_24 = iVar3;
    iStack_20 = param_2;
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_028bebc8 + 0x28beaf4),param_2,0);
      *pcVar8 = '\x01';
    }
    iVar4 = func_0x0229f06c(0x10cd,0);
    if (iVar4 == 0) {
      if (param_2 != 0) {
        piVar2 = (int *)func_0x0487929c(*(undefined4 *)(iVar3 + 8),param_2,0);
        if (piVar2 != (int *)0x0) {
          iVar4 = **(int **)(_UNK_028bebcc + 0x28beb78);
          if (*piVar2 == iVar4) {
            *(int **)(iVar3 + 8) = piVar2;
            iVar3 = iStack_28;
            iVar6 = iStack_1c;
            if (*piVar2 == iVar4) {
              return;
            }
          }
          else {
            piVar9 = &iStack_28;
            iVar6 = 0x28beb8c;
          }
          piVar9[-1] = iVar6;
          piVar9[-2] = iVar3;
          func_0x0142996c(piVar9 + -5,*(undefined4 *)(*piVar2 + 0x20),iVar4);
          uVar1 = piVar9[-3];
          if ((*(byte *)(piVar9 + -5) & 1) == 0) {
            uVar1 = (uint)(piVar9 + -5) | 1;
          }
          iVar3 = func_0x01419d2c(uVar1);
          *(undefined4 *)(iVar3 + 0x1c) = 0;
          *(undefined4 *)(iVar3 + 0x20) = 0;
          func_0x01418ff0(iVar3,0);
          if ((*(byte *)(piVar9 + -5) & 1) != 0) {
            func_0x0148d9d4(piVar9[-3]);
          }
          return;
        }
        *(undefined4 *)(iVar3 + 8) = 0;
      }
      return;
    }
    iVar4 = func_0x0229f13c(0x10cd,0);
    param_1 = iVar3;
    unaff_r4 = iStack_28;
    unaff_r5 = iStack_24;
    unaff_r6 = iStack_20;
    unaff_lr = iStack_1c;
    register0x00000054 = (BADSPACEBASE *)piVar9;
    if (iVar4 == 0) {
      func_0x01384bf0();
      unaff_r4 = iStack_28;
      unaff_r5 = iStack_24;
      unaff_r6 = iStack_20;
      unaff_lr = iStack_1c;
    }
  }
  else {
    iVar4 = func_0x0229f13c(0x151e,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
  }
  *(int *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 **)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
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
  iVar3 = *(int *)(iVar4 + 0x10);
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
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar6 = *(int *)(iVar4 + 8);
  uVar7 = *(undefined4 *)(iVar4 + 0xc);
  iVar3 = *(int *)(iVar4 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 3;
  if (iVar3 == 0) {
    uVar5 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar7,(undefined1 *)((int)register0x00000054 + -0x38),uVar5);
  return;
}



// ===== FAT.ActivityBingo.<>c$$.cctor RVA 0x2b07430 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b17430(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_02b17488 + 0x2b17440);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b1748c + 0x2b17454));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_02b17490 + 0x2b17468);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x04874ed4(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.ActivityBingo.<>c$$.ctor RVA 0x2b07494 =====

void FUN_02b17494(void)

{
  return;
}



// ===== FAT.ActivityBingo.<>c$$<GetBingoCount>b__41_0 RVA 0x2b0749c =====

undefined1 FUN_02b1749c(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined1 *)(param_2 + 0x14);
}



// ===== FAT.ActivityBingo.<>c$$<CompleteBingo>b__51_0 RVA 0x2b074b8 =====

/* WARNING: Removing unreachable block (ram,0x01a3300c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b174b8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_02b17558 + 0x2b174cc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b1755c + 0x2b174e0));
    func_0x01384978(*(undefined4 *)(_UNK_02b17560 + 0x2b174ec));
    func_0x01384978(*(undefined4 *)(_UNK_02b17564 + 0x2b174f8));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(**(int **)(_UNK_02b17568 + 0x2b17518) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = **(int **)(_UNK_02b1756c + 0x2b17544);
  uVar1 = **(undefined4 **)(_UNK_02b17570 + 0x2b17550);
  if ((*(int *)(iVar2 + 0x1c) == 0) &&
     (func_0x01384978(*(undefined4 *)(_UNK_01a33090 + 0x1a32f4c)), *(int *)(iVar2 + 0x1c) == 0)) {
    func_0x0140024c(iVar2);
  }
  piVar6 = *(int **)(_UNK_01a33094 + 0x1a32f70);
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x01a33098(&uStack_28,1,0);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x030c1e2c(&uStack_28,uVar1,uVar5,uVar3,*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 8));
  uVar3 = func_0x0148d6d8(&uStack_28,0);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x019a8084(&uStack_28,0);
  return uVar3;
}



// ===== FAT.ActivityBingo.<>c$$<CompleteBingo>b__51_1 RVA 0x2b07574 =====

undefined1 FUN_02b17574(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined1 *)(param_2 + 0x14);
}



// ===== FAT.ActivityBingo.<>c__DisplayClass31_0$$<SaveSetup>b__0 RVA 0x2b07590 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b17590(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 uVar2;
  undefined4 unaff_r4;
  char *pcVar3;
  int iVar4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int iVar5;
  uint uVar6;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_02b1761c + 0x2b175a8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b17620 + 0x2b175bc));
    *pcVar3 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 0xc) = iVar5 + 1;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x01c23ac8(iVar5,*(undefined1 *)(param_2 + 0x14),0);
  uVar2 = extraout_r3;
  if (iVar4 == 0) {
    func_0x01384bf0();
    uVar2 = extraout_r3_00;
  }
  iVar5 = **(int **)(_UNK_02b17624 + 0x2b17610);
  pcVar3 = (char *)(_UNK_03652bac + 0x3652b1c);
  if (*pcVar3 == '\0') {
    func_0x02457d54(*(undefined4 *)(_UNK_03652bb0 + 0x3652b30));
    *pcVar3 = '\x01';
    uVar2 = extraout_r3_01;
  }
  func_0x03031dbc(uVar1,**(undefined4 **)(_UNK_03652bb4 + 0x3652b4c),
                  *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x80),uVar2,unaff_r4,
                  unaff_r5,unaff_r6,unaff_r7,unaff_r11,unaff_lr);
  func_0x036529a8(iVar4,*(int *)(iVar4 + 0xc) + 1,
                  *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x3c));
  iVar5 = *(int *)(iVar4 + 8);
  uVar6 = *(uint *)(iVar4 + 0xc);
  *(uint *)(iVar4 + 0xc) = uVar6 + 1;
  if (iVar5 == 0) {
    func_0x02457d50();
  }
  if (*(uint *)(iVar5 + 0xc) <= uVar6) {
    func_0x02457d5c();
  }
  *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = uVar1;
  return;
}


