/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.Inventory$$get_capacity RVA 0x2101c94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02111c94(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02111e84 + 0x2111cac);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02111e88 + 0x2111cc0));
    func_0x01384978(*(undefined4 *)(_UNK_02111e8c + 0x2111ccc));
    func_0x01384978(*(undefined4 *)(_UNK_02111e90 + 0x2111cd8));
    func_0x01384978(*(undefined4 *)(_UNK_02111e94 + 0x2111ce4));
    func_0x01384978(*(undefined4 *)(_UNK_02111e98 + 0x2111cf0));
    *pcVar4 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0xb332,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_02111e9c + 0x2111d68));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&uStack_28,iVar1,**(undefined4 **)(_UNK_02111ea0 + 0x2111d94));
    iVar1 = 0;
    puVar5 = *(undefined4 **)(_UNK_02111ea4 + 0x2111dac);
    while (iVar2 = func_0x03f9b9f8(&uStack_28,*puVar5), iVar3 = iStack_1c, iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02111eb4(iVar3);
      iVar1 = iVar3 + iVar1;
    }
    func_0x03f9b9f4(&uStack_28,**(undefined4 **)(_UNK_02111ea8 + 0x2111de8));
  }
  else {
    iVar1 = func_0x0229f13c(0xb332,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0217493c(iVar1,param_1,0);
  }
  return iVar1;
}



// ===== FAT.Merge.Inventory$$add_onCapacityChange RVA 0x2101f18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02111f18(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02111fbc + 0x2111f30);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02111fc0 + 0x2111f44));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_02111fc4 + 0x2111f5c);
  iVar1 = *(int *)(param_1 + 0xc);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507e8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0xc),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Inventory$$remove_onCapacityChange RVA 0x2101fc8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02111fc8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_0211206c + 0x2111fe0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02112070 + 0x2111ff4));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_02112074 + 0x211200c);
  iVar1 = *(int *)(param_1 + 0xc);
  do {
    iVar5 = 0;
    iVar2 = func_0x024507f8(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0xc),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.Merge.Inventory$$_GetBagListSorted RVA 0x2102078 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02112078(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  pcVar5 = (char *)(_UNK_02112240 + 0x2112090);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02112244 + 0x21120a4));
    func_0x01384978(*(undefined4 *)(_UNK_02112248 + 0x21120b0));
    func_0x01384978(*(undefined4 *)(_UNK_0211224c + 0x21120bc));
    func_0x01384978(*(undefined4 *)(_UNK_02112250 + 0x21120c8));
    func_0x01384978(*(undefined4 *)(_UNK_02112254 + 0x21120d4));
    func_0x01384978(*(undefined4 *)(_UNK_02112258 + 0x21120e0));
    func_0x01384978(*(undefined4 *)(_UNK_0211225c + 0x21120ec));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2b0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2b0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021828f8 + 0x2182804);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021828fc + 0x2182818),param_1,param_2,0);
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
    func_0x01485228(&uStack_38,param_2,0);
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
    uVar6 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02182900 + 0x21828e8));
    return uVar6;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar4) {
    func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar4,0);
  }
  iVar4 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x03d6476c(iVar4,**(undefined4 **)(_UNK_02112260 + 0x211219c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0328f380(iVar1,uVar6,**(undefined4 **)(_UNK_02112264 + 0x21121c4));
  iVar1 = *(int *)(param_1 + 0x14);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02112268 + 0x21121dc));
  if (param_2 == 0) {
    puVar2 = *(undefined4 **)(_UNK_02112270 + 0x2112204);
  }
  else {
    puVar2 = *(undefined4 **)(_UNK_0211226c + 0x21121f8);
  }
  func_0x03c751dc(uVar6,param_1,*puVar2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03290edc(iVar1,uVar6,**(undefined4 **)(_UNK_02112274 + 0x2112230));
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.Merge.Inventory$$_SortBag RVA 0x2102278 =====

int FUN_02112278(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x2b2,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 8);
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    iVar1 = iVar1 - *(int *)(param_3 + 8);
  }
  else {
    iVar1 = func_0x0229f13c(0x2b2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021806fc(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.Merge.Inventory$$_SortBagReversed RVA 0x2102308 =====

int FUN_02112308(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x2b1,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 8);
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    iVar1 = iVar1 - *(int *)(param_3 + 8);
  }
  else {
    iVar1 = func_0x0229f13c(0x2b1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021806fc(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.Merge.Inventory$$GetCapacity RVA 0x2102398 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02112398(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
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
  
  pcVar5 = (char *)(_UNK_02112448 + 0x21123b0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211244c + 0x21123c4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb333,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb333,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
    uVar6 = func_0x0245498c(&uStack_38,0,0);
    return uVar6;
  }
  iVar1 = func_0x02f7c0f8(*(undefined4 *)(param_1 + 8),param_2,0,
                          **(undefined4 **)(_UNK_02112450 + 0x2112428));
  if (iVar1 == 0) {
    return 0;
  }
  iVar4 = func_0x0229f06c(0x2c3,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x2c3,0);
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
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
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
    func_0x0245495c(iVar3,uVar6,&uStack_30,uVar2);
    uVar6 = func_0x0245498c(&uStack_30,0,0);
    return uVar6;
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0xc);
}



// ===== FAT.Merge.Inventory$$FillAllBagId RVA 0x2102454 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02112454(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar5 = (char *)(_UNK_02112720 + 0x2112470);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02112724 + 0x2112484));
    func_0x01384978(*(undefined4 *)(_UNK_02112728 + 0x2112490));
    func_0x01384978(*(undefined4 *)(_UNK_0211272c + 0x211249c));
    func_0x01384978(*(undefined4 *)(_UNK_02112730 + 0x21124a8));
    func_0x01384978(*(undefined4 *)(_UNK_02112734 + 0x21124b4));
    func_0x01384978(*(undefined4 *)(_UNK_02112738 + 0x21124c0));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0xb334,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar1 = FUN_02112078(param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_48,iVar1,**(undefined4 **)(_UNK_0211273c + 0x2112554));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar7 = *(undefined4 **)(_UNK_02112740 + 0x2112570);
      while (iVar2 = func_0x03f5f428(&uStack_38,*puVar7), iVar1 = iStack_2c, iVar2 != 0) {
        if (iStack_2c == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02112758(iVar1);
        if (iVar2 == 0) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x021127c8(iVar1);
          func_0x0211281c(param_1,uVar3);
        }
        else {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x021127c8(iVar1);
          iVar1 = *(int *)(param_2 + 8);
          uVar6 = *(uint *)(param_2 + 0xc);
          piVar4 = *(int **)(_UNK_02112744 + 0x21125d8);
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          iVar2 = *piVar4;
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (uVar6 < *(uint *)(iVar1 + 0xc)) {
            *(uint *)(param_2 + 0xc) = uVar6 + 1;
            *(undefined4 *)(iVar1 + uVar6 * 4 + 0x10) = uVar3;
          }
          else {
            func_0x0325970c(param_2,uVar3,
                            *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38));
          }
        }
      }
      func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_02112748 + 0x2112650));
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d6463c(iVar1,**(undefined4 **)(_UNK_02112750 + 0x2112674));
  }
  else {
    iVar1 = func_0x0229f13c(0xb334,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217bafc(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.Inventory$$DeleteBag RVA 0x210281c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0211281c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_02112a50 + 0x2112838);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02112a54 + 0x211284c));
    func_0x01384978(*(undefined4 *)(_UNK_02112a58 + 0x2112858));
    func_0x01384978(*(undefined4 *)(_UNK_02112a5c + 0x2112864));
    *pcVar7 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0xb336,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x03d66780(iVar1,param_2,&iStack_28,**(undefined4 **)(_UNK_02112a60 + 0x21128e4));
    iVar1 = iStack_28;
    iVar2 = 0;
    if (iVar3 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x02113478(iVar1);
      uVar9 = 0;
      piVar10 = *(int **)(_UNK_02112a64 + 0x2112924);
      while( true ) {
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if ((int)*(uint *)(iVar2 + 0xc) <= (int)uVar9) break;
        if (*(uint *)(iVar2 + 0xc) <= uVar9) {
          func_0x01384bf4();
        }
        iVar1 = *(int *)(iVar2 + uVar9 * 4 + 0x10);
        if (iVar1 != 0) {
          piVar8 = *(int **)(param_1 + 0x10);
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar3 = *piVar8;
          uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar10) {
                puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
                goto LAB_021129b4;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar8,*piVar10,0);
LAB_021129b4:
          iVar3 = (*(code *)*puVar4)(piVar8,puVar4[1]);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x02144d84(iVar3,iVar1,0,0);
        }
        uVar9 = uVar9 + 1;
      }
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),param_2,iVar2,1,*(undefined4 *)(iVar1 + 0x14));
      }
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d66094(iVar1,param_2,**(undefined4 **)(_UNK_02112a68 + 0x2112a3c));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb336,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x0218df80(iVar1,param_1,param_2,0);
  }
  return iVar2;
}



// ===== FAT.Merge.Inventory$$SetBagMetaInfo RVA 0x2102a6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02112a6c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_02112b58 + 0x2112a8c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02112b5c + 0x2112aa0));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0xb338,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d66780(iVar1,param_2,&iStack_1c,**(undefined4 **)(_UNK_02112b60 + 0x2112b24));
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      func_0x02112b64(iVar1,param_3);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb338,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ab90(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Inventory$$AddBag RVA 0x2102bc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02112bc0(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_02112cdc + 0x2112bd8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02112ce0 + 0x2112bec));
    func_0x01384978(*(undefined4 *)(_UNK_02112ce4 + 0x2112bf8));
    func_0x01384978(*(undefined4 *)(_UNK_02112ce8 + 0x2112c04));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x755c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x755c,0);
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
    uVar5 = func_0x0245496c(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03d64b90(iVar1,param_2,**(undefined4 **)(_UNK_02112cec + 0x2112c74));
  uVar5 = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02112cf0 + 0x2112c98));
    func_0x02112cf8(uVar5,param_2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d64944(iVar1,param_2,uVar5,**(undefined4 **)(_UNK_02112cf4 + 0x2112ccc));
    uVar5 = 1;
  }
  return uVar5;
}



// ===== FAT.Merge.Inventory$$CalcInventoryMetric RVA 0x2102ea4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02112ea4(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_02113120 + 0x2112ec4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02113124 + 0x2112ed8));
    func_0x01384978(*(undefined4 *)(_UNK_02113128 + 0x2112ee4));
    func_0x01384978(*(undefined4 *)(_UNK_0211312c + 0x2112ef0));
    func_0x01384978(*(undefined4 *)(_UNK_02113130 + 0x2112efc));
    func_0x01384978(*(undefined4 *)(_UNK_02113134 + 0x2112f08));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x9fd3,0);
  if (iVar1 == 0) {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 8);
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
      iVar3 = FUN_02111eb4(iVar1);
      iVar5 = 0;
      *param_3 = iVar3 + iVar2;
      while( true ) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = FUN_02111eb4(iVar1);
        if (iVar2 <= iVar5) break;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x02113150(iVar1,iVar5);
        iVar5 = iVar5 + 1;
        if (iVar2 != 0) {
          *param_2 = *param_2 + 1;
          *param_3 = *param_3 + -1;
        }
      }
    }
    func_0x03f9b9f4(&uStack_30,**(undefined4 **)(_UNK_02113148 + 0x2113078));
  }
  else {
    iVar1 = func_0x0229f13c(0x9fd3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021a30a4(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Inventory$$WalkAllItem RVA 0x21031f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021131f8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_02113448 + 0x2113214);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211344c + 0x2113228));
    func_0x01384978(*(undefined4 *)(_UNK_02113450 + 0x2113234));
    func_0x01384978(*(undefined4 *)(_UNK_02113454 + 0x2113240));
    func_0x01384978(*(undefined4 *)(_UNK_02113458 + 0x211324c));
    func_0x01384978(*(undefined4 *)(_UNK_0211345c + 0x2113258));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0xf45,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_02113460 + 0x21132d0));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&uStack_40,iVar1,**(undefined4 **)(_UNK_02113464 + 0x21132fc));
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    iStack_24 = iStack_34;
    puVar5 = *(undefined4 **)(_UNK_02113468 + 0x2113318);
    while (iVar2 = func_0x03f9b9f8(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
      iVar2 = 0;
      while( true ) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = FUN_02111eb4(iVar1);
        if (iVar3 <= iVar2) break;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = FUN_02113150(iVar1,iVar2);
        if (iVar3 != 0) {
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          (**(code **)(param_2 + 0xc))
                    (*(undefined4 *)(param_2 + 0x20),iVar3,*(undefined4 *)(param_2 + 0x14));
        }
        iVar2 = iVar2 + 1;
      }
    }
    func_0x03f9b9f4(&uStack_30,**(undefined4 **)(_UNK_02113470 + 0x21133a4));
  }
  else {
    iVar1 = func_0x0229f13c(0xf45,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.Inventory$$SetBagPriority RVA 0x2103528 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02113528(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_0211360c + 0x2113548);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02113610 + 0x211355c));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0xb33a,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d66780(iVar1,param_2,&iStack_1c,**(undefined4 **)(_UNK_02113614 + 0x21135e0));
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 8) = param_3;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb33a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Inventory$$.ctor RVA 0x2103618 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02113618(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_021136dc + 0x2113630);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021136e0 + 0x2113644));
    func_0x01384978(*(undefined4 *)(_UNK_021136e4 + 0x2113650));
    func_0x01384978(*(undefined4 *)(_UNK_021136e8 + 0x211365c));
    func_0x01384978(*(undefined4 *)(_UNK_021136ec + 0x2113668));
    *pcVar3 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_021136f0 + 0x211367c));
  func_0x03d63eec(uVar1,**(undefined4 **)(_UNK_021136f4 + 0x2113690));
  puVar2 = *(undefined4 **)(_UNK_021136f8 + 0x21136a4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_021136fc + 0x21136bc));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== FAT.Merge.Inventory$$GetBagById RVA 0x2103700 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02113700(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_021137cc + 0x211371c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021137d0 + 0x2113730));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0xb33b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d66780(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_021137d4 + 0x21137ac));
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb33b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x0229c540(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.Merge.Inventory$$GetBagByType RVA 0x21037d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021137d8(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_021138a4 + 0x21137f4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021138a8 + 0x2113808));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x2be,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d66780(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_021138ac + 0x2113884));
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x2be,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02182d90(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.Merge.Inventory$$PeekItem RVA 0x21038b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021138b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_021139a4 + 0x21138d0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021139a8 + 0x21138e4));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x2b5,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d66780(iVar1,param_3,&iStack_1c,**(undefined4 **)(_UNK_021139ac + 0x2113968));
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0(0);
      }
      FUN_02113150(iVar1,param_2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x2b5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02182b78(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Inventory$$Serialize RVA 0x21039b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021139b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_02113c38 + 0x21139cc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02113c3c + 0x21139e0));
    func_0x01384978(*(undefined4 *)(_UNK_02113c40 + 0x21139ec));
    func_0x01384978(*(undefined4 *)(_UNK_02113c44 + 0x21139f8));
    func_0x01384978(*(undefined4 *)(_UNK_02113c48 + 0x2113a04));
    func_0x01384978(*(undefined4 *)(_UNK_02113c4c + 0x2113a10));
    func_0x01384978(*(undefined4 *)(_UNK_02113c50 + 0x2113a1c));
    func_0x01384978(*(undefined4 *)(_UNK_02113c54 + 0x2113a28));
    func_0x01384978(*(undefined4 *)(_UNK_02113c58 + 0x2113a34));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x5c6e,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652bb8(iVar1,**(undefined4 **)(_UNK_02113c5c + 0x2113ab8));
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_02113c60 + 0x2113adc));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&uStack_30,iVar1,**(undefined4 **)(_UNK_02113c64 + 0x2113b08));
    puVar5 = *(undefined4 **)(_UNK_02113c68 + 0x2113b1c);
    puVar7 = *(undefined4 **)(_UNK_02113c6c + 0x2113b24);
    puVar6 = *(undefined4 **)(_UNK_02113c70 + 0x2113b2c);
    while (iVar2 = func_0x03f9b9f8(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
      uVar3 = func_0x01384be4(*puVar7);
      func_0x017983c0(uVar3,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02113c80(iVar1,uVar3);
      iVar1 = *(int *)(param_2 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar3,*puVar6);
    }
    func_0x03f9b9f4(&uStack_30,**(undefined4 **)(_UNK_02113c74 + 0x2113b9c));
  }
  else {
    iVar1 = func_0x0229f13c(0x5c6e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.Inventory$$Deserialize RVA 0x2103ec4 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02113ec4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  pcVar8 = (char *)(_UNK_021142e4 + 0x2113ee4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021142e8 + 0x2113ef8));
    func_0x01384978(*(undefined4 *)(_UNK_021142ec + 0x2113f04));
    func_0x01384978(*(undefined4 *)(_UNK_021142f0 + 0x2113f10));
    func_0x01384978(*(undefined4 *)(_UNK_021142f4 + 0x2113f1c));
    func_0x01384978(*(undefined4 *)(_UNK_021142f8 + 0x2113f28));
    func_0x01384978(*(undefined4 *)(_UNK_021142fc + 0x2113f34));
    func_0x01384978(*(undefined4 *)(_UNK_02114300 + 0x2113f40));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c63,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c63,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02174858(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar1,**(undefined4 **)(_UNK_02114304 + 0x2113fb4));
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(param_2 + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x03653608(iVar1,**(undefined4 **)(_UNK_02114308 + 0x2113fe4));
  piVar9 = *(int **)(_UNK_0211430c + 0x2113ffc);
  puVar10 = *(undefined4 **)(_UNK_02114310 + 0x2114004);
  do {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == *piVar9) {
          puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_0211405c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar9,0);
LAB_0211405c:
    iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar1 == 0) break;
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_02114314 + 0x2114090)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_021140d8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02114314 + 0x2114090),0);
LAB_021140d8:
    iVar1 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02114318 + 0x2114108));
    FUN_02112cf8(iVar5,uVar2);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x02114324(iVar5,iVar1,param_3);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_021127c8(iVar5);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d64944(iVar1,uVar2,iVar5,*puVar10);
  } while( true );
  uVar2 = 0;
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0211431c + 0x2114190)) {
          puVar10 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_021141d8;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar6 != 0);
    }
    puVar10 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0211431c + 0x2114190),0);
LAB_021141d8:
    uVar2 = (*(code *)*puVar10)(piVar3,puVar10[1]);
  }
  return uVar2;
}



// ===== FAT.Merge.Inventory$$Update RVA 0x2104958 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02114958(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar2 = (char *)(_UNK_02114b38 + 0x2114974);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02114b3c + 0x2114988));
    func_0x01384978(*(undefined4 *)(_UNK_02114b40 + 0x2114994));
    func_0x01384978(*(undefined4 *)(_UNK_02114b44 + 0x21149a0));
    func_0x01384978(*(undefined4 *)(_UNK_02114b48 + 0x21149ac));
    func_0x01384978(*(undefined4 *)(_UNK_02114b4c + 0x21149b8));
    *pcVar2 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x5e5a,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d6476c(iVar1,**(undefined4 **)(_UNK_02114b50 + 0x2114a30));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0382ab5c(&uStack_20,iVar1,**(undefined4 **)(_UNK_02114b54 + 0x2114a5c));
    puVar3 = *(undefined4 **)(_UNK_02114b58 + 0x2114a70);
    while (iVar1 = func_0x03f9b9f8(&uStack_20,*puVar3), iVar1 != 0) {
      if (iStack_14 != 0) {
        func_0x02114b68(iStack_14,param_2);
      }
    }
    func_0x03f9b9f4(&uStack_20,**(undefined4 **)(_UNK_02114b5c + 0x2114aa4));
  }
  else {
    iVar1 = func_0x0229f13c(0x5e5a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.Merge.Inventory$$RemoveItem RVA 0x2104c08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02114c08(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_02114cfc + 0x2114c28);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02114d00 + 0x2114c3c));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x14a6,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d66780(iVar1,param_3,&iStack_1c,**(undefined4 **)(_UNK_02114d04 + 0x2114cc0));
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0(0);
      }
      func_0x02114d08(iVar1,param_2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x14a6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02182b78(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Inventory$$DisposeItem RVA 0x2104dfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02114dfc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_02115098 + 0x2114e1c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211509c + 0x2114e30));
    func_0x01384978(*(undefined4 *)(_UNK_021150a0 + 0x2114e3c));
    func_0x01384978(*(undefined4 *)(_UNK_021150a4 + 0x2114e48));
    func_0x01384978(*(undefined4 *)(_UNK_021150a8 + 0x2114e54));
    func_0x01384978(*(undefined4 *)(_UNK_021150ac + 0x2114e60));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x2b7,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02112078(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_40,iVar1,**(undefined4 **)(_UNK_021150b0 + 0x2114ef4));
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    iStack_24 = iStack_34;
    puVar5 = *(undefined4 **)(_UNK_021150b4 + 0x2114f10);
    do {
      iVar1 = func_0x03f5f428(&uStack_30,*puVar5);
      if (iVar1 == 0) goto LAB_02114fe8;
    } while ((iStack_24 == 0) || (iVar1 = func_0x021150c8(iStack_24,param_2), iVar1 == 0));
    piVar6 = *(int **)(param_1 + 0x10);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_021150b8 + 0x2114f5c)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_02114fa4;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_021150b8 + 0x2114f5c),0);
LAB_02114fa4:
    iVar1 = (*(code *)*puVar5)(piVar6,puVar5[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(iVar1,0);
    if (iVar1 != 0) {
      FUN_020ddd78(iVar1,param_2,param_3,0);
    }
LAB_02114fe8:
    func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_021150bc + 0x2114ff4));
  }
  else {
    iVar1 = func_0x0229f13c(0x2b7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02182cac(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.Inventory$$GetItemIndexByTid RVA 0x21051b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021151b8(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_021153f4 + 0x21151d8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021153f8 + 0x21151f0));
    func_0x01384978(*(undefined4 *)(_UNK_021153fc + 0x21151fc));
    func_0x01384978(*(undefined4 *)(_UNK_02115400 + 0x2115208));
    func_0x01384978(*(undefined4 *)(_UNK_02115404 + 0x2115214));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x2af,0);
  if (iVar1 == 0) {
    *param_3 = -1;
    *param_4 = 0;
    iVar1 = FUN_02112078(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_30,iVar1,**(undefined4 **)(_UNK_02115408 + 0x21152bc));
    puVar6 = *(undefined4 **)(_UNK_0211540c + 0x21152d0);
    do {
      uVar2 = func_0x03f5f428(&uStack_30,*puVar6);
      iVar1 = iStack_24;
      if (uVar2 == 0) {
        iVar1 = 6;
        goto LAB_02115330;
      }
      if (iStack_24 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x0211541c(iVar1,param_2);
      *param_3 = iVar3;
    } while (iVar3 < 0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = FUN_021127c8(iVar1);
    iVar1 = 5;
    *param_4 = uVar4;
LAB_02115330:
    func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_02115410 + 0x211533c));
    uVar2 = uVar2 & iVar1 == 5;
  }
  else {
    iVar1 = func_0x0229f13c(0x2af,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02182904(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.Inventory$$PutItem RVA 0x2105514 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02115514(undefined4 param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_02115828 + 0x2115534);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0211582c + 0x211554c));
    func_0x01384978(*(undefined4 *)(_UNK_02115830 + 0x2115558));
    func_0x01384978(*(undefined4 *)(_UNK_02115834 + 0x2115564));
    func_0x01384978(*(undefined4 *)(_UNK_02115838 + 0x2115570));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x75ec,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x75ec,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021f09dc(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  *param_3 = 0xffffffff;
  *param_4 = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x74);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01c90928(iVar1,param_2,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02112078(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_30,iVar1,**(undefined4 **)(_UNK_0211583c + 0x2115698));
    puVar5 = *(undefined4 **)(_UNK_02115840 + 0x21156ac);
    do {
      do {
        iVar3 = func_0x03f5f428(&uStack_30,*puVar5);
        iVar1 = iStack_24;
        if (iVar3 == 0) goto LAB_021156fc;
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
      } while (*(int *)(iVar1 + 0x10) != 1);
      uVar2 = func_0x02115abc(iVar1,param_2);
      *param_3 = uVar2;
    } while ((int)uVar2 < 0);
    uVar6 = FUN_021127c8(iVar1);
    *param_4 = uVar6;
LAB_021156fc:
    func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_02115844 + 0x2115708));
  }
  else {
    iVar3 = FUN_021137d8(param_1,2);
    uVar6 = *(undefined4 *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
      uVar2 = func_0x02115850(0,param_2,uVar6);
      *param_3 = uVar2;
      if ((int)uVar2 < 0) goto LAB_02115784;
      func_0x01384bf0();
    }
    else {
      uVar2 = func_0x02115850(iVar3,param_2,uVar6);
      *param_3 = uVar2;
      if ((int)uVar2 < 0) goto LAB_02115784;
    }
    uVar6 = FUN_021127c8(iVar3);
    *param_4 = uVar6;
    iVar1 = FUN_021137d8(param_1,2);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar6 = FUN_0210e2d4(param_2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02115954(iVar1,uVar6);
  }
LAB_02115784:
  return (uint)(*param_3 < 0x80000000);
}



// ===== FAT.Merge.Inventory$$SetCapacity RVA 0x2105ca0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02115ca0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_02115fa4 + 0x2115cc0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02115fa8 + 0x2115cd4));
    func_0x01384978(*(undefined4 *)(_UNK_02115fac + 0x2115ce0));
    func_0x01384978(*(undefined4 *)(_UNK_02115fb0 + 0x2115cec));
    func_0x01384978(*(undefined4 *)(_UNK_02115fb4 + 0x2115cf8));
    func_0x01384978(*(undefined4 *)(_UNK_02115fb8 + 0x2115d04));
    func_0x01384978(*(undefined4 *)(_UNK_02115fbc + 0x2115d10));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x55d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d66780(iVar1,param_3,&iStack_28,**(undefined4 **)(_UNK_02115fc0 + 0x2115d98));
    iVar1 = iStack_28;
    if (iVar2 == 0) {
      piVar11 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02115fc8 + 0x2115ee8),1);
      uStack_2c = param_3;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02115fcc + 0x2115f00),&uStack_2c);
      if (piVar11 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar2 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar11 + 0x20)), iVar2 == 0)) {
        uVar6 = func_0x01384c10();
        func_0x01384aa0(uVar6,0);
      }
      if (piVar11[3] == 0) {
        func_0x01384bf4();
      }
      piVar11[4] = iVar1;
      if (*(int *)(**(int **)(_UNK_02115fd0 + 0x2115f64) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = 0;
      func_0x028c2f28(**(undefined4 **)(_UNK_02115fd4 + 0x2115f8c),piVar11,0);
    }
    else {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02115fd8(iVar1,param_2);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        uVar3 = *(uint *)(iVar1 + 0xc);
        if (0 < (int)uVar3) {
          uVar10 = 0;
          piVar11 = *(int **)(_UNK_02115fc4 + 0x2115dec);
          do {
            if (uVar3 <= uVar10) {
              func_0x01384bf4();
            }
            iVar2 = *(int *)(iVar1 + uVar10 * 4 + 0x10);
            if (iVar2 != 0) {
              piVar9 = *(int **)(param_1 + 0x10);
              if (piVar9 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar4 = *piVar9;
              uVar3 = (uint)*(ushort *)(iVar4 + 0xb6);
              if (uVar3 != 0) {
                piVar7 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar11) {
                    puVar5 = (undefined4 *)(iVar4 + *piVar7 * 8 + 0xc0);
                    goto LAB_02115e64;
                  }
                  uVar3 = uVar3 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar3 != 0);
              }
              puVar5 = (undefined4 *)func_0x014002dc(piVar9,*piVar11,0);
LAB_02115e64:
              iVar4 = (*(code *)*puVar5)(piVar9,puVar5[1]);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              func_0x02144d84(iVar4,iVar2,0,0);
            }
            uVar3 = *(uint *)(iVar1 + 0xc);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar3);
        }
        iVar2 = *(int *)(param_1 + 0xc);
        if (iVar2 != 0) {
          (**(code **)(iVar2 + 0xc))
                    (*(undefined4 *)(iVar2 + 0x20),param_3,iVar1,0,*(undefined4 *)(iVar2 + 0x14));
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x55d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0218e0a0(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}



// ===== FAT.Merge.Inventory$$GetBagMetaInfo<object> RVA 0x2fdb098 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02feb098(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_1c;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(_UNK_02feb144 + 0x2feb0c4));
    if (*(int *)(param_3 + 0x1c) == 0) {
      func_0x0140024c(param_3);
    }
  }
  iVar3 = *(int *)(param_1 + 8);
  uVar2 = 0;
  iStack_1c = 0;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03d66780(iVar3,param_2,&iStack_1c,**(undefined4 **)(_UNK_02feb148 + 0x2feb104));
  iVar3 = iStack_1c;
  if (iVar1 != 0) {
    if (iStack_1c == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02feb14c(iVar3,**(undefined4 **)(param_3 + 0x1c));
  }
  return uVar2;
}


