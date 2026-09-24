/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityVisual$$get_Theme RVA 0x2b51520 =====

undefined4 FUN_02b61520(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.ActivityVisual$$set_Theme RVA 0x2b51528 =====

void FUN_02b61528(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



// ===== FAT.ActivityVisual$$get_Entrance RVA 0x2b51530 =====

undefined4 FUN_02b61530(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.ActivityVisual$$set_Entrance RVA 0x2b51538 =====

void FUN_02b61538(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== FAT.ActivityVisual$$get_Popup RVA 0x2b51540 =====

undefined4 FUN_02b61540(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.ActivityVisual$$set_Popup RVA 0x2b51548 =====

void FUN_02b61548(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



// ===== FAT.ActivityVisual$$get_Valid RVA 0x2b51550 =====

uint FUN_02b61550(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x311,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x311,0);
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
  return (uint)(*(int *)(param_1 + 8) != 0);
}



// ===== FAT.ActivityVisual$$get_PopupId RVA 0x2b515ac =====

undefined4 FUN_02b615ac(int param_1)

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
  iVar1 = func_0x0229f06c(0x316,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x316,0);
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
  if (*(int *)(param_1 + 8) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x24);
  }
  return uVar4;
}



// ===== FAT.ActivityVisual$$get_TargetAsset RVA 0x2b51610 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b61610(int param_1)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x309,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x309,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
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
    uVar4 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar4;
  }
  if (*(int *)(param_1 + 8) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x18);
  }
  return uVar4;
}



// ===== FAT.ActivityVisual$$get_EntryIcon RVA 0x2b51674 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b61674(int param_1)

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
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x175,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x175,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
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
    uVar4 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar4;
  }
  if (*(int *)(param_1 + 8) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x20);
  }
  return uVar4;
}



// ===== FAT.ActivityVisual$$get_EntryVisible RVA 0x2b516d8 =====

uint FUN_02b616d8(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x1ae4,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x1ae4,0);
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
  return (uint)(*(int *)(param_1 + 0xc) != 0);
}



// ===== FAT.ActivityVisual$$get_EntryOnLeft RVA 0x2b51734 =====

uint FUN_02b61734(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x732b,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x732b,0);
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
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  return (uint)*(byte *)(iVar2 + 0x14);
}



// ===== FAT.ActivityVisual$$get_Priority RVA 0x2b51798 =====

undefined4 FUN_02b61798(int param_1)

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
  iVar1 = func_0x0229f06c(0x7327,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7327,0);
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
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
  }
  return uVar4;
}



// ===== FAT.ActivityVisual$$get_AssetMap RVA 0x2b517fc =====

undefined4 FUN_02b617fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0x1afc,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 8) != 0) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x14);
    }
    uStack_14 = 0;
    func_0x02b61880(&uStack_14,uVar2);
  }
  else {
    iVar1 = func_0x0229f13c(0x1afc,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x021a9bac(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityVisual$$get_TextMap RVA 0x2b51948 =====

undefined4 FUN_02b61948(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0x2b18,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 8) != 0) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x2c);
    }
    uStack_14 = 0;
    FUN_02b61880(&uStack_14,uVar2);
  }
  else {
    iVar1 = func_0x0229f13c(0x2b18,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x021a9bac(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityVisual$$get_StyleMap RVA 0x2b519cc =====

undefined4 FUN_02b619cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_14;
  
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0xb53,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 8) != 0) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x28);
    }
    uStack_14 = 0;
    FUN_02b61880(&uStack_14,uVar2);
  }
  else {
    iVar1 = func_0x0229f13c(0xb53,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x021a9bac(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityVisual$$Setup RVA 0x2b51a50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b61a50(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84));
    func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
    func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
    func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x305,0);
  if (iVar1 == 0) {
    uVar2 = 0;
    iVar1 = func_0x01822f2c(param_2,0);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 == 0) {
      if (0 < param_2) {
        iStack_1c = param_2;
        uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),&iStack_1c);
        uVar2 = 0;
        uVar3 = func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                                **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar3,0);
        if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x028c2944(uVar3,0);
      }
    }
    else {
      uVar3 = func_0x017d2c28(*(undefined4 *)(iVar1 + 0x1c),0);
      uVar2 = 1;
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      if (param_3 != 0) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x01875b98(*(undefined4 *)(iVar1 + 0x24),0);
        *(undefined4 *)(param_1 + 0x10) = uVar3;
        uVar3 = FUN_02b61610(param_1);
        func_0x02b61c14(param_3,uVar3);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x305,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021846e8(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ActivityVisual$$Clear RVA 0x2b51ce8 =====

void FUN_02b61ce8(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x2461,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2461,0);
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
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// ===== FAT.ActivityVisual$$ResEnumerate RVA 0x2b51d48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b61d48(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_02b61df8 + 0x2b61d5c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b61dfc + 0x2b61d70));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1395,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1395,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
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
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b61e00 + 0x2b61dc8));
  func_0x04874ed4(iVar1,0);
  *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
  uVar5 = func_0x048799ac(0);
  *(undefined4 *)(iVar1 + 0x14) = uVar5;
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return iVar1;
}



// ===== FAT.ActivityVisual.<ResEnumerate>d__34$$.ctor RVA 0x2b51e04 =====

void FUN_02b61e04(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  func_0x04874ed4(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = func_0x048799ac(0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



// ===== FAT.ActivityVisual$$Refresh RVA 0x2b51e2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b61e2c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_02b61f64 + 0x2b61e48);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b61f68 + 0x2b61e5c));
    func_0x01384978(*(undefined4 *)(_UNK_02b61f6c + 0x2b61e68));
    func_0x01384978(*(undefined4 *)(_UNK_02b61f70 + 0x2b61e74));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb47,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb47,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02b61f74 + 0x2b61ed4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0244fb8c(param_2,0,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x10);
    iVar5 = 0;
    puVar4 = *(undefined4 **)(_UNK_02b61f78 + 0x2b61f28);
    while( true ) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar5) break;
      func_0x0342b1b0(&uStack_24,iVar1,iVar5,*puVar4);
      func_0x02b61f7c(param_1,uStack_24,uStack_20,uStack_1c);
      iVar5 = iVar5 + 1;
    }
  }
  return;
}



// ===== FAT.ActivityVisual$$RefreshC RVA 0x2b51f7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b61f7c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_02b62230 + 0x2b61f9c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b62234 + 0x2b61fb4));
    func_0x01384978(*(undefined4 *)(_UNK_02b62238 + 0x2b61fc0));
    func_0x01384978(*(undefined4 *)(_UNK_02b6223c + 0x2b61fcc));
    func_0x01384978(*(undefined4 *)(_UNK_02b62240 + 0x2b61fd8));
    func_0x01384978(*(undefined4 *)(_UNK_02b62244 + 0x2b61fe4));
    func_0x01384978(*(undefined4 *)(_UNK_02b62248 + 0x2b61ff0));
    func_0x01384978(*(undefined4 *)(_UNK_02b6224c + 0x2b61ffc));
    *pcVar8 = '\x01';
  }
  iVar5 = func_0x0229f06c(0xb48,0);
  if (iVar5 == 0) {
    if (param_2 != (int *)0x0) {
      iVar5 = *param_2;
      uVar7 = (uint)*(byte *)(**(int **)(_UNK_02b62250 + 0x2b6206c) + 0xb8);
      uVar6 = (uint)*(byte *)(iVar5 + 0xb8);
      if ((uVar7 <= uVar6) &&
         (*(int *)(*(int *)(iVar5 + 100) + uVar7 * 4 + -4) == **(int **)(_UNK_02b62250 + 0x2b6206c))
         ) {
        pcVar8 = (char *)(_UNK_02b623bc + 0x2b6228c);
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02b623c0 + 0x2b622a0));
          func_0x01384978(*(undefined4 *)(_UNK_02b623c4 + 0x2b622ac));
          *pcVar8 = '\x01';
        }
        iVar5 = func_0x0229f06c(0x4d5,0);
        if (iVar5 == 0) {
          iVar5 = FUN_02b61550(param_1);
          if (iVar5 != 0) {
            if (*(int *)(**(int **)(_UNK_02b623c8 + 0x2b62328) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar5 = func_0x0244fb8c(param_2,0,0);
            if (iVar5 == 0) {
              iVar5 = *(int *)(param_1 + 8);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              iVar5 = *(int *)(iVar5 + 0x14);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              iVar5 = func_0x03470a60(iVar5,param_3,&stack0xffffffe4,
                                      **(undefined4 **)(_UNK_02b623cc + 0x2b62384));
              if (iVar5 != 0) {
                if (param_2 == (int *)0x0) {
                  func_0x01384bf0();
                }
                func_0x0267cc24(param_2,0,0);
              }
            }
          }
        }
        else {
          iVar5 = func_0x0229f13c(0x4d5,0);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          func_0x02174858(iVar5,param_1,param_2,param_3);
        }
        return;
      }
      uVar7 = (uint)*(byte *)(**(int **)(_UNK_02b62254 + 0x2b620a0) + 0xb8);
      if ((uVar6 < uVar7) ||
         (*(int *)(*(int *)(iVar5 + 100) + uVar7 * 4 + -4) != **(int **)(_UNK_02b62254 + 0x2b620a0))
         ) {
        uVar7 = (uint)*(byte *)(**(int **)(_UNK_02b62258 + 0x2b620cc) + 0xb8);
        if ((uVar6 < uVar7) ||
           (*(int *)(*(int *)(iVar5 + 100) + uVar7 * 4 + -4) !=
            **(int **)(_UNK_02b62258 + 0x2b620cc))) {
          uVar7 = (uint)*(byte *)(**(int **)(_UNK_02b6225c + 0x2b620f8) + 0xb8);
          if ((uVar6 < uVar7) ||
             (*(int *)(*(int *)(iVar5 + 100) + uVar7 * 4 + -4) !=
              **(int **)(_UNK_02b6225c + 0x2b620f8))) {
            uVar7 = (uint)*(byte *)(**(int **)(_UNK_02b62260 + 0x2b62124) + 0xb8);
            if ((uVar6 < uVar7) ||
               (*(int *)(*(int *)(iVar5 + 100) + uVar7 * 4 + -4) !=
                **(int **)(_UNK_02b62260 + 0x2b62124))) {
              uVar7 = (uint)*(byte *)(**(int **)(_UNK_02b62264 + 0x2b62150) + 0xb8);
              if ((uVar7 <= uVar6) &&
                 (*(int *)(*(int *)(iVar5 + 100) + uVar7 * 4 + -4) ==
                  **(int **)(_UNK_02b62264 + 0x2b62150))) {
                iVar5 = func_0x0229f06c(0xb51,0);
                if (iVar5 == 0) {
                  func_0x02b62de4(param_1,param_2,param_3);
                  func_0x02b630c0(param_1,param_2,param_3,0);
                }
                else {
                  iVar5 = func_0x0229f13c(0xb51,0);
                  if (iVar5 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x02174858(iVar5,param_1,param_2,param_3);
                }
                return;
              }
              uVar7 = (uint)*(byte *)(**(int **)(_UNK_02b62268 + 0x2b6217c) + 0xb8);
              if (uVar6 < uVar7) {
                return;
              }
              if (*(int *)(*(int *)(iVar5 + 100) + uVar7 * 4 + -4) !=
                  **(int **)(_UNK_02b62268 + 0x2b6217c)) {
                return;
              }
              pcVar8 = (char *)(_UNK_02b62b70 + 0x2b629f8);
              if (*pcVar8 == '\0') {
                func_0x01384978(*(undefined4 *)(_UNK_02b62b74 + 0x2b62a0c));
                func_0x01384978(*(undefined4 *)(_UNK_02b62b78 + 0x2b62a18));
                *pcVar8 = '\x01';
              }
              uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              uStack_24 = 0;
              uStack_38 = 0;
              iVar5 = func_0x0229f06c(0xb52,0);
              if (iVar5 == 0) {
                iVar5 = FUN_02b61550(param_1);
                if (iVar5 != 0) {
                  if (*(int *)(**(int **)(_UNK_02b62b7c + 0x2b62aa0) + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  iVar5 = func_0x0244fb8c(param_2,0,0);
                  if (iVar5 == 0) {
                    iVar5 = *(int *)(param_1 + 8);
                    if (iVar5 == 0) {
                      func_0x01384bf0();
                    }
                    iVar5 = *(int *)(iVar5 + 0x14);
                    if (iVar5 == 0) {
                      func_0x01384bf0();
                    }
                    iVar5 = func_0x03470a60(iVar5,param_3,&uStack_24,
                                            **(undefined4 **)(_UNK_02b62b80 + 0x2b62afc));
                    if ((iVar5 != 0) &&
                       (iVar5 = func_0x024507d8(uStack_24,&uStack_38,0), uVar4 = uStack_2c,
                       uVar3 = uStack_30, uVar2 = uStack_34, uVar1 = uStack_38, iVar5 != 0)) {
                      if (param_2 == (int *)0x0) {
                        func_0x01384bf0();
                      }
                      (**(code **)(*param_2 + 0x178))
                                (param_2,uVar1,uVar2,uVar3,uVar4,*(undefined4 *)(*param_2 + 0x17c));
                    }
                  }
                }
              }
              else {
                iVar5 = func_0x0229f13c(0xb52,0);
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                func_0x02174858(iVar5,param_1,param_2,param_3,0);
              }
              return;
            }
          }
          pcVar8 = (char *)(_UNK_02b6293c + 0x2b62864);
          if (*pcVar8 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02b62940 + 0x2b62878));
            *pcVar8 = '\x01';
          }
          iVar5 = func_0x0229f06c(0xb4d,0);
          if (iVar5 == 0) {
            if (*(int *)(**(int **)(_UNK_02b62944 + 0x2b628dc) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar5 = func_0x0244fb8c(param_2,0,0);
            if (iVar5 == 0) {
              if (param_2 == (int *)0x0) {
                func_0x01384bf0();
              }
              func_0x02b62de4(param_1,param_2[4],param_3);
              func_0x02b630c0(param_1,param_2[4],param_3,param_2);
            }
          }
          else {
            iVar5 = func_0x0229f13c(0xb4d,0);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x02174858(iVar5,param_1,param_2,param_3);
          }
          return;
        }
        func_0x02b62694(param_1,param_2,param_3,param_4);
      }
      else {
        func_0x02b623d0(param_1,param_2,param_3,param_4);
      }
    }
  }
  else {
    iVar5 = func_0x0229f13c(0xb48,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    uStack_28 = param_4;
    func_0x0218a160(iVar5,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.ActivityVisual$$Refresh RVA 0x2b5226c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b6226c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_02b623bc + 0x2b6228c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b623c0 + 0x2b622a0));
    func_0x01384978(*(undefined4 *)(_UNK_02b623c4 + 0x2b622ac));
    *pcVar3 = '\x01';
  }
  uStack_1c = 0;
  iVar2 = func_0x0229f06c(0x4d5,0);
  if (iVar2 == 0) {
    iVar2 = FUN_02b61550(param_1);
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_02b623c8 + 0x2b62328) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0244fb8c(param_2,0,0);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x14);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x03470a60(iVar2,param_3,&uStack_1c,
                                **(undefined4 **)(_UNK_02b623cc + 0x2b62384));
        uVar1 = uStack_1c;
        if (iVar2 != 0) {
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          func_0x0267cc24(param_2,uVar1,0);
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x4d5,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityVisual$$Refresh RVA 0x2b523d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b623d0(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02b62680 + 0x2b623f0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b62684 + 0x2b62408));
    func_0x01384978(*(undefined4 *)(_UNK_02b62688 + 0x2b62414));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uStack_2c = 0;
  iStack_30 = 0;
  uStack_40 = 0;
  iVar5 = func_0x0229f06c(0xb49,0);
  if (iVar5 == 0) {
    iVar5 = FUN_02b61550(param_1);
    if (iVar5 != 0) {
      if (*(int *)(**(int **)(_UNK_02b6268c + 0x2b624a8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar5 = func_0x0244fb8c(param_2,0,0);
      if (iVar5 == 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(param_2 + 0x1c);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        if ((int)param_4 < *(int *)(iVar5 + 0xc)) {
          iVar5 = *(int *)(param_1 + 8);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar5 + 0x2c);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          puVar9 = *(undefined4 **)(_UNK_02b62690 + 0x2b62530);
          iVar5 = func_0x03470a60(iVar5,param_3,&uStack_28,*puVar9);
          if (iVar5 != 0) {
            iVar5 = *(int *)(param_2 + 0x1c);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            uVar8 = uStack_28;
            uVar6 = *(uint *)(iVar5 + 0xc);
            if (uVar6 <= param_4) {
              func_0x01384bf4();
              uVar6 = *(uint *)(iVar5 + 0xc);
            }
            *(undefined4 *)(iVar5 + param_4 * 0x24 + 0x14) = uVar8;
            if (uVar6 <= param_4) {
              func_0x01384bf4();
            }
          }
          iVar5 = *(int *)(param_1 + 8);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *(int *)(iVar5 + 0x28);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          iVar5 = func_0x03470a60(iVar5,param_3,&uStack_2c,*puVar9);
          if (iVar5 != 0) {
            iVar5 = func_0x02b62b84(param_1,*(undefined4 *)(param_2 + 0x18),uStack_2c,&iStack_30);
            if (iVar5 == 0) {
              iVar5 = func_0x02b62ca0(param_1,*(undefined4 *)(param_2 + 0x18),param_3,uStack_2c,
                                      &uStack_40);
              if (iVar5 != 0) {
                iVar5 = *(int *)(param_2 + 0x1c);
                if (iVar5 == 0) {
                  func_0x01384bf0();
                }
                uVar3 = uStack_34;
                uVar2 = uStack_38;
                uVar1 = uStack_3c;
                uVar8 = uStack_40;
                if (*(uint *)(iVar5 + 0xc) <= param_4) {
                  func_0x01384bf4();
                }
                iVar5 = iVar5 + param_4 * 0x24;
                *(undefined4 *)(iVar5 + 0x18) = uVar8;
                *(undefined4 *)(iVar5 + 0x1c) = uVar1;
                *(undefined4 *)(iVar5 + 0x20) = uVar2;
                *(undefined4 *)(iVar5 + 0x24) = uVar3;
              }
            }
            else {
              iVar5 = *(int *)(param_2 + 0x1c);
              if (iVar5 == 0) {
                func_0x01384bf0();
              }
              iVar4 = iStack_30;
              if (iStack_30 == 0) {
                func_0x01384bf0();
              }
              uVar8 = *(undefined4 *)(iVar4 + 8);
              if (*(uint *)(iVar5 + 0xc) <= param_4) {
                func_0x01384bf4();
              }
              *(undefined4 *)(iVar5 + param_4 * 0x24 + 0x2c) = uVar8;
            }
          }
        }
      }
    }
  }
  else {
    iVar5 = func_0x0229f13c(0xb49,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x0218a160(iVar5,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityVisual$$Refresh RVA 0x2b52694 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b62694(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02b62830 + 0x2b626b4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b62834 + 0x2b626cc));
    func_0x01384978(*(undefined4 *)(_UNK_02b62838 + 0x2b626d8));
    *pcVar4 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0xb4c,0);
  if (iVar2 == 0) {
    iVar2 = FUN_02b61550(param_1);
    if (iVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_02b6283c + 0x2b62758) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x0244fb8c(param_2,0,0);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 8);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x14);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x03470a60(iVar2,param_3,&uStack_24,
                                **(undefined4 **)(_UNK_02b62840 + 0x2b627b4));
        if (iVar2 != 0) {
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(param_2 + 0x20);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if ((int)param_4 < *(int *)(iVar2 + 0xc)) {
            iVar2 = *(int *)(param_2 + 0x20);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar1 = uStack_24;
            uVar3 = *(uint *)(iVar2 + 0xc);
            if (uVar3 <= param_4) {
              func_0x01384bf4();
              uVar3 = *(uint *)(iVar2 + 0xc);
            }
            *(undefined4 *)(iVar2 + param_4 * 0x20 + 0x2c) = uVar1;
            if (uVar3 <= param_4) {
              func_0x01384bf4();
            }
          }
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb4c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0218a160(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityVisual$$Refresh RVA 0x2b52844 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b62844(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02b6293c + 0x2b62864);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b62940 + 0x2b62878));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4d,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02b62944 + 0x2b628dc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0244fb8c(param_2,0,0);
    if (iVar1 == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x02b62de4(param_1,*(undefined4 *)(param_2 + 0x10),param_3);
      func_0x02b630c0(param_1,*(undefined4 *)(param_2 + 0x10),param_3,param_2);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb4d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityVisual$$Refresh RVA 0x2b52948 =====

void FUN_02b62948(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0xb51,0);
  if (iVar1 == 0) {
    func_0x02b62de4(param_1,param_2,param_3);
    func_0x02b630c0(param_1,param_2,param_3,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xb51,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityVisual$$Refresh RVA 0x2b529d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b629d8(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_02b62b70 + 0x2b629f8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b62b74 + 0x2b62a0c));
    func_0x01384978(*(undefined4 *)(_UNK_02b62b78 + 0x2b62a18));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_24 = 0;
  uStack_38 = 0;
  iVar5 = func_0x0229f06c(0xb52,0);
  if (iVar5 == 0) {
    iVar5 = FUN_02b61550(param_1);
    if (iVar5 != 0) {
      if (*(int *)(**(int **)(_UNK_02b62b7c + 0x2b62aa0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar5 = func_0x0244fb8c(param_2,0,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x14);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x03470a60(iVar5,param_3,&uStack_24,
                                **(undefined4 **)(_UNK_02b62b80 + 0x2b62afc));
        if ((iVar5 != 0) &&
           (iVar5 = func_0x024507d8(uStack_24,&uStack_38,0), uVar4 = uStack_2c, uVar3 = uStack_30,
           uVar2 = uStack_34, uVar1 = uStack_38, iVar5 != 0)) {
          if (param_2 == (int *)0x0) {
            func_0x01384bf0();
          }
          (**(code **)(*param_2 + 0x178))
                    (param_2,uVar1,uVar2,uVar3,uVar4,*(undefined4 *)(*param_2 + 0x17c));
        }
      }
    }
  }
  else {
    iVar5 = func_0x0229f13c(0xb52,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar5,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityVisual$$TryGetMaterial RVA 0x2b52b84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02b62b84(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02b62c94 + 0x2b62ba4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b62c98 + 0x2b62bbc));
    *pcVar4 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0xb4a,0);
  if (iVar2 == 0) {
    uVar3 = 0;
    iVar2 = func_0x0482224c(param_3,&uStack_24,0);
    uVar1 = uStack_24;
    if (iVar2 == 0) {
      *param_4 = 0;
    }
    else {
      iVar2 = **(int **)(**(int **)(_UNK_02b62c9c + 0x2b62c48) + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01d0e49c(iVar2,uVar1,0);
      *param_4 = iVar2;
      uVar3 = (uint)(iVar2 != 0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0xb4a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021a98b0(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return uVar3;
}



// ===== FAT.ActivityVisual$$TryGetColor RVA 0x2b52ca0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_02b62ca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02b62dd8 + 0x2b62cc0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b62ddc + 0x2b62cd8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb4b,0);
  if (iVar1 == 0) {
    if (param_4 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x046716f4(param_4,0x23,0);
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = func_0x024507d8(param_4,param_5,0);
      uVar2 = 1;
      if (iVar1 != 0) {
        return 1;
      }
    }
    if (param_4 == 0) {
      func_0x01384bf0(uVar2);
    }
    if (*(int *)(param_4 + 8) == 6) {
      uVar2 = func_0x046634e0(**(undefined4 **)(_UNK_02b62de0 + 0x2b62da4),param_4,0);
      iVar1 = func_0x024507d8(uVar2,param_5,0);
      if (iVar1 != 0) {
        return 1;
      }
    }
    uVar2 = 0;
    *param_5 = 0;
    param_5[1] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_5[2] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_5[3] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  }
  else {
    iVar1 = func_0x0229f13c(0xb4b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021a9a1c(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return uVar2;
}



// ===== FAT.ActivityVisual$$RefreshStyle RVA 0x2b52de4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b62de4(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_02b6308c + 0x2b62e04);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b63090 + 0x2b62e18));
    func_0x01384978(*(undefined4 *)(_UNK_02b63094 + 0x2b62e24));
    func_0x01384978(*(undefined4 *)(_UNK_02b63098 + 0x2b62e30));
    func_0x01384978(*(undefined4 *)(_UNK_02b6309c + 0x2b62e3c));
    func_0x01384978(*(undefined4 *)(_UNK_02b630a0 + 0x2b62e48));
    func_0x01384978(*(undefined4 *)(_UNK_02b630a4 + 0x2b62e54));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_24 = 0;
  piStack_3c = (int *)0x0;
  uStack_38 = 0;
  iVar5 = func_0x0229f06c(0xb4e,0);
  if (iVar5 == 0) {
    iVar5 = FUN_02b61550(param_1);
    if (iVar5 != 0) {
      if (*(int *)(**(int **)(_UNK_02b630a8 + 0x2b62ee0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar5 = func_0x0244fb8c(param_2,0,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar5 + 0x28);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x03470a60(iVar5,param_3,&uStack_24,
                                **(undefined4 **)(_UNK_02b630ac + 0x2b62f3c));
        if (iVar5 != 0) {
          iVar5 = FUN_02b62ca0(param_1,param_2,param_3,uStack_24,&uStack_38);
          if (iVar5 == 0) {
            iVar5 = FUN_02b62b84(param_1,param_2,uStack_24,&piStack_3c);
            piVar1 = piStack_3c;
            if (iVar5 == 0) {
              uVar6 = func_0x046722b4(**(undefined4 **)(_UNK_02b630b8 + 0x2b63048),param_3,
                                      **(undefined4 **)(_UNK_02b630b4 + 0x2b6303c),uStack_24,0);
              if (*(int *)(**(int **)(_UNK_02b630bc + 0x2b63068) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x028c2874(uVar6,0);
            }
            else {
              if (piStack_3c == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar5 = *piVar1;
              (**(code **)(iVar5 + 0xe0))(piVar1,param_2,*(undefined4 *)(iVar5 + 0xe4));
            }
          }
          else {
            iVar5 = **(int **)(**(int **)(_UNK_02b630b0 + 0x2b62f78) + 0x5c);
            if (iVar5 == 0) {
              func_0x01384bf0();
            }
            func_0x01d0e5ac(iVar5,param_2,0);
            uVar4 = uStack_2c;
            uVar3 = uStack_30;
            uVar2 = uStack_34;
            uVar6 = uStack_38;
            if (param_2 == (int *)0x0) {
              func_0x01384bf0();
            }
            (**(code **)(*param_2 + 0x178))
                      (param_2,uVar6,uVar2,uVar3,uVar4,*(undefined4 *)(*param_2 + 0x17c));
          }
        }
      }
    }
  }
  else {
    iVar5 = func_0x0229f13c(0xb4e,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar5,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityVisual$$RefreshText RVA 0x2b530c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b630c0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_02b632d0 + 0x2b630e0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b632d4 + 0x2b630f8));
    func_0x01384978(*(undefined4 *)(_UNK_02b632d8 + 0x2b63104));
    func_0x01384978(*(undefined4 *)(_UNK_02b632dc + 0x2b63110));
    *pcVar3 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0xb50,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02b61550(param_1);
    if (iVar1 != 0) {
      piVar4 = *(int **)(_UNK_02b632e0 + 0x2b63190);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0244fb8c(param_2,0,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x2c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x03470a60(iVar1,param_3,&iStack_24,
                                **(undefined4 **)(_UNK_02b632e4 + 0x2b631ec));
        iVar1 = iStack_24;
        if (iVar2 != 0) {
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          iVar2 = func_0x046716f4(iVar1,0x23,0);
          iVar1 = iStack_24;
          if (iVar2 != 0) {
            if (*(int *)(**(int **)(_UNK_02b632e8 + 0x2b63234) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iStack_24 = func_0x028c1350(iVar1,0);
          }
          if (*(int *)(*piVar4 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar2 = func_0x0145b1cc(param_4,0,0);
          iVar1 = iStack_24;
          if (iVar2 == 0) {
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            func_0x0244ffc4(param_2,iVar1,1,0);
          }
          else {
            if (param_4 == 0) {
              func_0x01384bf0();
            }
            func_0x01982f34(param_4,iVar1,0);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xb50,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityVisual$$RefreshText RVA 0x2b532ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b632ec(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02b63598 + 0x2b6330c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b6359c + 0x2b63324));
    func_0x01384978(*(undefined4 *)(_UNK_02b635a0 + 0x2b63330));
    func_0x01384978(*(undefined4 *)(_UNK_02b635a4 + 0x2b6333c));
    func_0x01384978(*(undefined4 *)(_UNK_02b635a8 + 0x2b63348));
    *pcVar6 = '\x01';
  }
  uStack_2c = 0;
  piStack_30 = (int *)0x0;
  uStack_28 = 0;
  uStack_34 = 0;
  iVar2 = func_0x0229f06c(0x2ae4,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02788c24(param_2,param_3,&piStack_30,0);
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = piStack_30;
    }
    if (iVar2 != 0 && piVar1 != (int *)0x0) {
      piVar7 = *(int **)(_UNK_02b635ac + 0x2b633fc);
      iVar2 = *piVar1;
      iVar4 = *piVar7;
      uVar5 = (uint)*(byte *)(iVar4 + 0xb8);
      if ((*(byte *)(iVar2 + 0xb8) < uVar5) ||
         (*(int *)(*(int *)(iVar2 + 100) + uVar5 * 4 + -4) != iVar4)) {
        uVar5 = (uint)*(byte *)(**(int **)(_UNK_02b635b0 + 0x2b63430) + 0xb8);
        if (*(byte *)(iVar2 + 0xb8) < uVar5) {
          return;
        }
        if (*(int *)(*(int *)(iVar2 + 100) + uVar5 * 4 + -4) !=
            **(int **)(_UNK_02b635b0 + 0x2b63430)) {
          return;
        }
      }
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x2c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x03470a60(iVar2,param_3,&uStack_34,**(undefined4 **)(_UNK_02b635b4 + 0x2b63484))
      ;
      uVar3 = uStack_34;
      if (iVar2 != 0) {
        param_3 = piStack_30;
      }
      if (iVar2 != 0 && param_3 != (int *)0x0) {
        iVar2 = *param_3;
        uVar5 = (uint)*(byte *)(**(int **)(_UNK_02b635b8 + 0x2b634a8) + 0xb8);
        if ((*(byte *)(iVar2 + 0xb8) < uVar5) ||
           (*(int *)(*(int *)(iVar2 + 100) + uVar5 * 4 + -4) !=
            **(int **)(_UNK_02b635b8 + 0x2b634a8))) {
          iVar4 = *piVar7;
          uVar5 = (uint)*(byte *)(iVar4 + 0xb8);
          if ((uVar5 <= *(byte *)(iVar2 + 0xb8)) &&
             (*(int *)(*(int *)(iVar2 + 100) + uVar5 * 4 + -4) == iVar4)) {
            if (*(int *)(**(int **)(_UNK_02b635c0 + 0x2b63504) + 0x74) == 0) {
              func_0x01384ab4();
            }
            uVar3 = func_0x028c1688(uVar3,param_4,0);
            if (param_3 == (int *)0x0) {
              func_0x01384bf0();
            }
            (**(code **)(*param_3 + 0x2d0))(param_3,uVar3,*(undefined4 *)(*param_3 + 0x2d4));
          }
        }
        else {
          if (*(int *)(**(int **)(_UNK_02b635bc + 0x2b63560) + 0x74) == 0) {
            func_0x01384ab4();
          }
          uVar3 = func_0x028c1688(uVar3,param_4,0);
          func_0x01982f34(param_3,uVar3,0);
        }
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x2ae4,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02175714(iVar2,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.ActivityVisual$$.ctor RVA 0x2b535c4 =====

void FUN_02b635c4(void)

{
  return;
}



// ===== FAT.ActivityVisual.<ResEnumerate>d__34$$System.IDisposable.Dispose RVA 0x2b535cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b635cc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  if (*(int *)(param_1 + 8) != 3 && *(int *)(param_1 + 8) != -3) {
    return;
  }
  pcVar5 = (char *)(_UNK_02b63b28 + 0x2b63a88);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b63b2c + 0x2b63a9c));
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
      if (piVar4[-1] == **(int **)(_UNK_02b63b30 + 0x2b63ac8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02b63b14;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02b63b30 + 0x2b63ac8),0);
LAB_02b63b14:
                    /* WARNING: Could not recover jumptable at 0x02b63b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ActivityVisual.<ResEnumerate>d__34$$MoveNext RVA 0x2b535e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b635e4(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_02b63a30 + 0x2b635fc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b63a34 + 0x2b63610));
    func_0x01384978(*(undefined4 *)(_UNK_02b63a38 + 0x2b6361c));
    func_0x01384978(*(undefined4 *)(_UNK_02b63a3c + 0x2b63628));
    func_0x01384978(*(undefined4 *)(_UNK_02b63a40 + 0x2b63634));
    func_0x01384978(*(undefined4 *)(_UNK_02b63a44 + 0x2b63640));
    func_0x01384978(*(undefined4 *)(_UNK_02b63a48 + 0x2b6364c));
    func_0x01384978(*(undefined4 *)(_UNK_02b63a4c + 0x2b63658));
    *pcVar5 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x18);
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar6 + 8) == 0) {
      if (*(int *)(**(int **)(&UNK_02b638b4 + _UNK_02b63a50) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(**(undefined4 **)(&UNK_02b638d4 + _UNK_02b63a54),0);
      return 0;
    }
    uStack_24 = 0;
    uStack_28 = 0;
    func_0x03909584(&uStack_28,*(undefined4 *)(*(int *)(iVar6 + 8) + 0x18),1,
                    **(undefined4 **)(&UNK_02b636cc + _UNK_02b63a58));
    *(undefined4 *)(param_1 + 8) = 1;
    goto code_r0x02b63960;
  case 1:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    uStack_28 = 0;
    func_0x03909584(&uStack_28,*(undefined4 *)(iVar6 + 0x20),1,
                    **(undefined4 **)(&UNK_02b637e8 + _UNK_02b63a5c));
    uVar3 = 2;
    goto code_r0x02b6395c;
  case 2:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 8);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0x14);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    piVar7 = (int *)func_0x03471454(iVar6,**(undefined4 **)(&UNK_02b63738 + _UNK_02b63a60));
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    *(int **)(param_1 + 0x1c) = piVar7;
    break;
  case 3:
    piVar7 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    break;
  default:
    return 0;
  }
  if (piVar7 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar6 = *piVar7;
  uVar2 = (uint)*(ushort *)(iVar6 + 0xb6);
  if (uVar2 != 0) {
    piVar4 = (int *)(*(int *)(iVar6 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(&UNK_02b6377c + _UNK_02b63a70)) {
        puVar1 = (undefined4 *)(iVar6 + *piVar4 * 8 + 0xc0);
        goto code_r0x02b63820;
      }
      uVar2 = uVar2 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(&UNK_02b6377c + _UNK_02b63a70),0);
code_r0x02b63820:
  iVar6 = (*(code *)*puVar1)(piVar7,puVar1[1]);
  if (iVar6 == 0) {
    func_0x02b63a74(param_1);
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    piVar7 = *(int **)(param_1 + 0x1c);
    if (piVar7 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar6 = *piVar7;
    uVar2 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar2 != 0) {
      piVar4 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_02b63858 + _UNK_02b63a64)) {
          puVar1 = (undefined4 *)(iVar6 + *piVar4 * 8 + 0xc0);
          goto code_r0x02b638ec;
        }
        uVar2 = uVar2 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined4 *)func_0x014002dc(piVar7,**(int **)(&UNK_02b63858 + _UNK_02b63a64),0);
code_r0x02b638ec:
    (*(code *)*puVar1)(&uStack_28,piVar7,puVar1[1]);
    uStack_14 = uStack_24;
    uStack_18 = uStack_28;
    func_0x0435bc74(&uStack_18,&uStack_1c,&uStack_20,
                    **(undefined4 **)(&UNK_02b63910 + _UNK_02b63a68));
    uStack_24 = 0;
    uStack_28 = 0;
    func_0x03909584(&uStack_28,uStack_20,1,**(undefined4 **)(&UNK_02b63938 + _UNK_02b63a6c));
    uVar3 = 3;
code_r0x02b6395c:
    *(undefined4 *)(param_1 + 8) = uVar3;
code_r0x02b63960:
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0xc) = uStack_28;
    *(undefined4 *)(param_1 + 0x10) = uStack_24;
  }
  return uVar3;
}



// ===== FAT.ActivityVisual.<ResEnumerate>d__34$$<>m__Finally1 RVA 0x2b53a74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b63a74(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02b63b28 + 0x2b63a88);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b63b2c + 0x2b63a9c));
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
      if (piVar4[-1] == **(int **)(_UNK_02b63b30 + 0x2b63ac8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02b63b14;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02b63b30 + 0x2b63ac8),0);
LAB_02b63b14:
                    /* WARNING: Could not recover jumptable at 0x02b63b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.ActivityVisual.<ResEnumerate>d__34$$System.Collections.Generic.IEnumerator<(System.String,EL.Resource.AssetTag)>.get_Current RVA 0x2b53b34 =====

void FUN_02b63b34(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityVisual.<ResEnumerate>d__34$$System.Collections.IEnumerator.Reset RVA 0x2b53b48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b63b48(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r5;
  char *pcVar4;
  undefined1 in_ZR;
  byte in_CY;
  bool bVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  
  func_0x01384988(*(undefined4 *)(iRam02b63b84 + 0x2b63b58));
  puVar1 = (undefined *)func_0x01384be4();
  func_0x04827f0c(puVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam02b63b88 + 0x2b63b74));
  func_0x01384aa0(puVar1,uVar2);
  uVar7 = func_0x01384928();
  uVar3 = (uint)((ulonglong)uVar7 >> 0x20);
  bVar5 = false;
  bVar6 = in_CY;
  if ((bool)in_ZR) {
    bVar6 = 0xdfffffff < uVar3 || CARRY4(uVar3 + 0x20000000,(uint)in_CY);
    puVar1 = (undefined *)(uVar3 + 0x20000000 + (uint)in_CY);
    bVar5 = puVar1 == (undefined *)0x0;
  }
  if (bVar5) {
    puVar1 = &UNK_00bc0000 + (uint)bVar6 + unaff_r5;
  }
  pcVar4 = (char *)(_UNK_02b63be8 + 0x2b63ba4);
  puStack_18 = puVar1;
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b63bec + 0x2b63bb8));
    *pcVar4 = '\x01';
  }
  uStack_20 = *(undefined4 *)((int)uVar7 + 0xc);
  uStack_1c = *(undefined4 *)((int)uVar7 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_02b63bf0 + 0x2b63bd4),&uStack_20);
  return;
}



// ===== FAT.ActivityVisual.<ResEnumerate>d__34$$System.Collections.IEnumerator.get_Current RVA 0x2b53b8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b63b8c(int param_1)

{
  char *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_02b63be8 + 0x2b63ba4);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b63bec + 0x2b63bb8));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)(param_1 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_02b63bf0 + 0x2b63bd4),&uStack_18);
  return;
}



// ===== FAT.ActivityVisual.<ResEnumerate>d__34$$System.Collections.Generic.IEnumerable<(System.String,EL.Resource.AssetTag)>.GetEnumerator RVA 0x2b53bf4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b63bf4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_02b63c94 + 0x2b63c08);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b63c98 + 0x2b63c1c));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x048799ac(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b63c9c + 0x2b63c60));
    func_0x04874ed4(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x048799ac(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}



// ===== FAT.ActivityVisual.<ResEnumerate>d__34$$System.Collections.IEnumerable.GetEnumerator RVA 0x2b53ca0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_02b63bf4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_02b63c94 + 0x2b63c08);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b63c98 + 0x2b63c1c));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x048799ac(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b63c9c + 0x2b63c60));
    func_0x04874ed4(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x048799ac(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}


