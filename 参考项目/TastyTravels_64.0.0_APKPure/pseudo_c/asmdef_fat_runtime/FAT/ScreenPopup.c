/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ScreenPopup$$TryQueue RVA 0x1e6437c =====

void FUN_01e7437c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x162,0);
  if (iVar1 == 0) {
    func_0x01e819bc(param_1,param_2,param_3,param_4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x162,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217bed0(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$get_QueueReady RVA 0x1e6e7c4 =====

uint FUN_01e7e7c4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x68bb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x68bb,0);
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
  return (uint)(*(char *)(param_1 + 0x48) == '\0');
}



// ===== FAT.ScreenPopup$$get_IsPaused RVA 0x1e6e820 =====

uint FUN_01e7e820(int param_1)

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
  
  iVar1 = func_0x0229f06c(40999,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(40999,0);
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
  return (uint)*(byte *)(param_1 + 0x4a);
}



// ===== FAT.ScreenPopup$$get_PopupNone RVA 0x1e6e874 =====

undefined4 FUN_01e7e874(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x15f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x15f,0);
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
  return 0xffffffff;
}



// ===== FAT.ScreenPopup$$GetPendingEventEndEntries RVA 0x1e6e8c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e7e8c8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x1ab6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1ab6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021df3bc + 0x21df2dc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021df3c0 + 0x21df2f0),param_1,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021df3c4 + 0x21df3ac));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.ScreenPopup$$get_HasPendingEventEndEntries RVA 0x1e6e91c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e7e91c(int param_1)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar4 = (char *)(_UNK_01e7e9b4 + 0x1e7e930);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e7e9b8 + 0x1e7e944));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x195,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x195,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return (uint)(0 < *(int *)(iVar1 + 0xc));
}



// ===== FAT.ScreenPopup$$.ctor RVA 0x1e6e9bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e7e9bc(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_01e7ec64 + 0x1e7e9d0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e7ec68 + 0x1e7e9e4));
    func_0x01384978(*(undefined4 *)(_UNK_01e7ec6c + 0x1e7e9f0));
    func_0x01384978(*(undefined4 *)(_UNK_01e7ec70 + 0x1e7e9fc));
    func_0x01384978(*(undefined4 *)(_UNK_01e7ec74 + 0x1e7ea08));
    func_0x01384978(*(undefined4 *)(_UNK_01e7ec78 + 0x1e7ea14));
    func_0x01384978(*(undefined4 *)(_UNK_01e7ec7c + 0x1e7ea20));
    func_0x01384978(*(undefined4 *)(_UNK_01e7ec80 + 0x1e7ea2c));
    func_0x01384978(*(undefined4 *)(_UNK_01e7ec84 + 0x1e7ea38));
    func_0x01384978(*(undefined4 *)(_UNK_01e7ec88 + 0x1e7ea44));
    func_0x01384978(*(undefined4 *)(_UNK_01e7ec8c + 0x1e7ea50));
    func_0x01384978(*(undefined4 *)(_UNK_01e7ec90 + 0x1e7ea5c));
    func_0x01384978(*(undefined4 *)(_UNK_01e7ec94 + 0x1e7ea68));
    func_0x01384978(*(undefined4 *)(_UNK_01e7ec98 + 0x1e7ea74));
    func_0x01384978(*(undefined4 *)(_UNK_01e7ec9c + 0x1e7ea80));
    func_0x01384978(*(undefined4 *)(_UNK_01e7eca0 + 0x1e7ea8c));
    func_0x01384978(*(undefined4 *)(_UNK_01e7eca4 + 0x1e7ea98));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e7eca8 + 0x1e7eaac));
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01e7ecac + 0x1e7eac0));
  puVar2 = *(undefined4 **)(_UNK_01e7ecb0 + 0x1e7ead4);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03685334(uVar1,**(undefined4 **)(_UNK_01e7ecb4 + 0x1e7eaec));
  puVar2 = *(undefined4 **)(_UNK_01e7ecb8 + 0x1e7eb00);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03da65fc(uVar1,**(undefined4 **)(_UNK_01e7ecbc + 0x1e7eb18));
  puVar2 = *(undefined4 **)(_UNK_01e7ecc0 + 0x1e7eb2c);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03db0f1c(uVar1,**(undefined4 **)(_UNK_01e7ecc4 + 0x1e7eb44));
  puVar2 = *(undefined4 **)(_UNK_01e7ecc8 + 0x1e7eb58);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_01e7eccc + 0x1e7eb70));
  puVar2 = *(undefined4 **)(_UNK_01e7ecd0 + 0x1e7eb84);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_01e7ecd4 + 0x1e7eb9c));
  puVar2 = *(undefined4 **)(_UNK_01e7ecd8 + 0x1e7ebb0);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x01ea060c(uVar1,0);
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  func_0x0244f5a0(param_1,0);
  piVar6 = *(int **)(_UNK_01e7ecdc + 0x1e7ebe0);
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x01384ab4();
    iVar3 = *piVar6;
  }
  iVar5 = *(int *)(*(int *)(iVar3 + 0x5c) + 4);
  if (iVar5 == 0) {
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar6;
    }
    uVar1 = **(undefined4 **)(iVar3 + 0x5c);
    iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01e7ece0 + 0x1e7ec28));
    func_0x03c751dc(iVar5,uVar1,**(undefined4 **)(_UNK_01e7ece4 + 0x1e7ec48),0);
    *(int *)(*(int *)(*piVar6 + 0x5c) + 4) = iVar5;
  }
  *(int *)(param_1 + 0x38) = iVar5;
  return;
}



// ===== FAT.ScreenPopup$$DebugReset RVA 0x1e6ece8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e7ece8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
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
  
  iVar2 = func_0x0229f06c(0xa241,0);
  if (iVar2 == 0) {
    func_0x01e7ed48(param_1);
    iVar2 = func_0x0229f06c(0xf8d,0);
    if (iVar2 == 0) {
      pcVar7 = (char *)(_UNK_01e84410 + 0x1e841e8);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e84414 + 0x1e841fc));
        func_0x01384978(*(undefined4 *)(_UNK_01e84418 + 0x1e84208));
        func_0x01384978(*(undefined4 *)(_UNK_01e8441c + 0x1e84214));
        func_0x01384978(*(undefined4 *)(_UNK_01e84420 + 0x1e84220));
        func_0x01384978(*(undefined4 *)(_UNK_01e84424 + 0x1e8422c));
        func_0x01384978(*(undefined4 *)(_UNK_01e84428 + 0x1e84238));
        func_0x01384978(*(undefined4 *)(_UNK_01e8442c + 0x1e84244));
        *pcVar7 = '\x01';
      }
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_28 = 0;
      iVar2 = func_0x0229f06c(0xf8e,0);
      if (iVar2 != 0) {
        iVar2 = func_0x0229f13c(0xf8e,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x0217bbe0(iVar2,param_1,0,0);
        return;
      }
      if (*(int *)(param_1 + 0x1c) != 0) {
        if (*(int *)(param_1 + 0x14) == 0) {
          iVar2 = *(int *)(param_1 + 8);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar2 + 0xc) < 1) goto LAB_01e843fc;
        }
        iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01e84430 + 0x1e842e4));
        func_0x0328e950(iVar2,**(undefined4 **)(_UNK_01e84434 + 0x1e842f8));
        uVar8 = *(undefined4 *)(param_1 + 0x14);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar2 + 8);
        uVar5 = *(uint *)(iVar2 + 0xc);
        piVar3 = *(int **)(_UNK_01e84438 + 0x1e84330);
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        iVar9 = *piVar3;
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        if (uVar5 < *(uint *)(iVar6 + 0xc)) {
          *(uint *)(iVar2 + 0xc) = uVar5 + 1;
          *(undefined4 *)(iVar6 + uVar5 * 4 + 0x10) = uVar8;
        }
        else {
          func_0x0328f170(iVar2,uVar8,
                          *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
        }
        func_0x0328f380(iVar2,*(undefined4 *)(param_1 + 8),
                        **(undefined4 **)(_UNK_01e8443c + 0x1e84380));
        uStack_38 = **(undefined4 **)(_UNK_01e84440 + 0x1e843a4);
        func_0x03934478(&uStack_30,iVar2,*(undefined4 *)(param_1 + 0x1c),
                        *(undefined4 *)(param_1 + 0x3c));
        func_0x01e83de0(param_1,0);
        uVar1 = uStack_28;
        uVar4 = uStack_2c;
        uVar8 = uStack_30;
        iVar2 = *(int *)(param_1 + 0xc);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = **(undefined4 **)(_UNK_01e84444 + 0x1e843f0);
        func_0x03685b64(iVar2,uVar8,uVar4,uVar1);
      }
LAB_01e843fc:
      func_0x01e83ff8(param_1,0);
      return;
    }
    iVar2 = func_0x0229f13c(0xf8d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xa241,0);
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
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar6,uVar8,&uStack_30,uVar4,0,0);
  return;
}



// ===== FAT.ScreenPopup$$Reset RVA 0x1e6ed48 =====

/* WARNING: Possible PIC construction at 0x01e7f7bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e7f7c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e7ed48(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 *puVar4;
  int unaff_r5;
  char *pcVar5;
  undefined4 unaff_r6;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 *puVar7;
  int unaff_r8;
  undefined4 unaff_lr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa242,0);
  if (iVar1 == 0) {
    pcVar5 = (char *)(_UNK_01e7fa2c + 0x1e7f6d8);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e7fa30 + 0x1e7f6ec));
      func_0x01384978(*(undefined4 *)(_UNK_01e7fa34 + 0x1e7f6f8));
      func_0x01384978(*(undefined4 *)(_UNK_01e7fa38 + 0x1e7f704));
      func_0x01384978(*(undefined4 *)(_UNK_01e7fa3c + 0x1e7f710));
      func_0x01384978(*(undefined4 *)(_UNK_01e7fa40 + 0x1e7f71c));
      func_0x01384978(*(undefined4 *)(_UNK_01e7fa44 + 0x1e7f728));
      func_0x01384978(*(undefined4 *)(_UNK_01e7fa48 + 0x1e7f734));
      func_0x01384978(*(undefined4 *)(_UNK_01e7fa4c + 0x1e7f740));
      func_0x01384978(*(undefined4 *)(_UNK_01e7fa50 + 0x1e7f74c));
      func_0x01384978(*(undefined4 *)(_UNK_01e7fa54 + 0x1e7f758));
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    iVar1 = func_0x0229f06c(0xa243,0);
    if (iVar1 == 0) {
      func_0x01e7fa80(param_1);
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03685884(&uStack_48,iVar1,**(undefined4 **)(_UNK_01e7fa58 + 0x1e7f7f0));
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      uStack_24 = uStack_3c;
      uStack_20 = uStack_38;
      puVar7 = *(undefined4 **)(_UNK_01e7fa5c + 0x1e7f81c);
      puVar4 = *(undefined4 **)(_UNK_01e7fa60 + 0x1e7f824);
      while (iVar1 = func_0x0146f0f8(&uStack_30,*puVar7), iVar1 != 0) {
        func_0x0146f108(&uStack_48,&uStack_30,*puVar4);
        func_0x01e7fae4(uStack_48);
      }
      func_0x02452778(&uStack_30,**(undefined4 **)(_UNK_01e7fa64 + 0x1e7f85c));
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_01e7fa6c + 0x1e7f880));
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (0 < iVar2) {
        func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar2,0);
      }
      iVar1 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03685520(iVar1,**(undefined4 **)(_UNK_01e7fa70 + 0x1e7f8ec));
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (0 < iVar2) {
        func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar2,0);
      }
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03da726c(iVar1,**(undefined4 **)(_UNK_01e7fa74 + 0x1e7f950));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x1d) = 0;
      *(undefined4 *)(param_1 + 0x19) = 0;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03db1bd0(iVar1,**(undefined4 **)(_UNK_01e7fa78 + 0x1e7f98c));
      *(undefined1 *)(param_1 + 0x4a) = 0;
      *(undefined2 *)(param_1 + 0x48) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0xa243,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e7f7c0;
    unaff_r5 = iVar1;
    unaff_r8 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_48;
  }
  else {
    iVar1 = func_0x0229f13c(0xa242,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r4;
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
  return;
}



// ===== FAT.ScreenPopup$$WhenEnterGame RVA 0x1e6eda0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e7eda0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
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
  
  iVar2 = func_0x0229f06c(0xf8d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xf8d,0);
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
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  pcVar7 = (char *)(_UNK_01e84410 + 0x1e841e8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e84414 + 0x1e841fc));
    func_0x01384978(*(undefined4 *)(_UNK_01e84418 + 0x1e84208));
    func_0x01384978(*(undefined4 *)(_UNK_01e8441c + 0x1e84214));
    func_0x01384978(*(undefined4 *)(_UNK_01e84420 + 0x1e84220));
    func_0x01384978(*(undefined4 *)(_UNK_01e84424 + 0x1e8422c));
    func_0x01384978(*(undefined4 *)(_UNK_01e84428 + 0x1e84238));
    func_0x01384978(*(undefined4 *)(_UNK_01e8442c + 0x1e84244));
    *pcVar7 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0xf8e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xf8e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0217bbe0(iVar2,param_1,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 0xc) < 1) goto LAB_01e843fc;
    }
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01e84430 + 0x1e842e4));
    func_0x0328e950(iVar2,**(undefined4 **)(_UNK_01e84434 + 0x1e842f8));
    uVar8 = *(undefined4 *)(param_1 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar2 + 8);
    uVar5 = *(uint *)(iVar2 + 0xc);
    piVar3 = *(int **)(_UNK_01e84438 + 0x1e84330);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    iVar9 = *piVar3;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (uVar5 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar5 + 1;
      *(undefined4 *)(iVar6 + uVar5 * 4 + 0x10) = uVar8;
    }
    else {
      func_0x0328f170(iVar2,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
    }
    func_0x0328f380(iVar2,*(undefined4 *)(param_1 + 8),**(undefined4 **)(_UNK_01e8443c + 0x1e84380))
    ;
    uStack_38 = **(undefined4 **)(_UNK_01e84440 + 0x1e843a4);
    func_0x03934478(&uStack_30,iVar2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x3c)
                   );
    func_0x01e83de0(param_1,0);
    uVar1 = uStack_28;
    uVar4 = uStack_2c;
    uVar8 = uStack_30;
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = **(undefined4 **)(_UNK_01e84444 + 0x1e843f0);
    func_0x03685b64(iVar2,uVar8,uVar4,uVar1);
  }
LAB_01e843fc:
  func_0x01e83ff8(param_1,0);
  return;
}



// ===== FAT.ScreenPopup$$HasPopup RVA 0x1e6edfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e7edfc(int param_1)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar4 = (char *)(_UNK_01e7ee94 + 0x1e7ee10);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e7ee98 + 0x1e7ee24));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x24ef,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x24ef,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return (uint)(0 < *(int *)(iVar1 + 0xc));
}



// ===== FAT.ScreenPopup$$HasPopup RVA 0x1e6ee9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e7ee9c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
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
  
  pcVar4 = (char *)(_UNK_01e7ef68 + 0x1e7eeb4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e7ef6c + 0x1e7eec8));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x1ab4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1ab4,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar6,&uStack_38,uVar2,0,0);
    uVar5 = func_0x0245496c(&uStack_38,0,0);
    return uVar5;
  }
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x14) != param_2) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
        uVar5 = 0;
      }
      else {
        iVar1 = func_0x030ffc18(*(undefined4 *)(iVar1 + 8),param_2,0);
        uVar5 = (uint)(iVar1 != -1);
      }
      return uVar5;
    }
    uVar5 = 1;
  }
  return uVar5;
}



// ===== FAT.ScreenPopup$$FAT.IUserDataHolder.FillData RVA 0x1e6ef74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e7ef74(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar3 = (char *)(_UNK_01e7f258 + 0x1e7ef90);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e7f25c + 0x1e7efa4));
    func_0x01384978(*(undefined4 *)(_UNK_01e7f260 + 0x1e7efb0));
    func_0x01384978(*(undefined4 *)(_UNK_01e7f264 + 0x1e7efbc));
    func_0x01384978(*(undefined4 *)(_UNK_01e7f268 + 0x1e7efc8));
    func_0x01384978(*(undefined4 *)(_UNK_01e7f26c + 0x1e7efd4));
    func_0x01384978(*(undefined4 *)(_UNK_01e7f270 + 0x1e7efe0));
    func_0x01384978(*(undefined4 *)(_UNK_01e7f274 + 0x1e7efec));
    *pcVar3 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  iVar1 = func_0x0229f06c(0xa244,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x34) == 0) {
      iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01e7f278 + 0x1e7f0b4));
      func_0x01788728(iVar2,0);
      uVar4 = *(undefined4 *)(param_1 + 0x30);
      uVar5 = *(undefined4 *)(param_1 + 0x34);
      *(int *)(iVar1 + 0x34) = iVar2;
      if (iVar2 == 0) {
        func_0x01384bf0();
        iVar2 = 0;
      }
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x30);
      uVar5 = *(undefined4 *)(param_1 + 0x34);
      iVar2 = *(int *)(iVar1 + 0x34);
    }
    *(undefined4 *)(iVar2 + 0x10) = uVar4;
    iVar1 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(iVar2 + 0x14) = uVar5;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_68,iVar1,**(undefined4 **)(_UNK_01e7f27c + 0x1e7f110));
    uStack_40 = uStack_68;
    uStack_3c = uStack_64;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    puVar6 = *(undefined4 **)(_UNK_01e7f280 + 0x1e7f144);
    while (iVar1 = func_0x01475638(&uStack_40,**(undefined4 **)(_UNK_01e7f288 + 0x1e7f14c)),
          iVar1 != 0) {
      uStack_44 = (undefined4)uStack_30;
      uStack_48 = uStack_34;
      func_0x01484258(&uStack_48,&uStack_4c,&uStack_50,**(undefined4 **)(_UNK_01e7f284 + 0x1e7f16c))
      ;
      uVar5 = uStack_4c;
      uVar4 = uStack_50;
      iVar1 = *(int *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0345f108(iVar1,uVar5,uVar4,*puVar6);
    }
    func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01e7f28c + 0x1e7f1c0));
  }
  else {
    iVar1 = func_0x0229f13c(0xa244,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$FAT.IUserDataHolder.SetData RVA 0x1e6f298 =====

/* WARNING: Removing unreachable block (ram,0x01e7f5ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e7f298(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar9 = (char *)(_UNK_01e7f688 + 0x1e7f2b4);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e7f68c + 0x1e7f2c8));
    func_0x01384978(*(undefined4 *)(_UNK_01e7f690 + 0x1e7f2d4));
    func_0x01384978(*(undefined4 *)(_UNK_01e7f694 + 0x1e7f2e0));
    func_0x01384978(*(undefined4 *)(_UNK_01e7f698 + 0x1e7f2ec));
    func_0x01384978(*(undefined4 *)(_UNK_01e7f69c + 0x1e7f2f8));
    func_0x01384978(*(undefined4 *)(_UNK_01e7f6a0 + 0x1e7f304));
    *pcVar9 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0xa245,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xa245,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x24);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x34);
  if (iVar2 == 0) {
    return;
  }
  iVar8 = *(int *)(iVar2 + 0xc);
  uVar6 = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x0345f9b0(iVar8,**(undefined4 **)(_UNK_01e7f6a4 + 0x1e7f3c8));
  puVar10 = *(undefined4 **)(_UNK_01e7f6a8 + 0x1e7f3e8);
  do {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01e7f6b4 + 0x1e7f400)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01e7f448;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01e7f6b4 + 0x1e7f400),0);
LAB_01e7f448:
    iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    if (iVar2 == 0) break;
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01e7f6ac + 0x1e7f47c)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01e7f4c4;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01e7f6ac + 0x1e7f47c),0);
LAB_01e7f4c4:
    (*(code *)*puVar4)(&uStack_40,piVar3,puVar4[1]);
    uStack_2c = uStack_3c;
    uStack_30 = uStack_40;
    func_0x01484258(&uStack_30,&uStack_34,&uStack_38,**(undefined4 **)(_UNK_01e7f6b0 + 0x1e7f4e8));
    uVar1 = uStack_34;
    uVar6 = uStack_38;
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d54(iVar2,uVar1,uVar6,*puVar10);
  } while( true );
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01e7f6b8 + 0x1e7f54c)) {
          puVar10 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
          goto LAB_01e7f594;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar10 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01e7f6b8 + 0x1e7f54c),0);
LAB_01e7f594:
    (*(code *)*puVar10)(piVar3,puVar10[1]);
  }
  return;
}



// ===== FAT.ScreenPopup$$ClearResetState RVA 0x1e6f6c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e7f6c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  pcVar4 = (char *)(_UNK_01e7fa2c + 0x1e7f6d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e7fa30 + 0x1e7f6ec));
    func_0x01384978(*(undefined4 *)(_UNK_01e7fa34 + 0x1e7f6f8));
    func_0x01384978(*(undefined4 *)(_UNK_01e7fa38 + 0x1e7f704));
    func_0x01384978(*(undefined4 *)(_UNK_01e7fa3c + 0x1e7f710));
    func_0x01384978(*(undefined4 *)(_UNK_01e7fa40 + 0x1e7f71c));
    func_0x01384978(*(undefined4 *)(_UNK_01e7fa44 + 0x1e7f728));
    func_0x01384978(*(undefined4 *)(_UNK_01e7fa48 + 0x1e7f734));
    func_0x01384978(*(undefined4 *)(_UNK_01e7fa4c + 0x1e7f740));
    func_0x01384978(*(undefined4 *)(_UNK_01e7fa50 + 0x1e7f74c));
    func_0x01384978(*(undefined4 *)(_UNK_01e7fa54 + 0x1e7f758));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0xa243,0);
  if (iVar1 == 0) {
    func_0x01e7fa80(param_1);
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03685884(&uStack_48,iVar1,**(undefined4 **)(_UNK_01e7fa58 + 0x1e7f7f0));
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    puVar5 = *(undefined4 **)(_UNK_01e7fa5c + 0x1e7f81c);
    puVar3 = *(undefined4 **)(_UNK_01e7fa60 + 0x1e7f824);
    while (iVar1 = func_0x0146f0f8(&uStack_30,*puVar5), iVar1 != 0) {
      func_0x0146f108(&uStack_48,&uStack_30,*puVar3);
      func_0x01e7fae4(uStack_48);
    }
    func_0x02452778(&uStack_30,**(undefined4 **)(_UNK_01e7fa64 + 0x1e7f85c));
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_01e7fa6c + 0x1e7f880));
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar2) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar2,0);
    }
    iVar1 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03685520(iVar1,**(undefined4 **)(_UNK_01e7fa70 + 0x1e7f8ec));
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar2) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar2,0);
    }
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03da726c(iVar1,**(undefined4 **)(_UNK_01e7fa74 + 0x1e7f950));
    iVar1 = *(int *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x1d) = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03db1bd0(iVar1,**(undefined4 **)(_UNK_01e7fa78 + 0x1e7f98c));
    *(undefined1 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x48) = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0xa243,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$ClearPopupQueueState RVA 0x1e6fa80 =====

/* WARNING: Possible PIC construction at 0x01e7fb84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e7fb88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e7fa80(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 *puVar4;
  int unaff_r5;
  char *pcVar5;
  undefined4 unaff_r6;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  iVar1 = func_0x0229f06c(0x6a2,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      func_0x01e7e4d8();
    }
    param_1 = *(int *)(param_1 + 8);
    pcVar5 = (char *)(_UNK_01e7fc80 + 0x1e7fafc);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e7fc84 + 0x1e7fb10));
      func_0x01384978(*(undefined4 *)(_UNK_01e7fc88 + 0x1e7fb1c));
      func_0x01384978(*(undefined4 *)(_UNK_01e7fc8c + 0x1e7fb28));
      func_0x01384978(*(undefined4 *)(_UNK_01e7fc90 + 0x1e7fb34));
      *pcVar5 = '\x01';
    }
    uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_20 = 0;
    iVar1 = func_0x0229f06c(0x6a3,0);
    if (iVar1 == 0) {
      if (param_1 != 0) {
        func_0x0328fe1c(&uStack_20,param_1,**(undefined4 **)(_UNK_01e7fc94 + 0x1e7fba8));
        puVar4 = *(undefined4 **)(_UNK_01e7fc98 + 0x1e7fbbc);
        while (iVar1 = func_0x0145b12c(&uStack_20,*puVar4), iVar1 != 0) {
          if (iStack_14 != 0) {
            func_0x01e7e4d8();
          }
        }
        func_0x0145b14c(&uStack_20,**(undefined4 **)(_UNK_01e7fc9c + 0x1e7fbec));
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x6a3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x1e7fb88;
    unaff_r4 = param_1;
    unaff_r5 = iVar1;
    register0x00000054 = (BADSPACEBASE *)&uStack_20;
  }
  else {
    iVar1 = func_0x0229f13c(0x6a2,0);
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
  return;
}



// ===== FAT.ScreenPopup$$ClearPopupQueueState RVA 0x1e6fae4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e7fae4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01e7fc80 + 0x1e7fafc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e7fc84 + 0x1e7fb10));
    func_0x01384978(*(undefined4 *)(_UNK_01e7fc88 + 0x1e7fb1c));
    func_0x01384978(*(undefined4 *)(_UNK_01e7fc8c + 0x1e7fb28));
    func_0x01384978(*(undefined4 *)(_UNK_01e7fc90 + 0x1e7fb34));
    *pcVar3 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x6a3,0);
  if (iVar1 == 0) {
    if (param_1 != 0) {
      func_0x0328fe1c(&uStack_20,param_1,**(undefined4 **)(_UNK_01e7fc94 + 0x1e7fba8));
      puVar2 = *(undefined4 **)(_UNK_01e7fc98 + 0x1e7fbbc);
      while (iVar1 = func_0x0145b12c(&uStack_20,*puVar2), iVar1 != 0) {
        if (iStack_14 != 0) {
          func_0x01e7e4d8();
        }
      }
      func_0x0145b14c(&uStack_20,**(undefined4 **)(_UNK_01e7fc9c + 0x1e7fbec));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6a3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$Startup RVA 0x1e6fca8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e7fca8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  pcVar3 = (char *)(_UNK_01e7fdc8 + 0x1e7fcbc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e7fdcc + 0x1e7fcd0));
    func_0x01384978(*(undefined4 *)(_UNK_01e7fdd0 + 0x1e7fcdc));
    func_0x01384978(*(undefined4 *)(_UNK_01e7fdd4 + 0x1e7fce8));
    func_0x01384978(*(undefined4 *)(_UNK_01e7fdd8 + 0x1e7fcf4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa246,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01e7fddc + 0x1e7fd4c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01e7fde0 + 0x1e7fd68));
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01e7fde4 + 0x1e7fd7c));
    func_0x024500b4(uVar5,param_1,**(undefined4 **)(_UNK_01e7fde8 + 0x1e7fd98),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3e6c(iVar1,uVar5,0);
    pcVar3 = (char *)(_UNK_01e7ff24 + 0x1e7fe04);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e7ff28 + 0x1e7fe18));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa248,0);
    if (iVar1 == 0) {
      uVar7 = func_0x01c34eb8(0);
      iVar1 = (int)((ulonglong)uVar7 >> 0x20);
      iVar4 = *(int *)(param_1 + 0x34);
      bVar6 = (uint)uVar7 < *(uint *)(param_1 + 0x30);
      if ((int)(iVar1 - (iVar4 + (uint)bVar6)) < 0 ==
          (SBORROW4(iVar1,iVar4) != SBORROW4(iVar1 - iVar4,(uint)bVar6))) {
        iVar1 = *(int *)(param_1 + 0x28);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_01e7ff2c + 0x1e7fea4));
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_1c = 0;
        uStack_20 = 1;
        func_0x01c35bd8(&uStack_18,*(undefined4 *)(iVar1 + 0x3d0),0,0);
        uVar7 = func_0x01c35eb0(uStack_18,uStack_14,0);
        *(undefined8 *)(param_1 + 0x30) = uVar7;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0xa248,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa246,0);
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
  return;
}



// ===== FAT.ScreenPopup$$CheckRefresh RVA 0x1e6fdec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e7fdec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
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
  
  pcVar3 = (char *)(_UNK_01e7ff24 + 0x1e7fe04);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e7ff28 + 0x1e7fe18));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa248,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa248,0);
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
  uVar7 = func_0x01c34eb8(0);
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  iVar4 = *(int *)(param_1 + 0x34);
  bVar6 = (uint)uVar7 < *(uint *)(param_1 + 0x30);
  if ((int)(iVar1 - (iVar4 + (uint)bVar6)) < 0 ==
      (SBORROW4(iVar1,iVar4) != SBORROW4(iVar1 - iVar4,(uint)bVar6))) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_01e7ff2c + 0x1e7fea4));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = 0;
    uStack_20 = 1;
    func_0x01c35bd8(&uStack_18,*(undefined4 *)(iVar1 + 0x3d0),0,0);
    uVar7 = func_0x01c35eb0(uStack_18,uStack_14,0);
    *(undefined8 *)(param_1 + 0x30) = uVar7;
  }
  return;
}



// ===== FAT.ScreenPopup$$LoadConfig RVA 0x1e6ff30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e7ff30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
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
  
  pcVar3 = (char *)(_UNK_01e80070 + 0x1e7ff44);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e80074 + 0x1e7ff58));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa24b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa24b,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar1 + 0x3cc);
  piVar4 = *(int **)(param_1 + 0x50);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar6 = *(int **)(_UNK_01e80078 + 0x1e8002c);
  uVar7 = *(undefined4 *)(iVar1 + 0x3c);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x118);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  pcVar3 = (char *)(_UNK_01ea0248 + 0x1ea0124);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ea024c + 0x1ea0138),uVar7,uVar2,0);
    func_0x01384978(*(undefined4 *)(_UNK_01ea0250 + 0x1ea0144));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa24c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa24c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x0217ab90(iVar1,piVar4,uVar7,uVar2);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01ea0254 + 0x1ea01ac) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x036a1750(uVar7,**(undefined4 **)(_UNK_01ea0258 + 0x1ea01c8));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4[2] = *(int *)(iVar1 + 0x24);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar1 + 0xc);
  iVar1 = piVar4[2];
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01ca7ab8(iVar5,iVar1,0);
  piVar4[0xd] = iVar1;
                    /* WARNING: Could not recover jumptable at 0x01ea0244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x100))(piVar4,uVar2,*(undefined4 *)(*piVar4 + 0x104));
  return;
}



// ===== FAT.ScreenPopup$$Block RVA 0x1e7007c =====

void FUN_01e8007c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x1726,0);
  if (iVar1 == 0) {
    *(char *)(param_1 + 0x49) = (char)param_2;
    *(char *)(param_1 + 0x48) = (char)param_3;
  }
  else {
    iVar1 = func_0x0229f13c(0x1726,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02181e64(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$CheckTick RVA 0x1e700f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e800f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01e80228 + 0x1e80104);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e8022c + 0x1e80118));
    func_0x01384978(*(undefined4 *)(_UNK_01e80230 + 0x1e80124));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa247,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa247,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar2,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_01e80234 + 0x1e8017c);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar3 = (char *)(_UNK_01e80238 + 0x1e80198);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e8023c + 0x1e801ac));
    *pcVar3 = '\x01';
  }
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  if (**(char **)(iVar1 + 0x5c) != '\0') {
    FUN_01e7fdec(param_1);
    func_0x01e80240(param_1);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      if (*(int *)(param_1 + 0x14) != 0) {
        return;
      }
      iVar1 = 1;
      pcVar3 = (char *)(_UNK_01e808f8 + 0x1e80414);
      if (*pcVar3 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e808fc + 0x1e80428));
        func_0x01384978(*(undefined4 *)(_UNK_01e80900 + 0x1e80434));
        func_0x01384978(*(undefined4 *)(_UNK_01e80904 + 0x1e80440));
        func_0x01384978(*(undefined4 *)(_UNK_01e80908 + 0x1e8044c));
        func_0x01384978(*(undefined4 *)(_UNK_01e8090c + 0x1e80458));
        func_0x01384978(*(undefined4 *)(_UNK_01e80910 + 0x1e80464));
        func_0x01384978(*(undefined4 *)(_UNK_01e80914 + 0x1e80470));
        func_0x01384978(*(undefined4 *)(_UNK_01e80918 + 0x1e8047c));
        func_0x01384978(*(undefined4 *)(_UNK_01e8091c + 0x1e80488));
        func_0x01384978(*(undefined4 *)(_UNK_01e80920 + 0x1e80494));
        *pcVar3 = '\x01';
      }
      uStack_28 = 0;
      iStack_2c = 0;
      iVar6 = func_0x0229f06c(0x697,0);
      if (iVar6 == 0) {
        if (*(char *)(param_1 + 0x4a) == '\0') {
          if (*(char *)(param_1 + 0x49) == '\0') {
            puVar10 = *(undefined4 **)(_UNK_01e80924 + 0x1e8052c);
            puVar5 = *(undefined4 **)(_UNK_01e80928 + 0x1e80534);
LAB_01e80530:
            do {
              while( true ) {
                while( true ) {
                  while( true ) {
                    iVar6 = *(int *)(param_1 + 8);
                    if (iVar6 == 0) {
                      func_0x01384bf0();
                    }
                    if (*(int *)(iVar6 + 0xc) != 0) break;
                    iVar1 = func_0x01e811c0(param_1,*(undefined4 *)(param_1 + 0x1c));
                    if (iVar1 != 0) {
                      func_0x01e812a4(param_1,1);
                      func_0x01e81390(param_1);
                    }
                    iVar6 = func_0x01e815ec(param_1);
                    iVar1 = 0;
                    if (iVar6 == 0) {
                      return;
                    }
                  }
                  if (*(char *)(param_1 + 0x20) != '\0') {
                    iVar6 = *(int *)(param_1 + 8);
                    uVar8 = *(undefined4 *)(param_1 + 0x38);
                    *(undefined1 *)(param_1 + 0x20) = 0;
                    if (iVar6 == 0) {
                      func_0x01384bf0();
                    }
                    func_0x03290edc(iVar6,uVar8,**(undefined4 **)(_UNK_01e8092c + 0x1e80580));
                  }
                  iVar6 = *(int *)(param_1 + 8);
                  if (iVar6 == 0) {
                    func_0x01384bf0();
                  }
                  piVar4 = (int *)func_0x0328eea8(iVar6,0,*puVar10);
                  if (piVar4 != (int *)0x0) break;
                  iVar6 = *(int *)(param_1 + 8);
                  if (iVar6 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x03290bd4(iVar6,0,*puVar5);
                }
                if (*(char *)((int)piVar4 + 0x39) != '\0') {
                  return;
                }
                iVar6 = (**(code **)(*piVar4 + 0x118))(piVar4,*(undefined4 *)(*piVar4 + 0x11c));
                if (iVar6 == 0) {
                  return;
                }
                iVar6 = *(int *)(param_1 + 8);
                *(int **)(param_1 + 0x14) = piVar4;
                if (iVar6 == 0) {
                  func_0x01384bf0();
                }
                func_0x03290bd4(iVar6,0,*puVar5);
                iVar6 = *(int *)(param_1 + 0x14);
                if (iVar6 == 0) {
                  func_0x01384bf0();
                }
                func_0x01e7e4d8(iVar6);
                piVar4 = *(int **)(param_1 + 0x14);
                if (piVar4 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar6 = (**(code **)(*piVar4 + 0x108))
                                  (piVar4,&uStack_28,*(undefined4 *)(*piVar4 + 0x10c));
                if (iVar6 != 0) break;
                uStack_30 = 0;
                uVar8 = func_0x02450228(**(undefined4 **)(_UNK_01e80934 + 0x1e807b0),
                                        **(undefined4 **)(_UNK_01e80930 + 0x1e807a4),
                                        *(undefined4 *)(param_1 + 0x14),uStack_28);
LAB_01e807e8:
                if (*(int *)(**(int **)(_UNK_01e80938 + 0x1e807f8) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x028c2944(uVar8,0);
              }
              iVar6 = *(int *)(param_1 + 0x14);
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              iVar7 = *(int *)(param_1 + 0x28);
              uVar8 = *(undefined4 *)(iVar6 + 8);
              if (iVar7 == 0) {
                func_0x01384bf0();
              }
              func_0x03d5bb20(iVar7,uVar8,&iStack_2c,**(undefined4 **)(_UNK_01e8093c + 0x1e80680));
              iVar6 = *(int *)(param_1 + 0x14);
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              iVar7 = *(int *)(iVar6 + 0x2c);
              iVar6 = FUN_01e7e874(param_1);
              iVar9 = 100;
              if (iVar7 != iVar6) {
                iVar9 = *(int *)(param_1 + 0x40);
              }
              piVar4 = *(int **)(param_1 + 0x14);
              if (piVar4 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar7 = (**(code **)(*piVar4 + 0xe8))(piVar4,*(undefined4 *)(*piVar4 + 0xec));
              iVar6 = iStack_2c;
              if (-1 < iVar7) {
                piVar4 = *(int **)(param_1 + 0x14);
                if (piVar4 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar7 = (**(code **)(*piVar4 + 0xe8))(piVar4,*(undefined4 *)(*piVar4 + 0xec));
                if (iVar7 <= iVar6) goto LAB_01e80530;
              }
              piVar4 = *(int **)(param_1 + 0x14);
              if (piVar4 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar6 = (**(code **)(*piVar4 + 0xf8))(piVar4,*(undefined4 *)(*piVar4 + 0xfc));
              if (iVar6 == 0) {
                uVar8 = func_0x0244f690(**(undefined4 **)(_UNK_01e80944 + 0x1e807e0),
                                        **(undefined4 **)(_UNK_01e80940 + 0x1e807d4),
                                        *(undefined4 *)(param_1 + 0x14),0);
                goto LAB_01e807e8;
              }
              piVar4 = *(int **)(param_1 + 0x14);
              *(undefined1 *)(iVar6 + 0x2e) = 1;
              if (piVar4 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar7 = (**(code **)(*piVar4 + 0x120))(piVar4,*(undefined4 *)(*piVar4 + 0x124));
              iVar6 = iStack_2c;
            } while (iVar7 == 0);
            iVar7 = *(int *)(param_1 + 0x28);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            func_0x03d59d54(iVar7,uVar8,iVar6 + iVar1,**(undefined4 **)(_UNK_01e80948 + 0x1e80880));
            iVar6 = func_0x01c24918(0);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            iVar6 = *(int *)(iVar6 + 0x18);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            FUN_01e2d040(iVar6,1,0);
            iVar1 = *(int *)(param_1 + 0x3c) + iVar1;
            *(int *)(param_1 + 0x3c) = iVar1;
            if (iVar9 <= iVar1) {
              iVar1 = *(int *)(param_1 + 8);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              if (0 < *(int *)(iVar1 + 0xc)) {
                func_0x01e8174c(param_1);
              }
            }
          }
          else {
            func_0x01e809f0(param_1,1);
          }
        }
      }
      else {
        iVar1 = func_0x0229f13c(0x697,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x021773c4(iVar1,param_1,1,0);
      }
      return;
    }
  }
  return;
}



// ===== FAT.ScreenPopup$$CheckClose RVA 0x1e70240 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e80240(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01e803d4 + 0x1e80254);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e803d8 + 0x1e80268));
    func_0x01384978(*(undefined4 *)(_UNK_01e803dc + 0x1e80274));
    func_0x01384978(*(undefined4 *)(_UNK_01e803e0 + 0x1e80280));
    func_0x01384978(*(undefined4 *)(_UNK_01e803e4 + 0x1e8028c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa249,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if ((iVar1 == 0) &&
       ((piVar2 = *(int **)(param_1 + 0x14), piVar2 == (int *)0x0 ||
        (iVar1 = (**(code **)(*piVar2 + 0xf8))(piVar2,*(undefined4 *)(*piVar2 + 0xfc)), iVar1 == 0))
       )) {
      return;
    }
    puVar8 = *(undefined4 **)(_UNK_01e803e8 + 0x1e802f0);
    iVar5 = func_0x034aaa34(*puVar8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x01eeae80(iVar5,iVar1,0);
    if (iVar5 == 0) {
      puVar8 = *(undefined4 **)(_UNK_01e803ec + 0x1e80364);
    }
    else {
      iVar5 = func_0x034aaa34(*puVar8);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x01eeac9c(iVar5,iVar1,0);
      if (iVar5 == 0) {
        return;
      }
      puVar8 = *(undefined4 **)(_UNK_01e803f4 + 0x1e80358);
    }
    uVar7 = func_0x0244fb1c(*puVar8,*(undefined4 *)(iVar1 + 0xc),0);
    if (*(int *)(**(int **)(_UNK_01e803f0 + 0x1e80380) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar7,0);
    iVar5 = 0;
    iVar1 = func_0x0229f06c(0x695,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == *(int *)(param_1 + 0x50)) {
        iVar5 = FUN_01e7e91c(param_1);
        iVar1 = *(int *)(param_1 + 0x14);
      }
      uVar7 = 0;
      if (iVar1 != 0) {
        uVar7 = *(undefined4 *)(iVar1 + 0x2c);
      }
      if (iVar5 != 0) {
        iVar1 = param_1;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (iVar5 != 0) {
        func_0x01e8301c(iVar1,uVar7);
      }
      iVar1 = 1;
      pcVar4 = (char *)(_UNK_01e808f8 + 0x1e80414);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01e808fc + 0x1e80428));
        func_0x01384978(*(undefined4 *)(_UNK_01e80900 + 0x1e80434));
        func_0x01384978(*(undefined4 *)(_UNK_01e80904 + 0x1e80440));
        func_0x01384978(*(undefined4 *)(_UNK_01e80908 + 0x1e8044c));
        func_0x01384978(*(undefined4 *)(_UNK_01e8090c + 0x1e80458));
        func_0x01384978(*(undefined4 *)(_UNK_01e80910 + 0x1e80464));
        func_0x01384978(*(undefined4 *)(_UNK_01e80914 + 0x1e80470));
        func_0x01384978(*(undefined4 *)(_UNK_01e80918 + 0x1e8047c));
        func_0x01384978(*(undefined4 *)(_UNK_01e8091c + 0x1e80488));
        func_0x01384978(*(undefined4 *)(_UNK_01e80920 + 0x1e80494));
        *pcVar4 = '\x01';
      }
      uStack_28 = 0;
      iStack_2c = 0;
      iVar5 = func_0x0229f06c(0x697,0);
      if (iVar5 == 0) {
        if (*(char *)(param_1 + 0x4a) == '\0') {
          if (*(char *)(param_1 + 0x49) == '\0') {
            puVar10 = *(undefined4 **)(_UNK_01e80924 + 0x1e8052c);
            puVar8 = *(undefined4 **)(_UNK_01e80928 + 0x1e80534);
LAB_01e80530:
            do {
              while( true ) {
                while( true ) {
                  while( true ) {
                    iVar5 = *(int *)(param_1 + 8);
                    if (iVar5 == 0) {
                      func_0x01384bf0();
                    }
                    if (*(int *)(iVar5 + 0xc) != 0) break;
                    iVar1 = func_0x01e811c0(param_1,*(undefined4 *)(param_1 + 0x1c));
                    if (iVar1 != 0) {
                      func_0x01e812a4(param_1,1);
                      func_0x01e81390(param_1);
                    }
                    iVar5 = func_0x01e815ec(param_1);
                    iVar1 = 0;
                    if (iVar5 == 0) {
                      return;
                    }
                  }
                  if (*(char *)(param_1 + 0x20) != '\0') {
                    iVar5 = *(int *)(param_1 + 8);
                    uVar7 = *(undefined4 *)(param_1 + 0x38);
                    *(undefined1 *)(param_1 + 0x20) = 0;
                    if (iVar5 == 0) {
                      func_0x01384bf0();
                    }
                    func_0x03290edc(iVar5,uVar7,**(undefined4 **)(_UNK_01e8092c + 0x1e80580));
                  }
                  iVar5 = *(int *)(param_1 + 8);
                  if (iVar5 == 0) {
                    func_0x01384bf0();
                  }
                  piVar2 = (int *)func_0x0328eea8(iVar5,0,*puVar10);
                  if (piVar2 != (int *)0x0) break;
                  iVar5 = *(int *)(param_1 + 8);
                  if (iVar5 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x03290bd4(iVar5,0,*puVar8);
                }
                if (*(char *)((int)piVar2 + 0x39) != '\0') {
                  return;
                }
                iVar5 = (**(code **)(*piVar2 + 0x118))(piVar2,*(undefined4 *)(*piVar2 + 0x11c));
                if (iVar5 == 0) {
                  return;
                }
                iVar5 = *(int *)(param_1 + 8);
                *(int **)(param_1 + 0x14) = piVar2;
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                func_0x03290bd4(iVar5,0,*puVar8);
                iVar5 = *(int *)(param_1 + 0x14);
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                func_0x01e7e4d8(iVar5);
                piVar2 = *(int **)(param_1 + 0x14);
                if (piVar2 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar5 = (**(code **)(*piVar2 + 0x108))
                                  (piVar2,&uStack_28,*(undefined4 *)(*piVar2 + 0x10c));
                if (iVar5 != 0) break;
                uStack_30 = 0;
                uVar7 = func_0x02450228(**(undefined4 **)(_UNK_01e80934 + 0x1e807b0),
                                        **(undefined4 **)(_UNK_01e80930 + 0x1e807a4),
                                        *(undefined4 *)(param_1 + 0x14),uStack_28);
LAB_01e807e8:
                if (*(int *)(**(int **)(_UNK_01e80938 + 0x1e807f8) + 0x74) == 0) {
                  func_0x01384ab4();
                }
                func_0x028c2944(uVar7,0);
              }
              iVar5 = *(int *)(param_1 + 0x14);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              iVar6 = *(int *)(param_1 + 0x28);
              uVar7 = *(undefined4 *)(iVar5 + 8);
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              func_0x03d5bb20(iVar6,uVar7,&iStack_2c,**(undefined4 **)(_UNK_01e8093c + 0x1e80680));
              iVar5 = *(int *)(param_1 + 0x14);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              iVar6 = *(int *)(iVar5 + 0x2c);
              iVar5 = FUN_01e7e874(param_1);
              iVar9 = 100;
              if (iVar6 != iVar5) {
                iVar9 = *(int *)(param_1 + 0x40);
              }
              piVar2 = *(int **)(param_1 + 0x14);
              if (piVar2 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar6 = (**(code **)(*piVar2 + 0xe8))(piVar2,*(undefined4 *)(*piVar2 + 0xec));
              iVar5 = iStack_2c;
              if (-1 < iVar6) {
                piVar2 = *(int **)(param_1 + 0x14);
                if (piVar2 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar6 = (**(code **)(*piVar2 + 0xe8))(piVar2,*(undefined4 *)(*piVar2 + 0xec));
                if (iVar6 <= iVar5) goto LAB_01e80530;
              }
              piVar2 = *(int **)(param_1 + 0x14);
              if (piVar2 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar5 = (**(code **)(*piVar2 + 0xf8))(piVar2,*(undefined4 *)(*piVar2 + 0xfc));
              if (iVar5 == 0) {
                uVar7 = func_0x0244f690(**(undefined4 **)(_UNK_01e80944 + 0x1e807e0),
                                        **(undefined4 **)(_UNK_01e80940 + 0x1e807d4),
                                        *(undefined4 *)(param_1 + 0x14),0);
                goto LAB_01e807e8;
              }
              piVar2 = *(int **)(param_1 + 0x14);
              *(undefined1 *)(iVar5 + 0x2e) = 1;
              if (piVar2 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar6 = (**(code **)(*piVar2 + 0x120))(piVar2,*(undefined4 *)(*piVar2 + 0x124));
              iVar5 = iStack_2c;
            } while (iVar6 == 0);
            iVar6 = *(int *)(param_1 + 0x28);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x03d59d54(iVar6,uVar7,iVar5 + iVar1,**(undefined4 **)(_UNK_01e80948 + 0x1e80880));
            iVar5 = func_0x01c24918(0);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            iVar5 = *(int *)(iVar5 + 0x18);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            FUN_01e2d040(iVar5,1,0);
            iVar1 = *(int *)(param_1 + 0x3c) + iVar1;
            *(int *)(param_1 + 0x3c) = iVar1;
            if (iVar9 <= iVar1) {
              iVar1 = *(int *)(param_1 + 8);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              if (0 < *(int *)(iVar1 + 0xc)) {
                func_0x01e8174c(param_1);
              }
            }
          }
          else {
            func_0x01e809f0(param_1,1);
          }
        }
      }
      else {
        iVar1 = func_0x0229f13c(0x697,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x021773c4(iVar1,param_1,1,0);
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x695,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa249,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  iStack_2c = iStack_44;
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
  return;
}



// ===== FAT.ScreenPopup$$Check RVA 0x1e703f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e803f8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01e808f8 + 0x1e80414);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e808fc + 0x1e80428));
    func_0x01384978(*(undefined4 *)(_UNK_01e80900 + 0x1e80434));
    func_0x01384978(*(undefined4 *)(_UNK_01e80904 + 0x1e80440));
    func_0x01384978(*(undefined4 *)(_UNK_01e80908 + 0x1e8044c));
    func_0x01384978(*(undefined4 *)(_UNK_01e8090c + 0x1e80458));
    func_0x01384978(*(undefined4 *)(_UNK_01e80910 + 0x1e80464));
    func_0x01384978(*(undefined4 *)(_UNK_01e80914 + 0x1e80470));
    func_0x01384978(*(undefined4 *)(_UNK_01e80918 + 0x1e8047c));
    func_0x01384978(*(undefined4 *)(_UNK_01e8091c + 0x1e80488));
    func_0x01384978(*(undefined4 *)(_UNK_01e80920 + 0x1e80494));
    *pcVar4 = '\x01';
  }
  uStack_28 = 0;
  iStack_2c = 0;
  iVar1 = func_0x0229f06c(0x697,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x4a) == '\0') {
      if (*(char *)(param_1 + 0x49) == '\0') {
        puVar8 = *(undefined4 **)(_UNK_01e80924 + 0x1e8052c);
        puVar3 = *(undefined4 **)(_UNK_01e80928 + 0x1e80534);
LAB_01e80530:
        do {
          while( true ) {
            while( true ) {
              while( true ) {
                iVar1 = *(int *)(param_1 + 8);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                if (*(int *)(iVar1 + 0xc) != 0) break;
                iVar1 = func_0x01e811c0(param_1,*(undefined4 *)(param_1 + 0x1c));
                if (iVar1 != 0) {
                  func_0x01e812a4(param_1,1);
                  func_0x01e81390(param_1);
                }
                iVar1 = func_0x01e815ec(param_1);
                param_2 = 0;
                if (iVar1 == 0) {
                  return;
                }
              }
              if (*(char *)(param_1 + 0x20) != '\0') {
                iVar1 = *(int *)(param_1 + 8);
                uVar6 = *(undefined4 *)(param_1 + 0x38);
                *(undefined1 *)(param_1 + 0x20) = 0;
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                func_0x03290edc(iVar1,uVar6,**(undefined4 **)(_UNK_01e8092c + 0x1e80580));
              }
              iVar1 = *(int *)(param_1 + 8);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              piVar2 = (int *)func_0x0328eea8(iVar1,0,*puVar8);
              if (piVar2 != (int *)0x0) break;
              iVar1 = *(int *)(param_1 + 8);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x03290bd4(iVar1,0,*puVar3);
            }
            if (*(char *)((int)piVar2 + 0x39) != '\0') {
              return;
            }
            iVar1 = (**(code **)(*piVar2 + 0x118))(piVar2,*(undefined4 *)(*piVar2 + 0x11c));
            if (iVar1 == 0) {
              return;
            }
            iVar1 = *(int *)(param_1 + 8);
            *(int **)(param_1 + 0x14) = piVar2;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x03290bd4(iVar1,0,*puVar3);
            iVar1 = *(int *)(param_1 + 0x14);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x01e7e4d8(iVar1);
            piVar2 = *(int **)(param_1 + 0x14);
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = (**(code **)(*piVar2 + 0x108))
                              (piVar2,&uStack_28,*(undefined4 *)(*piVar2 + 0x10c));
            if (iVar1 != 0) break;
            uVar6 = func_0x02450228(**(undefined4 **)(_UNK_01e80934 + 0x1e807b0),
                                    **(undefined4 **)(_UNK_01e80930 + 0x1e807a4),
                                    *(undefined4 *)(param_1 + 0x14),uStack_28,0);
LAB_01e807e8:
            if (*(int *)(**(int **)(_UNK_01e80938 + 0x1e807f8) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2944(uVar6,0);
          }
          iVar1 = *(int *)(param_1 + 0x14);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(param_1 + 0x28);
          uVar6 = *(undefined4 *)(iVar1 + 8);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x03d5bb20(iVar5,uVar6,&iStack_2c,**(undefined4 **)(_UNK_01e8093c + 0x1e80680));
          iVar1 = *(int *)(param_1 + 0x14);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar1 + 0x2c);
          iVar1 = FUN_01e7e874(param_1);
          iVar7 = 100;
          if (iVar5 != iVar1) {
            iVar7 = *(int *)(param_1 + 0x40);
          }
          piVar2 = *(int **)(param_1 + 0x14);
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar5 = (**(code **)(*piVar2 + 0xe8))(piVar2,*(undefined4 *)(*piVar2 + 0xec));
          iVar1 = iStack_2c;
          if (-1 < iVar5) {
            piVar2 = *(int **)(param_1 + 0x14);
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar5 = (**(code **)(*piVar2 + 0xe8))(piVar2,*(undefined4 *)(*piVar2 + 0xec));
            if (iVar5 <= iVar1) goto LAB_01e80530;
          }
          piVar2 = *(int **)(param_1 + 0x14);
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = (**(code **)(*piVar2 + 0xf8))(piVar2,*(undefined4 *)(*piVar2 + 0xfc));
          if (iVar1 == 0) {
            uVar6 = func_0x0244f690(**(undefined4 **)(_UNK_01e80944 + 0x1e807e0),
                                    **(undefined4 **)(_UNK_01e80940 + 0x1e807d4),
                                    *(undefined4 *)(param_1 + 0x14),0);
            goto LAB_01e807e8;
          }
          piVar2 = *(int **)(param_1 + 0x14);
          *(undefined1 *)(iVar1 + 0x2e) = 1;
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar5 = (**(code **)(*piVar2 + 0x120))(piVar2,*(undefined4 *)(*piVar2 + 0x124));
          iVar1 = iStack_2c;
        } while (iVar5 == 0);
        iVar5 = *(int *)(param_1 + 0x28);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar5,uVar6,iVar1 + param_2,**(undefined4 **)(_UNK_01e80948 + 0x1e80880));
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x18);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        FUN_01e2d040(iVar1,1,0);
        param_2 = *(int *)(param_1 + 0x3c) + param_2;
        *(int *)(param_1 + 0x3c) = param_2;
        if (iVar7 <= param_2) {
          iVar1 = *(int *)(param_1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar1 + 0xc)) {
            func_0x01e8174c(param_1);
          }
        }
      }
      else {
        func_0x01e809f0(param_1,param_2);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x697,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$Next RVA 0x1e7094c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e8094c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar5 = 0;
  iVar2 = func_0x0229f06c(0x695,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x695,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar8,&uStack_30,uVar3,0,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == *(int *)(param_1 + 0x50)) {
    iVar5 = FUN_01e7e91c(param_1);
    iVar2 = *(int *)(param_1 + 0x14);
  }
  uVar8 = 0;
  if (iVar2 != 0) {
    uVar8 = *(undefined4 *)(iVar2 + 0x2c);
  }
  if (iVar5 != 0) {
    iVar2 = param_1;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (iVar5 != 0) {
    func_0x01e8301c(iVar2,uVar8);
  }
  iVar2 = 1;
  pcVar6 = (char *)(_UNK_01e808f8 + 0x1e80414);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e808fc + 0x1e80428));
    func_0x01384978(*(undefined4 *)(_UNK_01e80900 + 0x1e80434));
    func_0x01384978(*(undefined4 *)(_UNK_01e80904 + 0x1e80440));
    func_0x01384978(*(undefined4 *)(_UNK_01e80908 + 0x1e8044c));
    func_0x01384978(*(undefined4 *)(_UNK_01e8090c + 0x1e80458));
    func_0x01384978(*(undefined4 *)(_UNK_01e80910 + 0x1e80464));
    func_0x01384978(*(undefined4 *)(_UNK_01e80914 + 0x1e80470));
    func_0x01384978(*(undefined4 *)(_UNK_01e80918 + 0x1e8047c));
    func_0x01384978(*(undefined4 *)(_UNK_01e8091c + 0x1e80488));
    func_0x01384978(*(undefined4 *)(_UNK_01e80920 + 0x1e80494));
    *pcVar6 = '\x01';
  }
  uStack_28 = 0;
  iStack_2c = 0;
  iVar5 = func_0x0229f06c(0x697,0);
  if (iVar5 == 0) {
    if (*(char *)(param_1 + 0x4a) == '\0') {
      if (*(char *)(param_1 + 0x49) == '\0') {
        puVar10 = *(undefined4 **)(_UNK_01e80924 + 0x1e8052c);
        puVar4 = *(undefined4 **)(_UNK_01e80928 + 0x1e80534);
LAB_01e80530:
        do {
          while( true ) {
            while( true ) {
              while( true ) {
                iVar5 = *(int *)(param_1 + 8);
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                if (*(int *)(iVar5 + 0xc) != 0) break;
                iVar2 = func_0x01e811c0(param_1,*(undefined4 *)(param_1 + 0x1c));
                if (iVar2 != 0) {
                  func_0x01e812a4(param_1,1);
                  func_0x01e81390(param_1);
                }
                iVar5 = func_0x01e815ec(param_1);
                iVar2 = 0;
                if (iVar5 == 0) {
                  return;
                }
              }
              if (*(char *)(param_1 + 0x20) != '\0') {
                iVar5 = *(int *)(param_1 + 8);
                uVar8 = *(undefined4 *)(param_1 + 0x38);
                *(undefined1 *)(param_1 + 0x20) = 0;
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                func_0x03290edc(iVar5,uVar8,**(undefined4 **)(_UNK_01e8092c + 0x1e80580));
              }
              iVar5 = *(int *)(param_1 + 8);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              piVar1 = (int *)func_0x0328eea8(iVar5,0,*puVar10);
              if (piVar1 != (int *)0x0) break;
              iVar5 = *(int *)(param_1 + 8);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              func_0x03290bd4(iVar5,0,*puVar4);
            }
            if (*(char *)((int)piVar1 + 0x39) != '\0') {
              return;
            }
            iVar5 = (**(code **)(*piVar1 + 0x118))(piVar1,*(undefined4 *)(*piVar1 + 0x11c));
            if (iVar5 == 0) {
              return;
            }
            iVar5 = *(int *)(param_1 + 8);
            *(int **)(param_1 + 0x14) = piVar1;
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x03290bd4(iVar5,0,*puVar4);
            iVar5 = *(int *)(param_1 + 0x14);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x01e7e4d8(iVar5);
            piVar1 = *(int **)(param_1 + 0x14);
            if (piVar1 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar5 = (**(code **)(*piVar1 + 0x108))
                              (piVar1,&uStack_28,*(undefined4 *)(*piVar1 + 0x10c));
            if (iVar5 != 0) break;
            uStack_30 = 0;
            uVar8 = func_0x02450228(**(undefined4 **)(_UNK_01e80934 + 0x1e807b0),
                                    **(undefined4 **)(_UNK_01e80930 + 0x1e807a4),
                                    *(undefined4 *)(param_1 + 0x14),uStack_28);
LAB_01e807e8:
            if (*(int *)(**(int **)(_UNK_01e80938 + 0x1e807f8) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2944(uVar8,0);
          }
          iVar5 = *(int *)(param_1 + 0x14);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(param_1 + 0x28);
          uVar8 = *(undefined4 *)(iVar5 + 8);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          func_0x03d5bb20(iVar7,uVar8,&iStack_2c,**(undefined4 **)(_UNK_01e8093c + 0x1e80680));
          iVar5 = *(int *)(param_1 + 0x14);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(iVar5 + 0x2c);
          iVar5 = FUN_01e7e874(param_1);
          iVar9 = 100;
          if (iVar7 != iVar5) {
            iVar9 = *(int *)(param_1 + 0x40);
          }
          piVar1 = *(int **)(param_1 + 0x14);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar7 = (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
          iVar5 = iStack_2c;
          if (-1 < iVar7) {
            piVar1 = *(int **)(param_1 + 0x14);
            if (piVar1 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar7 = (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
            if (iVar7 <= iVar5) goto LAB_01e80530;
          }
          piVar1 = *(int **)(param_1 + 0x14);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar5 = (**(code **)(*piVar1 + 0xf8))(piVar1,*(undefined4 *)(*piVar1 + 0xfc));
          if (iVar5 == 0) {
            uVar8 = func_0x0244f690(**(undefined4 **)(_UNK_01e80944 + 0x1e807e0),
                                    **(undefined4 **)(_UNK_01e80940 + 0x1e807d4),
                                    *(undefined4 *)(param_1 + 0x14),0);
            goto LAB_01e807e8;
          }
          piVar1 = *(int **)(param_1 + 0x14);
          *(undefined1 *)(iVar5 + 0x2e) = 1;
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar7 = (**(code **)(*piVar1 + 0x120))(piVar1,*(undefined4 *)(*piVar1 + 0x124));
          iVar5 = iStack_2c;
        } while (iVar7 == 0);
        iVar7 = *(int *)(param_1 + 0x28);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar7,uVar8,iVar5 + iVar2,**(undefined4 **)(_UNK_01e80948 + 0x1e80880));
        iVar5 = func_0x01c24918(0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x18);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        FUN_01e2d040(iVar5,1,0);
        iVar2 = *(int *)(param_1 + 0x3c) + iVar2;
        *(int *)(param_1 + 0x3c) = iVar2;
        if (iVar9 <= iVar2) {
          iVar2 = *(int *)(param_1 + 8);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar2 + 0xc)) {
            func_0x01e8174c(param_1);
          }
        }
      }
      else {
        func_0x01e809f0(param_1,1);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x697,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar2,param_1,1,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$CheckIgnoreDelay RVA 0x1e709f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e809f0(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_01e81134 + 0x1e80a0c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e81138 + 0x1e80a20));
    func_0x01384978(*(undefined4 *)(_UNK_01e8113c + 0x1e80a2c));
    func_0x01384978(*(undefined4 *)(_UNK_01e81140 + 0x1e80a38));
    func_0x01384978(*(undefined4 *)(_UNK_01e81144 + 0x1e80a44));
    func_0x01384978(*(undefined4 *)(_UNK_01e81148 + 0x1e80a50));
    func_0x01384978(*(undefined4 *)(_UNK_01e8114c + 0x1e80a5c));
    func_0x01384978(*(undefined4 *)(_UNK_01e81150 + 0x1e80a68));
    func_0x01384978(*(undefined4 *)(_UNK_01e81154 + 0x1e80a74));
    func_0x01384978(*(undefined4 *)(_UNK_01e81158 + 0x1e80a80));
    func_0x01384978(*(undefined4 *)(_UNK_01e8115c + 0x1e80a8c));
    func_0x01384978(*(undefined4 *)(_UNK_01e81160 + 0x1e80a98));
    func_0x01384978(*(undefined4 *)(_UNK_01e81164 + 0x1e80aa4));
    func_0x01384978(*(undefined4 *)(_UNK_01e81168 + 0x1e80ab0));
    func_0x01384978(*(undefined4 *)(_UNK_01e8116c + 0x1e80abc));
    func_0x01384978(*(undefined4 *)(_UNK_01e81170 + 0x1e80ac8));
    func_0x01384978(*(undefined4 *)(_UNK_01e81174 + 0x1e80ad4));
    *pcVar2 = '\x01';
  }
  uStack_24 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x698,0);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x4a) == '\0') {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x4c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01dbb000(iVar1,0);
        if ((iVar1 != 0) && (iVar1 = func_0x02141ef4(iVar1,0), iVar1 != 0)) {
          if (*(char *)(param_1 + 0x20) != '\0') {
            iVar1 = *(int *)(param_1 + 8);
            uVar6 = *(undefined4 *)(param_1 + 0x38);
            *(undefined1 *)(param_1 + 0x20) = 0;
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x03290edc(iVar1,uVar6,**(undefined4 **)(_UNK_01e81178 + 0x1e80be4));
          }
          iVar1 = *(int *)(param_1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar5 = *(int *)(iVar1 + 0xc) - 1;
          if (-1 < (int)uVar5) {
            puVar3 = *(undefined4 **)(_UNK_01e8117c + 0x1e80c14);
            puVar8 = *(undefined4 **)(_UNK_01e81180 + 0x1e80c1c);
            do {
              iVar1 = *(int *)(param_1 + 8);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              iVar1 = func_0x0328eea8(iVar1,uVar5,*puVar3);
              if (iVar1 == 0) {
                iVar1 = *(int *)(param_1 + 8);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                func_0x03290bd4(iVar1,uVar5,*puVar8);
              }
              uVar5 = uVar5 - 1;
            } while (uVar5 < 0x80000000);
          }
LAB_01e80f98:
          do {
            while( true ) {
              piVar10 = *(int **)(_UNK_01e811a0 + 0x1e80fa4);
              uVar6 = *(undefined4 *)(param_1 + 8);
              iVar1 = *piVar10;
              if (*(int *)(iVar1 + 0x74) == 0) {
                func_0x01384ab4();
                iVar1 = *piVar10;
              }
              iVar7 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xc);
              if (iVar7 == 0) {
                if (*(int *)(iVar1 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar1 = *piVar10;
                }
                uVar4 = **(undefined4 **)(iVar1 + 0x5c);
                iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01e811a4 + 0x1e80ff0));
                func_0x0244f8d0(iVar7,uVar4,**(undefined4 **)(_UNK_01e811a8 + 0x1e81010),0);
                *(int *)(*(int *)(*piVar10 + 0x5c) + 0xc) = iVar7;
              }
              puVar3 = *(undefined4 **)(_UNK_01e811ac + 0x1e81038);
              iVar1 = func_0x02f9ae48(uVar6,iVar7,*puVar3);
              if (iVar1 == 0) goto LAB_01e81044;
              iVar1 = *piVar10;
              uVar6 = *(undefined4 *)(param_1 + 8);
              if (*(int *)(iVar1 + 0x74) == 0) {
                func_0x01384ab4();
                iVar1 = *piVar10;
              }
              iVar7 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
              if (iVar7 == 0) {
                if (*(int *)(iVar1 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar1 = *piVar10;
                }
                uVar4 = **(undefined4 **)(iVar1 + 0x5c);
                iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01e81184 + 0x1e80cc0));
                func_0x0244f8d0(iVar7,uVar4,**(undefined4 **)(_UNK_01e81188 + 0x1e80ce0),0);
                *(int *)(*(int *)(*piVar10 + 0x5c) + 8) = iVar7;
              }
              piVar10 = (int *)func_0x02f9ae48(uVar6,iVar7,*puVar3);
              if (piVar10 == (int *)0x0) {
                func_0x01384bf0();
              }
              if (*(char *)((int)piVar10 + 0x39) != '\0') {
                return;
              }
              iVar1 = (**(code **)(*piVar10 + 0x118))(piVar10,*(undefined4 *)(*piVar10 + 0x11c));
              if (iVar1 == 0) {
                return;
              }
              iVar1 = *(int *)(param_1 + 8);
              *(int **)(param_1 + 0x14) = piVar10;
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x03290900(iVar1,piVar10,**(undefined4 **)(_UNK_01e8118c + 0x1e80d60));
              iVar1 = *(int *)(param_1 + 0x14);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              func_0x01e7e4d8(iVar1);
              if (*(char *)(param_1 + 0x20) != '\0') {
                iVar1 = *(int *)(param_1 + 8);
                uVar6 = *(undefined4 *)(param_1 + 0x38);
                *(undefined1 *)(param_1 + 0x20) = 0;
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                func_0x03290edc(iVar1,uVar6,**(undefined4 **)(_UNK_01e81190 + 0x1e80db8));
              }
              piVar10 = *(int **)(param_1 + 0x14);
              if (piVar10 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = (**(code **)(*piVar10 + 0x108))
                                (piVar10,&uStack_24,*(undefined4 *)(*piVar10 + 0x10c));
              if (iVar1 != 0) break;
              uVar6 = func_0x02450228(**(undefined4 **)(_UNK_01e81198 + 0x1e80f34),
                                      **(undefined4 **)(_UNK_01e81194 + 0x1e80f28),
                                      *(undefined4 *)(param_1 + 0x14),uStack_24,0);
LAB_01e80f6c:
              if (*(int *)(**(int **)(_UNK_01e8119c + 0x1e80f7c) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x028c2944(uVar6,0);
            }
            iVar1 = *(int *)(param_1 + 0x14);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar7 = *(int *)(param_1 + 0x28);
            uVar6 = *(undefined4 *)(iVar1 + 8);
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            func_0x03d5bb20(iVar7,uVar6,&iStack_28,**(undefined4 **)(_UNK_01e811b0 + 0x1e80e28));
            iVar1 = *(int *)(param_1 + 0x14);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar7 = *(int *)(iVar1 + 0x2c);
            iVar1 = FUN_01e7e874(param_1);
            iVar9 = 100;
            if (iVar7 != iVar1) {
              iVar9 = *(int *)(param_1 + 0x40);
            }
            piVar10 = *(int **)(param_1 + 0x14);
            if (piVar10 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar7 = (**(code **)(*piVar10 + 0xe8))(piVar10,*(undefined4 *)(*piVar10 + 0xec));
            iVar1 = iStack_28;
            if (-1 < iVar7) {
              piVar10 = *(int **)(param_1 + 0x14);
              if (piVar10 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar7 = (**(code **)(*piVar10 + 0xe8))(piVar10,*(undefined4 *)(*piVar10 + 0xec));
              if (iVar7 <= iVar1) goto LAB_01e80f98;
            }
            piVar10 = *(int **)(param_1 + 0x14);
            if (piVar10 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = (**(code **)(*piVar10 + 0xf8))(piVar10,*(undefined4 *)(*piVar10 + 0xfc));
            if (iVar1 == 0) {
              uVar6 = func_0x0244f690(**(undefined4 **)(_UNK_01e811b8 + 0x1e80f64),
                                      **(undefined4 **)(_UNK_01e811b4 + 0x1e80f58),
                                      *(undefined4 *)(param_1 + 0x14),0);
              goto LAB_01e80f6c;
            }
            piVar10 = *(int **)(param_1 + 0x14);
            *(undefined1 *)(iVar1 + 0x2e) = 1;
            if (piVar10 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar7 = (**(code **)(*piVar10 + 0x120))(piVar10,*(undefined4 *)(*piVar10 + 0x124));
            iVar1 = iStack_28;
          } while (iVar7 == 0);
          iVar7 = *(int *)(param_1 + 0x28);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d54(iVar7,uVar6,iVar1 + param_2,**(undefined4 **)(_UNK_01e811bc + 0x1e810bc));
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = *(int *)(iVar1 + 0x18);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          FUN_01e2d040(iVar1,1,0);
          param_2 = *(int *)(param_1 + 0x3c) + param_2;
          *(int *)(param_1 + 0x3c) = param_2;
          if (iVar9 <= param_2) {
            iVar1 = *(int *)(param_1 + 8);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            if (0 < *(int *)(iVar1 + 0xc)) {
              func_0x01e8174c(param_1);
            }
          }
LAB_01e81044:
          iVar1 = *(int *)(param_1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 0xc) == 0) {
            iVar1 = func_0x01e811c0(param_1,*(undefined4 *)(param_1 + 0x1c));
            if (iVar1 != 0) {
              func_0x01e812a4(param_1,1);
              func_0x01e81390(param_1);
            }
            func_0x01e815ec(param_1);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x698,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$CheckState RVA 0x1e711c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e811c0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  byte bStack_11;
  
  pcVar4 = (char *)(_UNK_01e81298 + 0x1e811dc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e8129c + 0x1e811f0));
    *pcVar4 = '\x01';
  }
  bStack_11 = 0;
  iVar2 = func_0x0229f06c(0x6a0,0);
  if (iVar2 == 0) {
    if (param_2 < 0) {
      uVar3 = 1;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      bVar1 = func_0x03da8e08(iVar2,param_2,&bStack_11,**(undefined4 **)(_UNK_01e812a0 + 0x1e81274))
      ;
      uVar3 = (uint)((bStack_11 & bVar1) != 0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x6a0,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0217b1d4(iVar2,param_1,param_2,0);
  }
  return uVar3;
}



// ===== FAT.ScreenPopup$$EndClear RVA 0x1e712a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e812a4(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01e81388 + 0x1e812bc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e8138c + 0x1e812d0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6a1,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      FUN_01e7fa80(param_1);
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar3) {
      func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar3,0);
    }
    uVar5 = FUN_01e7e874(param_1);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = uVar5;
    return;
  }
  iVar1 = func_0x0229f13c(0x6a1,0);
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



// ===== FAT.ScreenPopup$$DropCache RVA 0x1e71390 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e81390(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_3c [3];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_01e815b4 + 0x1e813a8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e815b8 + 0x1e813bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e815bc + 0x1e813c8));
    func_0x01384978(*(undefined4 *)(_UNK_01e815c0 + 0x1e813d4));
    func_0x01384978(*(undefined4 *)(_UNK_01e815c4 + 0x1e813e0));
    func_0x01384978(*(undefined4 *)(_UNK_01e815c8 + 0x1e813ec));
    func_0x01384978(*(undefined4 *)(_UNK_01e815cc + 0x1e813f8));
    *pcVar2 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x6a4,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03685884(&uStack_30,iVar1,**(undefined4 **)(_UNK_01e815d0 + 0x1e814a0));
      puVar4 = *(undefined4 **)(_UNK_01e815d4 + 0x1e814b8);
      puVar3 = *(undefined4 **)(_UNK_01e815d8 + 0x1e814c0);
      while (iVar1 = func_0x0146f0f8(&uStack_30,*puVar4), iVar1 != 0) {
        func_0x0146f108(auStack_3c,&uStack_30,*puVar3);
        FUN_01e7fae4(auStack_3c[0]);
      }
      func_0x02452778(&uStack_30,**(undefined4 **)(_UNK_01e815dc + 0x1e814f8));
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03685520(iVar1,**(undefined4 **)(_UNK_01e815e4 + 0x1e8151c));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6a4,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$TryResumeCache RVA 0x1e715ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e815ec(int param_1)

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
  int iStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01e81734 + 0x1e81604);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e81738 + 0x1e81618));
    func_0x01384978(*(undefined4 *)(_UNK_01e8173c + 0x1e81624));
    func_0x01384978(*(undefined4 *)(_UNK_01e81740 + 0x1e81630));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6a5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6a5,0);
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
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = 0;
  if (*(int *)(iVar1 + 0xc) != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x036859f8(&uStack_24,iVar1,**(undefined4 **)(_UNK_01e81744 + 0x1e816c0));
    if ((iStack_20 == 1) && (iVar1 = func_0x01e84448(), iVar1 == 0)) {
      FUN_01e7fae4(uStack_24);
    }
    else {
      iVar1 = *(int *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x3c) = uStack_1c;
      *(int *)(param_1 + 0x1c) = iStack_20;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328f380(iVar1,uStack_24,**(undefined4 **)(_UNK_01e81748 + 0x1e81710));
      uVar5 = 1;
    }
  }
  return uVar5;
}



// ===== FAT.ScreenPopup$$LimitClear RVA 0x1e7174c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e8174c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01e8199c + 0x1e81764);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e819a0 + 0x1e81778));
    func_0x01384978(*(undefined4 *)(_UNK_01e819a4 + 0x1e81784));
    func_0x01384978(*(undefined4 *)(_UNK_01e819a8 + 0x1e81790));
    func_0x01384978(*(undefined4 *)(_UNK_01e819ac + 0x1e8179c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x69e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x69e,0);
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
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar5,0,0);
    return;
  }
  iVar9 = -1;
  iVar1 = 0;
  puVar11 = *(undefined4 **)(_UNK_01e819b0 + 0x1e81804);
  puVar12 = *(undefined4 **)(_UNK_01e819b4 + 0x1e8180c);
  do {
    iVar8 = *(int *)(param_1 + 8);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar8 + 0xc) <= iVar1) {
      iVar1 = *(int *)(param_1 + 8);
      uVar6 = iVar9 + 1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = *(int *)(iVar1 + 0xc) - uVar6;
      if (0x7fffffff < uVar6) {
        func_0x0484ca10(0,uVar6,uVar4,**(undefined4 **)(_UNK_01e819b8 + 0x1e8198c));
      }
      if (0x7fffffff < uVar4) {
        func_0x0484c5d0(0x10,4,0);
      }
      if ((int)(*(int *)(iVar1 + 0xc) - uVar6) < (int)uVar4) {
        func_0x0484bfd4(0x17,0);
      }
      if ((int)uVar4 < 1) {
        return;
      }
      iVar9 = *(int *)(iVar1 + 0xc) - uVar4;
      *(int *)(iVar1 + 0xc) = iVar9;
      if ((int)uVar6 < iVar9) {
        func_0x0484e904(*(undefined4 *)(iVar1 + 8),uVar4 + uVar6,*(undefined4 *)(iVar1 + 8),uVar6);
        iVar9 = *(int *)(iVar1 + 0xc);
      }
      iVar8 = *(int *)(iVar1 + 8);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar8 == 0) {
        func_0x03409d30(*(undefined4 *)(iRam0484e708 + 0x484e654),iVar9,uVar4,0);
        uVar5 = func_0x03409cd0();
        uVar10 = func_0x03409d30(*(undefined4 *)(iRam0484e70c + 0x484e668));
        func_0x04785e24(uVar5,uVar10,0);
      }
      else {
        if ((int)uVar4 < 0) {
          func_0x03409d30(*(undefined4 *)(iRam0484e710 + 0x484e688),iVar9,uVar4,0);
          uVar5 = func_0x03409cd0();
          uVar10 = *(undefined4 *)(iRam0484e714 + 0x484e69c);
        }
        else {
          iVar1 = func_0x0340a884(iVar8,0);
          if (iVar9 < iVar1) {
            func_0x03409d30(*(undefined4 *)(_UNK_0484e71c + 0x484e6a8));
            uVar5 = func_0x03409cd0();
            uVar10 = *(undefined4 *)(_UNK_0484e720 + 0x484e6bc);
          }
          else {
            iVar3 = func_0x048424dc(iVar8);
            if (iVar9 - iVar1 <= (int)(iVar3 - uVar4)) {
              (*(code *)&UNK_013c1aa4)(iVar8,iVar9 - iVar1,uVar4);
              return;
            }
            func_0x03409d30(*(undefined4 *)(_UNK_0484e724 + 0x484e6c8));
            uVar5 = func_0x03409cd0();
            uVar10 = *(undefined4 *)(_UNK_0484e728 + 0x484e6dc);
          }
        }
        uVar10 = func_0x03409d30(uVar10);
        func_0x0481f540(uVar5,uVar10,0);
      }
      uVar10 = func_0x03409d30(*(undefined4 *)(_UNK_0484e718 + 0x484e6f8));
      func_0x03409d8c(uVar5,uVar10);
      func_0x03409d9c();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar8 = *(int *)(param_1 + 8);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x0328eea8(iVar8,iVar1,*puVar11);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(iVar8 + 0x38) == '\0') {
      iVar8 = *(int *)(param_1 + 8);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x0328eea8(iVar8,iVar1,*puVar11);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar8 = (**(code **)(*piVar2 + 0xf0))(piVar2,*(undefined4 *)(*piVar2 + 0xf4));
      if (iVar8 != 0) goto LAB_01e818ac;
      iVar8 = *(int *)(param_1 + 8);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = func_0x0328eea8(iVar8,iVar1,*puVar11);
      if (iVar8 != 0) {
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        func_0x01e7e4d8(iVar8);
      }
    }
    else {
LAB_01e818ac:
      iVar8 = *(int *)(param_1 + 8);
      if (iVar8 == 0) {
        func_0x01384bf0();
        iVar8 = 0;
        uVar10 = func_0x0328eea8(0,iVar1,*puVar11);
        func_0x01384bf0();
      }
      else {
        uVar10 = func_0x0328eea8(iVar8,iVar1,*puVar11);
      }
      iVar9 = iVar9 + 1;
      func_0x0328eef4(iVar8,iVar9,uVar10,*puVar12);
    }
    iVar1 = iVar1 + 1;
  } while( true );
}



// ===== FAT.ScreenPopup$$TryQueueInternal RVA 0x1e719bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e819bc(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01e81dac + 0x1e819dc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e81db0 + 0x1e819f4));
    func_0x01384978(*(undefined4 *)(_UNK_01e81db4 + 0x1e81a00));
    func_0x01384978(*(undefined4 *)(_UNK_01e81db8 + 0x1e81a0c));
    func_0x01384978(*(undefined4 *)(_UNK_01e81dbc + 0x1e81a18));
    func_0x01384978(*(undefined4 *)(_UNK_01e81dc0 + 0x1e81a24));
    func_0x01384978(*(undefined4 *)(_UNK_01e81dc4 + 0x1e81a30));
    func_0x01384978(*(undefined4 *)(_UNK_01e81dc8 + 0x1e81a3c));
    *pcVar4 = '\x01';
  }
  uStack_24 = 0;
  iVar1 = func_0x0229f06c(0x163,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x163,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0217bdb8(iVar1,param_1,param_2,param_3,param_4,param_5,0);
    return uVar2;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_2 + 0x110))(param_2,param_3,*(undefined4 *)(*param_2 + 0x114));
  if (iVar1 == 0) {
LAB_01e81c18:
    func_0x01e7e480(param_2);
    return 0;
  }
  if (*(char *)((int)param_2 + 0x39) != '\0') {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(iVar1 + 8) == '\0') goto LAB_01e81c18;
  }
  iVar1 = (**(code **)(*param_2 + 0x108))(param_2,&uStack_24,*(undefined4 *)(*param_2 + 0x10c));
  if (iVar1 == 0) {
    uVar2 = func_0x01e81e7c(param_2,uStack_24);
    if (*(int *)(**(int **)(_UNK_01e81dcc + 0x1e81bf8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar2,0);
    goto LAB_01e81c18;
  }
  iVar1 = func_0x01e81f08(param_1,param_2,param_3,param_4);
  if (iVar1 != 0) goto LAB_01e81c18;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0328f4d8(iVar1,param_2,**(undefined4 **)(_UNK_01e81dd0 + 0x1e81b6c));
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x48) != '\0') {
      uVar2 = func_0x01e81e7c(param_2,**(undefined4 **)(_UNK_01e81de4 + 0x1e81c44));
      if (*(int *)(**(int **)(_UNK_01e81de8 + 0x1e81c5c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar2,0);
      goto LAB_01e81c18;
    }
    param_2[10] = *(int *)(param_1 + 0x1c);
    param_2[0xf] = param_4;
    param_2[0xb] = param_3;
    func_0x01e7e388(param_2);
    if (param_5 != 0) {
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      func_0x01e7e41c(param_2);
    }
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (param_5 == 0) {
      iVar5 = *(int *)(iVar1 + 8);
      uVar6 = *(uint *)(iVar1 + 0xc);
      piVar3 = *(int **)(_UNK_01e81dec + 0x1e81d64);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar7 = *piVar3;
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (uVar6 < *(uint *)(iVar5 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar6 + 1;
        *(int **)(iVar5 + uVar6 * 4 + 0x10) = param_2;
      }
      else {
        func_0x0328f170(iVar1,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
      }
      goto LAB_01e81d38;
    }
  }
  else {
    if (param_5 == 0) {
      uVar2 = func_0x01e81e7c(param_2,**(undefined4 **)(_UNK_01e81dd4 + 0x1e81c8c));
      if (*(int *)(**(int **)(_UNK_01e81dd8 + 0x1e81ca4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar2,0);
      func_0x01e7e388(param_2);
      return 0;
    }
    func_0x01e7e388(param_2);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
    func_0x01e7e41c(param_2);
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03290900(iVar1,param_2,**(undefined4 **)(_UNK_01e81ddc + 0x1e81bc0));
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  func_0x032900e0(iVar1,0,param_2,**(undefined4 **)(_UNK_01e81de0 + 0x1e81d30));
LAB_01e81d38:
  *(undefined1 *)(param_1 + 0x20) = 1;
  return 1;
}



// ===== FAT.ScreenPopup$$TryQueueFirst RVA 0x1e71df0 =====

void FUN_01e81df0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x9202,0);
  if (iVar1 == 0) {
    FUN_01e819bc(param_1,param_2,param_3,param_4,1);
  }
  else {
    iVar1 = func_0x0229f13c(0x9202,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217bcb0(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$<TryQueueInternal>g__M|46_0 RVA 0x1e71e7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e81e7c(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01e81ef4 + 0x1e81e98);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e81ef8 + 0x1e81eac));
    func_0x01384978(*(undefined4 *)(_UNK_01e81efc + 0x1e81eb8));
    *pcVar1 = '\x01';
  }
  func_0x02450228(**(undefined4 **)(_UNK_01e81f04 + 0x1e81ee0),
                  **(undefined4 **)(_UNK_01e81f00 + 0x1e81ed4),param_1,param_2,0);
  return;
}



// ===== FAT.ScreenPopup$$TryCollectEventEndPopup RVA 0x1e71f08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e81f08(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  bool bVar13;
  undefined8 uVar14;
  
  pcVar10 = (char *)(_UNK_01e822c0 + 0x1e81f28);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e822c4 + 0x1e81f40));
    func_0x01384978(*(undefined4 *)(_UNK_01e822c8 + 0x1e81f4c));
    func_0x01384978(*(undefined4 *)(_UNK_01e822cc + 0x1e81f58));
    func_0x01384978(*(undefined4 *)(_UNK_01e822d0 + 0x1e81f64));
    func_0x01384978(*(undefined4 *)(_UNK_01e822d4 + 0x1e81f70));
    func_0x01384978(*(undefined4 *)(_UNK_01e822d8 + 0x1e81f7c));
    func_0x01384978(*(undefined4 *)(_UNK_01e822dc + 0x1e81f88));
    func_0x01384978(*(undefined4 *)(_UNK_01e822e0 + 0x1e81f94));
    *pcVar10 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x16c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x16c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0217bcb0(iVar2,param_1,param_2,param_3,param_4,0);
    return uVar3;
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  if (param_2[0xd] == 0) {
    return 0;
  }
  if (*(char *)(param_2[0xd] + 0x14) != '\x01') {
    return 0;
  }
  iVar2 = func_0x01e82468();
  if (iVar2 == 0) {
    return 0;
  }
  uVar7 = (uint)*(byte *)(**(int **)(_UNK_01e822e4 + 0x1e82030) + 0xb8);
  if ((*(byte *)(*param_2 + 0xb8) < uVar7) ||
     (*(int *)(*(int *)(*param_2 + 100) + uVar7 * 4 + -4) != **(int **)(_UNK_01e822e4 + 0x1e82030)))
  {
    uVar3 = func_0x02450228(**(undefined4 **)(_UNK_01e822f0 + 0x1e82084),
                            **(undefined4 **)(_UNK_01e822ec + 0x1e82078),
                            **(undefined4 **)(_UNK_01e822e8 + 0x1e8206c),param_2,0);
LAB_01e8208c:
    if (*(int *)(**(int **)(_UNK_01e822f4 + 0x1e8209c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2944(uVar3,0);
    return 0;
  }
  piVar12 = (int *)param_2[0x10];
  if (piVar12 != (int *)0x0) {
    uVar14 = func_0x01c34eb8(0);
    iVar2 = (int)((ulonglong)uVar14 >> 0x20);
    iVar9 = piVar12[0xd];
    bVar13 = (uint)uVar14 < (uint)piVar12[0xc];
    if ((int)(iVar2 - (iVar9 + (uint)bVar13)) < 0 !=
        (SBORROW4(iVar2,iVar9) != SBORROW4(iVar2 - iVar9,(uint)bVar13))) {
      return 0;
    }
  }
  if ((param_2[0x12] == 0 || piVar12 == (int *)0x0) ||
     (iVar2 = *(int *)(param_2[0x12] + 8), iVar2 == 0)) {
    uVar3 = func_0x0244f690(**(undefined4 **)(_UNK_01e822fc + 0x1e82120),
                            **(undefined4 **)(_UNK_01e822f8 + 0x1e82114),param_2,0);
    goto LAB_01e8208c;
  }
  piVar11 = (int *)(iVar2 + 0x20);
  iVar9 = func_0x01489db8(*piVar11,0);
  if (iVar9 != 0) {
    iVar9 = (**(code **)(*piVar12 + 0x140))(piVar12,*(undefined4 *)(*piVar12 + 0x144));
    if (iVar9 != 0) goto LAB_01e8217c;
    piVar11 = *(int **)(**(int **)(_UNK_01e82300 + 0x1e82174) + 0x5c);
  }
  iVar9 = *piVar11;
LAB_01e8217c:
  iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01e82304 + 0x1e8218c));
  func_0x01ea0078(iVar4,0);
  uVar3 = func_0x02b449f8(piVar12,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar4 + 8) = uVar3;
  uVar3 = func_0x02b4762c(piVar12,0);
  *(undefined4 *)(iVar4 + 0xc) = uVar3;
  uVar3 = func_0x02b4429c(piVar12,0);
  *(undefined4 *)(iVar4 + 0x10) = uVar3;
  uVar3 = func_0x02b3c4a4(piVar12,0);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar8 = param_2[2];
  *(undefined4 *)(iVar4 + 0x14) = uVar3;
  *(undefined4 *)(iVar4 + 0x18) = uVar6;
  *(int *)(iVar4 + 0x1c) = iVar8;
  uVar3 = (**(code **)(*param_2 + 0xe0))(param_2,*(undefined4 *)(*param_2 + 0xe4));
  *(undefined4 *)(iVar4 + 0x20) = uVar3;
  uVar3 = (**(code **)(*piVar12 + 0x118))(piVar12,*(undefined4 *)(*piVar12 + 0x11c));
  uVar3 = func_0x01e82554(iVar2,uVar3);
  *(undefined4 *)(iVar4 + 0x28) = uVar3;
  *(int *)(iVar4 + 0x2c) = iVar9;
  uVar3 = func_0x02b449f8(piVar12,0);
  *(undefined4 *)(iVar4 + 0x30) = uVar3;
  uVar3 = func_0x01e8263c(param_1);
  func_0x01e82690(param_1,param_4,iVar4,uVar3);
  uVar1 = func_0x01e9fe44(iVar4,0);
  *(undefined1 *)(iVar4 + 0x24) = uVar1;
  uVar6 = func_0x01e82864(*(undefined4 *)(iVar4 + 0x34));
  uVar5 = func_0x01e82b84();
  func_0x019a8b6c(piVar12,uVar6,uVar5,0);
  func_0x01e82c3c(param_1,iVar4);
  func_0x01e8301c(param_1,param_3);
  return uVar3;
}



// ===== FAT.ScreenPopup$$Queue RVA 0x1e72308 =====

void FUN_01e82308(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x0229f06c(0x31a,0);
  if (iVar1 == 0) {
    uVar2 = FUN_01e7e874(param_1);
    FUN_01e7437c(param_1,param_2,uVar2,param_3);
  }
  else {
    iVar1 = func_0x0229f13c(0x31a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$TryDequeue RVA 0x1e72390 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e82390(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01e8245c + 0x1e823a8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e82460 + 0x1e823bc));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x1aad,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1aad,0);
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
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03290900(iVar1,param_2,**(undefined4 **)(_UNK_01e82464 + 0x1e82438));
    if (iVar1 != 0) {
      func_0x01e7e4d8(param_2);
      uVar5 = 1;
    }
  }
  return uVar5;
}



// ===== FAT.ScreenPopup$$IsEventEndAggregateFeatureUnlocked RVA 0x1e72468 =====

/* WARNING: Removing unreachable block (ram,0x01cc08fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01e82468(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
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
  
  pcVar8 = (char *)(_UNK_01e82548 + 0x1e82478);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e8254c + 0x1e8248c));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x16d,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x16d,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar9 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar3 + 0x10),0);
      uVar9 = 0;
      if (*(int *)(iVar3 + 0x10) != 0) {
        uVar9 = 1;
      }
    }
    iVar12 = *(int *)(iVar3 + 8);
    uVar10 = *(undefined4 *)(iVar3 + 0xc);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar12,uVar10,&uStack_30,uVar9);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01e82550 + 0x1e824e0));
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01c36988(iVar3,0);
  uVar9 = 0xb4;
  if (iVar3 != 0) {
    uVar9 = 0xb5;
  }
  iVar3 = func_0x01c24918(0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x60);
  if (iVar3 == 0) {
    return 0;
  }
  iVar12 = func_0x0229f06c(0xf6,0,0);
  if (iVar12 == 0) {
    iVar12 = func_0x0229f06c(0xf7,0);
    if (iVar12 == 0) {
      iVar12 = func_0x01cc0400(iVar3,uVar9);
      if (iVar12 != 0) {
        return 0;
      }
      pcVar8 = (char *)(_UNK_01cc09d4 + 0x1cc0538);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01cc09d8 + 0x1cc054c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09dc + 0x1cc0558));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e0 + 0x1cc0564));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e4 + 0x1cc0570));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09e8 + 0x1cc057c));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09ec + 0x1cc0588));
        func_0x01384978(*(undefined4 *)(_UNK_01cc09f0 + 0x1cc0594));
        *pcVar8 = '\x01';
      }
      iVar12 = func_0x0229f06c(0xf9,0);
      if (iVar12 == 0) {
        iVar12 = *(int *)(iVar3 + 8);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        iVar12 = func_0x02451990(iVar12,uVar9,**(undefined4 **)(_UNK_01cc09f4 + 0x1cc0604));
        uVar4 = 1;
        if (iVar12 != 0) {
          iVar12 = func_0x01c24918(0);
          if (iVar12 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 8);
          iVar12 = *(int *)(iVar12 + 0x68);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x02451948(iVar3,uVar9,**(undefined4 **)(_UNK_01cc09f8 + 0x1cc0654));
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar3 + 0x28)) {
            iVar11 = func_0x01c24918(0);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *(int *)(iVar11 + 0x9c);
            uVar9 = *(undefined4 *)(iVar3 + 0x28);
            if (iVar11 == 0) {
              func_0x01384bf0();
            }
            iVar11 = func_0x01c77708(iVar11,uVar9,0);
            if (iVar11 != 0) {
              return 1;
            }
          }
          iVar11 = func_0x01c24918(0);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          iVar11 = *(int *)(iVar11 + 0x48);
          if (iVar11 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 0;
          iVar11 = func_0x01dd2b98(iVar11,0);
          iVar5 = *(int *)(iVar3 + 0x18);
          if (iVar5 <= iVar11) {
            iVar5 = *(int *)(iVar3 + 0x3c);
          }
          if (iVar5 <= iVar11) {
            iVar11 = *(int *)(iVar3 + 0x40);
            if (iVar11 == 0) {
              func_0x01384bf0();
              iVar5 = iRam0000000c;
              iVar11 = *(int *)(iVar3 + 0x40);
              if (iVar11 == 0) {
                func_0x01384bf0();
                iVar11 = 0;
              }
            }
            else {
              iVar5 = *(int *)(iVar11 + 0xc);
            }
            uVar4 = (uint)(iVar5 < 1);
            piVar1 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_01cc09fc + 0x1cc0758));
            piVar13 = *(int **)(_UNK_01cc0a00 + 0x1cc0770);
            piVar14 = *(int **)(_UNK_01cc0a04 + 0x1cc0778);
            do {
              if (piVar1 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar3 = *piVar1;
              uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar13) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc07d0;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar13,0);
LAB_01cc07d0:
              iVar3 = (*(code *)*puVar2)(piVar1,puVar2[1]);
              if (iVar3 == 0) goto LAB_01cc0884;
              if (piVar1 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar3 = *piVar1;
              uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar6 != 0) {
                piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar7[-1] == *piVar14) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
                    goto LAB_01cc0848;
                  }
                  uVar6 = uVar6 - 1;
                  piVar7 = piVar7 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar14,0);
LAB_01cc0848:
              uVar9 = (*(code *)*puVar2)(piVar1,puVar2[1]);
              if (iVar12 == 0) {
                func_0x01384bf0();
              }
              iVar3 = func_0x01e6c0b0(iVar12,uVar9,0);
            } while (iVar3 == 0);
            uVar4 = 1;
LAB_01cc0884:
            if (piVar1 != (int *)0x0) {
              iVar3 = *piVar1;
              uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(int *)(iVar3 + 0x58) + 4);
                do {
                  if (piVar13[-1] == **(int **)(_UNK_01cc0a08 + 0x1cc089c)) {
                    puVar2 = (undefined4 *)(iVar3 + *piVar13 * 8 + 0xc0);
                    goto LAB_01cc08e4;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 2;
                } while (uVar6 != 0);
              }
              puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01cc0a08 + 0x1cc089c),0)
              ;
LAB_01cc08e4:
              (*(code *)*puVar2)(piVar1,puVar2[1]);
            }
          }
        }
        return uVar4;
      }
      iVar12 = func_0x0229f13c(0xf9,0);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar12 = func_0x0229f13c(0xf7,0);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar12 = func_0x0229f13c(0xf6,0);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,uVar9,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar12 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar12 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar3,0);
  func_0x01485238(&uStack_38,uVar9,0);
  iVar11 = *(int *)(iVar12 + 8);
  uVar9 = *(undefined4 *)(iVar12 + 0xc);
  iVar3 = *(int *)(iVar12 + 0x10);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar10 = 3;
  if (iVar3 == 0) {
    uVar10 = 2;
  }
  func_0x0245495c(iVar11,uVar9,&uStack_38,uVar10,0,0);
  uVar4 = func_0x0245496c(&uStack_38,0,0);
  return uVar4;
}



// ===== FAT.ScreenPopup$$GetEventEndPopupTitleKey RVA 0x1e72554 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e82554(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01e82630 + 0x1e82570);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e82634 + 0x1e82584));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x179,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01e83218(param_1,&uStack_14);
    if (iVar1 == 0) {
      if (param_2 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 8);
      }
      iVar1 = func_0x01e83218(uVar2,&uStack_14);
      if (iVar1 == 0) {
        uStack_14 = **(undefined4 **)(**(int **)(_UNK_01e82638 + 0x1e82620) + 0x5c);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x179,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173d58(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.ScreenPopup$$ShouldInterceptCollectedEventEndPopup RVA 0x1e7263c =====

undefined4 FUN_01e8263c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x17b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x17b,0);
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
  return 1;
}



// ===== FAT.ScreenPopup$$CommitEventEndRewards RVA 0x1e72690 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e82690(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01e82840 + 0x1e826b0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e82844 + 0x1e826c8));
    func_0x01384978(*(undefined4 *)(_UNK_01e82848 + 0x1e826d4));
    func_0x01384978(*(undefined4 *)(_UNK_01e8284c + 0x1e826e0));
    func_0x01384978(*(undefined4 *)(_UNK_01e82850 + 0x1e826ec));
    *pcVar4 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x17c,0);
  if (iVar1 == 0) {
    if (param_2 != (int *)0x0) {
      iVar1 = *param_2;
      if (iVar1 == **(int **)(_UNK_01e82854 + 0x1e82768)) {
        puVar2 = (undefined4 *)func_0x01384ac0(param_2);
        uStack_24 = puVar2[1];
        uStack_28 = *puVar2;
        func_0x01e8331c(param_1,uStack_24,param_3);
        if (param_4 != 0) {
          func_0x03633b24(&uStack_28,**(undefined4 **)(_UNK_01e82858 + 0x1e8281c));
        }
      }
      else {
        uVar3 = (uint)*(byte *)(**(int **)(_UNK_01e8285c + 0x1e82780) + 0xb8);
        if ((*(byte *)(iVar1 + 0xb8) < uVar3) ||
           (*(int *)(*(int *)(iVar1 + 100) + uVar3 * 4 + -4) !=
            **(int **)(_UNK_01e8285c + 0x1e82780))) {
          uVar3 = (uint)*(byte *)(**(int **)(_UNK_01e82860 + 0x1e827b0) + 0xb8);
          if ((uVar3 <= *(byte *)(iVar1 + 0xb8)) &&
             (*(int *)(*(int *)(iVar1 + 100) + uVar3 * 4 + -4) ==
              **(int **)(_UNK_01e82860 + 0x1e827b0))) {
            func_0x01e8350c(param_1,param_2,param_3);
          }
        }
        else {
          func_0x01e8331c(param_1,param_2,param_3);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x17c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b4e8(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$BuildEventEndPopupRewardInfo RVA 0x1e72864 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e82864(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  pcVar6 = (char *)(_UNK_01e82b30 + 0x1e82878);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e82b34 + 0x1e8288c));
    func_0x01384978(*(undefined4 *)(_UNK_01e82b38 + 0x1e82898));
    func_0x01384978(*(undefined4 *)(_UNK_01e82b3c + 0x1e828a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e82b40 + 0x1e828b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e82b44 + 0x1e828bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e82b48 + 0x1e828c8));
    func_0x01384978(*(undefined4 *)(_UNK_01e82b4c + 0x1e828d4));
    func_0x01384978(*(undefined4 *)(_UNK_01e82b50 + 0x1e828e0));
    func_0x01384978(*(undefined4 *)(_UNK_01e82b54 + 0x1e828ec));
    func_0x01384978(*(undefined4 *)(_UNK_01e82b58 + 0x1e828f8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x180,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x180,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar6 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
      *pcVar6 = '\x01';
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
    uVar8 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar8;
  }
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(_UNK_01e82b5c + 0x1e8295c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto LAB_01e829a4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_01e82b5c + 0x1e8295c),0);
LAB_01e829a4:
    iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if (iVar1 != 0) {
      piVar4 = *(int **)(_UNK_01e82b60 + 0x1e829c8);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      iVar7 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
      uVar8 = **(undefined4 **)(_UNK_01e82b64 + 0x1e829ec);
      if (iVar7 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar4;
        }
        uVar5 = **(undefined4 **)(iVar1 + 0x5c);
        iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01e82b68 + 0x1e82a1c));
        func_0x0244f8d0(iVar7,uVar5,**(undefined4 **)(_UNK_01e82b6c + 0x1e82a3c),0);
        *(int *)(*(int *)(*piVar4 + 0x5c) + 0x10) = iVar7;
      }
      uVar5 = func_0x02fb7b18(param_1,iVar7,**(undefined4 **)(_UNK_01e82b70 + 0x1e82a60));
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar4;
      }
      iVar7 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x14);
      if (iVar7 == 0) {
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar4;
        }
        uVar9 = **(undefined4 **)(iVar1 + 0x5c);
        iVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01e82b74 + 0x1e82ab8));
        func_0x0244fb14(iVar7,uVar9,**(undefined4 **)(_UNK_01e82b78 + 0x1e82ad8),0);
        *(int *)(*(int *)(*piVar4 + 0x5c) + 0x14) = iVar7;
      }
      uVar5 = func_0x02fab288(uVar5,iVar7,**(undefined4 **)(_UNK_01e82b7c + 0x1e82afc));
      uVar8 = (*(code *)&UNK_04672c80)(uVar8,uVar5,0);
      return uVar8;
    }
  }
  return **(undefined4 **)(**(int **)(_UNK_01e82b80 + 0x1e82b24) + 0x5c);
}



// ===== FAT.ScreenPopup$$GetEventEndPopupIntegrationTypeId RVA 0x1e72b84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01e82b84(void)

{
  int iVar1;
  char *pcVar2;
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
  
  pcVar2 = (char *)(_UNK_01e82c30 + 0x1e82b94);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e82c34 + 0x1e82ba8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x18c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x18c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
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
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar3,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e82c38 + 0x1e82bfc));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01c36988(iVar1,0);
  uVar3 = 1;
  if (iVar1 != 0) {
    uVar3 = 2;
  }
  return uVar3;
}



// ===== FAT.ScreenPopup$$UpsertEventEndEntry RVA 0x1e72c3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e82c3c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
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
  
  pcVar4 = (char *)(_UNK_01e82fc0 + 0x1e82c54);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e82fc4 + 0x1e82c68));
    func_0x01384978(*(undefined4 *)(_UNK_01e82fc8 + 0x1e82c74));
    func_0x01384978(*(undefined4 *)(_UNK_01e82fcc + 0x1e82c80));
    func_0x01384978(*(undefined4 *)(_UNK_01e82fd0 + 0x1e82c8c));
    func_0x01384978(*(undefined4 *)(_UNK_01e82fd4 + 0x1e82c98));
    func_0x01384978(*(undefined4 *)(_UNK_01e82fd8 + 0x1e82ca4));
    func_0x01384978(*(undefined4 *)(_UNK_01e82fdc + 0x1e82cb0));
    func_0x01384978(*(undefined4 *)(_UNK_01e82fe0 + 0x1e82cbc));
    func_0x01384978(*(undefined4 *)(_UNK_01e82fe4 + 0x1e82cc8));
    func_0x01384978(*(undefined4 *)(_UNK_01e82fe8 + 0x1e82cd4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x18e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x18e,0);
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
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e82fec + 0x1e82d30));
  func_0x01e9fa34(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 8) = param_2;
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x34) == 0) {
    uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01e82ff0 + 0x1e82d70));
    func_0x0328e950(uVar7,**(undefined4 **)(_UNK_01e82ff4 + 0x1e82d84));
    *(undefined4 *)(param_2 + 0x34) = uVar7;
  }
  iVar6 = *(int *)(param_1 + 0x4c);
  uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01e82ff8 + 0x1e82d9c));
  func_0x035b0208(uVar7,iVar1,**(undefined4 **)(_UNK_01e82ffc + 0x1e82dbc),0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar6 = func_0x0328fa8c(iVar6,uVar7,**(undefined4 **)(_UNK_01e83000 + 0x1e82de0));
  iVar8 = *(int *)(param_1 + 0x4c);
  if (iVar6 < 0) {
    uVar7 = *(undefined4 *)(iVar1 + 8);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar8 + 8);
    uVar2 = *(uint *)(iVar8 + 0xc);
    piVar9 = *(int **)(_UNK_01e83004 + 0x1e82f1c);
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
    iVar6 = *piVar9;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (uVar2 < *(uint *)(iVar1 + 0xc)) {
      *(uint *)(iVar8 + 0xc) = uVar2 + 1;
      *(undefined4 *)(iVar1 + uVar2 * 4 + 0x10) = uVar7;
    }
    else {
      func_0x0328f170(iVar8,uVar7,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38));
    }
  }
  else {
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x0328eea8(iVar8,iVar6,**(undefined4 **)(_UNK_01e83008 + 0x1e82e14));
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar8 + 0x34) == 0) {
      uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01e8300c + 0x1e82e44));
      func_0x0328e950(uVar7,**(undefined4 **)(_UNK_01e83010 + 0x1e82e58));
      *(undefined4 *)(iVar8 + 0x34) = uVar7;
    }
    iVar5 = *(int *)(iVar1 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(iVar5 + 0x24) == '\0') {
      if (*(char *)(iVar8 + 0x24) != '\0') {
        return;
      }
      iVar8 = func_0x01e837a8(*(undefined4 *)(iVar1 + 8),iVar8);
      if (-1 < iVar8) {
        return;
      }
    }
    else if (*(char *)(iVar8 + 0x24) != '\0') {
      iVar6 = *(int *)(iVar1 + 8);
      iVar5 = *(int *)(iVar8 + 0x34);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar6 + 0x34);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x0328f380(iVar5,uVar7,**(undefined4 **)(_UNK_01e83014 + 0x1e82ec0));
      uVar2 = func_0x01e837a8(*(undefined4 *)(iVar1 + 8),iVar8);
      if (0x7fffffff < uVar2) {
        func_0x01e83854(*(undefined4 *)(iVar1 + 8),iVar8);
      }
      goto LAB_01e82fb4;
    }
    iVar8 = *(int *)(param_1 + 0x4c);
    uVar7 = *(undefined4 *)(iVar1 + 8);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x0328eef4(iVar8,iVar6,uVar7,**(undefined4 **)(_UNK_01e83018 + 0x1e82fac));
  }
LAB_01e82fb4:
  pcVar4 = (char *)(_UNK_01e83784 + 0x1e8364c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e83788 + 0x1e83660));
    func_0x01384978(*(undefined4 *)(_UNK_01e8378c + 0x1e8366c));
    func_0x01384978(*(undefined4 *)(_UNK_01e83790 + 0x1e83678));
    func_0x01384978(*(undefined4 *)(_UNK_01e83794 + 0x1e83684));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x191,0);
  if (iVar1 == 0) {
    piVar9 = *(int **)(_UNK_01e83798 + 0x1e836dc);
    iVar6 = *(int *)(param_1 + 0x4c);
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar9;
    }
    iVar8 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x18);
    if (iVar8 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar9;
      }
      uVar7 = **(undefined4 **)(iVar1 + 0x5c);
      iVar8 = func_0x01384be4(**(undefined4 **)(_UNK_01e8379c + 0x1e83728));
      func_0x03c751dc(iVar8,uVar7,**(undefined4 **)(_UNK_01e837a0 + 0x1e83748),0);
      *(int *)(*(int *)(*piVar9 + 0x5c) + 0x18) = iVar8;
    }
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar1 = **(int **)(_UNK_01e837a4 + 0x1e83778);
    if (iVar8 == 0) {
      func_0x04839ccc(0x22,0);
    }
    iVar5 = *(int *)(iVar6 + 0xc);
    if (1 < iVar5) {
      uVar7 = *(undefined4 *)(iVar6 + 8);
      iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xd0);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0();
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x043920c4(uVar7,0,iVar5,iVar8);
    }
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    return;
  }
  iVar1 = func_0x0229f13c(0x191,0);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3);
  return;
}



// ===== FAT.ScreenPopup$$TryQueueEventEndAggregate RVA 0x1e7301c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e8301c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
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
  
  pcVar5 = (char *)(_UNK_01e83204 + 0x1e83034);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e83208 + 0x1e83048));
    func_0x01384978(*(undefined4 *)(_UNK_01e8320c + 0x1e83054));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x194,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x194,0);
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar7,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = FUN_01e7e91c(param_1);
  if (iVar1 == 0) {
    return;
  }
  piVar6 = *(int **)(param_1 + 0x50);
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = (**(code **)(*piVar6 + 0x110))(piVar6,param_2,*(undefined4 *)(*piVar6 + 0x114));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x14) == iVar1) {
    return;
  }
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0328f4d8(iVar4,iVar1,**(undefined4 **)(_UNK_01e83210 + 0x1e83114));
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar1 = *(int *)(param_1 + 0x50);
    uRam00000028 = uVar7;
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_1 + 0x50);
      uRam0000002c = param_2;
      if (iVar1 == 0) {
        func_0x01384bf0();
        iVar1 = 0;
      }
      goto LAB_01e83158;
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0x28) = uVar7;
  }
  *(undefined4 *)(iVar1 + 0x2c) = param_2;
LAB_01e83158:
  func_0x01e7e388(iVar1);
  iVar1 = *(int *)(param_1 + 8);
  uVar7 = *(undefined4 *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar1 + 8);
  uVar3 = *(uint *)(iVar1 + 0xc);
  piVar6 = *(int **)(_UNK_01e83214 + 0x1e83194);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar8 = *piVar6;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  if (uVar3 < *(uint *)(iVar4 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar3 + 1;
    *(undefined4 *)(iVar4 + uVar3 * 4 + 0x10) = uVar7;
  }
  else {
    func_0x0328f170(iVar1,uVar7,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// ===== FAT.ScreenPopup$$TryGetEventEndPopupTitleKey RVA 0x1e73218 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e83218(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  int aiStack_1c [2];
  
  pcVar3 = (char *)(_UNK_01e83300 + 0x1e83230);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e83304 + 0x1e83244));
    func_0x01384978(*(undefined4 *)(_UNK_01e83308 + 0x1e83250));
    func_0x01384978(*(undefined4 *)(_UNK_01e8330c + 0x1e8325c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x17a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x17a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_0217b3f0 + 0x217b2d8);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217b3f4 + 0x217b2ec),param_1,param_2,0);
      *pcVar3 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_28 = uStack_40;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    func_0x01485278(&uStack_38,0,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
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
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,1,0);
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0217b3f8 + 0x217b3cc));
    *param_2 = iVar1;
    iVar1 = func_0x0245496c(&uStack_38,1,0);
    return iVar1;
  }
  iVar1 = **(int **)(**(int **)(_UNK_01e83310 + 0x1e832bc) + 0x5c);
  *param_2 = iVar1;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  if (param_1 != 0 && iVar1 != 0) {
    iVar4 = **(int **)(_UNK_01e83314 + 0x1e832ec);
    uVar5 = **(undefined4 **)(_UNK_01e83318 + 0x1e832f8);
    iVar1 = *(int *)(iVar1 + 8);
    aiStack_1c[0] = 0;
    if (iVar1 == 0) {
      func_0x02457d50();
    }
    iVar4 = func_0x03e220bc(iVar1,uVar5,aiStack_1c,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x88));
    iVar1 = aiStack_1c[0];
    if (iVar4 == 0) {
      iVar1 = 0;
    }
    else {
      if (aiStack_1c[0] == 0) {
        func_0x02457d50();
      }
      iVar1 = *(int *)(iVar1 + 0x18);
    }
    *param_2 = iVar1;
    return iVar4;
  }
  return 0;
}



// ===== FAT.ScreenPopup$$CommitEventEndRewardList RVA 0x1e7331c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e8331c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01e834e0 + 0x1e8333c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e834e4 + 0x1e83350));
    func_0x01384978(*(undefined4 *)(_UNK_01e834e8 + 0x1e8335c));
    func_0x01384978(*(undefined4 *)(_UNK_01e834ec + 0x1e83368));
    func_0x01384978(*(undefined4 *)(_UNK_01e834f0 + 0x1e83374));
    func_0x01384978(*(undefined4 *)(_UNK_01e834f4 + 0x1e83380));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x17d,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    if (param_2 != 0 && iVar1 != 0) {
      func_0x0328fe1c(&uStack_28,param_2,**(undefined4 **)(_UNK_01e834f8 + 0x1e83408));
      puVar2 = *(undefined4 **)(_UNK_01e834fc + 0x1e8341c);
      while (iVar1 = func_0x0145b12c(&uStack_28,*puVar2), iVar1 != 0) {
        func_0x01e8350c(param_1,uStack_1c,param_3);
      }
      func_0x0145b14c(&uStack_28,**(undefined4 **)(_UNK_01e83500 + 0x1e8344c));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x17d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$CommitEventEndReward RVA 0x1e7350c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e8350c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  
  pcVar4 = (char *)(_UNK_01e8362c + 0x1e8352c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e83630 + 0x1e83540));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x17e,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_3 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar1 + 8);
      uVar5 = *(uint *)(iVar1 + 0xc);
      piVar2 = *(int **)(_UNK_01e83634 + 0x1e835dc);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      iVar6 = *piVar2;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar3 + 0xc) <= uVar5) {
        uVar5 = *(uint *)(iVar1 + 0xc);
        func_0x0328f754(iVar1,uVar5 + 1,
                        *(undefined4 *)
                         (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38)
                                           + 0x10) + 0x60) + 0x3c));
        iVar3 = *(int *)(iVar1 + 8);
        *(uint *)(iVar1 + 0xc) = uVar5 + 1;
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar3 + 0xc) <= uVar5) {
          func_0x01384bf4();
        }
        *(int *)(iVar3 + uVar5 * 4 + 0x10) = param_2;
        return;
      }
      *(uint *)(iVar1 + 0xc) = uVar5 + 1;
      *(int *)(iVar3 + uVar5 * 4 + 0x10) = param_2;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x17e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$SortEventEndEntries RVA 0x1e73638 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e83638(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
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
  
  pcVar4 = (char *)(_UNK_01e83784 + 0x1e8364c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e83788 + 0x1e83660));
    func_0x01384978(*(undefined4 *)(_UNK_01e8378c + 0x1e8366c));
    func_0x01384978(*(undefined4 *)(_UNK_01e83790 + 0x1e83678));
    func_0x01384978(*(undefined4 *)(_UNK_01e83794 + 0x1e83684));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x191,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x191,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  piVar8 = *(int **)(_UNK_01e83798 + 0x1e836dc);
  iVar6 = *(int *)(param_1 + 0x4c);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar8;
  }
  iVar5 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x18);
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar8;
    }
    uVar7 = **(undefined4 **)(iVar1 + 0x5c);
    iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01e8379c + 0x1e83728));
    func_0x03c751dc(iVar5,uVar7,**(undefined4 **)(_UNK_01e837a0 + 0x1e83748),0);
    *(int *)(*(int *)(*piVar8 + 0x5c) + 0x18) = iVar5;
  }
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar1 = **(int **)(_UNK_01e837a4 + 0x1e83778);
  if (iVar5 == 0) {
    func_0x04839ccc(0x22,0);
  }
  iVar9 = *(int *)(iVar6 + 0xc);
  if (1 < iVar9) {
    uVar7 = *(undefined4 *)(iVar6 + 8);
    iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xd0);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0();
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_20 = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xcc);
    func_0x043920c4(uVar7,0,iVar9,iVar5);
  }
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  return;
}



// ===== FAT.ScreenPopup$$CompareEventEndDisplay RVA 0x1e737a8 =====

/* WARNING: Possible PIC construction at 0x01e83824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e83828) */
/* WARNING: Removing unreachable block (ram,0x01e83830) */
/* WARNING: Removing unreachable block (ram,0x01e8383c) */
/* WARNING: Removing unreachable block (ram,0x01e83840) */
/* WARNING: Removing unreachable block (ram,0x01e8382c) */

void FUN_01e837a8(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x192,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x192,0);
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
    func_0x0245498c(&uStack_38,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_0482194c)(param_2 + 0x20,*(undefined4 *)(param_1 + 0x20),0);
  return;
}



// ===== FAT.ScreenPopup$$CopyEventEndDisplay RVA 0x1e73854 =====

void FUN_01e83854(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  
  iVar1 = func_0x0229f06c(0x193,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x193,0);
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
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  uVar7 = *(undefined4 *)(param_1 + 8);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 8) = uVar7;
  uVar8 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0xc) = uVar4;
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x18) = uVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar4;
  *(undefined4 *)(param_2 + 0x20) = uVar2;
  *(undefined4 *)(param_2 + 0x28) = uVar6;
  *(undefined4 *)(param_2 + 0x2c) = uVar8;
  *(undefined4 *)(param_2 + 0x30) = uVar7;
  return;
}



// ===== FAT.ScreenPopup$$ConsumeEventEndEntriesForPopup RVA 0x1e73908 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e83908(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_01e83c04 + 0x1e83920);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e83c08 + 0x1e83934));
    func_0x01384978(*(undefined4 *)(_UNK_01e83c0c + 0x1e83940));
    func_0x01384978(*(undefined4 *)(_UNK_01e83c10 + 0x1e8394c));
    func_0x01384978(*(undefined4 *)(_UNK_01e83c14 + 0x1e83958));
    func_0x01384978(*(undefined4 *)(_UNK_01e83c18 + 0x1e83964));
    func_0x01384978(*(undefined4 *)(_UNK_01e83c1c + 0x1e83970));
    func_0x01384978(*(undefined4 *)(_UNK_01e83c20 + 0x1e8397c));
    func_0x01384978(*(undefined4 *)(_UNK_01e83c24 + 0x1e83988));
    func_0x01384978(*(undefined4 *)(_UNK_01e83c28 + 0x1e83994));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0229f06c(0xa24d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e83c2c + 0x1e83a0c));
    func_0x0328e9bc(iVar1,uVar5,**(undefined4 **)(_UNK_01e83c30 + 0x1e83a28));
    iVar6 = *(int *)(param_1 + 0x4c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_48,iVar6,**(undefined4 **)(_UNK_01e83c34 + 0x1e83a58));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar8 = *(undefined4 **)(_UNK_01e83c38 + 0x1e83a74);
    piVar7 = *(int **)(_UNK_01e83c3c + 0x1e83a7c);
    while (iVar2 = func_0x0145b12c(&uStack_38,*puVar8), iVar6 = iStack_2c, iVar2 != 0) {
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x01e9fee8(iVar6,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar1 + 8);
      uVar4 = *(uint *)(iVar1 + 0xc);
      iVar2 = *piVar7;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if (uVar4 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar4 + 1;
        *(undefined4 *)(iVar6 + uVar4 * 4 + 0x10) = uVar5;
      }
      else {
        func_0x0328f170(iVar1,uVar5,*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10) + 0x60) + 0x38))
        ;
      }
    }
    func_0x0145b14c(&uStack_38,**(undefined4 **)(_UNK_01e83c40 + 0x1e83b24));
    iVar6 = *(int *)(param_1 + 0x4c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar6 + 0xc);
    *(undefined4 *)(iVar6 + 0xc) = 0;
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    if (0 < iVar2) {
      func_0x0145b1dc(*(undefined4 *)(iVar6 + 8),0,iVar2,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa24d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0228daec(iVar1,param_1,0);
  }
  return iVar1;
}



// ===== FAT.ScreenPopup$$WhenClose RVA 0x1e73c4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e83c4c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_01e83dc4 + 0x1e83c68);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e83dc8 + 0x1e83c7c));
    func_0x01384978(*(undefined4 *)(_UNK_01e83dcc + 0x1e83c88));
    func_0x01384978(*(undefined4 *)(_UNK_01e83dd0 + 0x1e83c94));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x692,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x692,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
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
    func_0x0245495c(iVar5,uVar8,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_2 != *(int *)(param_1 + 0x18)) {
    if (*(int *)(param_1 + 0x18) == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(param_2 + 0x2e) != '\0') {
        piVar2 = *(int **)(param_1 + 0x14);
        *(undefined1 *)(param_2 + 0x2e) = 0;
        if ((piVar2 != (int *)0x0) &&
           (iVar1 = (**(code **)(*piVar2 + 0xf8))(piVar2,*(undefined4 *)(*piVar2 + 0xfc)),
           iVar1 != 0 && iVar1 != param_2)) {
          uVar8 = func_0x0244fb04(**(undefined4 **)(_UNK_01e83dd8 + 0x1e83d7c),
                                  *(undefined4 *)(param_2 + 0xc),
                                  **(undefined4 **)(_UNK_01e83dd4 + 0x1e83d70),
                                  *(undefined4 *)(iVar1 + 0xc));
          if (*(int *)(**(int **)(_UNK_01e83ddc + 0x1e83da4) + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x028c2874(uVar8,0);
        }
        goto FUN_01e8094c;
      }
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
FUN_01e8094c:
  iVar5 = 0;
  iVar1 = func_0x0229f06c(0x695,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x695,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
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
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == *(int *)(param_1 + 0x50)) {
    iVar5 = FUN_01e7e91c(param_1);
    iVar1 = *(int *)(param_1 + 0x14);
  }
  uVar8 = 0;
  if (iVar1 != 0) {
    uVar8 = *(undefined4 *)(iVar1 + 0x2c);
  }
  if (iVar5 != 0) {
    iVar1 = param_1;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (iVar5 != 0) {
    FUN_01e8301c(iVar1,uVar8);
  }
  iVar1 = 1;
  pcVar7 = (char *)(_UNK_01e808f8 + 0x1e80414);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e808fc + 0x1e80428));
    func_0x01384978(*(undefined4 *)(_UNK_01e80900 + 0x1e80434));
    func_0x01384978(*(undefined4 *)(_UNK_01e80904 + 0x1e80440));
    func_0x01384978(*(undefined4 *)(_UNK_01e80908 + 0x1e8044c));
    func_0x01384978(*(undefined4 *)(_UNK_01e8090c + 0x1e80458));
    func_0x01384978(*(undefined4 *)(_UNK_01e80910 + 0x1e80464));
    func_0x01384978(*(undefined4 *)(_UNK_01e80914 + 0x1e80470));
    func_0x01384978(*(undefined4 *)(_UNK_01e80918 + 0x1e8047c));
    func_0x01384978(*(undefined4 *)(_UNK_01e8091c + 0x1e80488));
    func_0x01384978(*(undefined4 *)(_UNK_01e80920 + 0x1e80494));
    *pcVar7 = '\x01';
  }
  uStack_28 = 0;
  iStack_2c = 0;
  iVar5 = func_0x0229f06c(0x697,0);
  if (iVar5 == 0) {
    if (*(char *)(param_1 + 0x4a) == '\0') {
      if (*(char *)(param_1 + 0x49) == '\0') {
        puVar10 = *(undefined4 **)(_UNK_01e80924 + 0x1e8052c);
        puVar4 = *(undefined4 **)(_UNK_01e80928 + 0x1e80534);
LAB_01e80530:
        do {
          while( true ) {
            while( true ) {
              while( true ) {
                iVar5 = *(int *)(param_1 + 8);
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                if (*(int *)(iVar5 + 0xc) != 0) break;
                iVar1 = FUN_01e811c0(param_1,*(undefined4 *)(param_1 + 0x1c));
                if (iVar1 != 0) {
                  FUN_01e812a4(param_1,1);
                  FUN_01e81390(param_1);
                }
                iVar5 = FUN_01e815ec(param_1);
                iVar1 = 0;
                if (iVar5 == 0) {
                  return;
                }
              }
              if (*(char *)(param_1 + 0x20) != '\0') {
                iVar5 = *(int *)(param_1 + 8);
                uVar8 = *(undefined4 *)(param_1 + 0x38);
                *(undefined1 *)(param_1 + 0x20) = 0;
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                func_0x03290edc(iVar5,uVar8,**(undefined4 **)(_UNK_01e8092c + 0x1e80580));
              }
              iVar5 = *(int *)(param_1 + 8);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              piVar2 = (int *)func_0x0328eea8(iVar5,0,*puVar10);
              if (piVar2 != (int *)0x0) break;
              iVar5 = *(int *)(param_1 + 8);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              func_0x03290bd4(iVar5,0,*puVar4);
            }
            if (*(char *)((int)piVar2 + 0x39) != '\0') {
              return;
            }
            iVar5 = (**(code **)(*piVar2 + 0x118))(piVar2,*(undefined4 *)(*piVar2 + 0x11c));
            if (iVar5 == 0) {
              return;
            }
            iVar5 = *(int *)(param_1 + 8);
            *(int **)(param_1 + 0x14) = piVar2;
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x03290bd4(iVar5,0,*puVar4);
            iVar5 = *(int *)(param_1 + 0x14);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x01e7e4d8(iVar5);
            piVar2 = *(int **)(param_1 + 0x14);
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar5 = (**(code **)(*piVar2 + 0x108))
                              (piVar2,&uStack_28,*(undefined4 *)(*piVar2 + 0x10c));
            if (iVar5 != 0) break;
            uStack_30 = 0;
            uVar8 = func_0x02450228(**(undefined4 **)(_UNK_01e80934 + 0x1e807b0),
                                    **(undefined4 **)(_UNK_01e80930 + 0x1e807a4),
                                    *(undefined4 *)(param_1 + 0x14),uStack_28);
LAB_01e807e8:
            if (*(int *)(**(int **)(_UNK_01e80938 + 0x1e807f8) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2944(uVar8,0);
          }
          iVar5 = *(int *)(param_1 + 0x14);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar6 = *(int *)(param_1 + 0x28);
          uVar8 = *(undefined4 *)(iVar5 + 8);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x03d5bb20(iVar6,uVar8,&iStack_2c,**(undefined4 **)(_UNK_01e8093c + 0x1e80680));
          iVar5 = *(int *)(param_1 + 0x14);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar6 = *(int *)(iVar5 + 0x2c);
          iVar5 = FUN_01e7e874(param_1);
          iVar9 = 100;
          if (iVar6 != iVar5) {
            iVar9 = *(int *)(param_1 + 0x40);
          }
          piVar2 = *(int **)(param_1 + 0x14);
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar6 = (**(code **)(*piVar2 + 0xe8))(piVar2,*(undefined4 *)(*piVar2 + 0xec));
          iVar5 = iStack_2c;
          if (-1 < iVar6) {
            piVar2 = *(int **)(param_1 + 0x14);
            if (piVar2 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar6 = (**(code **)(*piVar2 + 0xe8))(piVar2,*(undefined4 *)(*piVar2 + 0xec));
            if (iVar6 <= iVar5) goto LAB_01e80530;
          }
          piVar2 = *(int **)(param_1 + 0x14);
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar5 = (**(code **)(*piVar2 + 0xf8))(piVar2,*(undefined4 *)(*piVar2 + 0xfc));
          if (iVar5 == 0) {
            uVar8 = func_0x0244f690(**(undefined4 **)(_UNK_01e80944 + 0x1e807e0),
                                    **(undefined4 **)(_UNK_01e80940 + 0x1e807d4),
                                    *(undefined4 *)(param_1 + 0x14),0);
            goto LAB_01e807e8;
          }
          piVar2 = *(int **)(param_1 + 0x14);
          *(undefined1 *)(iVar5 + 0x2e) = 1;
          if (piVar2 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar6 = (**(code **)(*piVar2 + 0x120))(piVar2,*(undefined4 *)(*piVar2 + 0x124));
          iVar5 = iStack_2c;
        } while (iVar6 == 0);
        iVar6 = *(int *)(param_1 + 0x28);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar6,uVar8,iVar5 + iVar1,**(undefined4 **)(_UNK_01e80948 + 0x1e80880));
        iVar5 = func_0x01c24918(0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x18);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        FUN_01e2d040(iVar5,1,0);
        iVar1 = *(int *)(param_1 + 0x3c) + iVar1;
        *(int *)(param_1 + 0x3c) = iVar1;
        if (iVar9 <= iVar1) {
          iVar1 = *(int *)(param_1 + 8);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar1 + 0xc)) {
            FUN_01e8174c(param_1);
          }
        }
      }
      else {
        FUN_01e809f0(param_1,1);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x697,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,1,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$Clear RVA 0x1e73de0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e83de0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
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
  
  pcVar6 = (char *)(_UNK_01e83ed8 + 0x1e83df8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e83edc + 0x1e83e0c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xf8f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xf8f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_021744a8:
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  piVar2 = *(int **)(param_1 + 0x14);
  if (piVar2 == (int *)0x0) {
    pcVar6 = (char *)(_UNK_01e81388 + 0x1e812bc);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e8138c + 0x1e812d0));
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x6a1,0);
    if (iVar1 == 0) {
      if (param_2 != 0) {
        FUN_01e7fa80(param_1);
      }
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (0 < iVar5) {
        func_0x0145b1dc(*(undefined4 *)(iVar1 + 8),0,iVar5,0);
      }
      uVar7 = FUN_01e7e874(param_1);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = uVar7;
      return;
    }
    iVar1 = func_0x0229f13c(0x6a1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_021744a8;
  }
  iVar1 = (**(code **)(*piVar2 + 0xf8))(piVar2,*(undefined4 *)(*piVar2 + 0xfc));
  FUN_01e812a4(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar5 = func_0x034aaa34(**(undefined4 **)(_UNK_01e83ee0 + 0x1e83e9c));
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0229f06c(0x683,0,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x683,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  pcVar6 = (char *)(_UNK_01ee8b44 + 0x1ee8a34);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ee8b48 + 0x1ee8a48));
    func_0x01384978(*(undefined4 *)(_UNK_01ee8b4c + 0x1ee8a54));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x684,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x684,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  if (iVar1 == 0) {
    return;
  }
  func_0x01eefa74(iVar5,iVar1);
  iVar3 = *(int *)(iVar5 + 0x80);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x03e2041c(iVar3,iVar1,**(undefined4 **)(_UNK_01ee8b50 + 0x1ee8ad8));
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(iVar5 + 0x80);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x03e20138(iVar3,iVar1,**(undefined4 **)(_UNK_01ee8b54 + 0x1ee8b08));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x01ee3008(iVar1);
  if (iVar3 == 0) {
    return;
  }
  pcVar6 = (char *)(_UNK_01eefe90 + 0x1eefc30);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01eefe94 + 0x1eefc44));
    func_0x01384978(*(undefined4 *)(_UNK_01eefe98 + 0x1eefc50));
    func_0x01384978(*(undefined4 *)(_UNK_01eefe9c + 0x1eefc5c));
    func_0x01384978(*(undefined4 *)(_UNK_01eefea0 + 0x1eefc68));
    func_0x01384978(*(undefined4 *)(_UNK_01eefea4 + 0x1eefc74));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x685,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x685,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02174108;
  }
  iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01eefea8 + 0x1eefcd0));
  func_0x01ef3144(iVar3,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar3 + 8) = iVar5;
  *(int *)(iVar3 + 0xc) = iVar1;
  func_0x01eeeee4(iVar5,1);
  iVar1 = *(int *)(iVar3 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01ee3ae8(iVar1);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar3 + 0xc);
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x14);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar7 = *(undefined4 *)(iVar8 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01bf3284(iVar1,uVar7,0);
  iVar8 = *(int *)(iVar3 + 0xc);
  iVar1 = *(int *)(iVar5 + 0x68);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar7 = *(undefined4 *)(iVar8 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar7 = func_0x0328eea8(iVar1,uVar7,**(undefined4 **)(_UNK_01eefeac + 0x1eefda8));
  iVar1 = func_0x01eefebc(iVar5,uVar7);
  iVar5 = *(int *)(iVar3 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x01ee4c5c(iVar5);
  if (iVar5 == 0) {
LAB_01eefe30:
    pcVar6 = (char *)(_UNK_01ef3484 + 0x1ef3160);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ef3488 + 0x1ef3174),0);
      func_0x01384978(*(undefined4 *)(_UNK_01ef348c + 0x1ef3180));
      func_0x01384978(*(undefined4 *)(_UNK_01ef3490 + 0x1ef318c));
      func_0x01384978(*(undefined4 *)(_UNK_01ef3494 + 0x1ef3198));
      *pcVar6 = '\x01';
    }
    iVar1 = *(int *)(iVar3 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01eeeee4(iVar1,0,0);
    iVar1 = *(int *)(iVar3 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244fc34(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x024517a0(iVar1,0);
    iVar5 = *(int *)(iVar3 + 0xc);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0244fc34(iVar5,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0244fc64(iVar5,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x02450148(iVar5,0);
    iVar8 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x01eef518(iVar8,uVar7,0);
    if (iVar1 == iVar5 + -1) {
      iVar1 = *(int *)(iVar3 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar3 + 0xc);
      iVar5 = *(int *)(iVar1 + 0x68);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar8 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar7 = func_0x0328eea8(iVar5,uVar7,**(undefined4 **)(_UNK_01ef3498 + 0x1ef32c8));
      func_0x01ef001c(iVar1,uVar7,0);
    }
    iVar1 = *(int *)(iVar3 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01ee3b58(iVar1,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar3 + 0xc);
    iVar1 = *(int *)(iVar1 + 0xfc);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar5 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_01e83c4c(iVar1,uVar7,0);
    iVar1 = *(int *)(iVar3 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(char *)(iVar1 + 0x2d) == '\0') {
      if (*(int *)(**(int **)(_UNK_01ef349c + 0x1ef3380) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01ef34a0 + 0x1ef339c));
      iVar5 = *(int *)(iVar3 + 0xc);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar5 + 0x14);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(iVar5 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0349e46c(iVar1,uVar7,**(undefined4 **)(_UNK_01ef34a4 + 0x1ef33e4));
    }
    iVar5 = *(int *)(iVar3 + 0xc);
    iVar1 = *(int *)(iVar3 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar5 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01ef01b4(iVar1,uVar7,0);
    iVar5 = *(int *)(iVar3 + 0xc);
    iVar1 = *(int *)(iVar3 + 8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar5 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01eef2fc(iVar1,uVar7,0);
    iVar1 = *(int *)(iVar3 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ee76dc(iVar1,0);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x31,0);
    if (iVar1 == 0) {
      iVar1 = func_0x0229f06c(0x32,0);
      if (iVar1 == 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar1 + 0x9c);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        pcVar6 = (char *)(_UNK_01c783a8 + 0x1c782cc);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01c783ac + 0x1c782e0));
          *pcVar6 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x33,0);
        if (iVar1 == 0) {
          piVar2 = *(int **)(_UNK_01c783b0 + 0x1c78338);
          if (*(int *)(*piVar2 + 0x74) == 0) {
            func_0x01384ab4();
          }
          pcVar6 = (char *)(_UNK_01c783b4 + 0x1c78354);
          if (*pcVar6 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_01c783b8 + 0x1c78368));
            *pcVar6 = '\x01';
          }
          iVar1 = *piVar2;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x01384ab4();
            iVar1 = *piVar2;
          }
          if (**(char **)(iVar1 + 0x5c) == '\0') {
            return;
          }
          iVar1 = func_0x0229f06c(0x35,0);
          if (iVar1 == 0) {
            if (*(char *)(iVar5 + 0x39) != '\0') {
              return;
            }
            iVar1 = *(int *)(iVar5 + 0x3c);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            if (*(char *)(iVar1 + 0x10) == '\0') {
              iVar1 = *(int *)(iVar5 + 0x3c);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              *(undefined1 *)(iVar1 + 0x10) = 1;
              return;
            }
            return;
          }
          iVar1 = func_0x0229f13c(0x35,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
        }
        else {
          iVar1 = func_0x0229f13c(0x33,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
        }
        goto SUB_02173f80;
      }
      iVar1 = func_0x0229f13c(0x32,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x31,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar7 = 0;
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
      uVar7 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar7 = 1;
      }
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar7);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01eefeb0 + 0x1eefdec) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar5 = func_0x0145b1cc(iVar1,0,0);
  if (iVar5 != 0) {
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01ee3144(iVar1);
    if (iVar1 != 0) goto LAB_01eefe30;
  }
  iVar5 = *(int *)(iVar3 + 0xc);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01eefeb4 + 0x1eefe4c));
  func_0x024500b4(iVar1,iVar3,**(undefined4 **)(_UNK_01eefeb8 + 0x1eefe6c),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  pcVar6 = (char *)(_UNK_01ee47f4 + 0x1ee46f0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ee47f8 + 0x1ee4704));
    func_0x01384978(*(undefined4 *)(_UNK_01ee47fc + 0x1ee4710));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x6ad,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x6ad,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
SUB_02174108:
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar5,0);
    func_0x01485278(&uStack_38,iVar1,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar1 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  piVar2 = *(int **)(_UNK_01ee4800 + 0x1ee476c);
  uVar7 = *(undefined4 *)(iVar5 + 0x20);
  *(int *)(iVar5 + 0x40) = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0145b1cc(uVar7,0,0);
  if (iVar1 != 0) {
    piVar2 = *(int **)(_UNK_01ee4804 + 0x1ee47a8);
    iVar5 = *(int *)(iVar5 + 0x20);
    iVar1 = *piVar2;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar2;
    }
    uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xc);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    (*(code *)&UNK_0514e36c)(iVar5,uVar7,0);
    return;
  }
  iVar1 = func_0x0229f06c(0x6ae,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar5 + 0x40);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    }
    *(undefined4 *)(iVar5 + 0x40) = 0;
    return;
  }
  iVar1 = func_0x0229f13c(0x6ae,0);
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
  func_0x01485278(&uStack_30,iVar5,0);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4);
  return;
}



// ===== FAT.ScreenPopup$$ResetState RVA 0x1e73ee4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e83ee4(int param_1,undefined4 param_2)

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
  
  pcVar4 = (char *)(_UNK_01e83f90 + 0x1e83efc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e83f94 + 0x1e83f10));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x2e6b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2e6b,0);
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
    return;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03da7be8(iVar1,param_2,0,1);
  return;
}



// ===== FAT.ScreenPopup$$Wait RVA 0x1e73f9c =====

void FUN_01e83f9c(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x13db,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x13db,0);
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
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// ===== FAT.ScreenPopup$$Query RVA 0x1e73ff8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e83ff8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 auStack_28 [2];
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_01e841a0 + 0x1e84014);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e841a4 + 0x1e84028));
    func_0x01384978(*(undefined4 *)(_UNK_01e841a8 + 0x1e84034));
    func_0x01384978(*(undefined4 *)(_UNK_01e841ac + 0x1e84040));
    func_0x01384978(*(undefined4 *)(_UNK_01e841b0 + 0x1e8404c));
    func_0x01384978(*(undefined4 *)(_UNK_01e841b4 + 0x1e84058));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0xf90,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xf90,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    auStack_28[0] = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_38,uVar3,0,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03da703c(iVar2,param_2,1,**(undefined4 **)(_UNK_01e841b8 + 0x1e840d8));
  iVar2 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  uVar11 = func_0x01c34eb8(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_20 = **(undefined4 **)(_UNK_01e841bc + 0x1e8411c);
  func_0x03db1968(iVar2,param_2,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  if (*(int *)(**(int **)(_UNK_01e841c0 + 0x1e84134) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01e841c4 + 0x1e84150));
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x034a2298(iVar2,param_1,param_2,**(undefined4 **)(_UNK_01e841c8 + 0x1e84178));
  FUN_01e8301c(param_1,param_2);
  iVar2 = 1;
  pcVar5 = (char *)(_UNK_01e808f8 + 0x1e80414);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e808fc + 0x1e80428));
    func_0x01384978(*(undefined4 *)(_UNK_01e80900 + 0x1e80434));
    func_0x01384978(*(undefined4 *)(_UNK_01e80904 + 0x1e80440));
    func_0x01384978(*(undefined4 *)(_UNK_01e80908 + 0x1e8044c));
    func_0x01384978(*(undefined4 *)(_UNK_01e8090c + 0x1e80458));
    func_0x01384978(*(undefined4 *)(_UNK_01e80910 + 0x1e80464));
    func_0x01384978(*(undefined4 *)(_UNK_01e80914 + 0x1e80470));
    func_0x01384978(*(undefined4 *)(_UNK_01e80918 + 0x1e8047c));
    func_0x01384978(*(undefined4 *)(_UNK_01e8091c + 0x1e80488));
    func_0x01384978(*(undefined4 *)(_UNK_01e80920 + 0x1e80494));
    *pcVar5 = '\x01';
  }
  auStack_28[0] = 0;
  iStack_2c = 0;
  iVar6 = func_0x0229f06c(0x697,0);
  if (iVar6 == 0) {
    if (*(char *)(param_1 + 0x4a) == '\0') {
      if (*(char *)(param_1 + 0x49) == '\0') {
        puVar10 = *(undefined4 **)(_UNK_01e80924 + 0x1e8052c);
        puVar4 = *(undefined4 **)(_UNK_01e80928 + 0x1e80534);
LAB_01e80530:
        do {
          while( true ) {
            while( true ) {
              while( true ) {
                iVar6 = *(int *)(param_1 + 8);
                if (iVar6 == 0) {
                  func_0x01384bf0();
                }
                if (*(int *)(iVar6 + 0xc) != 0) break;
                iVar2 = FUN_01e811c0(param_1,*(undefined4 *)(param_1 + 0x1c));
                if (iVar2 != 0) {
                  FUN_01e812a4(param_1,1);
                  FUN_01e81390(param_1);
                }
                iVar6 = FUN_01e815ec(param_1);
                iVar2 = 0;
                if (iVar6 == 0) {
                  return;
                }
              }
              if (*(char *)(param_1 + 0x20) != '\0') {
                iVar6 = *(int *)(param_1 + 8);
                uVar8 = *(undefined4 *)(param_1 + 0x38);
                *(undefined1 *)(param_1 + 0x20) = 0;
                if (iVar6 == 0) {
                  func_0x01384bf0();
                }
                func_0x03290edc(iVar6,uVar8,**(undefined4 **)(_UNK_01e8092c + 0x1e80580));
              }
              iVar6 = *(int *)(param_1 + 8);
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              piVar1 = (int *)func_0x0328eea8(iVar6,0,*puVar10);
              if (piVar1 != (int *)0x0) break;
              iVar6 = *(int *)(param_1 + 8);
              if (iVar6 == 0) {
                func_0x01384bf0();
              }
              func_0x03290bd4(iVar6,0,*puVar4);
            }
            if (*(char *)((int)piVar1 + 0x39) != '\0') {
              return;
            }
            iVar6 = (**(code **)(*piVar1 + 0x118))(piVar1,*(undefined4 *)(*piVar1 + 0x11c));
            if (iVar6 == 0) {
              return;
            }
            iVar6 = *(int *)(param_1 + 8);
            *(int **)(param_1 + 0x14) = piVar1;
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x03290bd4(iVar6,0,*puVar4);
            iVar6 = *(int *)(param_1 + 0x14);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x01e7e4d8(iVar6);
            piVar1 = *(int **)(param_1 + 0x14);
            if (piVar1 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar6 = (**(code **)(*piVar1 + 0x108))
                              (piVar1,auStack_28,*(undefined4 *)(*piVar1 + 0x10c));
            if (iVar6 != 0) break;
            uStack_30 = 0;
            uVar8 = func_0x02450228(**(undefined4 **)(_UNK_01e80934 + 0x1e807b0),
                                    **(undefined4 **)(_UNK_01e80930 + 0x1e807a4),
                                    *(undefined4 *)(param_1 + 0x14),auStack_28[0]);
LAB_01e807e8:
            if (*(int *)(**(int **)(_UNK_01e80938 + 0x1e807f8) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2944(uVar8,0);
          }
          iVar6 = *(int *)(param_1 + 0x14);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(param_1 + 0x28);
          uVar8 = *(undefined4 *)(iVar6 + 8);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          func_0x03d5bb20(iVar7,uVar8,&iStack_2c,**(undefined4 **)(_UNK_01e8093c + 0x1e80680));
          iVar6 = *(int *)(param_1 + 0x14);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(iVar6 + 0x2c);
          iVar6 = FUN_01e7e874(param_1);
          iVar9 = 100;
          if (iVar7 != iVar6) {
            iVar9 = *(int *)(param_1 + 0x40);
          }
          piVar1 = *(int **)(param_1 + 0x14);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar7 = (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
          iVar6 = iStack_2c;
          if (-1 < iVar7) {
            piVar1 = *(int **)(param_1 + 0x14);
            if (piVar1 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar7 = (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
            if (iVar7 <= iVar6) goto LAB_01e80530;
          }
          piVar1 = *(int **)(param_1 + 0x14);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar6 = (**(code **)(*piVar1 + 0xf8))(piVar1,*(undefined4 *)(*piVar1 + 0xfc));
          if (iVar6 == 0) {
            uVar8 = func_0x0244f690(**(undefined4 **)(_UNK_01e80944 + 0x1e807e0),
                                    **(undefined4 **)(_UNK_01e80940 + 0x1e807d4),
                                    *(undefined4 *)(param_1 + 0x14),0);
            goto LAB_01e807e8;
          }
          piVar1 = *(int **)(param_1 + 0x14);
          *(undefined1 *)(iVar6 + 0x2e) = 1;
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar7 = (**(code **)(*piVar1 + 0x120))(piVar1,*(undefined4 *)(*piVar1 + 0x124));
          iVar6 = iStack_2c;
        } while (iVar7 == 0);
        iVar7 = *(int *)(param_1 + 0x28);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar7,uVar8,iVar6 + iVar2,**(undefined4 **)(_UNK_01e80948 + 0x1e80880));
        iVar6 = func_0x01c24918(0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar6 + 0x18);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        FUN_01e2d040(iVar6,1,0);
        iVar2 = *(int *)(param_1 + 0x3c) + iVar2;
        *(int *)(param_1 + 0x3c) = iVar2;
        if (iVar9 <= iVar2) {
          iVar2 = *(int *)(param_1 + 8);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar2 + 0xc)) {
            FUN_01e8174c(param_1);
          }
        }
      }
      else {
        FUN_01e809f0(param_1,1);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x697,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar2,param_1,1,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$TryQuery RVA 0x1e741cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e841cc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01e84410 + 0x1e841e8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e84414 + 0x1e841fc));
    func_0x01384978(*(undefined4 *)(_UNK_01e84418 + 0x1e84208));
    func_0x01384978(*(undefined4 *)(_UNK_01e8441c + 0x1e84214));
    func_0x01384978(*(undefined4 *)(_UNK_01e84420 + 0x1e84220));
    func_0x01384978(*(undefined4 *)(_UNK_01e84424 + 0x1e8422c));
    func_0x01384978(*(undefined4 *)(_UNK_01e84428 + 0x1e84238));
    func_0x01384978(*(undefined4 *)(_UNK_01e8442c + 0x1e84244));
    *pcVar6 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iVar3 = func_0x0229f06c(0xf8e,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xf8e,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0217bbe0(iVar3,param_1,param_2,0);
    return;
  }
  if (*(int *)(param_1 + 0x1c) != param_2) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar3 = *(int *)(param_1 + 8);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar3 + 0xc) < 1) goto LAB_01e843fc;
    }
    iVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01e84430 + 0x1e842e4));
    func_0x0328e950(iVar3,**(undefined4 **)(_UNK_01e84434 + 0x1e842f8));
    uVar8 = *(undefined4 *)(param_1 + 0x14);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar3 + 8);
    uVar5 = *(uint *)(iVar3 + 0xc);
    piVar4 = *(int **)(_UNK_01e84438 + 0x1e84330);
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    iVar9 = *piVar4;
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    if (uVar5 < *(uint *)(iVar7 + 0xc)) {
      *(uint *)(iVar3 + 0xc) = uVar5 + 1;
      *(undefined4 *)(iVar7 + uVar5 * 4 + 0x10) = uVar8;
    }
    else {
      func_0x0328f170(iVar3,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
    }
    func_0x0328f380(iVar3,*(undefined4 *)(param_1 + 8),**(undefined4 **)(_UNK_01e8443c + 0x1e84380))
    ;
    func_0x03934478(&uStack_30,iVar3,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x3c)
                    ,**(undefined4 **)(_UNK_01e84440 + 0x1e843a4));
    FUN_01e83de0(param_1,0);
    uVar2 = uStack_28;
    uVar1 = uStack_2c;
    uVar8 = uStack_30;
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x03685b64(iVar3,uVar8,uVar1,uVar2,**(undefined4 **)(_UNK_01e84444 + 0x1e843f0));
  }
LAB_01e843fc:
  FUN_01e83ff8(param_1,param_2);
  return;
}



// ===== FAT.ScreenPopup$$<TryResumeCache>g__CheckEnergy|75_0 RVA 0x1e74448 =====

bool FUN_01e84448(void)

{
  int iVar1;
  
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x90);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dc13cc(iVar1,0);
  return iVar1 < 1;
}



// ===== FAT.ScreenPopup$$WhenOutOfEnergy RVA 0x1e74494 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e84494(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
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
  
  iVar2 = func_0x0229f06c(0x5f0e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5f0e,0);
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
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  pcVar7 = (char *)(_UNK_01e84410 + 0x1e841e8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e84414 + 0x1e841fc));
    func_0x01384978(*(undefined4 *)(_UNK_01e84418 + 0x1e84208));
    func_0x01384978(*(undefined4 *)(_UNK_01e8441c + 0x1e84214));
    func_0x01384978(*(undefined4 *)(_UNK_01e84420 + 0x1e84220));
    func_0x01384978(*(undefined4 *)(_UNK_01e84424 + 0x1e8422c));
    func_0x01384978(*(undefined4 *)(_UNK_01e84428 + 0x1e84238));
    func_0x01384978(*(undefined4 *)(_UNK_01e8442c + 0x1e84244));
    *pcVar7 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0xf8e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xf8e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0217bbe0(iVar2,param_1,1,0);
    return;
  }
  if (*(int *)(param_1 + 0x1c) != 1) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 0xc) < 1) goto LAB_01e843fc;
    }
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01e84430 + 0x1e842e4));
    func_0x0328e950(iVar2,**(undefined4 **)(_UNK_01e84434 + 0x1e842f8));
    uVar8 = *(undefined4 *)(param_1 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar2 + 8);
    uVar5 = *(uint *)(iVar2 + 0xc);
    piVar3 = *(int **)(_UNK_01e84438 + 0x1e84330);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    iVar9 = *piVar3;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (uVar5 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar5 + 1;
      *(undefined4 *)(iVar6 + uVar5 * 4 + 0x10) = uVar8;
    }
    else {
      func_0x0328f170(iVar2,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
    }
    func_0x0328f380(iVar2,*(undefined4 *)(param_1 + 8),**(undefined4 **)(_UNK_01e8443c + 0x1e84380))
    ;
    uStack_38 = **(undefined4 **)(_UNK_01e84440 + 0x1e843a4);
    func_0x03934478(&uStack_30,iVar2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x3c)
                   );
    FUN_01e83de0(param_1,0);
    uVar1 = uStack_28;
    uVar4 = uStack_2c;
    uVar8 = uStack_30;
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = **(undefined4 **)(_UNK_01e84444 + 0x1e843f0);
    func_0x03685b64(iVar2,uVar8,uVar4,uVar1);
  }
LAB_01e843fc:
  FUN_01e83ff8(param_1,1);
  return;
}



// ===== FAT.ScreenPopup$$WhenOutOfDiamond RVA 0x1e744f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e844f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
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
  
  iVar2 = func_0x0229f06c(0x278c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x278c,0);
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
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar8,&uStack_30,uVar4,0,0);
    return;
  }
  pcVar7 = (char *)(_UNK_01e84410 + 0x1e841e8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e84414 + 0x1e841fc));
    func_0x01384978(*(undefined4 *)(_UNK_01e84418 + 0x1e84208));
    func_0x01384978(*(undefined4 *)(_UNK_01e8441c + 0x1e84214));
    func_0x01384978(*(undefined4 *)(_UNK_01e84420 + 0x1e84220));
    func_0x01384978(*(undefined4 *)(_UNK_01e84424 + 0x1e8422c));
    func_0x01384978(*(undefined4 *)(_UNK_01e84428 + 0x1e84238));
    func_0x01384978(*(undefined4 *)(_UNK_01e8442c + 0x1e84244));
    *pcVar7 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0xf8e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xf8e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0217bbe0(iVar2,param_1,2,0);
    return;
  }
  if (*(int *)(param_1 + 0x1c) != 2) {
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 0xc) < 1) goto LAB_01e843fc;
    }
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01e84430 + 0x1e842e4));
    func_0x0328e950(iVar2,**(undefined4 **)(_UNK_01e84434 + 0x1e842f8));
    uVar8 = *(undefined4 *)(param_1 + 0x14);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar2 + 8);
    uVar5 = *(uint *)(iVar2 + 0xc);
    piVar3 = *(int **)(_UNK_01e84438 + 0x1e84330);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    iVar9 = *piVar3;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (uVar5 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar5 + 1;
      *(undefined4 *)(iVar6 + uVar5 * 4 + 0x10) = uVar8;
    }
    else {
      func_0x0328f170(iVar2,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
    }
    func_0x0328f380(iVar2,*(undefined4 *)(param_1 + 8),**(undefined4 **)(_UNK_01e8443c + 0x1e84380))
    ;
    uStack_38 = **(undefined4 **)(_UNK_01e84440 + 0x1e843a4);
    func_0x03934478(&uStack_30,iVar2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x3c)
                   );
    FUN_01e83de0(param_1,0);
    uVar1 = uStack_28;
    uVar4 = uStack_2c;
    uVar8 = uStack_30;
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = **(undefined4 **)(_UNK_01e84444 + 0x1e843f0);
    func_0x03685b64(iVar2,uVar8,uVar4,uVar1);
  }
LAB_01e843fc:
  FUN_01e83ff8(param_1,2);
  return;
}



// ===== FAT.ScreenPopup$$SetPause RVA 0x1e7454c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e8454c(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 auStack_28 [4];
  
  iVar2 = func_0x0229f06c(0x3863,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x3863,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    auStack_28[0] = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar8,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(byte *)(param_1 + 0x4a) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x4a) = (char)param_2;
  if (param_2 != 0) {
    return;
  }
  iVar2 = 1;
  pcVar6 = (char *)(_UNK_01e808f8 + 0x1e80414);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e808fc + 0x1e80428));
    func_0x01384978(*(undefined4 *)(_UNK_01e80900 + 0x1e80434));
    func_0x01384978(*(undefined4 *)(_UNK_01e80904 + 0x1e80440));
    func_0x01384978(*(undefined4 *)(_UNK_01e80908 + 0x1e8044c));
    func_0x01384978(*(undefined4 *)(_UNK_01e8090c + 0x1e80458));
    func_0x01384978(*(undefined4 *)(_UNK_01e80910 + 0x1e80464));
    func_0x01384978(*(undefined4 *)(_UNK_01e80914 + 0x1e80470));
    func_0x01384978(*(undefined4 *)(_UNK_01e80918 + 0x1e8047c));
    func_0x01384978(*(undefined4 *)(_UNK_01e8091c + 0x1e80488));
    func_0x01384978(*(undefined4 *)(_UNK_01e80920 + 0x1e80494));
    *pcVar6 = '\x01';
  }
  auStack_28[0] = 0;
  iStack_2c = 0;
  iVar5 = func_0x0229f06c(0x697,0);
  if (iVar5 == 0) {
    if (*(char *)(param_1 + 0x4a) == '\0') {
      if (*(char *)(param_1 + 0x49) == '\0') {
        puVar10 = *(undefined4 **)(_UNK_01e80924 + 0x1e8052c);
        puVar4 = *(undefined4 **)(_UNK_01e80928 + 0x1e80534);
LAB_01e80530:
        do {
          while( true ) {
            while( true ) {
              while( true ) {
                iVar5 = *(int *)(param_1 + 8);
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                if (*(int *)(iVar5 + 0xc) != 0) break;
                iVar2 = FUN_01e811c0(param_1,*(undefined4 *)(param_1 + 0x1c));
                if (iVar2 != 0) {
                  FUN_01e812a4(param_1,1);
                  FUN_01e81390(param_1);
                }
                iVar5 = FUN_01e815ec(param_1);
                iVar2 = 0;
                if (iVar5 == 0) {
                  return;
                }
              }
              if (*(char *)(param_1 + 0x20) != '\0') {
                iVar5 = *(int *)(param_1 + 8);
                uVar8 = *(undefined4 *)(param_1 + 0x38);
                *(undefined1 *)(param_1 + 0x20) = 0;
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                func_0x03290edc(iVar5,uVar8,**(undefined4 **)(_UNK_01e8092c + 0x1e80580));
              }
              iVar5 = *(int *)(param_1 + 8);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              piVar1 = (int *)func_0x0328eea8(iVar5,0,*puVar10);
              if (piVar1 != (int *)0x0) break;
              iVar5 = *(int *)(param_1 + 8);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              func_0x03290bd4(iVar5,0,*puVar4);
            }
            if (*(char *)((int)piVar1 + 0x39) != '\0') {
              return;
            }
            iVar5 = (**(code **)(*piVar1 + 0x118))(piVar1,*(undefined4 *)(*piVar1 + 0x11c));
            if (iVar5 == 0) {
              return;
            }
            iVar5 = *(int *)(param_1 + 8);
            *(int **)(param_1 + 0x14) = piVar1;
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x03290bd4(iVar5,0,*puVar4);
            iVar5 = *(int *)(param_1 + 0x14);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x01e7e4d8(iVar5);
            piVar1 = *(int **)(param_1 + 0x14);
            if (piVar1 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar5 = (**(code **)(*piVar1 + 0x108))
                              (piVar1,auStack_28,*(undefined4 *)(*piVar1 + 0x10c));
            if (iVar5 != 0) break;
            uStack_30 = 0;
            uVar8 = func_0x02450228(**(undefined4 **)(_UNK_01e80934 + 0x1e807b0),
                                    **(undefined4 **)(_UNK_01e80930 + 0x1e807a4),
                                    *(undefined4 *)(param_1 + 0x14),auStack_28[0]);
LAB_01e807e8:
            if (*(int *)(**(int **)(_UNK_01e80938 + 0x1e807f8) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x028c2944(uVar8,0);
          }
          iVar5 = *(int *)(param_1 + 0x14);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(param_1 + 0x28);
          uVar8 = *(undefined4 *)(iVar5 + 8);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          func_0x03d5bb20(iVar7,uVar8,&iStack_2c,**(undefined4 **)(_UNK_01e8093c + 0x1e80680));
          iVar5 = *(int *)(param_1 + 0x14);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar7 = *(int *)(iVar5 + 0x2c);
          iVar5 = FUN_01e7e874(param_1);
          iVar9 = 100;
          if (iVar7 != iVar5) {
            iVar9 = *(int *)(param_1 + 0x40);
          }
          piVar1 = *(int **)(param_1 + 0x14);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar7 = (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
          iVar5 = iStack_2c;
          if (-1 < iVar7) {
            piVar1 = *(int **)(param_1 + 0x14);
            if (piVar1 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar7 = (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar1 + 0xec));
            if (iVar7 <= iVar5) goto LAB_01e80530;
          }
          piVar1 = *(int **)(param_1 + 0x14);
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar5 = (**(code **)(*piVar1 + 0xf8))(piVar1,*(undefined4 *)(*piVar1 + 0xfc));
          if (iVar5 == 0) {
            uVar8 = func_0x0244f690(**(undefined4 **)(_UNK_01e80944 + 0x1e807e0),
                                    **(undefined4 **)(_UNK_01e80940 + 0x1e807d4),
                                    *(undefined4 *)(param_1 + 0x14),0);
            goto LAB_01e807e8;
          }
          piVar1 = *(int **)(param_1 + 0x14);
          *(undefined1 *)(iVar5 + 0x2e) = 1;
          if (piVar1 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar7 = (**(code **)(*piVar1 + 0x120))(piVar1,*(undefined4 *)(*piVar1 + 0x124));
          iVar5 = iStack_2c;
        } while (iVar7 == 0);
        iVar7 = *(int *)(param_1 + 0x28);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar7,uVar8,iVar5 + iVar2,**(undefined4 **)(_UNK_01e80948 + 0x1e80880));
        iVar5 = func_0x01c24918(0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x18);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        FUN_01e2d040(iVar5,1,0);
        iVar2 = *(int *)(param_1 + 0x3c) + iVar2;
        *(int *)(param_1 + 0x3c) = iVar2;
        if (iVar9 <= iVar2) {
          iVar2 = *(int *)(param_1 + 8);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (0 < *(int *)(iVar2 + 0xc)) {
            FUN_01e8174c(param_1);
          }
        }
      }
      else {
        FUN_01e809f0(param_1,1);
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x697,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar2,param_1,1,0);
  }
  return;
}



// ===== FAT.ScreenPopup$$Wait RVA 0x1e745cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e845cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_01e846e4 + 0x1e845ec);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e846e8 + 0x1e84600));
    *pcVar2 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_34 = 0;
  uStack_30 = uStack_3c;
  uStack_2c = uStack_38;
  iVar1 = func_0x0229f06c(0x68b9,0);
  if (iVar1 == 0) {
    uStack_3c = 0;
    iVar3 = **(int **)(_UNK_01e846ec + 0x1e84684);
    uStack_38 = 0;
    uStack_40 = 0xffffffff;
    iVar1 = *(int *)(iVar3 + 0x1c);
    uStack_34 = param_3;
    uStack_30 = param_2;
    if (iVar1 == 0) {
      func_0x0140024c(iVar3);
      iVar1 = *(int *)(iVar3 + 0x1c);
    }
    func_0x01e9fa7c(&uStack_40,*(undefined4 *)(iVar1 + 8));
    func_0x019dd7dc(&uStack_48,(uint)&uStack_40 | 4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x68b9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c0c50(&uStack_48,iVar1,param_2,param_3,0);
  }
  *param_1 = uStack_48;
  param_1[1] = uStack_44;
  return;
}



// ===== FAT.ScreenPopup.<>c$$.cctor RVA 0x1e746f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e846f0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01e84748 + 0x1e84700);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e8474c + 0x1e84714));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01e84750 + 0x1e84728);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.ScreenPopup.<>c$$.ctor RVA 0x1e74754 =====

void FUN_01e84754(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.ScreenPopup.<>c$$<.ctor>b__28_0 RVA 0x1e7475c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e8475c(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_18;
  undefined1 uStack_11;
  
  pcVar3 = (char *)(_UNK_01e84884 + 0x1e84778);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e84888 + 0x1e8478c));
    *pcVar3 = '\x01';
  }
  uStack_18 = 0;
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  uStack_11 = func_0x01e7de9c(param_3);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x01e7de9c(param_2);
  if (*(int *)(**(int **)(_UNK_01e8488c + 0x1e847d8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0245277c(&uStack_11,uVar1,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x01e7de9c(param_2);
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    if (iVar2 == 0) {
      uStack_18 = func_0x01e7de28(param_3);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar1 = func_0x01e7de28(param_2);
    }
    else {
      uStack_18 = func_0x01e7def0();
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar1 = func_0x01e7def0(param_2);
    }
    func_0x01489de8(&uStack_18,uVar1,0);
  }
  return;
}



// ===== FAT.ScreenPopup.<>c$$<CheckIgnoreDelay>b__43_1 RVA 0x1e74890 =====

undefined1 FUN_01e84890(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined1 *)(param_2 + 0x3a);
}



// ===== FAT.ScreenPopup.<>c$$<CheckIgnoreDelay>b__43_0 RVA 0x1e748ac =====

undefined1 FUN_01e848ac(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  return *(undefined1 *)(param_2 + 0x3a);
}



// ===== FAT.ScreenPopup.<>c$$<BuildEventEndPopupRewardInfo>b__52_0 RVA 0x1e748c8 =====

bool FUN_01e848c8(undefined4 param_1,int param_2)

{
  return param_2 != 0;
}



// ===== FAT.ScreenPopup.<>c$$<BuildEventEndPopupRewardInfo>b__52_1 RVA 0x1e748d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e848d8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01e8497c + 0x1e848f0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e84980 + 0x1e84904));
    func_0x01384978(*(undefined4 *)(_UNK_01e84984 + 0x1e84910));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uStack_14 = *(undefined4 *)(param_2 + 8);
  puVar4 = *(undefined4 **)(_UNK_01e84988 + 0x1e84934);
  uVar1 = func_0x01384abc(*puVar4,&uStack_14);
  uStack_18 = *(undefined4 *)(param_2 + 0x10);
  uVar2 = func_0x01384abc(*puVar4,&uStack_18);
  func_0x0244f690(**(undefined4 **)(_UNK_01e8498c + 0x1e84970),uVar1,uVar2,0);
  return;
}



// ===== FAT.ScreenPopup.<>c$$<SortEventEndEntries>b__62_0 RVA 0x1e74990 =====

/* WARNING: Possible PIC construction at 0x01e849d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e849d4) */
/* WARNING: Removing unreachable block (ram,0x01e849dc) */
/* WARNING: Removing unreachable block (ram,0x01e849d8) */

undefined4 FUN_01e84990(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  cVar1 = *(char *)(param_2 + 0x24);
  if (param_3 == 0) {
    func_0x01384bf0();
  }
  if (cVar1 == *(char *)(param_3 + 0x24)) {
    uVar2 = (*(code *)&UNK_0482194c)(param_3 + 0x20,*(undefined4 *)(param_2 + 0x20),0);
    return uVar2;
  }
  uVar2 = 0xffffffff;
  if (*(char *)(param_2 + 0x24) == '\0') {
    uVar2 = 1;
  }
  return uVar2;
}



// ===== FAT.ScreenPopup.<>c__DisplayClass59_0$$.ctor RVA 0x1e8fa34 =====

void FUN_01e9fa34(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.ScreenPopup.<>c__DisplayClass59_0$$<UpsertEventEndEntry>b__0 RVA 0x1e8fa3c =====

bool FUN_01e9fa3c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  return iVar1 == *(int *)(iVar2 + 0x14);
}



// ===== FAT.ScreenPopup.<Wait>d__83$$MoveNext RVA 0x1e8fa7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e9fa7c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iStack_14;
  
  pcVar8 = (char *)(_UNK_01e9fdfc + 0x1e9fa94);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e9fe00 + 0x1e9faa8));
    func_0x01384978(*(undefined4 *)(_UNK_01e9fe04 + 0x1e9fab4));
    func_0x01384978(*(undefined4 *)(_UNK_01e9fe08 + 0x1e9fac0));
    *pcVar8 = '\x01';
  }
  iVar9 = param_1[4];
  iStack_14 = 0;
  if (*param_1 == 0) {
    *param_1 = -1;
    iStack_14 = param_1[6];
    param_1[6] = 0;
    goto LAB_01e9fb74;
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01e9fe0c + 0x1e9faec));
  param_1[5] = iVar1;
  do {
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01e7e7c4(iVar9,0);
    if (iVar1 != 0) {
      iVar1 = param_1[5];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01ee9ff4(iVar1,0);
      iVar1 = _UNK_01e9fe18;
      if (iVar2 != 0) {
        param_1[5] = 0;
        *param_1 = -2;
        if (*(char *)(iVar1 + 0x1e9fbdc) == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01e9fe1c + 0x1e9fbf4));
          *(char *)(iVar1 + 0x1e9fbdc) = '\x01';
        }
        piVar7 = (int *)param_1[1];
        if (piVar7 == (int *)0x0) {
          return;
        }
        iVar9 = *piVar7;
        uVar4 = (uint)*(ushort *)(iVar9 + 0xb6);
        if (uVar4 == 0) goto LAB_01e9fc44;
        piVar5 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        break;
      }
    }
    iVar1 = param_1[3];
    if (*(int *)(**(int **)(_UNK_01e9fe10 + 0x1e9fb20) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x024513ec(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_14 = func_0x024513fc(iVar1,0);
    iVar1 = func_0x0245140c(&iStack_14,0);
    if (iVar1 == 0) {
      puVar3 = *(undefined4 **)(_UNK_01e9fe14 + 0x1e9fc64);
      *param_1 = 0;
      uVar6 = *puVar3;
      param_1[6] = iStack_14;
      func_0x01ebe178(param_1 + 1,&iStack_14,param_1,uVar6);
      return;
    }
LAB_01e9fb74:
    func_0x0245141c(&iStack_14,0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 2;
    if (uVar4 == 0) break;
    if (piVar5[-1] == **(int **)(_UNK_01e9fe20 + 0x1e9fc18)) {
      puVar3 = (undefined4 *)(iVar9 + *piVar5 * 8 + 0xd0);
      goto LAB_01e9fc90;
    }
  }
LAB_01e9fc44:
  puVar3 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(_UNK_01e9fe20 + 0x1e9fc18),2);
LAB_01e9fc90:
  (*(code *)*puVar3)(piVar7,puVar3[1]);
  return;
}



// ===== FAT.ScreenPopup.<Wait>d__83$$SetStateMachine RVA 0x1e8fe38 =====

void FUN_01e9fe38(int param_1,undefined4 param_2)

{
  (*(code *)&UNK_04f6eae8)(param_1 + 4,param_2,0);
  return;
}


