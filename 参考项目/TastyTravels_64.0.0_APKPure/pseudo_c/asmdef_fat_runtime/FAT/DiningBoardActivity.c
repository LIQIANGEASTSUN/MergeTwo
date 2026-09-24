/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.DiningBoardActivity$$get_World RVA 0x2bfc990 =====

undefined4 FUN_02c0c990(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.DiningBoardActivity$$set_World RVA 0x2bfc998 =====

void FUN_02c0c998(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== FAT.DiningBoardActivity$$get_WorldTracer RVA 0x2bfc9a0 =====

undefined4 FUN_02c0c9a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.DiningBoardActivity$$set_WorldTracer RVA 0x2bfc9a8 =====

void FUN_02c0c9a8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



// ===== FAT.DiningBoardActivity$$get_Feature RVA 0x2bfc9b0 =====

undefined4 FUN_02c0c9b0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// ===== FAT.DiningBoardActivity$$get_UnlockCloudLevel RVA 0x2bfc9b8 =====

undefined4 FUN_02c0c9b8(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// ===== FAT.DiningBoardActivity$$set_UnlockCloudLevel RVA 0x2bfc9c0 =====

void FUN_02c0c9c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}



// ===== FAT.DiningBoardActivity$$add_CloudChanged RVA 0x2bfc9c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0c9c8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02c0ca6c + 0x2c0c9e0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0ca70 + 0x2c0c9f4));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_02c0ca74 + 0x2c0ca0c);
  iVar1 = *(int *)(param_1 + 0x58);
  do {
    iVar5 = 0;
    iVar2 = func_0x0487907c(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x58),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.DiningBoardActivity$$remove_CloudChanged RVA 0x2bfca78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0ca78(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02c0cb1c + 0x2c0ca90);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0cb20 + 0x2c0caa4));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_02c0cb24 + 0x2c0cabc);
  iVar1 = *(int *)(param_1 + 0x58);
  do {
    iVar5 = 0;
    iVar2 = func_0x0487929c(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x58),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.DiningBoardActivity$$SetBoardData RVA 0x2bfcb28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0cb28(int param_1,int param_2)

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
  
  iVar3 = func_0x0229f06c(0x7b36,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x7b36,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0x7c);
  }
  if (param_2 != 0 && iVar3 != 0) {
    func_0x02c0cc10(param_1,*(undefined4 *)(iVar3 + 0x14),0);
    if (*(int *)(param_1 + 0x48) != 0) {
      func_0x0214a9e8(*(int *)(param_1 + 0x48),param_2,0,0);
      func_0x02c0cf00(param_1);
      iVar3 = *(int *)(param_1 + 0x48);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x02139cf4(iVar3,0);
      uVar8 = *(undefined4 *)(param_1 + 0x54);
      iVar7 = *(int *)(param_1 + 0x60);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
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
      iVar1 = func_0x0229f06c(0x57b,0);
      if (iVar1 == 0) {
        func_0x020da680(&uStack_38,iVar3);
        iVar1 = *(int *)(iVar3 + 0x70);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0328fe1c(&uStack_30,iVar1,**(undefined4 **)(_UNK_020dca00 + 0x20dc8d4));
        puVar6 = *(undefined4 **)(_UNK_020dca04 + 0x20dc8ec);
        while (iVar2 = func_0x03f5f428(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
          if (iStack_24 == 0) {
            func_0x01384bf0();
          }
          func_0x0210c12c(iVar1,iStack_34,iVar7 - iStack_34,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0210c518(iVar1,uVar8,0);
        }
        func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_020dca08 + 0x20dc94c));
        func_0x020dca14(iVar3);
      }
      else {
        iVar1 = func_0x0229f13c(0x57b,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_40 = 0;
        func_0x02179a68(iVar1,iVar3,iVar7,uVar8);
      }
      return;
    }
  }
  return;
}



// ===== FAT.DiningBoardActivity$$InitWorld RVA 0x2bfcc10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0cc10(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_02c0ced4 + 0x2c0cc30);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0ced8 + 0x2c0cc44));
    func_0x01384978(*(undefined4 *)(_UNK_02c0cedc + 0x2c0cc50));
    func_0x01384978(*(undefined4 *)(_UNK_02c0cee0 + 0x2c0cc5c));
    func_0x01384978(*(undefined4 *)(_UNK_02c0cee4 + 0x2c0cc68));
    func_0x01384978(*(undefined4 *)(_UNK_02c0cee8 + 0x2c0cc74));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7b37,0);
  if (iVar2 == 0) {
    uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_02c0ceec + 0x2c0ccd8));
    func_0x02143488(uVar3,0);
    puVar4 = *(undefined4 **)(_UNK_02c0cef0 + 0x2c0ccf4);
    *(undefined4 *)(param_1 + 0x48) = uVar3;
    uVar3 = func_0x01384be4(*puVar4);
    func_0x0478dedc(uVar3,param_1,**(undefined4 **)(_UNK_02c0cef4 + 0x2c0cd14),0);
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02c0cef8 + 0x2c0cd28));
    func_0x0214d6c8(uVar5,uVar3,0,0);
    *(undefined4 *)(param_1 + 0x4c) = uVar5;
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar2 + 0x4c);
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02c0cefc + 0x2c0cd68));
    func_0x01db7f44(iVar2,0);
    uVar3 = *(undefined4 *)(param_1 + 0x48);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar2 + 8) = 0x11;
    *(undefined4 *)(iVar2 + 0xc) = uVar3;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x01db7f4c(iVar8,iVar2,0);
    uVar3 = *(undefined4 *)(param_1 + 0x48);
    iVar2 = *(int *)(param_1 + 0x4c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0214e900(iVar2,uVar3,0);
    iVar2 = *(int *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02141f58(iVar2,uVar3,0);
    iVar2 = func_0x01c24918(0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x4c);
    uVar3 = *(undefined4 *)(param_1 + 0x48);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    iStack_28 = param_3;
    iVar2 = func_0x01dbe654(iVar2,param_1,uVar3,param_2);
    if (iVar2 == 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x4c);
      uVar3 = *(undefined4 *)(param_1 + 0x48);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbc0ec(iVar2,uVar3,0);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x48);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x02142104(iVar2,param_1,0);
      if (param_3 != 0) {
        pcVar6 = (char *)(_UNK_02c0d090 + 0x2c0cf14);
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02c0d094 + 0x2c0cf28));
          func_0x01384978(*(undefined4 *)(_UNK_02c0d098 + 0x2c0cf34));
          func_0x01384978(*(undefined4 *)(_UNK_02c0d09c + 0x2c0cf40));
          func_0x01384978(*(undefined4 *)(_UNK_02c0d0a0 + 0x2c0cf4c));
          *pcVar6 = '\x01';
        }
        iVar2 = func_0x0229f06c(0x7b3c,0);
        if (iVar2 != 0) {
          iVar2 = func_0x0229f13c(0x7b3c,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_30 = 0;
          func_0x0245494c(&uStack_48,0,0);
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          iStack_28 = uStack_40;
          uStack_24 = uStack_3c;
          if (*(int *)(iVar2 + 0x10) != 0) {
            func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
          }
          func_0x01485278(&uStack_30,param_1,0);
          iVar8 = *(int *)(iVar2 + 8);
          uVar3 = *(undefined4 *)(iVar2 + 0xc);
          iVar2 = *(int *)(iVar2 + 0x10);
          if (iVar8 == 0) {
            func_0x01384bf0();
          }
          uVar5 = 2;
          if (iVar2 == 0) {
            uVar5 = 1;
          }
          func_0x0245495c(iVar8,uVar3,&uStack_30,uVar5,0,0);
          return;
        }
        if ((*(int *)(param_1 + 0x48) != 0) &&
           (iVar2 = func_0x02139cf4(*(int *)(param_1 + 0x48),0), iVar2 != 0)) {
          puVar9 = *(undefined4 **)(_UNK_02c0d0a4 + 0x2c0cfc4);
          uVar3 = func_0x01384be4(*puVar9);
          puVar10 = *(undefined4 **)(_UNK_02c0d0a8 + 0x2c0cfe0);
          func_0x03db6898(uVar3,param_1,*puVar10,0);
          func_0x020d8530(iVar2,uVar3,0);
          puVar11 = *(undefined4 **)(_UNK_02c0d0ac + 0x2c0d000);
          uVar3 = func_0x01384be4(*puVar11);
          puVar4 = *(undefined4 **)(_UNK_02c0d0b0 + 0x2c0d01c);
          func_0x03cd51ec(uVar3,param_1,*puVar4,0);
          func_0x020d8ed0(iVar2,uVar3,0);
          uVar3 = func_0x01384be4(*puVar9);
          func_0x03db6898(uVar3,param_1,*puVar10,0);
          func_0x020d8480(iVar2,uVar3,0);
          uVar3 = func_0x01384be4(*puVar11);
          func_0x03cd51ec(uVar3,param_1,*puVar4,0);
          pcVar6 = (char *)(_UNK_020d8ec4 + 0x20d8e38);
          if (*pcVar6 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_020d8ec8 + 0x20d8e4c),uVar3,0);
            *pcVar6 = '\x01';
          }
          puVar4 = *(undefined4 **)(_UNK_020d8ecc + 0x20d8e64);
          iVar8 = *(int *)(iVar2 + 0x28);
          do {
            iVar7 = 0;
            iVar1 = func_0x024507e8(iVar8,uVar3,0);
            if (iVar1 != 0) {
              uVar5 = *puVar4;
              iVar7 = func_0x01384ab8(iVar1,uVar5);
              if (iVar7 == 0) {
                func_0x01384fb4(iVar1,uVar5);
                iVar7 = 0;
              }
            }
            iVar1 = func_0x0138b0ec((int *)(iVar2 + 0x28),iVar7,iVar8);
            bVar12 = iVar8 != iVar1;
            iVar8 = iVar1;
          } while (bVar12);
          return;
        }
        return;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7b37,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iStack_28 = 0;
    func_0x0217f950(iVar2,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$BindBoardEvents RVA 0x2bfcf00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0cf00(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02c0d090 + 0x2c0cf14);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0d094 + 0x2c0cf28));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d098 + 0x2c0cf34));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d09c + 0x2c0cf40));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d0a0 + 0x2c0cf4c));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7b3c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7b3c,0);
    if (iVar2 == 0) {
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
    return;
  }
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (iVar2 = func_0x02139cf4(*(int *)(param_1 + 0x48),0), iVar2 != 0)) {
    puVar9 = *(undefined4 **)(_UNK_02c0d0a4 + 0x2c0cfc4);
    uVar6 = func_0x01384be4(*puVar9);
    puVar10 = *(undefined4 **)(_UNK_02c0d0a8 + 0x2c0cfe0);
    func_0x03db6898(uVar6,param_1,*puVar10,0);
    func_0x020d8530(iVar2,uVar6,0);
    puVar11 = *(undefined4 **)(_UNK_02c0d0ac + 0x2c0d000);
    uVar6 = func_0x01384be4(*puVar11);
    puVar8 = *(undefined4 **)(_UNK_02c0d0b0 + 0x2c0d01c);
    func_0x03cd51ec(uVar6,param_1,*puVar8,0);
    func_0x020d8ed0(iVar2,uVar6,0);
    uVar6 = func_0x01384be4(*puVar9);
    func_0x03db6898(uVar6,param_1,*puVar10,0);
    func_0x020d8480(iVar2,uVar6,0);
    uVar6 = func_0x01384be4(*puVar11);
    func_0x03cd51ec(uVar6,param_1,*puVar8,0);
    pcVar5 = (char *)(_UNK_020d8ec4 + 0x20d8e38);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_020d8ec8 + 0x20d8e4c),uVar6,0);
      *pcVar5 = '\x01';
    }
    puVar8 = *(undefined4 **)(_UNK_020d8ecc + 0x20d8e64);
    iVar4 = *(int *)(iVar2 + 0x28);
    do {
      iVar7 = 0;
      iVar1 = func_0x024507e8(iVar4,uVar6,0);
      if (iVar1 != 0) {
        uVar3 = *puVar8;
        iVar7 = func_0x01384ab8(iVar1,uVar3);
        if (iVar7 == 0) {
          func_0x01384fb4(iVar1,uVar3);
          iVar7 = 0;
        }
      }
      iVar1 = func_0x0138b0ec((int *)(iVar2 + 0x28),iVar7,iVar4);
      bVar12 = iVar4 != iVar1;
      iVar4 = iVar1;
    } while (bVar12);
    return;
  }
  return;
}



// ===== FAT.DiningBoardActivity$$FillBoardData RVA 0x2bfd0b4 =====

/* WARNING: Possible PIC construction at 0x02147e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02147e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0d0b4(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  char *pcVar11;
  int unaff_r4;
  undefined4 unaff_r5;
  int iVar12;
  undefined4 uVar13;
  undefined4 unaff_r6;
  undefined4 *puVar14;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  uint uVar15;
  int unaff_r9;
  undefined4 *puVar16;
  int unaff_r10;
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
  
  iVar4 = func_0x0229f06c(0x7b46,0);
  if (iVar4 == 0) {
    param_1 = *(int *)(param_1 + 0x48);
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
    iVar4 = func_0x0229f06c(0x5c6c,0);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x4c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar13 = *(undefined4 *)(iVar4 + 8);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_2 + 0x38) = uVar13;
      uVar17 = func_0x02140d24(param_1);
      uVar17 = func_0x01458584((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),1000,0);
      *(undefined8 *)(param_2 + 0x30) = uVar17;
      piVar1 = (int *)func_0x021566f4(0);
      if (piVar1 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar4 = *piVar1;
      uVar7 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_021488b8 + 0x2147e74)) {
            puVar2 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
            goto LAB_02147ebc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_021488b8 + 0x2147e74),0);
LAB_02147ebc:
      (*(code *)*puVar2)(piVar1,puVar2[1]);
      uVar13 = *(undefined4 *)(param_1 + 0x94);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(param_2 + 0x3c) = uVar13;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x021139b0(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 0x54);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02148958(iVar4,param_2);
      iVar4 = *(int *)(param_1 + 0x58);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02139e7c(iVar4,param_2);
      iVar4 = *(int *)(param_1 + 0x5c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x0215ea7c(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 0x60);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x01db6828(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 100);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02110804(iVar4,param_2,0);
      iVar4 = *(int *)(param_1 + 0x4c);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x020dc720(iVar4,aiStack_28,0);
      iVar4 = aiStack_28[0];
      iStack_b4 = param_2;
      if (iVar6 != 0) {
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        func_0x0325a3b4(&uStack_b0,iVar4,**(undefined4 **)(_UNK_021488bc + 0x2147fe8));
        uStack_38 = uStack_b0;
        uStack_34 = uStack_ac;
        uStack_30 = uStack_a8;
        uStack_2c = uStack_a4;
        puVar2 = *(undefined4 **)(_UNK_021488c0 + 0x2148004);
        puVar14 = *(undefined4 **)(_UNK_021488c4 + 0x214800c);
        while (iVar4 = func_0x03f597e0(unaff_r8,*puVar2), uVar7 = uStack_2c, iVar4 != 0) {
          iVar4 = *(int *)(param_2 + 0x6c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x0364baf8(iVar4,uVar7,*puVar14);
        }
        func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_021488c8 + 0x2148050));
      }
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x40);
      uVar17 = func_0x02140d24(param_1);
      uVar7 = *(uint *)(param_1 + 0x44);
      iVar4 = *(int *)(param_1 + 0x6c);
      uVar13 = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_2 + 0x44) = uVar13;
      uVar17 = func_0x01458584((uint)uVar17 - uVar7,
                               (int)((ulonglong)uVar17 >> 0x20) -
                               (((int)uVar7 >> 0x1f) + (uint)((uint)uVar17 < uVar7)),1000,0);
      *(undefined8 *)(param_2 + 0x10) = uVar17;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar4 + 0x10)) {
        iVar4 = *(int *)(param_1 + 0x6c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02454910(&uStack_b0,iVar4,**(undefined4 **)(_UNK_021488d0 + 0x21480dc));
        uVar7 = 0;
        uVar15 = 0;
        uStack_48 = uStack_b0;
        uStack_44 = uStack_ac;
        uStack_40 = uStack_a8;
        uStack_3c = uStack_a4;
        puVar2 = *(undefined4 **)(_UNK_021488d4 + 0x2148104);
        while (iVar4 = func_0x03f5a2cc(&uStack_48,*puVar2), iVar4 != 0) {
          uVar3 = uStack_3c & 0x3f;
          uVar8 = uVar3 - 0x20;
          uVar5 = 1 << uVar3;
          if (-1 < (int)uVar8) {
            uVar5 = 0;
          }
          uVar7 = uVar5 | uVar7;
          uVar5 = 1 >> (0x20 - uVar3 & 0xff);
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
      iVar4 = *(int *)(param_1 + 0x9c);
      iStack_b8 = param_1;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar4,**(undefined4 **)(_UNK_021488e4 + 0x2148190));
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      uStack_58 = uStack_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      puVar14 = *(undefined4 **)(_UNK_021488e8 + 0x21481bc);
      puVar2 = *(undefined4 **)(_UNK_021488ec + 0x21481c4);
      while (iVar4 = func_0x03f9b324(&uStack_60,*puVar14), uVar7 = uStack_54, iVar4 != 0) {
        iVar4 = (int)uStack_50;
        iVar12 = *(int *)(iStack_b4 + 0x50);
        iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_021488f4 + 0x21481ec));
        func_0x01797598(iVar6,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148a58(iVar4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar6 + 0x10) = uVar13;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148aac(iVar4);
        *(undefined4 *)(iVar6 + 0xc) = uVar13;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar12,uVar7,iVar6,*puVar2);
      }
      func_0x03f9b464(&uStack_60,**(undefined4 **)(_UNK_021488f8 + 0x214826c));
      iVar4 = *(int *)(iStack_b8 + 0x98);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar4,**(undefined4 **)(_UNK_02148900 + 0x214829c));
      uStack_78 = uStack_b0;
      uStack_74 = uStack_ac;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
      uStack_68 = uStack_a0;
      puVar2 = *(undefined4 **)(_UNK_02148904 + 0x21482c8);
      puVar14 = *(undefined4 **)(_UNK_02148908 + 0x21482d0);
      puVar16 = *(undefined4 **)(_UNK_0214890c + 0x21482d8);
      while (iVar4 = func_0x03f9b324(&uStack_78,*puVar2), uVar7 = uStack_6c, iVar4 != 0) {
        iVar4 = (int)uStack_68;
        uVar13 = func_0x01384be4(*puVar14);
        func_0x01798ae4(uVar13,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02148b00(iVar4,uVar13);
        iVar4 = *(int *)(iStack_b4 + 0x58);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar4,uVar7,uVar13,*puVar16);
      }
      func_0x03f9b464(&uStack_78,**(undefined4 **)(_UNK_02148914 + 0x2148354));
      iVar6 = iStack_b4;
      iVar4 = iStack_b8;
      uVar13 = **(undefined4 **)(_UNK_0214891c + 0x2148368);
      *(int *)(iStack_b8 + 0xa4) = iStack_b4;
      uVar13 = func_0x01384be4(uVar13);
      func_0x03ccb96c(uVar13,iVar4,**(undefined4 **)(_UNK_02148920 + 0x2148390),0);
      func_0x021475dc(iVar4,uVar13,0x7fffffff);
      iVar12 = *(int *)(iVar4 + 0x68);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_b0,iVar12,**(undefined4 **)(_UNK_02148924 + 0x21483d0));
      uStack_88 = uStack_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      puVar2 = *(undefined4 **)(_UNK_02148928 + 0x21483ec);
      puVar14 = *(undefined4 **)(_UNK_0214892c + 0x21483f4);
      while (iVar12 = func_0x03f5f428(&uStack_88,*puVar2), uVar7 = uStack_7c, iVar12 != 0) {
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
      iVar6 = *(int *)(iVar4 + 0x34);
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
      puVar2 = *(undefined4 **)(_UNK_02148944 + 0x21484c8);
      while (iVar6 = func_0x03f9b9f8(&uStack_98,*puVar2), iVar6 != 0) {
        if (uStack_8c != 0) {
          func_0x02148de8(iVar4);
        }
      }
      func_0x03f9b9f4(&uStack_98,**(undefined4 **)(_UNK_0214894c + 0x21484fc));
      return;
    }
    iVar4 = func_0x0229f13c(0x5c6c,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2147e08;
    unaff_r4 = iVar4;
    unaff_r9 = param_2;
    unaff_r10 = param_1;
    register0x00000054 = (BADSPACEBASE *)&iStack_b8;
  }
  else {
    iVar4 = func_0x0229f13c(0x7b46,0);
    if (iVar4 == 0) {
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
  iVar6 = *(int *)(iVar4 + 0x10);
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
  iVar6 = *(int *)(iVar4 + 8);
  uVar13 = *(undefined4 *)(iVar4 + 0xc);
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar10 = 3;
  if (iVar4 == 0) {
    uVar10 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar13,(undefined1 *)((int)register0x00000054 + -0x38),uVar10);
  return;
}



// ===== FAT.DiningBoardActivity$$ClearBoardData RVA 0x2bfd128 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0d128(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02c0d2ec + 0x2c0d13c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0d2f0 + 0x2c0d150));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d2f4 + 0x2c0d15c));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d2f8 + 0x2c0d168));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d2fc + 0x2c0d174));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b47,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b47,0);
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
  if (*(int *)(param_1 + 0x48) != 0) {
    func_0x021421a8(*(int *)(param_1 + 0x48),param_1,0);
    if (*(int *)(param_1 + 0x48) != 0) {
      iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x48),0);
      if (iVar1 != 0) {
        uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02c0d300 + 0x2c0d208));
        func_0x03db6898(uVar5,param_1,**(undefined4 **)(_UNK_02c0d304 + 0x2c0d224),0);
        func_0x020d8530(iVar1,uVar5,0);
        uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02c0d308 + 0x2c0d248));
        func_0x03cd51ec(uVar5,param_1,**(undefined4 **)(_UNK_02c0d30c + 0x2c0d264),0);
        func_0x020d8ed0(iVar1,uVar5,0);
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x4c);
        uVar5 = *(undefined4 *)(param_1 + 0x48);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01dbc0ec(iVar1,uVar5,0);
      }
      goto LAB_02c0d2dc;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
LAB_02c0d2dc:
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}



// ===== FAT.DiningBoardActivity$$InitBoardConfig RVA 0x2bfd310 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0d310(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02c0d510 + 0x2c0d328);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0d514 + 0x2c0d33c));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d518 + 0x2c0d348));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d51c + 0x2c0d354));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d520 + 0x2c0d360));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d524 + 0x2c0d36c));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d528 + 0x2c0d378));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7b48,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7b48,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_30 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
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
    func_0x0245495c(iVar4,uVar6,&iStack_30,uVar3,0,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x03d390e8(iVar2,**(undefined4 **)(_UNK_02c0d52c + 0x2c0d3e4));
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 != 0) {
    iVar4 = 0;
    puVar8 = *(undefined4 **)(_UNK_02c0d530 + 0x2c0d410);
    piVar9 = *(int **)(_UNK_02c0d534 + 0x2c0d418);
    puVar10 = *(undefined4 **)(_UNK_02c0d538 + 0x2c0d420);
    while( true ) {
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x1c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar2 + 0xc) <= iVar4) break;
      iVar2 = *(int *)(param_1 + 0x7c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x1c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x03653d1c(iVar2,iVar4,*puVar8);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&iStack_30,uVar6,0);
      uVar1 = uStack_2c;
      iVar2 = iStack_30;
      if ((0 < iStack_30) && (uStack_2c < 2)) {
        iVar7 = *(int *)(param_1 + 0x3c);
        uStack_2c = 0;
        iStack_30 = 0;
        func_0x038fe198(&iStack_30,iVar2,uVar1,**(undefined4 **)(_UNK_02c0d53c + 0x2c0d4c4));
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = *puVar10;
        func_0x03d38e8c(iVar7,iVar4,iStack_30,uStack_2c);
      }
      iVar2 = *(int *)(param_1 + 0x7c);
      iVar4 = iVar4 + 1;
    }
  }
  return;
}



// ===== FAT.DiningBoardActivity$$OnBoardItemChange RVA 0x2bfd540 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0d540(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x7b39,0);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_02c06e70();
    }
    param_1 = *(int *)(param_1 + 0x44);
    if (param_1 == 0) {
      return;
    }
    iVar2 = func_0x0229f06c(0x785a,0);
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
        iVar2 = FUN_02c067c8(param_1);
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
      iVar2 = func_0x0229f13c(0x785a,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7b39,0);
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



// ===== FAT.DiningBoardActivity$$OnItemMerge RVA 0x2bfd5b0 =====

void FUN_02c0d5b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x0229f06c(0x7b3d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b3d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    iStack_28 = param_4;
    func_0x02175714(iVar1,param_1,param_2,param_3);
    return;
  }
  func_0x02c0d63c(param_1,param_4);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x7b41,0);
  if (iVar1 == 0) {
    if ((param_4 != 0) && (iVar1 = func_0x02c105cc(param_1), iVar1 == 0)) {
      iVar5 = *(int *)(param_1 + 0x68);
      iVar7 = iVar5 + 1;
      iVar1 = func_0x02c10650(param_1,iVar7);
      if ((iVar1 != 0) &&
         (iVar4 = *(int *)(iVar1 + 0x18), iVar1 = func_0x0210e2d4(param_4,0), iVar4 == iVar1)) {
        func_0x02c0da40(&uStack_38,param_1);
        *(int *)(param_1 + 0x68) = iVar7;
        *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
        uVar2 = func_0x02c10524(param_1);
        iVar1 = *(int *)(param_1 + 0x7c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar6 = *(undefined4 *)(iVar1 + 0x20);
        iVar1 = func_0x02c10524(param_1);
        uVar3 = func_0x02c10764(param_1);
        func_0x02318cd0(param_1,iVar5 + 2,uVar2,uVar6,iVar7 - iVar1 == -1,uVar3,
                        *(undefined4 *)(param_1 + 0x60),0);
        func_0x02c0dc7c(param_1,&uStack_38);
        iVar1 = *(int *)(param_1 + 0x11c);
        if (iVar1 != 0) {
          uVar2 = func_0x0210e2d4(param_4,0);
          (**(code **)(iVar1 + 0xc))
                    (*(undefined4 *)(iVar1 + 0x20),iVar7,uVar2,*(undefined4 *)(iVar1 + 0x14));
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7b41,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_4,0);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$TryAutoUnlockCloud RVA 0x2bfd63c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0d63c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_02c0d740 + 0x2c0d658);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0d744 + 0x2c0d66c));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x7b3e,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
      uVar4 = *(undefined4 *)(param_1 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x03d3ad34(iVar1,uVar4,&iStack_20,**(undefined4 **)(_UNK_02c0d748 + 0x2c0d6f8));
      iVar1 = iStack_20;
      if (((iVar2 != 0) && (iStack_1c == 0)) && (iVar2 = func_0x0210e2d4(param_2,0), iVar1 == iVar2)
         ) {
        func_0x02c0d950(param_1,param_2);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7b3e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$TryUnlockBuilding RVA 0x2bfd74c =====

void FUN_02c0d74c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x7b41,0);
  if (iVar1 == 0) {
    if ((param_2 != 0) && (iVar1 = func_0x02c105cc(param_1), iVar1 == 0)) {
      iVar5 = *(int *)(param_1 + 0x68);
      iVar7 = iVar5 + 1;
      iVar1 = func_0x02c10650(param_1,iVar7);
      if ((iVar1 != 0) &&
         (iVar4 = *(int *)(iVar1 + 0x18), iVar1 = func_0x0210e2d4(param_2,0), iVar4 == iVar1)) {
        func_0x02c0da40(&uStack_38,param_1);
        *(int *)(param_1 + 0x68) = iVar7;
        *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
        uVar2 = func_0x02c10524(param_1);
        iVar1 = *(int *)(param_1 + 0x7c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar6 = *(undefined4 *)(iVar1 + 0x20);
        iVar1 = func_0x02c10524(param_1);
        uVar3 = func_0x02c10764(param_1);
        func_0x02318cd0(param_1,iVar5 + 2,uVar2,uVar6,iVar7 - iVar1 == -1,uVar3,
                        *(undefined4 *)(param_1 + 0x60),0);
        func_0x02c0dc7c(param_1,&uStack_38);
        iVar1 = *(int *)(param_1 + 0x11c);
        if (iVar1 != 0) {
          uVar2 = func_0x0210e2d4(param_2,0);
          (**(code **)(iVar1 + 0xc))
                    (*(undefined4 *)(iVar1 + 0x20),iVar7,uVar2,*(undefined4 *)(iVar1 + 0x14));
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7b41,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$OnItemSpawn RVA 0x2bfd8c8 =====

void FUN_02c0d8c8(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  
  iVar3 = func_0x0229f06c(0x7b45,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x7b45,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02174858(iVar3,param_1,param_2,param_3);
    return;
  }
  FUN_02c0d63c(param_1,param_3);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  iVar3 = func_0x0229f06c(0x7b41,0);
  if (iVar3 == 0) {
    if ((param_3 != 0) && (iVar3 = func_0x02c105cc(param_1), iVar3 == 0)) {
      iVar5 = *(int *)(param_1 + 0x68);
      iVar7 = iVar5 + 1;
      iVar3 = func_0x02c10650(param_1,iVar7);
      if ((iVar3 != 0) &&
         (iVar4 = *(int *)(iVar3 + 0x18), iVar3 = func_0x0210e2d4(param_3,0), iVar4 == iVar3)) {
        func_0x02c0da40(&uStack_38,param_1);
        *(int *)(param_1 + 0x68) = iVar7;
        *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
        uVar1 = func_0x02c10524(param_1);
        iVar3 = *(int *)(param_1 + 0x7c);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        uVar6 = *(undefined4 *)(iVar3 + 0x20);
        iVar3 = func_0x02c10524(param_1);
        uVar2 = func_0x02c10764(param_1);
        func_0x02318cd0(param_1,iVar5 + 2,uVar1,uVar6,iVar7 - iVar3 == -1,uVar2,
                        *(undefined4 *)(param_1 + 0x60),0);
        func_0x02c0dc7c(param_1,&uStack_38);
        iVar3 = *(int *)(param_1 + 0x11c);
        if (iVar3 != 0) {
          uVar1 = func_0x0210e2d4(param_3,0);
          (**(code **)(iVar3 + 0xc))
                    (*(undefined4 *)(iVar3 + 0x20),iVar7,uVar1,*(undefined4 *)(iVar3 + 0x14));
        }
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x7b41,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar3,param_1,param_3,0);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$CompleteCloudUnlock RVA 0x2bfd950 =====

void FUN_02c0d950(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uStack_18 = 0;
  iVar1 = func_0x0229f06c(0x7b3f,0);
  if (iVar1 == 0) {
    func_0x02c0da40(&uStack_28,param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    if ((*(int *)(param_1 + 0x48) != 0) &&
       (iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x48),0), iVar1 != 0)) {
      func_0x020dc7e4(iVar1,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x54),0);
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_02c06e70();
    }
    func_0x02c0dc7c(param_1,&uStack_28);
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7b3f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$CaptureUIState RVA 0x2bfda40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0da40(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_02c0dc4c + 0x2c0da5c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0dc50 + 0x2c0da70));
    func_0x01384978(*(undefined4 *)(_UNK_02c0dc54 + 0x2c0da7c));
    func_0x01384978(*(undefined4 *)(_UNK_02c0dc58 + 0x2c0da88));
    func_0x01384978(*(undefined4 *)(_UNK_02c0dc5c + 0x2c0da94));
    func_0x01384978(*(undefined4 *)(_UNK_02c0dc60 + 0x2c0daa0));
    *pcVar5 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x615,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 0x70);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d59ba4(iVar1,**(undefined4 **)(_UNK_02c0dc64 + 0x2c0db2c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03829600(&uStack_40,iVar1,**(undefined4 **)(_UNK_02c0dc68 + 0x2c0db58));
    iVar1 = 0;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    iStack_1c = iStack_34;
    puVar6 = *(undefined4 **)(_UNK_02c0dc6c + 0x2c0db78);
    while (iVar2 = func_0x03f99eb8(&uStack_28,*puVar6), iVar2 != 0) {
      iVar1 = iStack_1c + iVar1;
    }
    func_0x03f99eb4(&uStack_28,**(undefined4 **)(_UNK_02c0dc70 + 0x2c0dba0));
    param_1[3] = *(undefined4 *)(param_2 + 0x54);
    uVar3 = *(undefined4 *)(param_2 + 100);
    uVar4 = *(undefined4 *)(param_2 + 0x6c);
    param_1[2] = *(undefined4 *)(param_2 + 0x68);
    *param_1 = uVar3;
    param_1[1] = uVar4;
    param_1[4] = iVar1;
  }
  else {
    iVar1 = func_0x0229f13c(0x615,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021906f0(&uStack_40,iVar1,param_2,0);
    *param_1 = uStack_40;
    param_1[1] = uStack_3c;
    param_1[2] = uStack_38;
    param_1[3] = iStack_34;
    param_1[4] = uStack_30;
  }
  return;
}



// ===== FAT.DiningBoardActivity$$NotifyUIStateChanged RVA 0x2bfdc7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0dc7c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  iVar2 = func_0x0229f06c(0x619,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x619,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02190948 + 0x2190834);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0219094c + 0x2190848),param_1,param_2,0);
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
    uStack_50 = *param_2;
    uStack_4c = param_2[1];
    uStack_48 = param_2[2];
    uStack_44 = param_2[3];
    uStack_40 = param_2[4];
    uVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02190950 + 0x21908a0),&uStack_50);
    func_0x01485288(&uStack_38,uVar1,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x014852b8(&uStack_38,0,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar1,&uStack_38,uVar3,1,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x118);
  if (iVar2 != 0) {
    uStack_3c = param_2[2];
    uVar3 = *param_2;
    uVar6 = param_2[1];
    uVar1 = param_2[3];
    uVar7 = param_2[4];
    FUN_02c0da40(&uStack_38,param_1);
    uStack_44 = *(undefined4 *)(iVar2 + 0x14);
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    uStack_48 = uStack_28;
    (**(code **)(iVar2 + 0xc))
              (*(undefined4 *)(iVar2 + 0x20),uVar3,uVar6,uStack_3c,uVar1,uVar7,uStack_38,uStack_34);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$UnlockCloudIsGetChessItem RVA 0x2bfdd3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c0dd3c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar4 = (char *)(_UNK_02c0de10 + 0x2c0dd54);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0de14 + 0x2c0dd68));
    *pcVar4 = '\x01';
  }
  iStack_14 = 0;
  uStack_18 = 0;
  iVar1 = func_0x0229f06c(0x7b49,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    uVar3 = *(undefined4 *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d3ad34(iVar1,uVar3,&uStack_18,**(undefined4 **)(_UNK_02c0de18 + 0x2c0dde8));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = (uint)(iStack_14 == 0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7b49,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
  }
  return uVar2;
}



// ===== FAT.DiningBoardActivity$$GetCloudIdList RVA 0x2bfde1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c0de1c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_02c0e0ec + 0x2c0de34);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0e0f0 + 0x2c0de48));
    func_0x01384978(*(undefined4 *)(_UNK_02c0e0f4 + 0x2c0de54));
    func_0x01384978(*(undefined4 *)(_UNK_02c0e0f8 + 0x2c0de60));
    func_0x01384978(*(undefined4 *)(_UNK_02c0e0fc + 0x2c0de6c));
    func_0x01384978(*(undefined4 *)(_UNK_02c0e100 + 0x2c0de78));
    func_0x01384978(*(undefined4 *)(_UNK_02c0e104 + 0x2c0de84));
    func_0x01384978(*(undefined4 *)(_UNK_02c0e108 + 0x2c0de90));
    func_0x01384978(*(undefined4 *)(_UNK_02c0e10c + 0x2c0de9c));
    func_0x01384978(*(undefined4 *)(_UNK_02c0e110 + 0x2c0dea8));
    *pcVar3 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x7b4a,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x03d38b90(iVar1,**(undefined4 **)(_UNK_02c0e114 + 0x2c0df28));
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02c0e118 + 0x2c0df40));
    func_0x03258f24(iVar1,uVar2,**(undefined4 **)(_UNK_02c0e11c + 0x2c0df58));
    iVar4 = *(int *)(param_1 + 0x3c);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x03d38cc0(iVar4,**(undefined4 **)(_UNK_02c0e120 + 0x2c0df7c));
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x038253bc(&uStack_38,iVar4,**(undefined4 **)(_UNK_02c0e124 + 0x2c0dfa8));
    puVar8 = *(undefined4 **)(_UNK_02c0e128 + 0x2c0dfc0);
    piVar7 = *(int **)(_UNK_02c0e12c + 0x2c0dfc8);
    while (iVar4 = func_0x03f94754(&uStack_38,*puVar8), uVar2 = uStack_2c, iVar4 != 0) {
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar4 = *(int *)(iVar1 + 8);
      uVar5 = *(uint *)(iVar1 + 0xc);
      iVar6 = *piVar7;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      if (uVar5 < *(uint *)(iVar4 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar5 + 1;
        *(undefined4 *)(iVar4 + uVar5 * 4 + 0x10) = uVar2;
      }
      else {
        func_0x0325970c(iVar1,uVar2,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x38))
        ;
      }
    }
    func_0x03f94750(&uStack_38,**(undefined4 **)(_UNK_02c0e130 + 0x2c0e054));
  }
  else {
    iVar1 = func_0x0229f13c(0x7b4a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021a9e7c(iVar1,param_1,0);
  }
  return iVar1;
}



// ===== FAT.DiningBoardActivity$$ActivityUpdate RVA 0x2bfe13c =====

void FUN_02c0e13c(int param_1,float param_2)

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
  
  iVar1 = func_0x0229f06c(0x7b4b,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x44);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x78a6,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x14) != '\0') {
        param_2 = *(float *)(param_1 + 0x10) + param_2;
        *(float *)(param_1 + 0x10) = param_2;
        if (param_2 <= 1.0) {
          return;
        }
        FUN_02c06384(param_1);
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
    iVar1 = func_0x0229f13c(0x7b4b,0);
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



// ===== FAT.DiningBoardActivity$$InitBoardMoveHandler RVA 0x2bfe1ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0e1ac(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02c0e25c + 0x2c0e1c4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0e260 + 0x2c0e1d8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b4c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b4c,0);
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
  uVar2 = *(undefined4 *)(param_1 + 0x60);
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02c0e264 + 0x2c0e234));
  FUN_02c06bbc(uVar5,param_1,2,uVar2);
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  return;
}



// ===== FAT.DiningBoardActivity$$GetMoveNeedRowCount RVA 0x2bfe268 =====

undefined4 FUN_02c0e268(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x7b4d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b4d,0);
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



// ===== FAT.DiningBoardActivity$$GetMoveCountByRowId RVA 0x2bfe2c4 =====

undefined4 FUN_02c0e2c4(undefined4 param_1,undefined4 param_2)

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
  iVar1 = func_0x0229f06c(0x7b4e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b4e,0);
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
  iVar1 = func_0x017cba88(param_2,0);
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x18);
  }
  return uVar4;
}



// ===== FAT.DiningBoardActivity$$FAT.IBoardMoveAdapter.GetBoard RVA 0x2bfe338 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c0e338(int *param_1)

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
  
  iVar2 = func_0x0229f06c(0x7b4f,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)param_1[0x12];
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
    iVar2 = func_0x0229f13c(0x7b4f,0);
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



// ===== FAT.DiningBoardActivity$$OnDepthIndexUpdate RVA 0x2bfe3b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0e3b8(int param_1,undefined4 param_2)

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
  
  iVar3 = func_0x0229f06c(0x7b50,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x7b50,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar4,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x60) = param_2;
  if ((*(int *)(param_1 + 0x48) != 0) &&
     (iVar3 = func_0x02139cf4(*(int *)(param_1 + 0x48),0), iVar3 != 0)) {
    uVar8 = *(undefined4 *)(param_1 + 0x54);
    iVar7 = *(int *)(param_1 + 0x60);
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
    iVar1 = func_0x0229f06c(0x57b,0);
    if (iVar1 == 0) {
      func_0x020da680(&uStack_38,iVar3);
      iVar1 = *(int *)(iVar3 + 0x70);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_30,iVar1,**(undefined4 **)(_UNK_020dca00 + 0x20dc8d4));
      puVar6 = *(undefined4 **)(_UNK_020dca04 + 0x20dc8ec);
      while (iVar2 = func_0x03f5f428(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
        if (iStack_24 == 0) {
          func_0x01384bf0();
        }
        func_0x0210c12c(iVar1,iStack_34,iVar7 - iStack_34,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0210c518(iVar1,uVar8,0);
      }
      func_0x03f5f424(&uStack_30,**(undefined4 **)(_UNK_020dca08 + 0x20dc94c));
      func_0x020dca14(iVar3);
    }
    else {
      iVar1 = func_0x0229f13c(0x57b,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_40 = 0;
      func_0x02179a68(iVar1,iVar3,iVar7,uVar8);
    }
    return;
  }
  return;
}



// ===== FAT.DiningBoardActivity$$GetRowConfIdList RVA 0x2bfe444 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c0e444(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x7b51,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b51,0);
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
  uVar4 = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x14);
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 0;
  iVar1 = func_0x01dbd5a4(iVar1,uVar4,0);
  uVar4 = 0;
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(iVar1 + 0x28);
  }
  iVar1 = func_0x017ca798(uVar4,0);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
  }
  return uVar2;
}



// ===== FAT.DiningBoardActivity$$GetRowConfStr RVA 0x2bfe50c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c0e50c(undefined4 param_1,undefined4 param_2)

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
  
  pcVar5 = (char *)(_UNK_02c0e5b8 + 0x2c0e524);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0e5bc + 0x2c0e538));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b52,0);
  if (iVar1 == 0) {
    iVar3 = func_0x017cba88(param_2,0);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x14);
    }
    if (iVar3 == 0 || iVar1 == 0) {
      iVar1 = **(int **)(**(int **)(_UNK_02c0e5c0 + 0x2c0e5ac) + 0x5c);
    }
    return iVar1;
  }
  iVar1 = func_0x0229f13c(0x7b52,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_02198f18 + 0x2198e24);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02198f1c + 0x2198e38),param_1,param_2,0);
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
  iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02198f20 + 0x2198f08));
  return iVar1;
}



// ===== FAT.DiningBoardActivity$$GetCycleStartRowId RVA 0x2bfe5c4 =====

undefined4 FUN_02c0e5c4(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x7b53,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b53,0);
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



// ===== FAT.DiningBoardActivity$$InitBoardExtremeHandler RVA 0x2bfe620 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0e620(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02c0e6bc + 0x2c0e634);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0e6c0 + 0x2c0e648));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b54,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b54,0);
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
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02c0e6c4 + 0x2c0e6a0));
  FUN_02c05f90(uVar5,param_1,2);
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  return;
}



// ===== FAT.DiningBoardActivity$$CanCheckExtreme RVA 0x2bfe6c8 =====

uint FUN_02c0e6c8(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x7b55,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7b55,0);
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
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar1 = FUN_02c07260();
    return uVar1 ^ 1;
  }
  return 1;
}



// ===== FAT.DiningBoardActivity$$FAT.IBoardExtremeAdapter.GetBoard RVA 0x2bfe734 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c0e734(int *param_1)

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
  
  iVar2 = func_0x0229f06c(0x7b56,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)param_1[0x12];
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
    iVar2 = func_0x0229f13c(0x7b56,0);
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



// ===== FAT.DiningBoardActivity$$CheckBoardExtremeCase RVA 0x2bfe7b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0e7b4(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x7b57,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x44);
    if (param_1 == 0) {
      return;
    }
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
        iVar2 = FUN_02c067c8(param_1);
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
  }
  else {
    iVar2 = func_0x0229f13c(0x7b57,0);
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



// ===== FAT.DiningBoardActivity$$IsReadyToMove RVA 0x2bfe818 =====

uint FUN_02c0e818(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x7b58,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x40);
    if (param_1 == 0) {
      return 0;
    }
    iVar2 = func_0x0229f06c(0x787b,0);
    if (iVar2 == 0) {
      return (uint)*(byte *)(param_1 + 0x18);
    }
    iVar2 = func_0x0229f13c(0x787b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7b58,0);
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



// ===== FAT.DiningBoardActivity$$StartMoveUpBoard RVA 0x2bfe880 =====

void FUN_02c0e880(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7b59,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x40);
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
    iVar1 = func_0x0229f13c(0x7b59,0);
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



// ===== FAT.DiningBoardActivity$$CanUseItem RVA 0x2bfe8e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c0e8e4(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_20;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_02c0ea70 + 0x2c0e900);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0ea74 + 0x2c0e914));
    func_0x01384978(*(undefined4 *)(_UNK_02c0ea78 + 0x2c0e920));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  iStack_1c = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x7b5a,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_1 + 0x7c);
    }
    if (param_2 != 0 && iVar1 != 0) {
      iVar1 = func_0x0210e2d4(param_2,0);
      iVar4 = *(int *)(param_1 + 0x3c);
      uVar3 = *(undefined4 *)(param_1 + 0x54);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar4 = func_0x03d3ad34(iVar4,uVar3,&iStack_20,**(undefined4 **)(_UNK_02c0ea7c + 0x2c0e9d4));
      if (iVar4 != 0) {
        iVar4 = iStack_20;
        if (iStack_20 == iVar1) {
          iVar4 = iStack_1c;
        }
        if (((iStack_20 == iVar1 && iVar4 == 1) &&
            (iVar4 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_02c0ea80 + 0x2c0ea48)),
            iVar4 != 0)) && (iVar4 = func_0x0211b24c(iVar4,0), iVar4 != 0)) {
          return 1;
        }
      }
      iVar1 = func_0x02c0ea84(param_1,iVar1);
      uVar3 = 1;
      if (iVar1 == 0) {
        iVar1 = func_0x02c0ee1c(param_1,param_2);
        uVar3 = 0;
        if (iVar1 == 0) {
          uVar3 = func_0x02c0f378(param_1,param_2);
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7b5a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar3;
}



// ===== FAT.DiningBoardActivity$$FindAvailableTableByItem RVA 0x2bfea84 =====

/* WARNING: Removing unreachable block (ram,0x02c0ed14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c0ea84(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
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
  
  pcVar7 = (char *)(_UNK_02c0edf4 + 0x2c0ea9c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0edf8 + 0x2c0eab0));
    func_0x01384978(*(undefined4 *)(_UNK_02c0edfc + 0x2c0eabc));
    func_0x01384978(*(undefined4 *)(_UNK_02c0ee00 + 0x2c0eac8));
    func_0x01384978(*(undefined4 *)(_UNK_02c0ee04 + 0x2c0ead4));
    *pcVar7 = '\x01';
  }
  iVar9 = 0;
  iVar1 = func_0x0229f06c(0x7b5b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b5b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_02254df0 + 0x2254cfc);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02254df4 + 0x2254d10),param_1,param_2,0);
      *pcVar7 = '\x01';
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
    iVar9 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar9,uVar8,&uStack_38,uVar5,0,0);
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02254df8 + 0x2254de0));
    return iVar1;
  }
  if ((0 < param_2) && (*(int *)(param_1 + 0x7c) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02c0ee08 + 0x2c0eb58));
    piVar10 = *(int **)(_UNK_02c0ee0c + 0x2c0eb70);
    piVar11 = *(int **)(_UNK_02c0ee10 + 0x2c0eb78);
    do {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_02c0ebd0;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_02c0ebd0:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar1 == 0) {
        iVar9 = 0;
        break;
      }
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
            goto LAB_02c0ec44;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_02c0ec44:
      uVar8 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      iVar9 = func_0x017cc8bc(uVar8,0);
    } while (((iVar9 == 0) || (*(int *)(iVar9 + 0x1c) != param_2)) ||
            (iVar1 = func_0x02c15080(param_1,uVar8), iVar1 != 0));
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_02c0ee14 + 0x2c0ecb4)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
            goto LAB_02c0ecfc;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02c0ee14 + 0x2c0ecb4),0);
LAB_02c0ecfc:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return iVar9;
}



// ===== FAT.DiningBoardActivity$$TryShowClosedTableTips RVA 0x2bfee1c =====

/* WARNING: Removing unreachable block (ram,0x02c0f0ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c0ee1c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02c0f340 + 0x2c0ee38);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0f344 + 0x2c0ee4c));
    func_0x01384978(*(undefined4 *)(_UNK_02c0f348 + 0x2c0ee58));
    func_0x01384978(*(undefined4 *)(_UNK_02c0f34c + 0x2c0ee64));
    func_0x01384978(*(undefined4 *)(_UNK_02c0f350 + 0x2c0ee70));
    func_0x01384978(*(undefined4 *)(_UNK_02c0f354 + 0x2c0ee7c));
    func_0x01384978(*(undefined4 *)(_UNK_02c0f358 + 0x2c0ee88));
    *pcVar9 = '\x01';
  }
  uVar12 = 0;
  iVar2 = func_0x0229f06c(0x7b5e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7b5e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
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
    iVar11 = *(int *)(iVar2 + 8);
    uVar12 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar11,uVar12,&uStack_38,uVar7,0,0);
    uVar12 = func_0x0245496c(&uStack_38,0,0);
    return uVar12;
  }
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_1 + 0x7c);
  }
  if (param_2 != 0 && iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x50);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    piVar3 = (int *)func_0x0364c2b4(iVar2,**(undefined4 **)(_UNK_02c0f35c + 0x2c0ef18));
    uStack_34 = 0;
    piVar10 = *(int **)(_UNK_02c0f360 + 0x2c0ef38);
    piVar14 = *(int **)(_UNK_02c0f364 + 0x2c0ef40);
    do {
      do {
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar10) {
              puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
              goto LAB_02c0ef98;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar10,0);
LAB_02c0ef98:
        iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        if (iVar2 == 0) {
          uVar5 = 8;
          goto LAB_02c0f074;
        }
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar2 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar14) {
              puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
              goto LAB_02c0f010;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar14,0);
LAB_02c0f010:
        uVar12 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        iVar2 = func_0x017cc8bc(uVar12,0);
      } while ((iVar2 == 0) ||
              (iVar11 = *(int *)(iVar2 + 0x1c), iVar2 = func_0x0210e2d4(param_2,0), iVar11 != iVar2)
              );
      iVar2 = func_0x02c15080(param_1,uVar12);
      uStack_34 = 1;
    } while (iVar2 != 0);
    uVar5 = 7;
LAB_02c0f074:
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(_UNK_02c0f368 + 0x2c0f08c)) {
            puVar4 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
            goto LAB_02c0f0d4;
          }
          uVar6 = uVar6 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02c0f368 + 0x2c0f08c),0);
LAB_02c0f0d4:
      (*(code *)*puVar4)(piVar3,puVar4[1]);
    }
    uVar12 = 0;
    if (((uVar5 | 8) == 8) && ((uStack_34 & 1) != 0)) {
      iVar2 = func_0x02c143bc(param_1);
      if (iVar2 < 1) {
        uVar12 = 0x6f;
      }
      else {
        iVar2 = func_0x02c10cf4(param_1);
        iVar11 = func_0x02c143bc(param_1);
        iVar11 = func_0x02c14578(param_1,iVar11 + -1);
        uVar12 = 0x70;
        if (iVar2 < iVar11) {
          uVar12 = 0x6f;
        }
      }
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x10);
      func_0x0210cd7c(&uStack_30,param_2,0);
      uVar1 = uStack_2c;
      uVar7 = uStack_30;
      if (*(int *)(**(int **)(_UNK_02c0f36c + 0x2c0f18c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01dd876c(&uStack_30,uVar7,uVar1,0);
      iVar13 = **(int **)(_UNK_02c0f370 + 0x2c0f1c4);
      iVar11 = *(int *)(iVar13 + 0x1c);
      if (iVar11 == 0) {
        func_0x0140024c(iVar13);
        iVar11 = *(int *)(iVar13 + 0x1c);
      }
      iVar11 = *(int *)(iVar11 + 8);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x014001f0();
      }
      if (*(int *)(iVar11 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar11 = *(int *)(*(int *)(iVar13 + 0x1c) + 8);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x014001f0();
      }
      uVar7 = **(undefined4 **)(iVar11 + 0x5c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = 0;
      uStack_40 = uStack_28;
      uStack_3c = uVar7;
      func_0x01ca1770(iVar2,uVar12,uStack_30,uStack_2c);
      uVar12 = 1;
    }
  }
  return uVar12;
}



// ===== FAT.DiningBoardActivity$$IsScoreItem RVA 0x2bff378 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c0f378(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_02c0f4b8 + 0x2c0f390);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0f4bc + 0x2c0f3a4));
    func_0x01384978(*(undefined4 *)(_UNK_02c0f4c0 + 0x2c0f3b0));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x7b60,0);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = *(int *)(param_1 + 0x7c);
    }
    if (param_2 != 0 && iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x40);
      uVar5 = 0;
      uVar6 = func_0x0210e2d4(param_2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0364bc1c(iVar1,uVar6,**(undefined4 **)(_UNK_02c0f4c4 + 0x2c0f450));
      if (iVar1 != 0) {
        uVar5 = 0;
        iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_02c0f4c8 + 0x2c0f474));
        if (iVar1 != 0) {
          uVar5 = 0;
          iVar3 = func_0x0211b24c(iVar1,0);
          if (iVar3 != 0) {
            iVar1 = func_0x0211b2b0(iVar1,0);
            uVar5 = (uint)(0 < iVar1);
          }
        }
      }
    }
    return uVar5;
  }
  iVar1 = func_0x0229f13c(0x7b60,0);
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



// ===== FAT.DiningBoardActivity$$TrySpawnItem RVA 0x2bff4cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c0f4cc(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  
  pcVar7 = (char *)(_UNK_02c0f780 + 0x2c0f4ec);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0f784 + 0x2c0f504));
    func_0x01384978(*(undefined4 *)(_UNK_02c0f788 + 0x2c0f510));
    func_0x01384978(*(undefined4 *)(_UNK_02c0f78c + 0x2c0f51c));
    *pcVar7 = '\x01';
  }
  uVar8 = 0;
  iStack_2c = 0;
  iStack_30 = 0;
  iVar1 = func_0x0229f06c(0x7b61,0);
  if (iVar1 == 0) {
    *param_4 = 0;
    *param_3 = 0xffffffff;
    iVar1 = FUN_02c0e8e4(param_1,param_2);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar8 = 0;
      iVar1 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_02c0f790 + 0x2c0f5c4));
      if (iVar1 != 0) {
        uVar8 = 0;
        iVar2 = func_0x0211b24c(iVar1,0);
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = *(int *)(param_1 + 0x48);
        }
        if (iVar2 != 0 && iVar3 != 0) {
          uVar8 = 0;
          iVar3 = func_0x02139cf4(iVar3,0);
          if (iVar3 != 0) {
            if (param_2 == 0) {
              func_0x01384bf0();
              iVar2 = func_0x0210e2d4(0,0);
              func_0x01384bf0();
            }
            else {
              iVar2 = func_0x0210e2d4(param_2,0);
            }
            func_0x0210cd7c(&uStack_38,param_2,0);
            uVar4 = func_0x0211b2b0(iVar1,0);
            iVar1 = *(int *)(param_1 + 0x3c);
            uVar8 = *(undefined4 *)(param_1 + 0x54);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar5 = func_0x03d3ad34(iVar1,uVar8,&iStack_30,
                                    **(undefined4 **)(_UNK_02c0f794 + 0x2c0f69c));
            iVar1 = iStack_2c;
            if ((iVar5 == 0) || (iStack_30 != iVar2)) {
              iVar5 = FUN_02c0ea84(param_1,iVar2);
            }
            else {
              iVar5 = FUN_02c0ea84(param_1,iVar2);
              if (iVar1 == 1) {
                FUN_02c0d950(param_1,param_2);
                return 1;
              }
            }
            if (iVar5 == 0) {
              iVar1 = FUN_02c0f378(param_1,param_2);
              uVar8 = 1;
              if (iVar1 != 0) {
                piVar6 = *(int **)(_UNK_02c0f798 + 0x2c0f740);
                iVar1 = *piVar6;
                if (*(int *)(iVar1 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar1 = *piVar6;
                }
                func_0x02c0ff14(param_1,iVar2,uStack_38,uStack_34,uVar4,
                                *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x470));
              }
            }
            else {
              uVar8 = 1;
              func_0x02c0f79c(param_1,iVar5,iVar3,uStack_38,uStack_34,iVar2,1);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7b61,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x022365c4(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar8;
}



// ===== FAT.DiningBoardActivity$$SubmitToTable RVA 0x2bff79c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0f79c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int extraout_r2;
  uint uVar10;
  undefined4 extraout_r3;
  int iVar11;
  undefined4 uVar12;
  char *pcVar13;
  int iVar14;
  code *pcVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  uint in_fpscr;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  code *pcStack_c8;
  uint uStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  
  pcVar13 = (char *)(iRam02c0fe90 + 0x2c0f7c4);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam02c0fe94 + 0x2c0f7dc));
    func_0x01384978(*(undefined4 *)(iRam02c0fe98 + 0x2c0f7e8));
    func_0x01384978(*(undefined4 *)(iRam02c0fe9c + 0x2c0f7f4));
    func_0x01384978(*(undefined4 *)(iRam02c0fea0 + 0x2c0f800));
    func_0x01384978(*(undefined4 *)(iRam02c0fea4 + 0x2c0f80c));
    func_0x01384978(*(undefined4 *)(iRam02c0fea8 + 0x2c0f818));
    func_0x01384978(*(undefined4 *)(iRam02c0feac + 0x2c0f824));
    func_0x01384978(*(undefined4 *)(iRam02c0feb0 + 0x2c0f830));
    func_0x01384978(*(undefined4 *)(iRam02c0feb4 + 0x2c0f83c));
    func_0x01384978(*(undefined4 *)(iRam02c0feb8 + 0x2c0f848));
    func_0x01384978(*(undefined4 *)(iRam02c0febc + 0x2c0f854));
    func_0x01384978(*(undefined4 *)(iRam02c0fec0 + 0x2c0f860));
    func_0x01384978(*(undefined4 *)(iRam02c0fec4 + 0x2c0f86c));
    func_0x01384978(*(undefined4 *)(iRam02c0fec8 + 0x2c0f878));
    func_0x01384978(*(undefined4 *)(iRam02c0fecc + 0x2c0f884));
    func_0x01384978(*(undefined4 *)(iRam02c0fed0 + 0x2c0f890));
    *pcVar13 = '\x01';
  }
  uStack_54 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_4c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_58 = 0;
  iVar4 = func_0x0229f06c(0x7b62,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x7b62,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iStack_a4 = param_7;
    uStack_ac = param_5;
    uStack_a8 = param_6;
    uStack_a0 = 0;
    iStack_b0 = param_4;
    func_0x02254eb4(iVar4,param_1,param_2,param_3);
    return;
  }
  iVar4 = func_0x01384be4(**(undefined4 **)(iRam02c0fed4 + 0x2c0f918));
  func_0x04874ed4(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar4 + 8) = param_3;
  *(undefined4 *)(iVar4 + 0x2c) = param_2;
  *(int *)(iVar4 + 0x30) = param_1;
  FUN_02c0da40(&uStack_70,param_1);
  iVar14 = *(int *)(iVar4 + 0x2c);
  *(uint *)(iVar4 + 0x44) = uStack_70;
  *(uint *)(iVar4 + 0x48) = uStack_6c;
  *(undefined4 *)(iVar4 + 0x4c) = uStack_68;
  *(int *)(iVar4 + 0x50) = iStack_64;
  *(undefined4 *)(iVar4 + 0x54) = uStack_60;
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(**(int **)(iRam02c0fed8 + 0x2c0f984) + 0x74);
  *(undefined4 *)(iVar4 + 0x38) = *(undefined4 *)(iVar14 + 0xc);
  if (iVar8 == 0) {
    func_0x01384ab4();
  }
  func_0x01dd876c(&uStack_7c,param_4,param_5,0);
  uVar17 = uStack_7c;
  iVar8 = *(int *)(param_1 + 0x7c);
  iVar14 = 0;
  if (iVar8 != 0) {
    iVar14 = *(int *)(iVar8 + 0x50);
  }
  if (iVar8 != 0 && iVar14 != 0) {
    uVar12 = func_0x0364c54c(iVar14,*(undefined4 *)(iVar4 + 0x38),
                             **(undefined4 **)(iRam02c0fedc + 0x2c0facc));
    uStack_6c = 0;
    uStack_70 = 0;
    func_0x03507d38(&uStack_70,uVar12,**(undefined4 **)(iRam02c0fee0 + 0x2c0fae4));
    uVar9 = uStack_6c;
    if ((char)uStack_70 == '\0') goto LAB_02c0f9d0;
  }
  else {
LAB_02c0f9d0:
    uVar9 = 0xffffffff;
  }
  *(uint *)(iVar4 + 0x40) = uVar9;
  if (((int)uVar9 < 0) || (iVar14 = *(int *)(param_1 + 0x8c), iVar14 == 0)) {
    iStack_4c = 0;
    uStack_50 = 0;
    uStack_54 = 0;
    uStack_7c = (uint)uStack_7c._3_1_ << 0x18;
    uVar18 = 0;
  }
  else {
    (**(code **)(iVar14 + 0xc))
              (&uStack_70,*(undefined4 *)(iVar14 + 0x20),uVar9,*(undefined4 *)(iVar14 + 0x14));
    uVar18 = uStack_70 & 0xff;
    uVar9 = *(uint *)(iVar4 + 0x40);
    uStack_7c._0_3_ = (undefined3)(uStack_70 >> 8);
    iStack_4c = iStack_64;
    uStack_50 = uStack_68;
    uStack_54 = uStack_6c;
  }
  pcVar15 = (code *)(uStack_7c & 0xffff);
  iVar14 = iVar4;
  if (0x7fffffff < uVar9) {
    iVar14 = 0;
  }
  uStack_58 = CONCAT13(uStack_7c._2_1_,CONCAT21((undefined2)uStack_7c,(char)uVar18));
  iVar8 = iStack_74;
  uVar12 = uStack_78;
  uVar10 = uVar17;
  iVar6 = iVar4;
  if ((int)uVar9 < 0) goto LAB_02c0fb3c;
  iVar11 = *(int *)(param_1 + 0x90);
  iVar8 = iVar4;
  if (iVar11 == 0) {
LAB_02c0fb24:
    iStack_64 = iStack_4c;
    uVar12 = uStack_50;
    uVar10 = uStack_54;
    iVar14 = iVar8;
    if (uVar18 == 0) {
      iStack_64 = iStack_74;
      uVar12 = uStack_78;
      uVar10 = uVar17;
    }
  }
  else {
    pcVar15 = *(code **)(iVar11 + 0xc);
    (*pcVar15)(&uStack_70,*(undefined4 *)(iVar11 + 0x20),uVar9,*(undefined4 *)(iVar11 + 0x14));
    uVar12 = uStack_68;
    uVar10 = uStack_6c;
    if ((char)uStack_70 == '\0') {
      uVar18 = uStack_58 & 0xff;
      iVar8 = iVar14;
      goto LAB_02c0fb24;
    }
  }
  bVar21 = iVar14 == 0;
  bVar19 = true;
  bVar20 = false;
  iVar8 = iStack_64;
  iVar6 = iVar14;
  if (bVar21) {
    uVar24 = func_0x01384bf0();
    uVar12 = (undefined4)((ulonglong)uVar24 >> 0x20);
    iVar14 = (int)uVar24;
    if (!bVar20) {
      software_interrupt(0x800000);
    }
    iStack_d0 = 0;
    iVar8 = extraout_r2;
    if (bVar21) {
      iVar8 = param_1 + -0x7ffffff2 + (uint)bVar19;
      iStack_d0 = 0x2c0fef0 - (!bVar19 + 0x5c000);
      uVar17 = iVar4 + 0x40000009 + (uint)bVar19;
      iVar4 = uVar17 + 0xd800 + (uint)bVar19;
      iStack_74 = param_1 + 0x10000000 + (uint)bVar19;
      pcVar15 = (code *)(uVar17 + 0x110 + (uint)bVar19);
    }
    uStack_b4 = 0x2c0fe88;
    uStack_b8 = uStack_78;
    pcVar13 = (char *)(_UNK_02c10220 + 0x2c0ff34);
    iStack_d4 = iVar11;
    iStack_cc = iVar4;
    pcStack_c8 = pcVar15;
    uStack_c4 = uVar17;
    iStack_c0 = iStack_74;
    iStack_bc = param_1;
    if (*pcVar13 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02c10224 + 0x2c0ff4c));
      func_0x01384978(*(undefined4 *)(_UNK_02c10228 + 0x2c0ff58));
      func_0x01384978(*(undefined4 *)(_UNK_02c1022c + 0x2c0ff64));
      func_0x01384978(*(undefined4 *)(_UNK_02c10230 + 0x2c0ff70));
      func_0x01384978(*(undefined4 *)(_UNK_02c10234 + 0x2c0ff7c));
      func_0x01384978(*(undefined4 *)(_UNK_02c10238 + 0x2c0ff88));
      func_0x01384978(*(undefined4 *)(_UNK_02c1023c + 0x2c0ff94));
      func_0x01384978(*(undefined4 *)(_UNK_02c10240 + 0x2c0ffa0));
      *pcVar13 = '\x01';
    }
    uVar17 = uStack_ac;
    uStack_e4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_e0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_dc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_e8 = 0;
    iVar4 = func_0x0229f06c(0x7b6a,0);
    if (iVar4 == 0) {
      iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02c10244 + 0x2c10030));
      func_0x04874ed4(iVar4,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      *(int *)(iVar4 + 8) = iVar14;
      FUN_02c0da40(&uStack_100,iVar14);
      *(undefined4 *)(iVar4 + 0x1c) = uStack_f0;
      *(undefined4 *)(iVar4 + 0xc) = uStack_100;
      *(undefined4 *)(iVar4 + 0x10) = uStack_fc;
      *(undefined4 *)(iVar4 + 0x14) = uStack_f8;
      *(undefined4 *)(iVar4 + 0x18) = uStack_f4;
      func_0x02c14630(iVar14,iStack_b0,uStack_ac);
      iVar6 = *(int *)(iVar14 + 0x84);
      if (iVar6 == 0) {
        uStack_100 = 0;
        uStack_fc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_f8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_104 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      }
      else {
        (**(code **)(iVar6 + 0xc))
                  (&uStack_110,*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(iVar6 + 0x14));
        uStack_100 = uStack_110;
        uStack_fc = uStack_10c;
        uStack_f8 = uStack_108;
      }
      uStack_e8._0_1_ = (char)uStack_100;
      uStack_f4 = uStack_104;
      uStack_e8 = uStack_100;
      uStack_e4 = uStack_fc;
      uStack_e0 = uStack_f8;
      uStack_dc = uStack_104;
      if ((char)uStack_e8 == '\0') {
        FUN_02c0dc7c(iVar14,(undefined4 *)(iVar4 + 0xc));
        iVar4 = *(int *)(iVar14 + 0x88);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(iVar4 + 0xc);
        *(undefined4 *)(iVar4 + 0xc) = 0;
        *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
        if (0 < iVar14) {
          func_0x0484e5ec(*(undefined4 *)(iVar4 + 8),0,iVar14,0);
        }
      }
      else {
        if (*(int *)(**(int **)(_UNK_02c10248 + 0x2c100dc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x01dd876c(&uStack_110,iVar8,extraout_r3,0);
        uVar3 = uStack_108;
        uVar2 = uStack_10c;
        uVar1 = uStack_110;
        func_0x0350ce2c(&uStack_110,&uStack_e8,**(undefined4 **)(_UNK_02c1024c + 0x2c10124));
        uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_02c10250 + 0x2c10138));
        func_0x0478dedc(uVar7,iVar4,**(undefined4 **)(_UNK_02c10254 + 0x2c10160),0);
        if (*(int *)(**(int **)(_UNK_02c10258 + 0x2c10174) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x0207405c(uVar12,1,uVar1,uVar2,uVar3,uStack_110,uStack_10c,uStack_108,0,0,uVar7,0,
                        0x43080000,0,0);
      }
    }
    else {
      iVar4 = func_0x0229f13c(0x7b6a,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      func_0x02255020(iVar4,iVar14,uVar12,iVar8,extraout_r3,iStack_b0,uVar17,0);
    }
    return;
  }
LAB_02c0fb3c:
  *(int *)(iVar6 + 0x14) = iVar8;
  *(uint *)(iVar6 + 0xc) = uVar10;
  *(undefined4 *)(iVar6 + 0x10) = uVar12;
  iVar14 = func_0x02c14fa8(param_1,*(undefined4 *)(iVar4 + 0x38));
  iVar8 = *(int *)(param_1 + 0x70);
  uVar12 = *(undefined4 *)(iVar4 + 0x38);
  *(int *)(iVar4 + 0x34) = iVar14 + 1;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iStack_80 = iStack_74;
  func_0x03d59d54(iVar8,uVar12,iVar14 + 1,**(undefined4 **)(iRam02c0fee4 + 0x2c0fb88));
  iVar14 = *(int *)(iVar4 + 8);
  if (iVar14 == 0) {
    func_0x01384bf0();
  }
  bVar21 = false;
  func_0x020da680(&uStack_70,iVar14,0);
  uVar9 = uStack_6c;
  fVar22 = (float)VectorSignedToFloat(uStack_70,(byte)(in_fpscr >> 0x16) & 3);
  pcVar13 = (char *)(iRam02c0fee8 + 0x2c0fbd0);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam02c0feec + 0x2c0fbe4));
    *pcVar13 = '\x01';
  }
  piVar16 = *(int **)(iRam02c0fef0 + 0x2c0fbfc);
  if (*(int *)(*piVar16 + 0x74) == 0) {
    func_0x01384ab4();
    bVar21 = *pcVar13 == '\0';
  }
  fVar23 = (float)VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
  fVar22 = (float)func_0x02450364(fVar22 * 0.5);
  iVar14 = (int)fVar22;
  if (bVar21) {
    func_0x01384978(*(undefined4 *)(iRam02c0fef4 + 0x2c0fc44));
    *pcVar13 = '\x01';
  }
  if (*(int *)(*piVar16 + 0x74) == 0) {
    func_0x01384ab4();
  }
  fVar23 = (float)func_0x02450364(fVar23 * 0.5);
  bVar21 = fVar23 == fRam02c0fe88;
  iVar8 = (int)fVar23;
  if (fVar22 == fRam02c0fe88) {
    iVar14 = -0x80000000;
  }
  *(int *)(iVar4 + 0x1c) = iVar14;
  if (bVar21) {
    iVar8 = -0x80000000;
  }
  *(int *)(iVar4 + 0x20) = iVar8;
  if (*(int *)(iVar4 + 0x40) < 0) {
    *(undefined4 *)(iVar4 + 0x18) = 0;
    *(undefined1 *)(iVar4 + 0x3c) = 0;
  }
  else {
    iVar14 = *(int *)(param_1 + 0x94);
    *(undefined4 *)(iVar4 + 0x18) = 0;
    bVar21 = iVar14 != 0;
    *(bool *)(iVar4 + 0x3c) = bVar21;
    if (bVar21) {
      iVar14 = *(int *)(param_1 + 0x9c);
      fVar22 = fRam02c0fe8c;
      if (iVar14 != 0) {
        fVar22 = (float)(**(code **)(iVar14 + 0xc))
                                  (*(undefined4 *)(iVar14 + 0x20),*(undefined4 *)(iVar14 + 0x14));
      }
      *(float *)(iVar4 + 0x18) = fVar22;
      if ((char)uStack_58 != '\0' && param_7 != 0) {
        if (*(int *)(**(int **)(iRam02c0fef8 + 0x2c0fd24) + 0x74) == 0) {
          func_0x01384ab4();
        }
        fVar23 = (float)func_0x02c15120();
        *(float *)(iVar4 + 0x18) = fVar22 + fVar23;
      }
    }
  }
  puVar5 = *(undefined4 **)(iRam02c0fefc + 0x2c0fd54);
  *(undefined4 *)(iVar4 + 0x28) = 0;
  uVar12 = func_0x01384be4(*puVar5);
  func_0x0328e950(uVar12,**(undefined4 **)(iRam02c0ff00 + 0x2c0fd6c));
  *(undefined4 *)(iVar4 + 0x24) = uVar12;
  func_0x02c15280(iVar4);
  iVar14 = *(int *)(param_1 + 0x98);
  if (iVar14 != 0) {
    (**(code **)(iVar14 + 0xc))(*(undefined4 *)(iVar14 + 0x20),*(undefined4 *)(iVar14 + 0x14));
  }
  if ((char)uStack_58 == '\0' || param_7 == 0) {
    func_0x02c15758(iVar4);
  }
  else {
    func_0x0350ce2c(&uStack_70,&uStack_58,**(undefined4 **)(iRam02c0ff04 + 0x2c0fdc8));
    uVar18 = uStack_6c;
    uVar9 = uStack_70;
    uVar12 = func_0x01384be4(**(undefined4 **)(iRam02c0ff08 + 0x2c0fde8));
    func_0x0478dedc(uVar12,iVar4,**(undefined4 **)(iRam02c0ff0c + 0x2c0fe08),0);
    if (*(int *)(**(int **)(iRam02c0ff10 + 0x2c0fe1c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_90 = 0x43080000;
    uStack_8c = 0;
    iStack_b0 = iStack_80;
    uStack_ac = uVar9;
    uStack_88 = 0;
    uStack_a8 = uVar18;
    iStack_a4 = uStack_68;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_94 = 0;
    uStack_98 = uVar12;
    func_0x0207405c(param_6,1,uVar17,uStack_78);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$AddScoreFromItem RVA 0x2bfff14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c0ff14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_02c10220 + 0x2c0ff34);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c10224 + 0x2c0ff4c));
    func_0x01384978(*(undefined4 *)(_UNK_02c10228 + 0x2c0ff58));
    func_0x01384978(*(undefined4 *)(_UNK_02c1022c + 0x2c0ff64));
    func_0x01384978(*(undefined4 *)(_UNK_02c10230 + 0x2c0ff70));
    func_0x01384978(*(undefined4 *)(_UNK_02c10234 + 0x2c0ff7c));
    func_0x01384978(*(undefined4 *)(_UNK_02c10238 + 0x2c0ff88));
    func_0x01384978(*(undefined4 *)(_UNK_02c1023c + 0x2c0ff94));
    func_0x01384978(*(undefined4 *)(_UNK_02c10240 + 0x2c0ffa0));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar4 = func_0x0229f06c(0x7b6a,0);
  if (iVar4 == 0) {
    iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02c10244 + 0x2c10030));
    func_0x04874ed4(iVar4,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar4 + 8) = param_1;
    FUN_02c0da40(&uStack_50,param_1);
    *(undefined4 *)(iVar4 + 0x1c) = uStack_40;
    *(undefined4 *)(iVar4 + 0xc) = uStack_50;
    *(undefined4 *)(iVar4 + 0x10) = uStack_4c;
    *(undefined4 *)(iVar4 + 0x14) = uStack_48;
    *(undefined4 *)(iVar4 + 0x18) = uStack_44;
    func_0x02c14630(param_1,param_5,param_6);
    iVar5 = *(int *)(param_1 + 0x84);
    if (iVar5 == 0) {
      uStack_50 = 0;
      uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    }
    else {
      (**(code **)(iVar5 + 0xc))
                (&uStack_60,*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x14));
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
      uStack_48 = uStack_58;
    }
    uStack_38._0_1_ = (char)uStack_50;
    uStack_44 = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_54;
    if ((char)uStack_38 == '\0') {
      FUN_02c0dc7c(param_1,(undefined4 *)(iVar4 + 0xc));
      iVar4 = *(int *)(param_1 + 0x88);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(iVar4 + 0xc);
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
      if (0 < iVar5) {
        func_0x0484e5ec(*(undefined4 *)(iVar4 + 8),0,iVar5,0);
      }
    }
    else {
      if (*(int *)(**(int **)(_UNK_02c10248 + 0x2c100dc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01dd876c(&uStack_60,param_3,param_4,0);
      uVar3 = uStack_58;
      uVar2 = uStack_5c;
      uVar1 = uStack_60;
      func_0x0350ce2c(&uStack_60,&uStack_38,**(undefined4 **)(_UNK_02c1024c + 0x2c10124));
      uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_02c10250 + 0x2c10138));
      func_0x0478dedc(uVar6,iVar4,**(undefined4 **)(_UNK_02c10254 + 0x2c10160),0);
      if (*(int *)(**(int **)(_UNK_02c10258 + 0x2c10174) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0207405c(param_2,1,uVar1,uVar2,uVar3,uStack_60,uStack_5c,uStack_58,0,0,uVar6,0,
                      0x43080000,0,0);
    }
  }
  else {
    iVar4 = func_0x0229f13c(0x7b6a,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x02255020(iVar4,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$TryDragItemToTable RVA 0x2c0025c =====

undefined4 FUN_02c1025c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x7b6d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x017cc8bc(param_3,0);
    if (iVar1 != 0) {
      iVar2 = func_0x02c103b8(param_1,*(undefined4 *)(iVar1 + 0xc),param_2);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(param_1 + 0x48);
      }
      if (iVar2 != 0 && iVar3 != 0) {
        uVar4 = 0;
        iVar3 = func_0x02139cf4(iVar3,0);
        if (iVar3 != 0) {
          if (param_2 == 0) {
            func_0x01384bf0();
            uStack_30 = func_0x0210e2d4(0,0);
            func_0x01384bf0();
          }
          else {
            uStack_30 = func_0x0210e2d4(param_2,0);
          }
          uVar4 = 0;
          func_0x0210cd7c(&uStack_2c,param_2,0);
          iVar2 = func_0x020dd560(iVar3,param_2,0x15,0);
          if (iVar2 != 0) {
            FUN_02c0f79c(param_1,iVar1,iVar3,uStack_2c,uStack_28,uStack_30,param_4);
            uVar4 = 1;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7b6d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x021a9f84(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar4;
}



// ===== FAT.DiningBoardActivity$$CanSubmitToTable RVA 0x2c003b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c103b8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_r7;
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
  
  pcVar5 = (char *)(_UNK_02c10510 + 0x2c103d8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c10514 + 0x2c103ec));
    func_0x01384978(*(undefined4 *)(_UNK_02c10518 + 0x2c103f8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b6e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x017cc8bc(param_2,0);
    if (iVar1 != 0) {
      iVar3 = iVar1;
      if (param_3 != 0) {
        iVar3 = *(int *)(param_1 + 0x7c);
        unaff_r7 = iVar1;
      }
      if (param_3 != 0 && iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0x50);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0364bc1c(iVar1,param_2,**(undefined4 **)(_UNK_02c1051c + 0x2c104a4));
        if ((((iVar1 != 0) &&
             (iVar3 = *(int *)(unaff_r7 + 0x1c), iVar1 = func_0x0210e2d4(param_3,0), iVar3 == iVar1)
             ) && (iVar1 = func_0x02c15080(param_1,param_2), iVar1 == 0)) &&
           (iVar1 = func_0x02feb4f8(param_3,0,**(undefined4 **)(_UNK_02c10520 + 0x2c104f0)),
           iVar1 != 0)) {
          iVar3 = func_0x0229f06c(0x5cb2,0);
          if (iVar3 == 0) {
            return (uint)(*(int *)(iVar1 + 0x14) < 2);
          }
          iVar3 = func_0x0229f13c(0x5cb2,0);
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
          func_0x01485278(&uStack_30,iVar1,0);
          iVar6 = *(int *)(iVar3 + 8);
          uVar7 = *(undefined4 *)(iVar3 + 0xc);
          iVar1 = *(int *)(iVar3 + 0x10);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 2;
          if (iVar1 == 0) {
            uVar4 = 1;
          }
          func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
          uVar2 = func_0x0245496c(&uStack_30,0,0);
          return uVar2;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x7b6e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar2 = func_0x021846e8(iVar1,param_1,param_2,param_3);
  }
  return uVar2;
}



// ===== FAT.DiningBoardActivity$$get_TotalBuildingCount RVA 0x2c00524 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c10524(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02c105c4 + 0x2c10538);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c105c8 + 0x2c1054c));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x7b43,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b43,0);
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
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
  }
  return uVar5;
}



// ===== FAT.DiningBoardActivity$$get_IsAllBuildingCompleted RVA 0x2c005cc =====

undefined4 FUN_02c105cc(int param_1)

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
  iVar1 = func_0x0229f06c(0x7b42,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b42,0);
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
  iVar1 = FUN_02c10524(param_1);
  if (0 < iVar1) {
    iVar3 = *(int *)(param_1 + 0x68);
    iVar1 = FUN_02c10524(param_1);
    uVar4 = 0;
    if (iVar1 + -1 <= iVar3) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.DiningBoardActivity$$GetBuildingDetail RVA 0x2c00650 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c10650(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
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
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [4];
  
  pcVar9 = (char *)(_UNK_02c10754 + 0x2c10668);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c10758 + 0x2c1067c));
    func_0x01384978(*(undefined4 *)(_UNK_02c1075c + 0x2c10688));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7b44,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7b44,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_02254cd0 + 0x2254bdc);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02254cd4 + 0x2254bf0),param_1,param_2,0);
      *pcVar9 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    auStack_28[0] = uStack_40;
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
    uVar8 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02254cd8 + 0x2254cc0));
    return uVar8;
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x7c) == 0)) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x7c) + 0x3c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (param_2 < *(int *)(iVar2 + 0xc)) {
    iVar2 = *(int *)(param_1 + 0x7c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x3c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x0364c9b8(iVar2,param_2,**(undefined4 **)(_UNK_02c10760 + 0x2c10738));
    pcVar9 = (char *)(_UNK_017cbfb4 + 0x17cbf58);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017cbfb8 + 0x17cbf6c),0);
      func_0x01384978(*(undefined4 *)(_UNK_017cbfbc + 0x17cbf78));
      *pcVar9 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017cbfc0 + 0x17cbf8c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_017cbfc4 + 0x17cbfa8);
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
    auStack_28[0] = 0;
    uStack_2c = 0;
    (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
    iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar2 != 0) {
      unaff_r4 = piVar3[0x11];
    }
    bVar1 = true;
    iVar5 = 0;
    if (iVar2 != 0 && unaff_r4 != 0) {
      iVar4 = func_0x03d66780(unaff_r4,uVar8,auStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
      uVar6 = auStack_28[0];
      bVar1 = false;
      iVar5 = unaff_r4;
      if (iVar4 != 0) {
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return auStack_28[0];
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar8,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
        return auStack_28[0];
      }
    }
    if ((piVar3[0x12] == 0) ||
       (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar8,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
       iVar4 == 0)) {
      uStack_2c = 0;
      iVar4 = (**(code **)(*piVar3 + 0x1a0))
                        (piVar3,uVar8,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
      uVar6 = uStack_2c;
      if (iVar4 != 0) {
        if (iVar2 != 0) {
          if (bVar1) {
            if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                == 0) {
              func_0x02457d84();
            }
            iVar5 = func_0x02457d58();
            func_0x03d63f04(iVar5,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74))
            ;
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
        if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0)
        {
          func_0x02457d84();
        }
        iVar2 = func_0x02457d58();
        func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144));
        piVar3[0x12] = iVar2;
        if (iVar2 == 0) {
          func_0x02457d50();
          iVar2 = 0;
        }
      }
      func_0x04220004(iVar2,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
    }
    func_0x0369fb50(piVar3,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
    return 0;
  }
  return 0;
}



// ===== FAT.DiningBoardActivity$$get_BoardId RVA 0x2c00764 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c10764(int param_1)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_02c10864 + 0x2c1077c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c10868 + 0x2c10790));
    func_0x01384978(*(undefined4 *)(_UNK_02c1086c + 0x2c1079c));
    func_0x01384978(*(undefined4 *)(_UNK_02c10870 + 0x2c107a8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x620,0);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x48) != 0) &&
       (iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x48),0), iVar1 != 0)) {
      uStack_14 = 0;
      uStack_18 = 0;
      func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 8),
                      **(undefined4 **)(_UNK_02c10874 + 0x2c10824));
      if ((char)uStack_18 != '\0') {
        return uStack_14;
      }
    }
    if (*(int *)(param_1 + 0x7c) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x14);
    }
    return uVar5;
  }
  iVar1 = func_0x0229f13c(0x620,0);
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



// ===== FAT.DiningBoardActivity$$GetCurrentDropStage RVA 0x2c00878 =====

int FUN_02c10878(int param_1)

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
  iVar1 = func_0x0229f06c(0x7b6f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b6f,0);
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
  iVar1 = FUN_02c10524(param_1);
  if (0 < iVar1) {
    iVar3 = FUN_02c105cc(param_1);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x68) + 1;
      if (*(int *)(param_1 + 0x68) < 0) {
        iVar3 = 0;
      }
      if (iVar1 <= iVar3) {
        iVar3 = iVar1 + -1;
      }
      return iVar3;
    }
    iVar3 = iVar1 + -1;
  }
  return iVar3;
}



// ===== FAT.DiningBoardActivity$$PlaySound RVA 0x2c00914 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c10914(undefined4 param_1)

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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_02c109f8 + 0x2c1092c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c109fc + 0x2c10940));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b67,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b67,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  uStack_1c = **(undefined4 **)(_UNK_02c10a00 + 0x2c109bc);
  uStack_18 = 0xffffffff;
  uStack_14 = param_1;
  uVar5 = func_0x04866158(&uStack_1c,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01bf3284(iVar1,uVar5,0);
  return;
}



// ===== FAT.DiningBoardActivity$$get_Valid RVA 0x2c00a04 =====

undefined4 FUN_02c10a04(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
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
  
  iVar1 = func_0x0229f06c(0x7b70,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b70,0);
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
  piVar4 = *(int **)(param_1 + 0x10);
  if (piVar4 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = (**(code **)(*piVar4 + 0x130))(piVar4,*(undefined4 *)(*piVar4 + 0x134));
  uVar5 = 0;
  if ((iVar1 != 0) && (uVar5 = 0, *(int *)(param_1 + 0x78) != 0)) {
    uVar5 = 1;
  }
  return uVar5;
}



// ===== FAT.DiningBoardActivity$$get_EventConf RVA 0x2c00a94 =====

undefined4 FUN_02c10a94(int param_1)

{
  return *(undefined4 *)(param_1 + 0x78);
}



// ===== FAT.DiningBoardActivity$$get_GroupConf RVA 0x2c00a9c =====

undefined4 FUN_02c10a9c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}



// ===== FAT.DiningBoardActivity$$set_GroupConf RVA 0x2c00aa4 =====

void FUN_02c10aa4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  return;
}



// ===== FAT.DiningBoardActivity$$get_BoardSkinId RVA 0x2c00aac =====

undefined4 FUN_02c10aac(int param_1)

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
  iVar1 = func_0x0229f06c(0x7b72,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b72,0);
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
  if (*(int *)(param_1 + 0x78) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x14);
  }
  return uVar4;
}



// ===== FAT.DiningBoardActivity$$get_TokenNum RVA 0x2c00b10 =====

undefined4 FUN_02c10b10(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7b73,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b73,0);
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
  return *(undefined4 *)(param_1 + 100);
}



// ===== FAT.DiningBoardActivity$$get_TokenId RVA 0x2c00b64 =====

undefined4 FUN_02c10b64(int param_1)

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
  iVar1 = func_0x0229f06c(0x613,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x613,0);
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
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x58);
  }
  return uVar4;
}



// ===== FAT.DiningBoardActivity$$get_ScoreTokenId RVA 0x2c00bc8 =====

undefined4 FUN_02c10bc8(int param_1)

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
  iVar1 = func_0x0229f06c(0x61a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x61a,0);
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
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x4c);
  }
  return uVar4;
}



// ===== FAT.DiningBoardActivity$$get_ScoreSpecialChestId RVA 0x2c00c2c =====

undefined4 FUN_02c10c2c(int param_1)

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
  iVar1 = func_0x0229f06c(0x7b74,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b74,0);
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
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x48);
  }
  return uVar4;
}



// ===== FAT.DiningBoardActivity$$get_MainCategoryId RVA 0x2c00c90 =====

undefined4 FUN_02c10c90(int param_1)

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
  iVar1 = func_0x0229f06c(0x7b75,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b75,0);
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
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x38);
  }
  return uVar4;
}



// ===== FAT.DiningBoardActivity$$get_Score RVA 0x2c00cf4 =====

undefined4 FUN_02c10cf4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7b5f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b5f,0);
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



// ===== FAT.DiningBoardActivity$$get_MaxUnlockBuildingIndex RVA 0x2c00d48 =====

undefined4 FUN_02c10d48(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7b76,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b76,0);
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
  return *(undefined4 *)(param_1 + 0x68);
}



// ===== FAT.DiningBoardActivity$$get_BoardRow RVA 0x2c00d9c =====

undefined4 FUN_02c10d9c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7b77,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b77,0);
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
  return *(undefined4 *)(param_1 + 0x60);
}



// ===== FAT.DiningBoardActivity$$.ctor RVA 0x2c00df0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c10df0(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
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
  
  pcVar6 = (char *)(_UNK_02c111e8 + 0x2c10e0c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c111ec + 0x2c10e20));
    func_0x01384978(*(undefined4 *)(_UNK_02c111f0 + 0x2c10e2c));
    func_0x01384978(*(undefined4 *)(_UNK_02c111f4 + 0x2c10e38));
    func_0x01384978(*(undefined4 *)(_UNK_02c111f8 + 0x2c10e44));
    func_0x01384978(*(undefined4 *)(_UNK_02c111fc + 0x2c10e50));
    func_0x01384978(*(undefined4 *)(_UNK_02c11200 + 0x2c10e5c));
    func_0x01384978(*(undefined4 *)(_UNK_02c11204 + 0x2c10e68));
    func_0x01384978(*(undefined4 *)(_UNK_02c11208 + 0x2c10e74));
    func_0x01384978(*(undefined4 *)(_UNK_02c1120c + 0x2c10e80));
    func_0x01384978(*(undefined4 *)(_UNK_02c11210 + 0x2c10e8c));
    *pcVar6 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02c11214 + 0x2c10ecc));
  func_0x03d3842c(uVar1,**(undefined4 **)(_UNK_02c11218 + 0x2c10ee0));
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  puVar2 = *(undefined4 **)(_UNK_02c1121c + 0x2c10f00);
  *(undefined4 *)(param_1 + 0x50) = 0xcb;
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x03d59324(uVar1,**(undefined4 **)(_UNK_02c11220 + 0x2c10f1c));
  puVar2 = *(undefined4 **)(_UNK_02c11224 + 0x2c10f30);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0328e950(uVar1,**(undefined4 **)(_UNK_02c11228 + 0x2c10f48));
  puVar2 = *(undefined4 **)(_UNK_02c1122c + 0x2c10f5c);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x0443c630(uVar1,**(undefined4 **)(_UNK_02c11230 + 0x2c10f74));
  piVar7 = *(int **)(_UNK_02c11234 + 0x2c10f88);
  iVar3 = *piVar7;
  iVar4 = *(int *)(iVar3 + 0x74);
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  if (iVar4 == 0) {
    func_0x01384ab4();
    iVar3 = *piVar7;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  FUN_02b644a0(&uStack_30,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xa40),0);
  uStack_34 = 0;
  *(undefined4 *)(param_1 + 0xb8) = uStack_30;
  *(undefined4 *)(param_1 + 0xbc) = uStack_2c;
  uStack_38 = 0;
  FUN_02b644a0(&uStack_38,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa50),0);
  uStack_3c = 0;
  *(undefined4 *)(param_1 + 0xc0) = uStack_38;
  *(undefined4 *)(param_1 + 0xc4) = uStack_34;
  uStack_40 = 0;
  FUN_02b644a0(&uStack_40,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa60),0);
  uStack_44 = 0;
  *(undefined4 *)(param_1 + 200) = uStack_40;
  *(undefined4 *)(param_1 + 0xcc) = uStack_3c;
  uStack_48 = 0;
  FUN_02b644a0(&uStack_48,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa54),0);
  uStack_4c = 0;
  *(undefined4 *)(param_1 + 0xd0) = uStack_48;
  *(undefined4 *)(param_1 + 0xd4) = uStack_44;
  uStack_50 = 0;
  FUN_02b644a0(&uStack_50,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa58),0);
  uStack_54 = 0;
  *(undefined4 *)(param_1 + 0xd8) = uStack_50;
  *(undefined4 *)(param_1 + 0xdc) = uStack_4c;
  uStack_58 = 0;
  FUN_02b644a0(&uStack_58,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa5c),0);
  uStack_5c = 0;
  *(undefined4 *)(param_1 + 0xe0) = uStack_58;
  *(undefined4 *)(param_1 + 0xe4) = uStack_54;
  uStack_60 = 0;
  FUN_02b644a0(&uStack_60,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa64),0);
  uStack_6c = 0;
  *(undefined4 *)(param_1 + 0xe8) = uStack_60;
  *(undefined4 *)(param_1 + 0xec) = uStack_5c;
  uStack_70 = 0;
  uStack_68 = 0;
  FUN_02b64854(&uStack_70,*(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa44),0);
  iVar3 = *piVar7;
  *(undefined4 *)(param_1 + 0xf8) = uStack_68;
  *(ulonglong *)(param_1 + 0xf0) = CONCAT44(uStack_6c,uStack_70);
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_02b64854(&uStack_80,*(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xa48),0);
  puVar2 = *(undefined4 **)(_UNK_02c11238 + 0x2c11154);
  *(undefined4 *)(param_1 + 0x104) = uStack_78;
  *(ulonglong *)(param_1 + 0xfc) = CONCAT44(uStack_7c,uStack_80);
  uVar1 = func_0x01384be4(*puVar2);
  FUN_02b635c4(uVar1,0);
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uVar5 = *(undefined4 *)(*(int *)(*piVar7 + 0x5c) + 0xa4c);
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  FUN_02b64854(&uStack_90,uVar5,0);
  *(undefined4 *)(param_1 + 0x114) = uStack_88;
  *(ulonglong *)(param_1 + 0x10c) = CONCAT44(uStack_8c,uStack_90);
  FUN_02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar1 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  uVar1 = func_0x017e308c(uVar1,0);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity$$SaveSetup RVA 0x2c0123c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c1123c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar5 = (char *)(_UNK_02c116f0 + 0x2c11258);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c116f4 + 0x2c1126c));
    func_0x01384978(*(undefined4 *)(_UNK_02c116f8 + 0x2c11278));
    func_0x01384978(*(undefined4 *)(_UNK_02c116fc + 0x2c11284));
    func_0x01384978(*(undefined4 *)(_UNK_02c11700 + 0x2c11290));
    func_0x01384978(*(undefined4 *)(_UNK_02c11704 + 0x2c1129c));
    func_0x01384978(*(undefined4 *)(_UNK_02c11708 + 0x2c112a8));
    func_0x01384978(*(undefined4 *)(_UNK_02c1170c + 0x2c112b4));
    func_0x01384978(*(undefined4 *)(_UNK_02c11710 + 0x2c112c0));
    *pcVar5 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x7b78,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x28);
    uVar2 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0x5c),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar7 = *(undefined4 **)(_UNK_02c11714 + 0x2c11374);
    func_0x03652b00(iVar1,uVar2,*puVar7);
    uVar2 = func_0x01c23578(1,*(undefined4 *)(param_1 + 0x60),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar7);
    uVar2 = func_0x01c23578(2,*(undefined4 *)(param_1 + 0x54),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar7);
    uVar2 = func_0x01c23578(3,*(undefined4 *)(param_1 + 100),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar7);
    uVar2 = func_0x01c23578(4,*(undefined4 *)(param_1 + 0x68),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar7);
    uVar2 = func_0x01c23578(5,*(undefined4 *)(param_1 + 0x6c),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar7);
    if (*(int *)(param_1 + 0x74) == 0) {
      uVar2 = func_0x01c23578(6,0xffffffff,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar2,*puVar7);
      uVar2 = func_0x01c23578(7,0xffffffff,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar2,*puVar7);
      uVar2 = func_0x01c23578(8,0xffffffff,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar2,*puVar7);
    }
    else {
      FUN_02bf03d8(*(int *)(param_1 + 0x74),iVar1,6,7,8,0);
    }
    iVar6 = *(int *)(param_1 + 0x70);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x03d59a74(iVar6,**(undefined4 **)(_UNK_02c11718 + 0x2c11544));
    uVar2 = func_0x01c23578(9,uVar2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar7);
    iVar6 = *(int *)(param_1 + 0x70);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_58,iVar6,**(undefined4 **)(_UNK_02c1171c + 0x2c115a0));
    iVar6 = 10;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    puVar8 = *(undefined4 **)(_UNK_02c11720 + 0x2c115d0);
    while (iVar3 = func_0x03f9975c(&uStack_40,*puVar8), iVar3 != 0) {
      uVar2 = (undefined4)uStack_30;
      uVar4 = func_0x01c23578(iVar6,uStack_34,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar4,*puVar7);
      uVar2 = func_0x01c23578(iVar6 + 1,uVar2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = iVar6 + 2;
      func_0x03652b00(iVar1,uVar2,*puVar7);
    }
    func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_02c11724 + 0x2c11658));
  }
  else {
    iVar1 = func_0x0229f13c(0x7b78,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$LoadSetup RVA 0x2c01730 =====

/* WARNING: Possible PIC construction at 0x02c12470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c12474) */
/* WARNING: Removing unreachable block (ram,0x02c12480) */
/* WARNING: Removing unreachable block (ram,0x02c12484) */
/* WARNING: Removing unreachable block (ram,0x02c124a0) */
/* WARNING: Removing unreachable block (ram,0x02c124a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c11730(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_r4;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int unaff_r5;
  undefined4 uVar7;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int iVar8;
  int unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar11;
  bool bVar12;
  int *piVar13;
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
  
  pcVar4 = (char *)(_UNK_02c119a4 + 0x2c1174c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c119a8 + 0x2c11760));
    func_0x01384978(*(undefined4 *)(_UNK_02c119ac + 0x2c1176c));
    func_0x01384978(*(undefined4 *)(_UNK_02c119b0 + 0x2c11778));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b79,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b79,0);
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
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  uVar7 = func_0x01c23c30(0,uVar3,0);
  *(undefined4 *)(param_1 + 0x5c) = uVar7;
  uVar7 = func_0x01c23c30(1,uVar3,0);
  *(undefined4 *)(param_1 + 0x60) = uVar7;
  uVar7 = func_0x01c23c30(2,uVar3,0);
  *(undefined4 *)(param_1 + 0x54) = uVar7;
  uVar7 = func_0x01c23c30(3,uVar3,0);
  *(undefined4 *)(param_1 + 100) = uVar7;
  uVar7 = func_0x01c23ccc(4,uVar3,0xffffffff,0);
  *(undefined4 *)(param_1 + 0x68) = uVar7;
  uVar7 = func_0x01c23c30(5,uVar3,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  func_0x02c119c0(param_1);
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0x18)) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02c119b4 + 0x2c11888));
    FUN_02bf44e8(iVar1,0);
    *(int *)(param_1 + 0x74) = iVar1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = 8;
    uStack_2c = 0;
    FUN_02bf061c(iVar1,uVar3,6,7);
  }
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_02c119b8 + 0x2c118e4));
  iVar1 = func_0x01c23c30(9,uVar3,0);
  if (0 < iVar1) {
    iVar6 = 10;
    puVar9 = *(undefined4 **)(_UNK_02c119bc + 0x2c11918);
    do {
      uVar7 = func_0x01c23c30(iVar6,uVar3,0);
      uVar2 = func_0x01c23c30(iVar6 + 1,uVar3,0);
      iVar5 = *(int *)(param_1 + 0x70);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x03d59d54(iVar5,uVar7,uVar2,*puVar9);
      iVar6 = iVar6 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_02c0e1ac(param_1);
  FUN_02c0e620(param_1);
  func_0x02c11a28(param_1);
  func_0x02c11ca8(param_1);
  iVar1 = 0;
  puVar10 = (undefined1 *)register0x00000054;
  while( true ) {
    *(undefined4 *)(puVar10 + -4) = unaff_lr;
    *(undefined4 *)(puVar10 + -8) = unaff_r11;
    *(undefined4 *)(puVar10 + -0xc) = unaff_r9;
    *(int *)(puVar10 + -0x10) = unaff_r8;
    *(undefined4 *)(puVar10 + -0x14) = unaff_r7;
    *(undefined4 *)(puVar10 + -0x18) = unaff_r6;
    *(int *)(puVar10 + -0x1c) = unaff_r5;
    piVar13 = (int *)(puVar10 + -0x20);
    *piVar13 = unaff_r4;
    pcVar4 = (char *)(iRam02c1226c + 0x2c12088);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(iRam02c12270 + 0x2c1209c));
      func_0x01384978(*(undefined4 *)(iRam02c12274 + 0x2c120a8));
      func_0x01384978(*(undefined4 *)(iRam02c12278 + 0x2c120b4));
      func_0x01384978(*(undefined4 *)(iRam02c1227c + 0x2c120c0));
      func_0x01384978(*(undefined4 *)(iRam02c12280 + 0x2c120cc));
      *pcVar4 = '\x01';
    }
    iVar6 = func_0x0229f06c(0x7b8d,0);
    if (iVar6 != 0) {
      iVar6 = func_0x0229f13c(0x7b8d,0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(puVar10 + -4) = *(undefined4 *)(puVar10 + -4);
      *(int *)(puVar10 + -8) = unaff_r10;
      *(undefined4 *)(puVar10 + -0xc) = *(undefined4 *)(puVar10 + -0xc);
      *(undefined4 *)(puVar10 + -0x10) = *(undefined4 *)(puVar10 + -0x10);
      *(undefined4 *)(puVar10 + -0x14) = *(undefined4 *)(puVar10 + -0x14);
      *(undefined4 *)(puVar10 + -0x18) = *(undefined4 *)(puVar10 + -0x18);
      *(undefined4 *)(puVar10 + -0x1c) = *(undefined4 *)(puVar10 + -0x1c);
      *piVar13 = *piVar13;
      *(undefined4 *)(puVar10 + -0x38) = 0;
      *(undefined4 *)(puVar10 + -0x34) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      *(undefined4 *)(puVar10 + -0x30) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      *(undefined4 *)(puVar10 + -0x2c) =
           *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      *(undefined4 *)(puVar10 + -0x28) = 0;
      func_0x0245494c(puVar10 + -0x50,0,iVar1,0);
      iVar5 = *(int *)(iVar6 + 0x10);
      *(undefined4 *)(puVar10 + -0x38) = *(undefined4 *)(puVar10 + -0x50);
      *(undefined4 *)(puVar10 + -0x34) = *(undefined4 *)(puVar10 + -0x4c);
      *(undefined4 *)(puVar10 + -0x30) = *(undefined4 *)(puVar10 + -0x48);
      *(undefined4 *)(puVar10 + -0x2c) = *(undefined4 *)(puVar10 + -0x44);
      *(undefined4 *)(puVar10 + -0x28) = *(undefined4 *)(puVar10 + -0x40);
      if (iVar5 != 0) {
        func_0x01485278(puVar10 + -0x38,iVar5,0);
      }
      func_0x01485278(puVar10 + -0x38,param_1,0);
      func_0x01485228(puVar10 + -0x38,iVar1,0);
      iVar5 = *(int *)(iVar6 + 8);
      uVar7 = *(undefined4 *)(iVar6 + 0xc);
      iVar1 = *(int *)(iVar6 + 0x10);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 3;
      if (iVar1 == 0) {
        uVar3 = 2;
      }
      *(undefined4 *)(puVar10 + -0x58) = 0;
      *(undefined4 *)(puVar10 + -0x54) = 0;
      func_0x0245495c(iVar5,uVar7,puVar10 + -0x38,uVar3);
      return;
    }
    if (*(int *)(param_1 + 0x7c) == 0) {
      return;
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x7c) + 0x30);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar6 + 0xc) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x80) != 0) {
      return;
    }
    iVar8 = *(int *)(param_1 + 0x7c);
    iVar5 = iVar8;
    if (iVar8 != 0) break;
    func_0x01384bf0();
    iVar5 = *(int *)(param_1 + 0x7c);
    bVar12 = iVar5 == 0;
    bVar11 = true;
    if (!bVar12) break;
    unaff_r4 = func_0x01384bf0();
    iVar5 = 0;
    if (bVar12) {
      unaff_r10 = -(!bVar11 + 0xad00000) + 0x2c12274;
      iVar6 = unaff_r8 + 0xc4 + (uint)bVar11;
      param_1 = unaff_r8 + 0x9400 + (uint)bVar11;
      iVar1 = unaff_r8 + (uint)bVar11;
      iVar5 = -(!bVar11 + 0xad00000) + 0x2c1227f + (uint)bVar11;
    }
    *(undefined4 *)(puVar10 + -0x2c) = 0x2c1226c;
    *(undefined4 *)(puVar10 + -0x30) = unaff_r11;
    *(int *)(puVar10 + -0x34) = iVar5;
    *(int *)(puVar10 + -0x38) = iVar6;
    *(int *)(puVar10 + -0x3c) = iVar1;
    *(int *)(puVar10 + -0x40) = param_1;
    pcVar4 = (char *)(_UNK_02c124e8 + 0x2c122ac);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02c124ec + 0x2c122c0));
      func_0x01384978(*(undefined4 *)(_UNK_02c124f0 + 0x2c122cc));
      func_0x01384978(*(undefined4 *)(_UNK_02c124f4 + 0x2c122d8));
      *pcVar4 = '\x01';
    }
    *(undefined4 *)(puVar10 + -0x4c) = 0;
    *(undefined4 *)(puVar10 + -0x50) = 0;
    *(undefined4 *)(puVar10 + -0x48) = 0;
    iVar1 = func_0x0229f06c(0x7b8f,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x7b8f,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02173f80(iVar1,unaff_r4,0);
      return;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(unaff_r4 + 0x78);
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    unaff_r6 = *(undefined4 *)(iVar6 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_r7 = 0;
    uVar7 = func_0x01cf6408(iVar1,unaff_r6,0);
    *(undefined4 *)(unaff_r4 + 0x5c) = uVar7;
    *(undefined4 *)(unaff_r4 + 0x68) = 0xffffffff;
    func_0x02c119c0(unaff_r4);
    func_0x02c12500(unaff_r4);
    unaff_r5 = *(int *)(unaff_r4 + 0x7c);
    if (unaff_r5 == 0) {
      func_0x01384bf0();
    }
    FUN_02c0cc10(unaff_r4,*(undefined4 *)(unaff_r5 + 0x14),1);
    if (*(int *)(unaff_r4 + 0x48) != 0) {
      unaff_r7 = 0;
      iVar1 = func_0x02139cf4(*(int *)(unaff_r4 + 0x48),0);
      if (iVar1 != 0) {
        unaff_r5 = 0;
        func_0x020da680(puVar10 + -0x58,iVar1,0);
        uVar7 = *(undefined4 *)(puVar10 + -0x54);
        puVar9 = *(undefined4 **)(_UNK_02c124f8 + 0x2c12404);
        *(undefined4 *)(puVar10 + -0x54) = 0;
        *(undefined4 *)(puVar10 + -0x58) = 0;
        func_0x03507d38(puVar10 + -0x58,uVar7,*puVar9);
        unaff_r7 = *(undefined4 *)(puVar10 + -0x54);
      }
    }
    *(undefined4 *)(unaff_r4 + 0x60) = unaff_r7;
    if ((*(int *)(unaff_r4 + 0x48) != 0) &&
       (iVar1 = func_0x02139cf4(*(int *)(unaff_r4 + 0x48),0), iVar1 != 0)) {
      func_0x020dc7e4(iVar1,*(undefined4 *)(unaff_r4 + 0x60),*(undefined4 *)(unaff_r4 + 0x54),0);
    }
    FUN_02c0e1ac(unaff_r4);
    FUN_02c0e620(unaff_r4);
    func_0x02c11a28(unaff_r4);
    func_0x02c11ca8(unaff_r4);
    iVar1 = 1;
    unaff_lr = 0x2c12474;
    param_1 = unaff_r4;
    puVar10 = puVar10 + -0x58;
  }
  uVar7 = *(undefined4 *)(iVar5 + 0x34);
  uVar3 = *(undefined4 *)(iVar8 + 0x30);
  if (*(int *)(**(int **)(iRam02c12284 + 0x2c12188) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar7 = func_0x02565b6c(uVar7,0);
  iVar6 = func_0x01384be4(**(undefined4 **)(iRam02c12288 + 0x2c121c0));
  *(undefined4 *)(puVar10 + -0x28) = uVar7;
  *(undefined4 *)(puVar10 + -0x24) = 0;
  FUN_02bf5bd8(iVar6,param_1,uVar3,iVar1);
  iVar1 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x80) = iVar6;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar7 = *(undefined4 *)(iVar1 + 0x34);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  FUN_02bf661c(iVar6,uVar7,0);
  iVar1 = *(int *)(param_1 + 0x80);
  uVar7 = func_0x01384be4(**(undefined4 **)(iRam02c1228c + 0x2c12220));
  func_0x03ccab14(uVar7,param_1,**(undefined4 **)(iRam02c12290 + 0x2c1223c),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(puVar10 + -4) = *(undefined4 *)(puVar10 + -4);
  *(int *)(puVar10 + -8) = unaff_r10;
  *(undefined4 *)(puVar10 + -0xc) = *(undefined4 *)(puVar10 + -0xc);
  *(undefined4 *)(puVar10 + -0x10) = *(undefined4 *)(puVar10 + -0x10);
  *(undefined4 *)(puVar10 + -0x14) = *(undefined4 *)(puVar10 + -0x14);
  *(undefined4 *)(puVar10 + -0x18) = *(undefined4 *)(puVar10 + -0x18);
  *(undefined4 *)(puVar10 + -0x1c) = *(undefined4 *)(puVar10 + -0x1c);
  *piVar13 = *piVar13;
  pcVar4 = (char *)(_UNK_02bf5264 + 0x2bf51d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02bf5268 + 0x2bf51ec),uVar7,0);
    *pcVar4 = '\x01';
  }
  piVar13 = (int *)(iVar1 + 0x40);
  puVar9 = *(undefined4 **)(_UNK_02bf526c + 0x2bf5204);
  iVar1 = *piVar13;
  do {
    iVar5 = 0;
    iVar6 = func_0x0487907c(iVar1,uVar7,0);
    if (iVar6 != 0) {
      uVar3 = *puVar9;
      iVar5 = func_0x01384ab8(iVar6,uVar3);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar6,uVar3);
        iVar5 = 0;
      }
    }
    iVar6 = func_0x0138b0ec(piVar13,iVar5,iVar1);
    bVar12 = iVar1 != iVar6;
    iVar1 = iVar6;
  } while (bVar12);
  return;
}



// ===== FAT.DiningBoardActivity$$InitConfig RVA 0x2c019c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c119c0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar2 = func_0x0229f06c(0x7b7a,0);
  if (iVar2 == 0) {
    uVar6 = func_0x017cac54(*(undefined4 *)(param_1 + 0x5c),0);
    *(undefined4 *)(param_1 + 0x7c) = uVar6;
    pcVar5 = (char *)(_UNK_02c0d510 + 0x2c0d328);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02c0d514 + 0x2c0d33c));
      func_0x01384978(*(undefined4 *)(_UNK_02c0d518 + 0x2c0d348));
      func_0x01384978(*(undefined4 *)(_UNK_02c0d51c + 0x2c0d354));
      func_0x01384978(*(undefined4 *)(_UNK_02c0d520 + 0x2c0d360));
      func_0x01384978(*(undefined4 *)(_UNK_02c0d524 + 0x2c0d36c));
      func_0x01384978(*(undefined4 *)(_UNK_02c0d528 + 0x2c0d378));
      *pcVar5 = '\x01';
    }
    iVar2 = func_0x0229f06c(0x7b48,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x3c);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03d390e8(iVar2,**(undefined4 **)(_UNK_02c0d52c + 0x2c0d3e4));
      iVar2 = *(int *)(param_1 + 0x7c);
      if (iVar2 != 0) {
        iVar4 = 0;
        puVar8 = *(undefined4 **)(_UNK_02c0d530 + 0x2c0d410);
        piVar9 = *(int **)(_UNK_02c0d534 + 0x2c0d418);
        puVar10 = *(undefined4 **)(_UNK_02c0d538 + 0x2c0d420);
        while( true ) {
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x1c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar2 + 0xc) <= iVar4) break;
          iVar2 = *(int *)(param_1 + 0x7c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar2 = *(int *)(iVar2 + 0x1c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar6 = func_0x03653d1c(iVar2,iVar4,*puVar8);
          if (*(int *)(*piVar9 + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x02566088(&iStack_30,uVar6,0);
          uVar1 = uStack_2c;
          iVar2 = iStack_30;
          if ((0 < iStack_30) && (uStack_2c < 2)) {
            iVar7 = *(int *)(param_1 + 0x3c);
            uStack_2c = 0;
            iStack_30 = 0;
            func_0x038fe198(&iStack_30,iVar2,uVar1,**(undefined4 **)(_UNK_02c0d53c + 0x2c0d4c4));
            if (iVar7 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = *puVar10;
            func_0x03d38e8c(iVar7,iVar4,iStack_30,uStack_2c);
          }
          iVar2 = *(int *)(param_1 + 0x7c);
          iVar4 = iVar4 + 1;
        }
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x7b48,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7b7a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&iStack_48,0,0);
  iStack_30 = iStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&iStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&iStack_30,param_1,0);
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
  func_0x0245495c(iVar4,uVar6,&iStack_30,uVar3,0,0);
  return;
}



// ===== FAT.DiningBoardActivity$$RefreshUIVisuals RVA 0x2c01a28 =====

void FUN_02c11a28(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_30 = 0;
  uStack_28 = 0;
  iVar1 = func_0x0229f06c(0x7b7c,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x78);
    uStack_20 = *(undefined4 *)(param_1 + 0xb8);
    uStack_1c = *(undefined4 *)(param_1 + 0xbc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x40),0);
    iVar1 = *(int *)(param_1 + 0x78);
    uStack_20 = *(undefined4 *)(param_1 + 0xc0);
    uStack_1c = *(undefined4 *)(param_1 + 0xc4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x3c),0);
    iVar1 = *(int *)(param_1 + 0x78);
    uStack_20 = *(undefined4 *)(param_1 + 200);
    uStack_1c = *(undefined4 *)(param_1 + 0xcc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x38),0);
    uStack_20 = *(undefined4 *)(param_1 + 0xd0);
    uStack_1c = *(undefined4 *)(param_1 + 0xd4);
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x44),0);
    iVar1 = *(int *)(param_1 + 0x78);
    uStack_20 = *(undefined4 *)(param_1 + 0xe8);
    uStack_1c = *(undefined4 *)(param_1 + 0xec);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x18),0);
    iVar1 = *(int *)(param_1 + 0x78);
    uStack_30 = *(undefined8 *)(param_1 + 0xf0);
    uStack_28 = *(undefined4 *)(param_1 + 0xf8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x48),param_1,0,1,0);
    iVar1 = *(int *)(param_1 + 0x78);
    uStack_30 = *(undefined8 *)(param_1 + 0xfc);
    uStack_28 = *(undefined4 *)(param_1 + 0x104);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x24),param_1,0,0,0);
    iVar2 = *(int *)(param_1 + 0x78);
    iVar1 = *(int *)(param_1 + 0x108);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = *(undefined4 *)(iVar2 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b61a50(iVar1,uVar3,0,0);
    iVar1 = *(int *)(param_1 + 0x78);
    uStack_30 = *(undefined8 *)(param_1 + 0x10c);
    uStack_28 = *(undefined4 *)(param_1 + 0x114);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64928(&uStack_30,*(undefined4 *)(iVar1 + 0x2c),param_1,0,0,0);
    iVar1 = *(int *)(param_1 + 0x78);
    uStack_20 = *(undefined4 *)(param_1 + 0xd8);
    uStack_1c = *(undefined4 *)(param_1 + 0xdc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02b64540(&uStack_20,*(undefined4 *)(iVar1 + 0x1c),0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7b7c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$InitTokenOutput RVA 0x2c01ca8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c11ca8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02c12034 + 0x2c11cc0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c12038 + 0x2c11cd4));
    func_0x01384978(*(undefined4 *)(_UNK_02c1203c + 0x2c11ce0));
    func_0x01384978(*(undefined4 *)(_UNK_02c12040 + 0x2c11cec));
    func_0x01384978(*(undefined4 *)(_UNK_02c12044 + 0x2c11cf8));
    func_0x01384978(*(undefined4 *)(_UNK_02c12048 + 0x2c11d04));
    func_0x01384978(*(undefined4 *)(_UNK_02c1204c + 0x2c11d10));
    func_0x01384978(*(undefined4 *)(_UNK_02c12050 + 0x2c11d1c));
    *pcVar4 = '\x01';
  }
  uStack_24 = 0;
  iVar2 = func_0x0229f06c(0x7b87,0);
  if (iVar2 == 0) {
    func_0x02c158a0(param_1);
    func_0x02c158f8(param_1);
    iVar2 = func_0x02c159e0(param_1);
    if (iVar2 != 0) {
      if (param_1[0x28] == 0) {
        iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02c12054 + 0x2c11da8));
        func_0x02156e68(iVar2,param_1,0);
        param_1[0x28] = iVar2;
      }
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar2 + 0x4c);
      iVar2 = param_1[0x28];
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x01dbb930(iVar6,iVar2,0);
    }
    iVar2 = func_0x02c15a44(param_1);
    if (iVar2 != 0) {
      if (param_1[0x29] == 0) {
        iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02c12058 + 0x2c11e24));
        FUN_02afb3e0(iVar2,0);
        param_1[0x29] = iVar2;
      }
      iVar2 = (**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x14);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x03470a60(iVar2,**(undefined4 **)(_UNK_02c12060 + 0x2c11e98),&uStack_24,
                      **(undefined4 **)(_UNK_02c1205c + 0x2c11e8c));
      iVar8 = param_1[0x19];
      iVar6 = param_1[0x29];
      uVar3 = FUN_02c10b64(param_1);
      iVar2 = param_1[0x1f];
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      piVar7 = *(int **)(_UNK_02c12064 + 0x2c11ed0);
      uVar9 = *(undefined4 *)(iVar2 + 0x28);
      iVar2 = *piVar7;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar7;
      }
      uVar1 = uStack_24;
      uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x45c);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      FUN_02af6c48(iVar6,iVar8,param_1,uVar3,uVar9,uVar5,uVar1,1,0,0x3f,0,0,0,0);
    }
    iVar2 = param_1[0x2a];
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar8 = param_1[0x1f];
    iVar6 = *(int *)(iVar2 + 0x10);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    param_1[0x2b] = -1;
    *(int *)(iVar2 + 0x10) = iVar6 + 1;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar8 + 0x18)) {
      iVar2 = param_1[0x1d];
      if (iVar2 == 0) {
        iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02c12068 + 0x2c11fa4));
        FUN_02bf44e8(iVar2,0);
        param_1[0x1d] = iVar2;
      }
      iVar6 = param_1[0x1f];
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(iVar6 + 0x18);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_02befbb0(iVar2,uVar3,param_1,0);
      iVar2 = param_1[0x1d];
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_02bf02d0(iVar2,0);
      iVar6 = param_1[0x19];
      iVar2 = param_1[0x1d];
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      FUN_02befcdc(iVar2,iVar6,0);
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7b87,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$InitHandbookAgent RVA 0x2c0206c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c1206c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int unaff_r8;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  pcVar5 = (char *)(iRam02c1226c + 0x2c12088);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam02c12270 + 0x2c1209c));
    func_0x01384978(*(undefined4 *)(iRam02c12274 + 0x2c120a8));
    func_0x01384978(*(undefined4 *)(iRam02c12278 + 0x2c120b4));
    func_0x01384978(*(undefined4 *)(iRam02c1227c + 0x2c120c0));
    func_0x01384978(*(undefined4 *)(iRam02c12280 + 0x2c120cc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b8d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b8d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_38 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    iStack_38 = (int)uStack_50;
    iStack_34 = uStack_50._4_4_;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_38,param_1,0);
    func_0x01485228(&iStack_38,param_2,0);
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
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x0245495c(iVar3,uVar4,&iStack_38,uVar2);
    return;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 0x30);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar1 + 0xc) != 0) && (*(int *)(param_1 + 0x80) == 0)) {
      iVar6 = *(int *)(param_1 + 0x7c);
      iVar3 = iVar6;
      if (iVar6 == 0) {
        func_0x01384bf0();
        iVar3 = *(int *)(param_1 + 0x7c);
        bVar10 = iVar3 == 0;
        bVar9 = true;
        if (bVar10) {
          iVar3 = func_0x01384bf0();
          iStack_34 = 0;
          if (bVar10) {
            iVar1 = unaff_r8 + 0xc4 + (uint)bVar9;
            param_1 = unaff_r8 + 0x9400 + (uint)bVar9;
            param_2 = unaff_r8 + (uint)bVar9;
            iStack_34 = (0x2c1227f - (!bVar9 + 0xad00000)) + (uint)bVar9;
          }
          pcVar5 = (char *)(_UNK_02c124e8 + 0x2c122ac);
          iStack_40 = param_1;
          iStack_3c = param_2;
          iStack_38 = iVar1;
          if (*pcVar5 == '\0') {
            func_0x01384978(*(undefined4 *)(_UNK_02c124ec + 0x2c122c0));
            func_0x01384978(*(undefined4 *)(_UNK_02c124f0 + 0x2c122cc));
            func_0x01384978(*(undefined4 *)(_UNK_02c124f4 + 0x2c122d8));
            *pcVar5 = '\x01';
          }
          uStack_50 = 0;
          uStack_48 = 0;
          iVar1 = func_0x0229f06c(0x7b8f,0);
          if (iVar1 == 0) {
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar6 = *(int *)(iVar3 + 0x78);
            iVar1 = *(int *)(iVar1 + 0x2c);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            uVar4 = *(undefined4 *)(iVar6 + 0x28);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar4 = func_0x01cf6408(iVar1,uVar4,0);
            *(undefined4 *)(iVar3 + 0x5c) = uVar4;
            *(undefined4 *)(iVar3 + 0x68) = 0xffffffff;
            FUN_02c119c0(iVar3);
            func_0x02c12500(iVar3);
            iVar1 = *(int *)(iVar3 + 0x7c);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            FUN_02c0cc10(iVar3,*(undefined4 *)(iVar1 + 0x14),1);
            uVar4 = 0;
            if (*(int *)(iVar3 + 0x48) != 0) {
              iVar1 = func_0x02139cf4(*(int *)(iVar3 + 0x48),0);
              uVar4 = 0;
              if (iVar1 != 0) {
                func_0x020da680(&uStack_58,iVar1,0);
                uVar4 = uStack_54;
                uStack_54 = 0;
                uStack_58 = 0;
                func_0x03507d38(&uStack_58,uVar4,**(undefined4 **)(_UNK_02c124f8 + 0x2c12404));
                uVar4 = uStack_54;
              }
            }
            *(undefined4 *)(iVar3 + 0x60) = uVar4;
            if ((*(int *)(iVar3 + 0x48) != 0) &&
               (iVar1 = func_0x02139cf4(*(int *)(iVar3 + 0x48),0), iVar1 != 0)) {
              func_0x020dc7e4(iVar1,*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar3 + 0x54),0);
            }
            FUN_02c0e1ac(iVar3);
            FUN_02c0e620(iVar3);
            FUN_02c11a28(iVar3);
            FUN_02c11ca8(iVar3);
            FUN_02c1206c(iVar3,1);
            iVar1 = *(int *)(iVar3 + 0x7c);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            piVar7 = *(int **)(_UNK_02c124fc + 0x2c12490);
            uVar4 = *(undefined4 *)(iVar1 + 0x2c);
            iVar1 = *piVar7;
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x01384ab4();
              iVar1 = *piVar7;
            }
            func_0x02c128b8(iVar3,uVar4,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x468));
            uStack_48 = *(undefined4 *)(iVar3 + 0xf8);
            uStack_50 = *(undefined8 *)(iVar3 + 0xf0);
            FUN_02b64cc4(&uStack_50,0,0,0);
          }
          else {
            iVar1 = func_0x0229f13c(0x7b8f,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x02173f80(iVar1,iVar3,0);
          }
          return;
        }
      }
      uVar4 = *(undefined4 *)(iVar3 + 0x34);
      uVar2 = *(undefined4 *)(iVar6 + 0x30);
      if (*(int *)(**(int **)(iRam02c12284 + 0x2c12188) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02565b6c(uVar4,0);
      iVar1 = func_0x01384be4(**(undefined4 **)(iRam02c12288 + 0x2c121c0));
      FUN_02bf5bd8(iVar1,param_1,uVar2,param_2);
      iVar3 = *(int *)(param_1 + 0x78);
      *(int *)(param_1 + 0x80) = iVar1;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar4 = *(undefined4 *)(iVar3 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      FUN_02bf661c(iVar1,uVar4,0);
      iVar1 = *(int *)(param_1 + 0x80);
      uVar4 = func_0x01384be4(**(undefined4 **)(iRam02c1228c + 0x2c12220));
      func_0x03ccab14(uVar4,param_1,**(undefined4 **)(iRam02c12290 + 0x2c1223c),0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      pcVar5 = (char *)(_UNK_02bf5264 + 0x2bf51d8);
      if (*pcVar5 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02bf5268 + 0x2bf51ec),uVar4,0);
        *pcVar5 = '\x01';
      }
      piVar7 = (int *)(iVar1 + 0x40);
      puVar8 = *(undefined4 **)(_UNK_02bf526c + 0x2bf5204);
      iVar1 = *piVar7;
      do {
        iVar6 = 0;
        iVar3 = func_0x0487907c(iVar1,uVar4,0);
        if (iVar3 != 0) {
          uVar2 = *puVar8;
          iVar6 = func_0x01384ab8(iVar3,uVar2);
          if (iVar6 == 0) {
            func_0x01384fb4(iVar3,uVar2);
            iVar6 = 0;
          }
        }
        iVar3 = func_0x0138b0ec(piVar7,iVar6,iVar1);
        bVar10 = iVar1 != iVar3;
        iVar1 = iVar3;
      } while (bVar10);
      return;
    }
  }
  return;
}



// ===== FAT.DiningBoardActivity$$SetupFresh RVA 0x2c02294 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c12294(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  pcVar2 = (char *)(_UNK_02c124e8 + 0x2c122ac);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c124ec + 0x2c122c0));
    func_0x01384978(*(undefined4 *)(_UNK_02c124f0 + 0x2c122cc));
    func_0x01384978(*(undefined4 *)(_UNK_02c124f4 + 0x2c122d8));
    *pcVar2 = '\x01';
  }
  uStack_28 = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x7b8f,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(param_1 + 0x78);
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar4 = *(undefined4 *)(iVar3 + 0x28);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x01cf6408(iVar1,uVar4,0);
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
    FUN_02c119c0(param_1);
    func_0x02c12500(param_1);
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02c0cc10(param_1,*(undefined4 *)(iVar1 + 0x14),1);
    uVar4 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x48),0);
      uVar4 = 0;
      if (iVar1 != 0) {
        func_0x020da680(&uStack_30,iVar1,0);
        uVar4 = uStack_2c;
        uStack_2c = 0;
        uStack_30 = 0;
        func_0x03507d38(&uStack_30,uVar4,**(undefined4 **)(_UNK_02c124f8 + 0x2c12404));
        uVar4 = uStack_2c;
      }
    }
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    if ((*(int *)(param_1 + 0x48) != 0) &&
       (iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x48),0), iVar1 != 0)) {
      func_0x020dc7e4(iVar1,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x54),0);
    }
    FUN_02c0e1ac(param_1);
    FUN_02c0e620(param_1);
    FUN_02c11a28(param_1);
    FUN_02c11ca8(param_1);
    FUN_02c1206c(param_1,1);
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar5 = *(int **)(_UNK_02c124fc + 0x2c12490);
    uVar4 = *(undefined4 *)(iVar1 + 0x2c);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    func_0x02c128b8(param_1,uVar4,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x468));
    uStack_20 = *(undefined4 *)(param_1 + 0xf8);
    uStack_28 = *(undefined8 *)(param_1 + 0xf0);
    FUN_02b64cc4(&uStack_28,0,0,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7b8f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$InitTableState RVA 0x2c02500 =====

/* WARNING: Possible PIC construction at 0x01419064: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01419068) */
/* WARNING: Removing unreachable block (ram,0x01384bec) */
/* WARNING: Removing unreachable block (ram,0x01419040) */
/* WARNING: Removing unreachable block (ram,0x01419044) */
/* WARNING: Removing unreachable block (ram,0x01419ad4) */
/* WARNING: Removing unreachable block (ram,0x01419ae8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c12500(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_02c12880 + 0x2c12514);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c12884 + 0x2c12528));
    func_0x01384978(*(undefined4 *)(_UNK_02c12888 + 0x2c12534));
    func_0x01384978(*(undefined4 *)(_UNK_02c1288c + 0x2c12540));
    func_0x01384978(*(undefined4 *)(_UNK_02c12890 + 0x2c1254c));
    func_0x01384978(*(undefined4 *)(_UNK_02c12894 + 0x2c12558));
    func_0x01384978(*(undefined4 *)(_UNK_02c12898 + 0x2c12564));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b90,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b90,0);
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
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    uVar9 = func_0x0245495c(iVar8,uVar9,&uStack_30,uVar5,0,0);
    return uVar9;
  }
  iVar1 = *(int *)(param_1 + 0x70);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_02c1289c + 0x2c125cc));
  if (*(int *)(param_1 + 0x7c) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_02c128a0 + 0x2c125fc));
  piVar10 = *(int **)(_UNK_02c128a4 + 0x2c12614);
  piVar11 = *(int **)(_UNK_02c128a8 + 0x2c1261c);
  puVar12 = *(undefined4 **)(_UNK_02c128ac + 0x2c12624);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02c1267c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_02c1267c:
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
        if (piVar6[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_02c126f0;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_02c126f0:
    uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03d59d54(iVar1,uVar9,0,*puVar12);
  } while( true );
  uVar9 = 0;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_02c128b0 + 0x2c12748)) {
          puVar12 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xc0);
          goto LAB_02c12790;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar4 != 0);
    }
    puVar12 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_02c128b0 + 0x2c12748),0);
LAB_02c12790:
    uVar9 = (*(code *)*puVar12)(piVar2,puVar12[1]);
  }
  return uVar9;
}



// ===== FAT.DiningBoardActivity$$AddToken RVA 0x2c028b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c128b8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_02c12a30 + 0x2c128d8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c12a34 + 0x2c128ec));
    *pcVar5 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x614,0);
  if (iVar1 == 0) {
    if (0 < param_2) {
      iVar1 = 0x7fffffff - *(int *)(param_1 + 100);
      if (param_2 < iVar1) {
        iVar1 = param_2;
      }
      if (0 < iVar1) {
        FUN_02c0da40(&uStack_30,param_1);
        iVar4 = *(int *)(param_1 + 100) + iVar1;
        *(int *)(param_1 + 100) = iVar4;
        if (*(int *)(param_1 + 0x74) != 0) {
          FUN_02befcdc(*(int *)(param_1 + 0x74),iVar4,0);
        }
        piVar6 = *(int **)(_UNK_02c12a38 + 0x2c129b4);
        iVar4 = *piVar6;
        if (*(int *)(iVar4 + 0x74) == 0) {
          func_0x01384ab4();
          iVar4 = *piVar6;
        }
        if (param_3 != *(int *)(*(int *)(iVar4 + 0x5c) + 0x45c)) {
          iVar2 = func_0x02c15a44(param_1);
          iVar4 = 0;
          if (iVar2 != 0) {
            iVar4 = *(int *)(param_1 + 0xa4);
          }
          if (iVar2 != 0 && iVar4 != 0) {
            FUN_02af96e4(iVar4,*(undefined4 *)(param_1 + 100),0);
          }
        }
        uVar3 = FUN_02c10b64(param_1);
        func_0x019a4b9c(uVar3,iVar1,*(undefined4 *)(param_1 + 100),param_3,0);
        FUN_02c0dc7c(param_1,&uStack_30);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x614,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ab90(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$WhenEnd RVA 0x2c02a3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c12a3c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_02c12d70 + 0x2c12a54);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c12d74 + 0x2c12a68));
    func_0x01384978(*(undefined4 *)(_UNK_02c12d78 + 0x2c12a74));
    func_0x01384978(*(undefined4 *)(_UNK_02c12d7c + 0x2c12a80));
    func_0x01384978(*(undefined4 *)(_UNK_02c12d80 + 0x2c12a8c));
    func_0x01384978(*(undefined4 *)(_UNK_02c12d84 + 0x2c12a98));
    func_0x01384978(*(undefined4 *)(_UNK_02c12d88 + 0x2c12aa4));
    func_0x01384978(*(undefined4 *)(_UNK_02c12d8c + 0x2c12ab0));
    *pcVar5 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iStack_24 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iVar2 = func_0x0229f06c(0x7b91,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7b91,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar2,param_1,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02c12d90 + 0x2c12b24) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x028c8d78(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0302a7c0(&uStack_20,iVar2,&iStack_24,**(undefined4 **)(_UNK_02c12d94 + 0x2c12b60));
  iVar2 = iStack_24;
  if (iStack_24 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (0 < iVar4) {
    func_0x0484e5ec(*(undefined4 *)(iVar2 + 8),0,iVar4,0);
  }
  func_0x02c12da4(param_1,iStack_24);
  FUN_02c0389c(iStack_24,*(undefined4 *)(param_1 + 0x48),0);
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_02bf7198(*(int *)(param_1 + 0x80),iStack_24,0);
  }
  func_0x02c13080(param_1,iStack_24);
  uStack_28 = *(undefined4 *)(param_1 + 0x104);
  uStack_30 = *(undefined8 *)(param_1 + 0xfc);
  FUN_02b64cc4(&uStack_30,0,0,0);
  iVar2 = iStack_24;
  if (iStack_24 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar2 + 0xc)) {
    iVar2 = *(int *)(param_1 + 0x110);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = FUN_02b61550(iVar2,0);
    if (iVar2 != 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(param_1 + 0x114);
      iVar2 = *(int *)(iVar2 + 0xfc);
      uStack_38 = uStack_20;
      uStack_34 = uStack_1c;
      uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_02c12d9c + 0x2c12c80),&uStack_38);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(iVar2,uVar7,0,uVar3,0);
      goto LAB_02c12d60;
    }
  }
  iVar2 = 0;
  puVar6 = *(undefined4 **)(_UNK_02c12d98 + 0x2c12cd0);
  while( true ) {
    iVar4 = iStack_24;
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar4 + 0xc) <= iVar2) break;
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar1 = iStack_24;
    iVar4 = *(int *)(iVar4 + 0x40);
    if (iStack_24 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0328eea8(iVar1,iVar2,*puVar6);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x01cdf088(iVar4,uVar3,0);
    iVar2 = iVar2 + 1;
  }
  func_0x03633b24(&uStack_20,**(undefined4 **)(_UNK_02c12da0 + 0x2c12d58));
LAB_02c12d60:
  func_0x02c138f4(param_1);
  return;
}



// ===== FAT.DiningBoardActivity$$ConvertExpireTokenReward RVA 0x2c02da4 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c12da4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int aiStack_24 [3];
  
  pcVar4 = (char *)(_UNK_02c1304c + 0x2c12dc0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c13050 + 0x2c12dd4));
    func_0x01384978(*(undefined4 *)(_UNK_02c13054 + 0x2c12de0));
    func_0x01384978(*(undefined4 *)(_UNK_02c13058 + 0x2c12dec));
    func_0x01384978(*(undefined4 *)(_UNK_02c1305c + 0x2c12df8));
    func_0x01384978(*(undefined4 *)(_UNK_02c13060 + 0x2c12e04));
    func_0x01384978(*(undefined4 *)(_UNK_02c13064 + 0x2c12e10));
    *pcVar4 = '\x01';
  }
  aiStack_24[2] = 0;
  aiStack_24[1] = 0;
  aiStack_24[0] = 0;
  iVar1 = func_0x0229f06c(0x7b92,0);
  if (iVar1 == 0) {
    if (0 < *(int *)(param_1 + 100)) {
      iVar2 = *(int *)(param_1 + 0x7c);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0x24);
      }
      if ((iVar2 != 0 && iVar1 != 0) &&
         (iVar1 = func_0x03465bcc(iVar1,**(undefined4 **)(_UNK_02c13068 + 0x2c12ea4)), iVar1 != 0))
      {
        if (*(int *)(**(int **)(_UNK_02c1306c + 0x2c12ebc) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x028c8d78(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0302a45c(aiStack_24 + 1,iVar1,aiStack_24,**(undefined4 **)(_UNK_02c13070 + 0x2c12ef8)
                       );
        iVar1 = aiStack_24[0];
        if (aiStack_24[0] == 0) {
          func_0x01384bf0();
        }
        func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_02c13074 + 0x2c12f1c));
        iVar1 = aiStack_24[0];
        uVar3 = FUN_02c10b64(param_1);
        uVar5 = *(undefined4 *)(param_1 + 100);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03d59d54(iVar1,uVar3,uVar5,**(undefined4 **)(_UNK_02c13078 + 0x2c12f50));
        iVar1 = *(int *)(param_1 + 0x7c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar6 = *(int **)(_UNK_02c1307c + 0x2c12f7c);
        uVar3 = *(undefined4 *)(iVar1 + 0x24);
        iVar1 = *piVar6;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar6;
        }
        FUN_02b4aed4(uVar3,param_2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x454),aiStack_24[0],0);
        *(undefined4 *)(param_1 + 100) = 0;
        func_0x028c98a0(aiStack_24 + 1,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7b92,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$TrackEndReward RVA 0x2c03080 =====

/* WARNING: Removing unreachable block (ram,0x02c133d4) */
/* WARNING: Removing unreachable block (ram,0x02c133c8) */
/* WARNING: Removing unreachable block (ram,0x02c1366c) */
/* WARNING: Removing unreachable block (ram,0x02c13678) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c13080(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined8 uStack_60;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  int aiStack_34 [4];
  
  pcVar6 = (char *)(_UNK_02c1383c + 0x2c1309c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c13840 + 0x2c130b0));
    func_0x01384978(*(undefined4 *)(_UNK_02c13844 + 0x2c130bc));
    func_0x01384978(*(undefined4 *)(_UNK_02c13848 + 0x2c130c8));
    func_0x01384978(*(undefined4 *)(_UNK_02c1384c + 0x2c130d4));
    func_0x01384978(*(undefined4 *)(_UNK_02c13850 + 0x2c130e0));
    func_0x01384978(*(undefined4 *)(_UNK_02c13854 + 0x2c130ec));
    func_0x01384978(*(undefined4 *)(_UNK_02c13858 + 0x2c130f8));
    func_0x01384978(*(undefined4 *)(_UNK_02c1385c + 0x2c13104));
    func_0x01384978(*(undefined4 *)(_UNK_02c13860 + 0x2c13110));
    func_0x01384978(*(undefined4 *)(_UNK_02c13864 + 0x2c1311c));
    func_0x01384978(*(undefined4 *)(_UNK_02c13868 + 0x2c13128));
    func_0x01384978(*(undefined4 *)(_UNK_02c1386c + 0x2c13134));
    func_0x01384978(*(undefined4 *)(_UNK_02c13870 + 0x2c13140));
    func_0x01384978(*(undefined4 *)(_UNK_02c13874 + 0x2c1314c));
    func_0x01384978(*(undefined4 *)(_UNK_02c13878 + 0x2c13158));
    func_0x01384978(*(undefined4 *)(_UNK_02c1387c + 0x2c13164));
    func_0x01384978(*(undefined4 *)(_UNK_02c13880 + 0x2c13170));
    func_0x01384978(*(undefined4 *)(_UNK_02c13884 + 0x2c1317c));
    func_0x01384978(*(undefined4 *)(_UNK_02c13888 + 0x2c13188));
    func_0x01384978(*(undefined4 *)(_UNK_02c1388c + 0x2c13194));
    *pcVar6 = '\x01';
  }
  uStack_6c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_68 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_64 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_70 = 0;
  aiStack_34[2] = 0;
  aiStack_34[1] = 0;
  aiStack_34[0] = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  iStack_54 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_4c = uStack_6c;
  uStack_48 = uStack_68;
  iStack_44 = iStack_64;
  iVar1 = func_0x0229f06c(0x7b93,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02c13890 + 0x2c13230) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x028c8d78(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a45c(aiStack_34 + 1,iVar1,aiStack_34,**(undefined4 **)(_UNK_02c13894 + 0x2c1326c));
    iVar1 = aiStack_34[0];
    if (aiStack_34[0] == 0) {
      func_0x01384bf0();
    }
    func_0x03d59f58(iVar1,**(undefined4 **)(_UNK_02c13898 + 0x2c13290));
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0328fe1c(&uStack_88,param_2,**(undefined4 **)(_UNK_02c1389c + 0x2c132b4));
    uStack_50 = uStack_88;
    uStack_4c = uStack_84;
    uStack_48 = uStack_80;
    iStack_44 = iStack_7c;
    puVar9 = *(undefined4 **)(_UNK_02c138a0 + 0x2c132dc);
    while (iVar2 = func_0x03f5f428(&uStack_50,*puVar9), iVar4 = aiStack_34[0], iVar1 = iStack_44,
          iVar2 != 0) {
      if ((iStack_44 != 0) && (iVar2 = *(int *)(iStack_44 + 8), 0 < iVar2)) {
        if (aiStack_34[0] == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x03d5bb20(iVar4,iVar2,&iStack_54,**(undefined4 **)(_UNK_02c138a4 + 0x2c13320))
        ;
        iVar2 = aiStack_34[0];
        iVar4 = iStack_54;
        uVar7 = *(undefined4 *)(iVar1 + 8);
        if (iVar3 == 0) {
          uVar5 = *(undefined4 *)(iVar1 + 0x10);
          if (aiStack_34[0] == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d7c(iVar2,uVar7,uVar5,**(undefined4 **)(_UNK_02c138ac + 0x2c13390));
        }
        else {
          iVar1 = *(int *)(iVar1 + 0x10);
          if (aiStack_34[0] == 0) {
            func_0x01384bf0();
          }
          func_0x03d59d54(iVar2,uVar7,iVar1 + iVar4,**(undefined4 **)(_UNK_02c138a8 + 0x2c13364));
        }
      }
    }
    func_0x03f5f424(&uStack_50,**(undefined4 **)(_UNK_02c138b0 + 0x2c133b8));
    if (*(int *)(**(int **)(_UNK_02c138b4 + 0x2c133e8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x024500c4(&uStack_88,0);
    iVar1 = aiStack_34[0];
    uStack_40 = CONCAT44(uStack_84,uStack_88);
    uStack_38 = uStack_80;
    if (aiStack_34[0] == 0) {
      func_0x01384bf0();
    }
    func_0x03d5a200(&uStack_88,iVar1,**(undefined4 **)(_UNK_02c138b8 + 0x2c13430));
    uStack_70 = uStack_88;
    uStack_6c = uStack_84;
    uStack_68 = uStack_80;
    iStack_64 = iStack_7c;
    uStack_60 = uStack_78;
    piVar10 = *(int **)(_UNK_02c138bc + 0x2c13468);
    pcVar6 = (char *)(_UNK_02c138c0 + 0x2c13470);
    while (iVar4 = func_0x03f9975c(&uStack_70,**(undefined4 **)(_UNK_02c138e8 + 0x2c13478)),
          iVar1 = iStack_64, iVar4 != 0) {
      uVar7 = (undefined4)uStack_60;
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (0 < uStack_40._4_4_) {
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar4 = **(int **)(_UNK_02c138c8 + 0x2c134cc);
        if (*(char *)(_UNK_02c138cc + 0x2c134d8) == '\0') {
          func_0x01384978(piVar10);
          *(undefined1 *)(_UNK_02c138d0 + 0x2c134f8) = 1;
        }
        if (*pcVar6 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02c138d4 + 0x2c13510));
          *pcVar6 = '\x01';
        }
        if (iVar4 == 0) {
          uVar8 = 0;
          uVar5 = 0;
        }
        else {
          uVar5 = func_0x0466f590(iVar4,0);
          uVar8 = *(undefined4 *)(iVar4 + 8);
        }
        if (*(int *)(*piVar10 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x019a7f14(&uStack_40,uVar5,uVar8,0);
      }
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01e9e5d8(&uStack_40,iVar1,0);
      iVar1 = **(int **)(_UNK_02c138d8 + 0x2c13598);
      if (*(char *)(_UNK_02c138dc + 0x2c135a4) == '\0') {
        func_0x01384978(piVar10);
        *(undefined1 *)(_UNK_02c138e0 + 0x2c135c4) = 1;
      }
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02c138e4 + 0x2c135dc));
        *pcVar6 = '\x01';
      }
      if (iVar1 == 0) {
        uVar8 = 0;
        uVar5 = 0;
      }
      else {
        uVar5 = func_0x0466f590(iVar1,0);
        uVar8 = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_40,uVar5,uVar8,0);
      func_0x01e9e5d8(&uStack_40,uVar7,0);
    }
    func_0x03f9989c(&uStack_70,**(undefined4 **)(_UNK_02c138ec + 0x2c1365c));
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar7 = func_0x0148d6d8(&uStack_40,0);
    func_0x02319180(param_1,uVar7,0);
    func_0x028c98a0(aiStack_34 + 1,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x7b93,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$Clear RVA 0x2c038f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c138f4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7b94,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b94,0);
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
  func_0x02c139b4(param_1);
  func_0x02c13ae4(param_1);
  pcVar4 = (char *)(_UNK_02c0d2ec + 0x2c0d13c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0d2f0 + 0x2c0d150));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d2f4 + 0x2c0d15c));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d2f8 + 0x2c0d168));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d2fc + 0x2c0d174));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b47,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b47,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    func_0x021421a8(*(int *)(param_1 + 0x48),param_1,0);
    if (*(int *)(param_1 + 0x48) != 0) {
      iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x48),0);
      if (iVar1 != 0) {
        uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02c0d300 + 0x2c0d208));
        func_0x03db6898(uVar5,param_1,**(undefined4 **)(_UNK_02c0d304 + 0x2c0d224),0);
        func_0x020d8530(iVar1,uVar5,0);
        uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02c0d308 + 0x2c0d248));
        func_0x03cd51ec(uVar5,param_1,**(undefined4 **)(_UNK_02c0d30c + 0x2c0d264),0);
        func_0x020d8ed0(iVar1,uVar5,0);
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x4c);
        uVar5 = *(undefined4 *)(param_1 + 0x48);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01dbc0ec(iVar1,uVar5,0);
      }
      goto LAB_02c0d2dc;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
LAB_02c0d2dc:
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}



// ===== FAT.DiningBoardActivity$$WhenReset RVA 0x2c0395c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c1395c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7b98,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b98,0);
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
  iVar1 = func_0x0229f06c(0x7b94,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b94,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  func_0x02c139b4(param_1);
  func_0x02c13ae4(param_1);
  pcVar4 = (char *)(_UNK_02c0d2ec + 0x2c0d13c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c0d2f0 + 0x2c0d150));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d2f4 + 0x2c0d15c));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d2f8 + 0x2c0d168));
    func_0x01384978(*(undefined4 *)(_UNK_02c0d2fc + 0x2c0d174));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b47,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b47,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    goto SUB_02173f80;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    func_0x021421a8(*(int *)(param_1 + 0x48),param_1,0);
    if (*(int *)(param_1 + 0x48) != 0) {
      iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x48),0);
      if (iVar1 != 0) {
        uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02c0d300 + 0x2c0d208));
        func_0x03db6898(uVar5,param_1,**(undefined4 **)(_UNK_02c0d304 + 0x2c0d224),0);
        func_0x020d8530(iVar1,uVar5,0);
        uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02c0d308 + 0x2c0d248));
        func_0x03cd51ec(uVar5,param_1,**(undefined4 **)(_UNK_02c0d30c + 0x2c0d264),0);
        func_0x020d8ed0(iVar1,uVar5,0);
      }
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
      if (*(int *)(param_1 + 0x48) != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x4c);
        uVar5 = *(undefined4 *)(param_1 + 0x48);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01dbc0ec(iVar1,uVar5,0);
      }
      goto LAB_02c0d2dc;
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
LAB_02c0d2dc:
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}



// ===== FAT.DiningBoardActivity$$ClearTokenOutput RVA 0x2c039b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c139b4(int param_1)

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
  
  pcVar5 = (char *)(_UNK_02c13adc + 0x2c139c8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c13ae0 + 0x2c139dc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b95,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b95,0);
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
    return;
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar6 = *(undefined4 *)(param_1 + 0xa0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar1,uVar6,0);
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_02af7520(*(int *)(param_1 + 0xa4),0);
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xa4) = 0;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  iVar4 = *(int *)(param_1 + 0x74);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = iVar2 + 1;
  if (iVar4 != 0) {
    FUN_02befc68(iVar4,0);
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}



// ===== FAT.DiningBoardActivity$$DisposeHandbook RVA 0x2c03ae4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c13ae4(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02c13bf4 + 0x2c13af8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c13bf8 + 0x2c13b0c));
    func_0x01384978(*(undefined4 *)(_UNK_02c13bfc + 0x2c13b18));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b96,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b96,0);
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
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 != 0) {
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_02c13c00 + 0x2c13b7c));
    func_0x03ccab14(uVar5,param_1,**(undefined4 **)(_UNK_02c13c04 + 0x2c13b98),0);
    FUN_02bf5270(iVar1,uVar5,0);
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02bf56a4(iVar1,0);
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    FUN_02bf6458(iVar1,0);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  return;
}



// ===== FAT.DiningBoardActivity$$Open RVA 0x2c03c08 =====

void FUN_02c13c08(int *param_1)

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
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x7b99,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b99,0);
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
  if (iVar1 != 0) {
    uStack_18 = 0;
    uStack_14 = 0;
    func_0x02b57d14(param_1,param_1[0x30],param_1[0x31],param_1[0x2e]);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$JumpTask RVA 0x2c03ca8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c13ca8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_02c13e0c + 0x2c13cc8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c13e10 + 0x2c13cdc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b9a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_02c13e14 + 0x2c13d40));
    iVar4 = *(int *)(param_1 + 0xb8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar4 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,uVar7,0);
    if (iVar1 == 0) {
      uStack_20 = 0;
      uStack_1c = 0;
      func_0x02b57d14(param_1,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xc4),
                      *(undefined4 *)(param_1 + 0xb8));
    }
    else {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x9c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01c74c1c(iVar1,0);
      if ((iVar1 == 0) && (iVar1 = *(int *)(param_1 + 0x80), iVar1 != 0)) {
        pcVar3 = (char *)(_UNK_02bf8f24 + 0x2bf8d74);
        if (*pcVar3 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02bf8f28 + 0x2bf8d88),param_3,0);
          func_0x01384978(*(undefined4 *)(_UNK_02bf8f2c + 0x2bf8d94));
          func_0x01384978(*(undefined4 *)(_UNK_02bf8f30 + 0x2bf8da0));
          func_0x01384978(*(undefined4 *)(_UNK_02bf8f34 + 0x2bf8dac));
          *pcVar3 = '\x01';
        }
        iVar4 = func_0x0229f06c(0x5cc6,0);
        if (iVar4 != 0) {
          iVar4 = func_0x0229f13c(0x5cc6,0);
          if (iVar4 == 0) {
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
          if (*(int *)(iVar4 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
          }
          func_0x01485278(&uStack_38,iVar1,0);
          func_0x01485238(&uStack_38,param_3,0);
          iVar5 = *(int *)(iVar4 + 8);
          uVar7 = *(undefined4 *)(iVar4 + 0xc);
          iVar1 = *(int *)(iVar4 + 0x10);
          if (iVar5 == 0) {
            func_0x01384bf0();
          }
          uVar2 = 3;
          if (iVar1 == 0) {
            uVar2 = 2;
          }
          func_0x0245495c(iVar5,uVar7,&uStack_38,uVar2,0,0);
          return;
        }
        iVar4 = func_0x034aaa34(**(undefined4 **)(_UNK_02bf8f38 + 0x2bf8e0c));
        piVar6 = *(int **)(_UNK_02bf8f3c + 0x2bf8e20);
        iVar5 = *piVar6;
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x01384ab4();
          iVar5 = *piVar6;
        }
        uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0xa04);
        piVar6 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02bf8f40 + 0x2bf8e44),2);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        if ((iVar1 != 0) &&
           (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar6 + 0x20)), iVar5 == 0)) {
          uVar2 = func_0x01384c10();
          func_0x01384aa0(uVar2,0);
        }
        if (piVar6[3] == 0) {
          func_0x01384bf4();
        }
        piVar6[4] = iVar1;
        uStack_1c = param_3;
        iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02bf8f44 + 0x2bf8eb0),&uStack_1c);
        if ((iVar1 != 0) &&
           (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar6 + 0x20)), iVar5 == 0)) {
          uVar2 = func_0x01384c10();
          func_0x01384aa0(uVar2,0);
        }
        if ((uint)piVar6[3] < 2) {
          func_0x01384bf4();
        }
        piVar6[5] = iVar1;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x01ee858c(iVar4,uVar7,piVar6,0);
        return;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7b9a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    func_0x02179a68(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$get_HandbookAgent RVA 0x2c03e18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c13e18(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7b9b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b9b,0);
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
  return *(undefined4 *)(param_1 + 0x80);
}



// ===== FAT.DiningBoardActivity$$FAT.IBoardActivityHandbook.CheckIsBoardItem RVA 0x2c03e6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c13e6c(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
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
  
  iVar3 = func_0x0229f06c(0x7b9c,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x7b9c,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar6 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar4,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar3 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (0 < param_2) {
    piVar1 = (int *)0x0;
    if (iVar3 != 0) {
      piVar1 = (int *)param_1[0x20];
    }
    param_1 = piVar1;
    if (iVar3 != 0 && param_1 != (int *)0x0) {
      pcVar7 = (char *)(_UNK_02bf6bd0 + 0x2bf6b40);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02bf6bd4 + 0x2bf6b54),param_2,0);
        *pcVar7 = '\x01';
      }
      iVar3 = func_0x0229f06c(0x5c43,0);
      if (iVar3 == 0) {
        iVar3 = param_1[3];
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar3 + 0xc) == 0) {
          uVar2 = 0;
        }
        else {
          iVar3 = func_0x030fe230(*(undefined4 *)(iVar3 + 8),param_2,0);
          uVar2 = (uint)(iVar3 != -1);
        }
        return uVar2;
      }
      iVar3 = func_0x0229f13c(0x5c43,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      goto SUB_02179234;
    }
  }
  return 0;
}



// ===== FAT.DiningBoardActivity$$FAT.IBoardActivityHandbook.OnNewItemUnlock RVA 0x2c03f04 =====

void FUN_02c13f04(int *param_1)

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
  
  iVar1 = func_0x0229f06c(0x7b9d,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 == 0) {
      return;
    }
    if (param_1[0x1d] != 0) {
      FUN_02befcdc(param_1[0x1d],param_1[0x19],0);
    }
    param_1 = (int *)param_1[0x20];
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
    iVar1 = func_0x0229f13c(0x7b9d,0);
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



// ===== FAT.DiningBoardActivity$$FAT.IBoardActivityHandbook.OnNewItemShow RVA 0x2c03fa0 =====

void FUN_02c13fa0(int *param_1,undefined4 param_2)

{
  int *piVar1;
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
  
  iVar2 = func_0x0229f06c(0x7b9e,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)param_1[0x20];
    }
    param_1 = piVar1;
    if (iVar2 == 0 || param_1 == (int *)0x0) {
      return;
    }
    iVar2 = func_0x0229f06c(0x5c48,0,0);
    if (iVar2 == 0) {
      iVar2 = param_1[0xf];
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02bf6aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar2 + 0xc))
                  (*(undefined4 *)(iVar2 + 0x20),param_2,*(undefined4 *)(iVar2 + 0x14));
        return;
      }
      return;
    }
    iVar2 = func_0x0229f13c(0x5c48,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7b9e,0);
    if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
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



// ===== FAT.DiningBoardActivity$$CheckClaimBoardCategoryReward RVA 0x2c04028 =====

/* WARNING: Possible PIC construction at 0x02bf69e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bf69e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c14028(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int unaff_r5;
  undefined4 uVar5;
  char *pcVar6;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [7];
  char cStack_11;
  
  iVar2 = func_0x0229f06c(0x7b9f,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x80);
    if (param_1 == 0) {
      return 0;
    }
    pcVar6 = (char *)(_UNK_02bf6a28 + 0x2bf697c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6a2c + 0x2bf6990),param_2,0);
      *pcVar6 = '\x01';
    }
    cStack_11 = '\0';
    iVar2 = func_0x0229f06c(0x5c4a,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x14);
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
    iVar2 = func_0x0229f13c(0x7b9f,0);
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
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
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
  iVar3 = *(int *)(iVar2 + 0x10);
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
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar3 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar5,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  uVar1 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar1;
}



// ===== FAT.DiningBoardActivity$$CheckClaimBoardHandBookAllReward RVA 0x2c040a0 =====

/* WARNING: Possible PIC construction at 0x02bf67ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bf67b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c140a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int unaff_r4;
  int unaff_r5;
  undefined4 uVar6;
  undefined4 unaff_r6;
  undefined4 *puVar7;
  undefined4 unaff_r7;
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
  
  iVar2 = func_0x0229f06c(0x7ba0,0);
  if (iVar2 == 0) {
    param_1 = *(int *)(param_1 + 0x80);
    if (param_1 == 0) {
      return 0;
    }
    pcVar5 = (char *)(_UNK_02bf6934 + 0x2bf6714);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6938 + 0x2bf6728),0);
      func_0x01384978(*(undefined4 *)(_UNK_02bf693c + 0x2bf6734));
      func_0x01384978(*(undefined4 *)(_UNK_02bf6940 + 0x2bf6740));
      func_0x01384978(*(undefined4 *)(_UNK_02bf6944 + 0x2bf674c));
      func_0x01384978(*(undefined4 *)(_UNK_02bf6948 + 0x2bf6758));
      *pcVar5 = '\x01';
    }
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    unaff_r6 = 0;
    uStack_28 = 0;
    iVar2 = func_0x0229f06c(0x5c4c,0);
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0x10) == '\0') {
        iVar3 = *(int *)(param_1 + 0xc);
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = *(int *)(iVar3 + 0xc);
        }
        if (iVar3 != 0 && iVar2 != 0) {
          iVar2 = func_0x01c24918(0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(param_1 + 0xc);
          iVar2 = *(int *)(iVar2 + 0x3c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x0325a3b4(&uStack_38,iVar3,**(undefined4 **)(_UNK_02bf694c + 0x2bf6818));
          uStack_28 = uStack_38;
          uStack_24 = uStack_34;
          uStack_20 = uStack_30;
          iStack_1c = iStack_2c;
          puVar7 = *(undefined4 **)(_UNK_02bf6950 + 0x2bf6834);
          do {
            do {
              iVar1 = func_0x03f597e0(&uStack_28,*puVar7);
              iVar3 = iStack_1c;
              if (iVar1 == 0) {
                iVar2 = 9;
                goto LAB_02bf6880;
              }
            } while (iStack_1c < 1);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x01cc4240(iVar2,iVar3,0);
          } while (iVar3 != 0);
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
    iVar2 = func_0x0229f13c(0x7ba0,0);
    if (iVar2 == 0) {
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
  iVar3 = *(int *)(iVar2 + 0x10);
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
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar3 = *(int *)(iVar2 + 8);
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  uVar6 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x30),0,0);
  return uVar6;
}



// ===== FAT.DiningBoardActivity$$ProcessAllUnlockReward RVA 0x2c0410c =====

/* WARNING: Removing unreachable block (ram,0x02bf91a0) */
/* WARNING: Removing unreachable block (ram,0x02bf91b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c1410c(int param_1)

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
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x7ba1,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x80);
    if (param_1 == 0) {
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
      if (*(int *)(param_1 + 0x18) != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar8 = *(int *)(param_1 + 0x18);
        iVar4 = *(int *)(iVar1 + 0x40);
        iVar1 = iVar8;
        if (iVar8 == 0) {
          func_0x01384bf0();
          iVar1 = *(int *)(param_1 + 0x18);
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
            iStack_58 = param_1;
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
        *(int *)(param_1 + 0x1c) = iVar1;
      }
      return uVar7;
    }
    iVar1 = func_0x0229f13c(0x5c4e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7ba1,0);
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



// ===== FAT.DiningBoardActivity$$TrackHandbookRewardClaim RVA 0x2c04178 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c14178(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
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
  
  pcVar6 = (char *)(_UNK_02c142fc + 0x2c14194);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c14300 + 0x2c141a8));
    func_0x01384978(*(undefined4 *)(_UNK_02c14304 + 0x2c141b4));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7b8e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b8e,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dd0230(iVar1,param_2,0);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 0x44);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0364c54c(iVar3,param_2,**(undefined4 **)(_UNK_02c14308 + 0x2c1426c));
    iVar7 = *(int *)(iVar1 + 0x44);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(param_1 + 0x7c);
    uVar5 = *(undefined4 *)(iVar7 + 0xc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar1 + 0x44);
    uVar2 = *(undefined4 *)(iVar4 + 0x20);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0xc);
    uStack_34 = FUN_02c10764(param_1);
    uStack_2c = *(undefined4 *)(iVar1 + 0x10);
    uStack_30 = *(undefined4 *)(param_1 + 0x60);
    uStack_28 = 0;
    uStack_38 = (uint)(iVar3 + 1 == iVar7);
    func_0x02318ff0(param_1,iVar3 + 1,uVar5,uVar2);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$SetScoreFlyPositionResolver RVA 0x2c0430c =====

void FUN_02c1430c(int param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x7ba2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ba2,0);
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
  *(undefined4 *)(param_1 + 0x84) = param_2;
  return;
}



// ===== FAT.DiningBoardActivity$$get_MilestoneRewards RVA 0x2c04368 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c14368(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7ba3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ba3,0);
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
  return *(undefined4 *)(param_1 + 0x88);
}



// ===== FAT.DiningBoardActivity$$get_ScoreMilestoneCount RVA 0x2c043bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c143bc(int param_1)

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
  
  pcVar4 = (char *)(_UNK_02c1445c + 0x2c143d0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c14460 + 0x2c143e4));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x61f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x61f,0);
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
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 0x44);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
  }
  return uVar5;
}



// ===== FAT.DiningBoardActivity$$GetScoreMilestone RVA 0x2c04464 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c14464(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
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
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [4];
  
  pcVar9 = (char *)(_UNK_02c14568 + 0x2c1447c);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c1456c + 0x2c14490));
    func_0x01384978(*(undefined4 *)(_UNK_02c14570 + 0x2c1449c));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x61d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x61d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_02190a68 + 0x2190974);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02190a6c + 0x2190988),param_1,param_2,0);
      *pcVar9 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    auStack_28[0] = uStack_40;
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
    uVar8 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_02190a70 + 0x2190a58));
    return uVar8;
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x7c) == 0)) {
    return 0;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x7c) + 0x44);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (param_2 < *(int *)(iVar2 + 0xc)) {
    iVar2 = *(int *)(param_1 + 0x7c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(iVar2 + 0x44);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar8 = func_0x0364c9b8(iVar2,param_2,**(undefined4 **)(_UNK_02c14574 + 0x2c1454c));
    pcVar9 = (char *)(_UNK_017cc470 + 0x17cc414);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_017cc474 + 0x17cc428),0);
      func_0x01384978(*(undefined4 *)(_UNK_017cc478 + 0x17cc434));
      *pcVar9 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_017cc47c + 0x17cc448) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar7 = **(int **)(_UNK_017cc480 + 0x17cc464);
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
    auStack_28[0] = 0;
    uStack_2c = 0;
    (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
    iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar2 != 0) {
      unaff_r4 = piVar3[0x11];
    }
    bVar1 = true;
    iVar5 = 0;
    if (iVar2 != 0 && unaff_r4 != 0) {
      iVar4 = func_0x03d66780(unaff_r4,uVar8,auStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
      uVar6 = auStack_28[0];
      bVar1 = false;
      iVar5 = unaff_r4;
      if (iVar4 != 0) {
        iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar2 == 0) {
          return auStack_28[0];
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,uVar8,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
        return auStack_28[0];
      }
    }
    if ((piVar3[0x12] == 0) ||
       (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar8,
                                *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
       iVar4 == 0)) {
      uStack_2c = 0;
      iVar4 = (**(code **)(*piVar3 + 0x1a0))
                        (piVar3,uVar8,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
      uVar6 = uStack_2c;
      if (iVar4 != 0) {
        if (iVar2 != 0) {
          if (bVar1) {
            if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                == 0) {
              func_0x02457d84();
            }
            iVar5 = func_0x02457d58();
            func_0x03d63f04(iVar5,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74))
            ;
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
        if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0)
        {
          func_0x02457d84();
        }
        iVar2 = func_0x02457d58();
        func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144));
        piVar3[0x12] = iVar2;
        if (iVar2 == 0) {
          func_0x02457d50();
          iVar2 = 0;
        }
      }
      func_0x04220004(iVar2,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
    }
    func_0x0369fb50(piVar3,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
    return 0;
  }
  return 0;
}



// ===== FAT.DiningBoardActivity$$GetScoreMilestoneTotal RVA 0x2c04578 =====

int FUN_02c14578(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
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
  
  iVar6 = 0;
  iVar1 = func_0x0229f06c(0x61e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x61e,0);
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
    iVar1 = func_0x0245498c(&uStack_38,0,0);
    return iVar1;
  }
  if (-1 < param_2) {
    iVar6 = 0;
    iVar7 = 0;
    iVar1 = 0;
    do {
      iVar2 = FUN_02c14464(param_1,iVar7);
      if (iVar2 != 0) {
        iVar1 = iVar2;
      }
      iVar3 = 0;
      if (iVar2 != 0) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar1 + 0x18);
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar3 + iVar6;
    } while (iVar7 <= param_2);
  }
  return iVar6;
}



// ===== FAT.DiningBoardActivity.<>c__DisplayClass131_0$$.ctor RVA 0x2c04628 =====

void FUN_02c14628(void)

{
  return;
}



// ===== FAT.DiningBoardActivity$$AddScore RVA 0x2c04630 =====

void FUN_02c14630(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = func_0x0229f06c(0x61b,0);
  if (iVar1 == 0) {
    iVar3 = *(int *)(param_1 + 0x6c);
    iVar1 = iVar3 + param_2;
    if (0x7fffffff - param_2 < iVar3) {
      iVar1 = 0x7fffffff;
    }
    *(int *)(param_1 + 0x6c) = iVar1;
    func_0x02c146f4(param_1,iVar3);
    iVar3 = *(int *)(param_1 + 0x6c) - iVar3;
    if (0 < iVar3) {
      uVar2 = FUN_02c10bc8(param_1);
      func_0x019a4b9c(uVar2,iVar3,*(undefined4 *)(param_1 + 0x6c),param_3,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x61b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ab90(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$RewardReachedScoreMilestones RVA 0x2c046f4 =====

/* WARNING: Removing unreachable block (ram,0x02c14b24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c146f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_02c14c94 + 0x2c14710);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c14c98 + 0x2c14724));
    func_0x01384978(*(undefined4 *)(_UNK_02c14c9c + 0x2c14730));
    func_0x01384978(*(undefined4 *)(_UNK_02c14ca0 + 0x2c1473c));
    func_0x01384978(*(undefined4 *)(_UNK_02c14ca4 + 0x2c14748));
    func_0x01384978(*(undefined4 *)(_UNK_02c14ca8 + 0x2c14754));
    func_0x01384978(*(undefined4 *)(_UNK_02c14cac + 0x2c14760));
    func_0x01384978(*(undefined4 *)(_UNK_02c14cb0 + 0x2c1476c));
    func_0x01384978(*(undefined4 *)(_UNK_02c14cb4 + 0x2c14778));
    func_0x01384978(*(undefined4 *)(_UNK_02c14cb8 + 0x2c14784));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x61c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x61c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    iStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar6,0,0);
    return;
  }
  iVar1 = FUN_02c143bc(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    iStack_2c = param_2;
    iStack_28 = param_1;
    do {
      iVar9 = FUN_02c14464(param_1,iVar1);
      iVar2 = FUN_02c14578(param_1,iVar1);
      if (((iVar9 != 0) && (param_2 < iVar2)) && (iVar2 <= *(int *)(param_1 + 0x6c))) {
        iVar9 = *(int *)(iVar9 + 0x14);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        piVar3 = (int *)func_0x03653608(iVar9,**(undefined4 **)(_UNK_02c14cbc + 0x2c1484c));
LAB_02c14858:
        if (piVar3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar9 = *piVar3;
        uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
          do {
            if (piVar7[-1] == **(int **)(_UNK_02c14cdc + 0x2c14874)) {
              puVar4 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
              goto LAB_02c148bc;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02c14cdc + 0x2c14874),0);
LAB_02c148bc:
        iVar9 = (*(code *)*puVar4)(piVar3,puVar4[1]);
        if (iVar9 != 0) {
          if (piVar3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar9 = *piVar3;
          uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_02c14cc0 + 0x2c148f0)) {
                puVar4 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
                goto LAB_02c14938;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02c14cc0 + 0x2c148f0),0);
LAB_02c14938:
          uVar10 = (*(code *)*puVar4)(piVar3,puVar4[1]);
          if (*(int *)(**(int **)(_UNK_02c14cc4 + 0x2c14958) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar9 = func_0x02565b6c(uVar10,0);
          if (iVar9 != 0) {
            iVar2 = func_0x01c24918(0);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uVar10 = *(undefined4 *)(iVar9 + 8);
            uVar6 = *(undefined4 *)(iVar9 + 0xc);
            iVar9 = **(int **)(_UNK_02c14cc8 + 0x2c149a4);
            iVar2 = *(int *)(iVar2 + 0x40);
            if (*(int *)(iVar9 + 0x74) == 0) {
              func_0x01384ab4();
              iVar9 = **(int **)(_UNK_02c14ccc + 0x2c149cc);
            }
            uVar11 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x458);
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            uStack_38 = **(undefined4 **)(_UNK_02c14cd0 + 0x2c149ec);
            uStack_34 = **(undefined4 **)(_UNK_02c14cd4 + 0x2c149f8);
            uStack_3c = 0xa2;
            uStack_30 = 0;
            uStack_48 = 0;
            uStack_44 = 0;
            uStack_40 = 0;
            uVar10 = func_0x01cdcbac(iVar2,uVar10,uVar6,uVar11);
            iVar9 = *(int *)(iStack_28 + 0x88);
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
            iVar2 = *(int *)(iVar9 + 8);
            uVar5 = *(uint *)(iVar9 + 0xc);
            piVar7 = *(int **)(_UNK_02c14cd8 + 0x2c14a60);
            *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
            iVar12 = *piVar7;
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            if (uVar5 < *(uint *)(iVar2 + 0xc)) {
              *(uint *)(iVar9 + 0xc) = uVar5 + 1;
              *(undefined4 *)(iVar2 + uVar5 * 4 + 0x10) = uVar10;
            }
            else {
              func_0x0328f170(iVar9,uVar10,
                              *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
            }
          }
          goto LAB_02c14858;
        }
        if (piVar3 != (int *)0x0) {
          iVar9 = *piVar3;
          uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
          if (uVar5 != 0) {
            piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
            do {
              if (piVar7[-1] == **(int **)(_UNK_02c14ce0 + 0x2c14ac4)) {
                puVar4 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
                goto LAB_02c14b0c;
              }
              uVar5 = uVar5 - 1;
              piVar7 = piVar7 + 2;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_02c14ce0 + 0x2c14ac4),0);
LAB_02c14b0c:
          (*(code *)*puVar4)(piVar3,puVar4[1]);
        }
        param_1 = iStack_28;
        uVar10 = FUN_02c143bc(iStack_28);
        param_2 = iStack_2c;
        iVar9 = *(int *)(param_1 + 0x7c);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        uVar6 = *(undefined4 *)(iVar9 + 0x20);
        iVar9 = FUN_02c143bc(param_1);
        uStack_44 = FUN_02c10764(param_1);
        uStack_40 = *(undefined4 *)(param_1 + 0x60);
        uStack_3c = 0;
        uStack_48 = (uint)(iVar1 - iVar9 == -1);
        func_0x02318b50(param_1,iVar1 + 1,uVar10,uVar6);
      }
      iVar9 = FUN_02c143bc(param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar9);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$IsSpecialScoreReward RVA 0x2c04ce8 =====

uint FUN_02c14ce8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
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
  
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x7ba4,0);
  if (iVar1 == 0) {
    if ((0 < param_2) && (*(int *)(param_1 + 0x7c) != 0)) {
      uVar5 = (uint)(*(int *)(*(int *)(param_1 + 0x7c) + 0x48) == param_2);
    }
    return uVar5;
  }
  iVar1 = func_0x0229f13c(0x7ba4,0);
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
  uVar5 = func_0x0245496c(&uStack_38,0,0);
  return uVar5;
}



// ===== FAT.DiningBoardActivity$$SetTableFlyPositionResolver RVA 0x2c04d68 =====

void FUN_02c14d68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x7ba5,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x8c) = param_2;
    *(undefined4 *)(param_1 + 0x90) = param_3;
    *(undefined4 *)(param_1 + 0x94) = param_4;
    *(undefined4 *)(param_1 + 0x98) = param_5;
    *(undefined4 *)(param_1 + 0x9c) = param_6;
  }
  else {
    iVar1 = func_0x0229f13c(0x7ba5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c16a0(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$GetTableVisualState RVA 0x2c04dfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c14dfc(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_02c14f8c + 0x2c14e1c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c14f90 + 0x2c14e30));
    func_0x01384978(*(undefined4 *)(_UNK_02c14f94 + 0x2c14e3c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7ba6,0);
  if (iVar1 == 0) {
    if ((((*(int *)(param_2 + 0x7c) != 0) && (-1 < param_3)) &&
        (iVar1 = *(int *)(*(int *)(param_2 + 0x7c) + 0x50), iVar1 != 0)) &&
       (param_3 < *(int *)(iVar1 + 0xc))) {
      uVar2 = func_0x0364c9b8(iVar1,param_3,**(undefined4 **)(_UNK_02c14f98 + 0x2c14ed4));
      uVar7 = 0;
      iVar1 = func_0x017cc8bc(uVar2,0);
      if (iVar1 != 0) {
        iVar6 = *(int *)(iVar1 + 0x18);
        iVar3 = func_0x02c14fa8(param_2,*(undefined4 *)(iVar1 + 0xc));
        if (iVar6 < 2) {
          iVar6 = 1;
        }
        if (*(int *)(param_2 + 0x48) != 0) {
          uVar7 = 0;
          iVar4 = func_0x02139cf4(*(int *)(param_2 + 0x48),0);
          if (iVar4 != 0) {
            uVar7 = func_0x020e47e8(iVar4,*(undefined4 *)(iVar1 + 0x1c),0);
          }
        }
        uVar2 = 3;
        if (iVar3 < iVar6) {
          iVar4 = FUN_02c103b8(param_2,*(undefined4 *)(iVar1 + 0xc),uVar7);
          uVar2 = 1;
          if (iVar4 != 0) {
            uVar2 = 2;
          }
        }
        uVar7 = *(undefined4 *)(iVar1 + 0x1c);
        *param_1 = uVar2;
        param_1[1] = uVar7;
        param_1[2] = iVar3;
        param_1[3] = iVar6;
        return;
      }
    }
    uStack_30 = 0;
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  }
  else {
    iVar1 = func_0x0229f13c(0x7ba6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02255178(&uStack_30,iVar1,param_2,param_3,0);
  }
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  return;
}



// ===== FAT.DiningBoardActivity$$GetTableSubmitCount RVA 0x2c04fa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c14fa8(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02c15074 + 0x2c14fc4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c15078 + 0x2c14fd8));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x7b5d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x70);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x03d5bb20(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_02c1507c + 0x2c15054));
    if (iVar1 == 0) {
      uStack_14 = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7b5d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02175ef0(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.DiningBoardActivity$$IsTableClosed RVA 0x2c05080 =====

uint FUN_02c15080(undefined4 param_1,undefined4 param_2)

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
  
  iVar2 = func_0x0229f06c(0x7b5c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7b5c,0);
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
  iVar2 = func_0x017cc8bc(param_2,0);
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    iVar4 = FUN_02c14fa8(param_1,param_2);
    iVar2 = *(int *)(iVar2 + 0x18);
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    uVar1 = (uint)(iVar2 <= iVar4);
  }
  return uVar1;
}



// ===== FAT.DiningBoardActivity$$get_FlyDuration RVA 0x2c05120 =====

float FUN_02c15120(void)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
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
  
  pcVar4 = (char *)(iRam02c15264 + 0x2c15130);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(iRam02c15268 + 0x2c15144));
    func_0x01384978(*(undefined4 *)(iRam02c1526c + 0x2c15150));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x7b69,0);
  if (iVar2 == 0) {
    piVar6 = *(int **)(iRam02c15270 + 0x2c151a4);
    iVar2 = *piVar6;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar6;
    }
    uVar3 = **(undefined4 **)(iVar2 + 0x5c);
    if (*(int *)(**(int **)(iRam02c15274 + 0x2c151c4) + 0x74) == 0) {
      func_0x01384ab4(**(int **)(iRam02c15274 + 0x2c151c4));
    }
    iVar2 = func_0x0145b1cc(uVar3,0,0);
    fVar1 = fRam02c15260;
    if (iVar2 != 0) {
      iVar2 = *piVar6;
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
        iVar2 = *piVar6;
      }
      iVar7 = **(int **)(iVar2 + 0x5c);
      iVar2 = iVar7;
      if (iVar7 == 0) {
        func_0x01384bf0();
        iVar2 = **(int **)(*piVar6 + 0x5c);
        bVar8 = true;
        if (iVar2 == 0) {
          fVar1 = (float)func_0x01384bf0();
          if (!bVar8) {
            software_interrupt(0xaccccd);
          }
          return fVar1;
        }
      }
      fVar1 = *(float *)(iVar7 + 0x40) + *(float *)(iVar2 + 0x24) + *(float *)(iVar2 + 0x24);
    }
    return fVar1;
  }
  iVar2 = func_0x0229f13c(0x7b69,0);
  if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    uVar3 = 0;
    if (*(int *)(iVar2 + 0x10) != 0) {
      uVar3 = 1;
    }
  }
  iVar7 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  func_0x0245495c(iVar7,uVar5,&uStack_30,uVar3,0,0);
  fVar1 = (float)func_0x024549ac(&uStack_30,0,0);
  return fVar1;
}



// ===== FAT.DiningBoardActivity.<>c__DisplayClass152_0$$.ctor RVA 0x2c05278 =====

void FUN_02c15278(void)

{
  return;
}



// ===== FAT.DiningBoardActivity.<>c__DisplayClass152_0$$<SubmitToTable>g__SpawnRewards|0 RVA 0x2c05280 =====

/* WARNING: Removing unreachable block (ram,0x02c154e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c15280(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  
  pcVar12 = (char *)(_UNK_02c15710 + 0x2c15298);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c15714 + 0x2c152ac));
    func_0x01384978(*(undefined4 *)(_UNK_02c15718 + 0x2c152b8));
    func_0x01384978(*(undefined4 *)(_UNK_02c1571c + 0x2c152c4));
    func_0x01384978(*(undefined4 *)(_UNK_02c15720 + 0x2c152d0));
    func_0x01384978(*(undefined4 *)(_UNK_02c15724 + 0x2c152dc));
    func_0x01384978(*(undefined4 *)(_UNK_02c15728 + 0x2c152e8));
    func_0x01384978(*(undefined4 *)(_UNK_02c1572c + 0x2c152f4));
    func_0x01384978(*(undefined4 *)(_UNK_02c15730 + 0x2c15300));
    *pcVar12 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c15734 + 0x2c15314) + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x01dd7d28(0);
  iVar13 = *(int *)(param_1 + 0x2c);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  iVar13 = *(int *)(iVar13 + 0x14);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  piVar1 = (int *)func_0x0364c2b4(iVar13,**(undefined4 **)(_UNK_02c15738 + 0x2c15358));
  piVar15 = *(int **)(_UNK_02c1573c + 0x2c15370);
  piVar16 = *(int **)(_UNK_02c15740 + 0x2c15378);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar13 = *piVar1;
    uVar8 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar15) {
          puVar2 = (undefined4 *)(iVar13 + *piVar9 * 8 + 0xc0);
          goto LAB_02c153d0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar15,0);
LAB_02c153d0:
    iVar13 = (*(code *)*puVar2)(piVar1,puVar2[1]);
    if (iVar13 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar13 = *piVar1;
    uVar8 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar16) {
          puVar2 = (undefined4 *)(iVar13 + *piVar9 * 8 + 0xc0);
          goto LAB_02c15444;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar16,0);
LAB_02c15444:
    uVar3 = (*(code *)*puVar2)(piVar1,puVar2[1]);
    func_0x02c17754(param_1,uVar3);
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar13 = *piVar1;
    uVar8 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar8 != 0) {
      piVar15 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar15[-1] == **(int **)(_UNK_02c15744 + 0x2c15480)) {
          puVar2 = (undefined4 *)(iVar13 + *piVar15 * 8 + 0xc0);
          goto LAB_02c154c8;
        }
        uVar8 = uVar8 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_02c15744 + 0x2c15480),0);
LAB_02c154c8:
    (*(code *)*puVar2)(piVar1,puVar2[1]);
  }
  iVar14 = *(int *)(param_1 + 0x30);
  iVar17 = *(int *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  iVar13 = iVar14;
  if (iVar17 == 0) {
    func_0x01384bf0();
    iVar13 = *(int *)(param_1 + 0x30);
  }
  uVar4 = *(undefined4 *)(iVar17 + 0x18);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  iVar13 = *(int *)(iVar13 + 0x7c);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  iVar17 = *(int *)(param_1 + 0x2c);
  iVar18 = *(int *)(param_1 + 0x34);
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  uVar6 = *(undefined4 *)(iVar13 + 0x20);
  if (iVar17 == 0) {
    func_0x01384bf0();
  }
  iVar13 = *(int *)(param_1 + 0x30);
  iVar17 = *(int *)(iVar17 + 0x18);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  uVar7 = FUN_02c10764(iVar13);
  iVar13 = *(int *)(param_1 + 0x30);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  uVar19 = *(undefined4 *)(iVar13 + 0x60);
  iVar13 = func_0x01384a00(**(undefined4 **)(_UNK_02c15748 + 0x2c15594),1);
  iVar10 = *(int *)(param_1 + 0x2c);
  if (iVar10 == 0) {
    func_0x01384bf0();
  }
  uVar11 = *(undefined4 *)(iVar10 + 0x14);
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar13 + 0xc) == 0) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar13 + 0x10) = uVar11;
  if (*(int *)(**(int **)(_UNK_02c1574c + 0x2c155e0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar11 = func_0x030e6714(0x2c,iVar13,**(undefined4 **)(_UNK_02c15750 + 0x2c15600));
  func_0x02318e50(iVar14,uVar3,uVar4,uVar6,uVar5,iVar17 <= iVar18,uVar7,uVar19,uVar11,0);
  return;
}



// ===== FAT.DiningBoardActivity.<>c__DisplayClass152_0$$<SubmitToTable>g__StartRewardRelease|2 RVA 0x2c05758 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c15758(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
  
  pcVar5 = (char *)(_UNK_02c15838 + 0x2c1576c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c1583c + 0x2c15780));
    func_0x01384978(*(undefined4 *)(_UNK_02c15840 + 0x2c1578c));
    *pcVar5 = '\x01';
  }
  if (*(char *)(param_1 + 0x3c) == '\0') {
    func_0x02c17a54(param_1);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x30);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(param_1 + 0x40);
    iVar6 = *(int *)(iVar6 + 0x94);
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_02c15844 + 0x2c157bc));
    func_0x0478dedc(uVar2,param_1,**(undefined4 **)(_UNK_02c15848 + 0x2c157e0),0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    (**(code **)(iVar6 + 0xc))
              (*(undefined4 *)(iVar6 + 0x20),uVar7,uVar2,*(undefined4 *)(iVar6 + 0x14));
  }
  iVar6 = *(int *)(param_1 + 0x30);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  puVar3 = (undefined4 *)(param_1 + 0x44);
  uStack_24 = unaff_r4;
  uStack_20 = unaff_r5;
  iVar1 = func_0x0229f06c(0x619,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x619,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_20;
    uStack_20 = uStack_24;
    pcVar5 = (char *)(_UNK_02190948 + 0x2190834);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0219094c + 0x2190848),iVar6,puVar3,0);
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
    uStack_50 = *puVar3;
    uStack_4c = *(undefined4 *)(param_1 + 0x48);
    uStack_48 = *(undefined4 *)(param_1 + 0x4c);
    uStack_44 = *(undefined4 *)(param_1 + 0x50);
    uStack_40 = *(undefined4 *)(param_1 + 0x54);
    uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_02190950 + 0x21908a0),&uStack_50);
    func_0x01485288(&uStack_38,uVar2,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar6,0);
    func_0x014852b8(&uStack_38,0,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    iVar6 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar6 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar4,uVar2,&uStack_38,uVar7,1,0);
    return;
  }
  iVar1 = *(int *)(iVar6 + 0x118);
  if (iVar1 != 0) {
    uStack_3c = *(undefined4 *)(param_1 + 0x4c);
    uVar7 = *puVar3;
    uVar8 = *(undefined4 *)(param_1 + 0x48);
    uVar2 = *(undefined4 *)(param_1 + 0x50);
    uVar9 = *(undefined4 *)(param_1 + 0x54);
    FUN_02c0da40(&uStack_38,iVar6);
    uStack_44 = *(undefined4 *)(iVar1 + 0x14);
    uStack_50 = uStack_30;
    uStack_4c = uStack_2c;
    uStack_48 = uStack_28;
    (**(code **)(iVar1 + 0xc))
              (*(undefined4 *)(iVar1 + 0x20),uVar7,uVar8,uStack_3c,uVar2,uVar9,uStack_38,uStack_34);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$get_TokenBoost RVA 0x2c0584c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c1584c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7ba8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7ba8,0);
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
  return *(undefined4 *)(param_1 + 0x74);
}



// ===== FAT.DiningBoardActivity$$RefreshOutputType RVA 0x2c058a0 =====

void FUN_02c158a0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7b88,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7b88,0);
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
  *(undefined4 *)(param_1 + 0xb0) = 2;
  return;
}



// ===== FAT.DiningBoardActivity$$RefreshOutputMethod RVA 0x2c058f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c158f8(int param_1)

{
  bool bVar1;
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
  
  pcVar5 = (char *)(_UNK_02c159d8 + 0x2c1590c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c159dc + 0x2c15920));
    *pcVar5 = '\x01';
  }
  bVar1 = false;
  iVar2 = func_0x0229f06c(0x7b8a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7b8a,0);
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
    func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 == 0) {
LAB_02c159bc:
    bVar1 = (bool)(bVar1 ^ 1);
  }
  else {
    bVar1 = 0 < *(int *)(iVar2 + 0x28);
    if (*(int *)(iVar2 + 0x54) == 0) goto LAB_02c159bc;
    bVar1 = *(int *)(iVar2 + 0x28) < 1;
    if (0 < *(int *)(*(int *)(iVar2 + 0x54) + 0xc)) {
      uVar3 = 1;
      uVar6 = 3;
      goto LAB_02c159c8;
    }
  }
  uVar3 = 0;
  uVar6 = 2;
LAB_02c159c8:
  if (bVar1) {
    uVar6 = uVar3;
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar6;
  return;
}



// ===== FAT.DiningBoardActivity$$IsEnergyMethod RVA 0x2c059e0 =====

uint FUN_02c159e0(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x7b8c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x7b8c,0);
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
  return (uint)((*(uint *)(param_1 + 0xb4) & 0xfffffffd) == 1);
}



// ===== FAT.DiningBoardActivity$$IsOrderMethod RVA 0x2c05a44 =====

uint FUN_02c15a44(int param_1)

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
  
  iVar2 = func_0x0229f06c(0x617,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x617,0);
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
  return (uint)((*(uint *)(param_1 + 0xb4) & 0xfffffffe) == 2);
}



// ===== FAT.DiningBoardActivity$$TryAddToken RVA 0x2c05aa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c15aa8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  iVar3 = func_0x0229f06c(0x611,0);
  if (iVar3 == 0) {
    iVar3 = param_3;
    if (0 < param_3) {
      iVar3 = param_2;
    }
    if ((0 < iVar3) && (*(int *)(param_1 + 0x7c) != 0)) {
      iVar3 = FUN_02c10b64(param_1);
      if (iVar3 == param_2) {
        pcVar5 = (char *)(_UNK_02c12a30 + 0x2c128d8);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02c12a34 + 0x2c128ec));
          *pcVar5 = '\x01';
        }
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_30 = 0;
        iVar3 = func_0x0229f06c(0x614,0);
        if (iVar3 == 0) {
          if (0 < param_3) {
            iVar3 = 0x7fffffff - *(int *)(param_1 + 100);
            if (param_3 < iVar3) {
              iVar3 = param_3;
            }
            if (0 < iVar3) {
              FUN_02c0da40(&uStack_30,param_1);
              iVar4 = *(int *)(param_1 + 100) + iVar3;
              *(int *)(param_1 + 100) = iVar4;
              if (*(int *)(param_1 + 0x74) != 0) {
                FUN_02befcdc(*(int *)(param_1 + 0x74),iVar4,0);
              }
              piVar6 = *(int **)(_UNK_02c12a38 + 0x2c129b4);
              iVar4 = *piVar6;
              if (*(int *)(iVar4 + 0x74) == 0) {
                func_0x01384ab4();
                iVar4 = *piVar6;
              }
              if (param_4 != *(int *)(*(int *)(iVar4 + 0x5c) + 0x45c)) {
                iVar1 = FUN_02c15a44(param_1);
                iVar4 = 0;
                if (iVar1 != 0) {
                  iVar4 = *(int *)(param_1 + 0xa4);
                }
                if (iVar1 != 0 && iVar4 != 0) {
                  FUN_02af96e4(iVar4,*(undefined4 *)(param_1 + 100),0);
                }
              }
              uVar2 = FUN_02c10b64(param_1);
              func_0x019a4b9c(uVar2,iVar3,*(undefined4 *)(param_1 + 100),param_4,0);
              FUN_02c0dc7c(param_1,&uStack_30);
            }
          }
        }
        else {
          iVar3 = func_0x0229f13c(0x614,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x0217ab90(iVar3,param_1,param_3,param_4,0);
        }
        return;
      }
      iVar3 = FUN_02c10bc8(param_1);
      if (iVar3 == param_2) {
        iVar3 = func_0x0229f06c(0x61b,0);
        if (iVar3 == 0) {
          iVar4 = *(int *)(param_1 + 0x6c);
          iVar3 = iVar4 + param_3;
          if (0x7fffffff - param_3 < iVar4) {
            iVar3 = 0x7fffffff;
          }
          *(int *)(param_1 + 0x6c) = iVar3;
          FUN_02c146f4(param_1,iVar4);
          iVar4 = *(int *)(param_1 + 0x6c) - iVar4;
          if (0 < iVar4) {
            uVar2 = FUN_02c10bc8(param_1);
            func_0x019a4b9c(uVar2,iVar4,*(undefined4 *)(param_1 + 0x6c),param_4);
          }
        }
        else {
          iVar3 = func_0x0229f13c(0x61b,0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x0217ab90(iVar3,param_1,param_3,param_4);
        }
        return;
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x611,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    iStack_28 = param_4;
    func_0x02179974(iVar3,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.DiningBoardActivity$$TryUseToken RVA 0x2c05b80 =====

/* WARNING: Removing unreachable block (ram,0x02c16848) */
/* WARNING: Removing unreachable block (ram,0x02c162c4) */
/* WARNING: Removing unreachable block (ram,0x02c16854) */
/* WARNING: Removing unreachable block (ram,0x02c16858) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c15b80(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  undefined4 uVar17;
  char cVar18;
  undefined4 uVar19;
  uint in_fpscr;
  float fVar20;
  int *piStack_98;
  int *piStack_94;
  int *piStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int *piStack_80;
  int *piStack_7c;
  int *piStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int *piStack_50;
  int aiStack_4c [5];
  
  pcVar16 = (char *)(_UNK_02c16a90 + 0x2c15bac);
  if (*pcVar16 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c16a94 + 0x2c15bc0));
    func_0x01384978(*(undefined4 *)(_UNK_02c16a98 + 0x2c15bcc));
    func_0x01384978(*(undefined4 *)(_UNK_02c16a9c + 0x2c15bd8));
    func_0x01384978(*(undefined4 *)(_UNK_02c16aa0 + 0x2c15be4));
    func_0x01384978(*(undefined4 *)(_UNK_02c16aa4 + 0x2c15bf0));
    func_0x01384978(*(undefined4 *)(_UNK_02c16aa8 + 0x2c15bfc));
    func_0x01384978(*(undefined4 *)(_UNK_02c16aac + 0x2c15c08));
    func_0x01384978(*(undefined4 *)(_UNK_02c16ab0 + 0x2c15c14));
    func_0x01384978(*(undefined4 *)(_UNK_02c16ab4 + 0x2c15c20));
    func_0x01384978(*(undefined4 *)(_UNK_02c16ab8 + 0x2c15c2c));
    func_0x01384978(*(undefined4 *)(_UNK_02c16abc + 0x2c15c38));
    func_0x01384978(*(undefined4 *)(_UNK_02c16ac0 + 0x2c15c44));
    func_0x01384978(*(undefined4 *)(_UNK_02c16ac4 + 0x2c15c50));
    func_0x01384978(*(undefined4 *)(_UNK_02c16ac8 + 0x2c15c5c));
    func_0x01384978(*(undefined4 *)(_UNK_02c16acc + 0x2c15c68));
    func_0x01384978(*(undefined4 *)(_UNK_02c16ad0 + 0x2c15c74));
    func_0x01384978(*(undefined4 *)(_UNK_02c16ad4 + 0x2c15c80));
    func_0x01384978(*(undefined4 *)(_UNK_02c16ad8 + 0x2c15c8c));
    func_0x01384978(*(undefined4 *)(_UNK_02c16adc + 0x2c15c98));
    func_0x01384978(*(undefined4 *)(_UNK_02c16ae0 + 0x2c15ca4));
    func_0x01384978(*(undefined4 *)(_UNK_02c16ae4 + 0x2c15cb0));
    func_0x01384978(*(undefined4 *)(_UNK_02c16ae8 + 0x2c15cbc));
    func_0x01384978(*(undefined4 *)(_UNK_02c16aec + 0x2c15cc8));
    func_0x01384978(*(undefined4 *)(_UNK_02c16af0 + 0x2c15cd4));
    func_0x01384978(*(undefined4 *)(_UNK_02c16af4 + 0x2c15ce0));
    func_0x01384978(*(undefined4 *)(_UNK_02c16af8 + 0x2c15cec));
    *pcVar16 = '\x01';
  }
  piStack_7c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  piStack_78 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_74 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar17 = 0;
  aiStack_4c[4] = 0;
  piStack_68 = (int *)0x0;
  uStack_58 = 0;
  piStack_80 = (int *)0x0;
  uStack_70 = 0;
  aiStack_4c[3] = 0;
  aiStack_4c[2] = 0;
  aiStack_4c[1] = 0;
  aiStack_4c[0] = 0;
  piStack_50 = (int *)0x0;
  piStack_64 = piStack_7c;
  piStack_60 = piStack_78;
  uStack_5c = uStack_74;
  iVar3 = func_0x0229f06c(0x7ba9,0);
  if (iVar3 == 0) {
    iVar4 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = param_1[0x12];
    }
    if (iVar4 != 0 && iVar3 != 0) {
      uVar17 = 0;
      iVar3 = func_0x02139cf4(iVar3,0);
      if (iVar3 != 0) {
        uVar17 = 0;
        iVar4 = func_0x020ece38(iVar3,0);
        if (iVar4 == 0) {
          iVar3 = func_0x01c24918(0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar3 + 0x10);
          iVar6 = **(int **)(_UNK_02c16afc + 0x2c15f40);
          iVar3 = *(int *)(iVar6 + 0x1c);
          if (iVar3 == 0) {
            func_0x0140024c(iVar6);
            iVar3 = *(int *)(iVar6 + 0x1c);
          }
          iVar3 = *(int *)(iVar3 + 8);
          if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = func_0x014001f0();
          }
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar3 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
          if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = func_0x014001f0();
          }
          uVar8 = **(undefined4 **)(iVar3 + 0x5c);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uVar17 = 0;
          func_0x01ca1c50(iVar4,0x14,uVar8,0);
        }
        else {
          iVar4 = FUN_02beee40(param_1[0x1d],1,aiStack_4c + 4,aiStack_4c + 3,0);
          if (iVar4 != 0) {
            if (param_1[0x19] < aiStack_4c[4]) {
              uVar17 = FUN_02c10b64(param_1);
              if (*(int *)(**(int **)(_UNK_02c16b00 + 0x2c15e34) + 0x74) == 0) {
                func_0x01384ab4();
              }
              iVar3 = func_0x02085f3c(uVar17,0);
              iVar4 = func_0x01c24918(0);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              iVar4 = *(int *)(iVar4 + 0x10);
              piVar5 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02c16b04 + 0x2c15e7c),1);
              if (piVar5 == (int *)0x0) {
                func_0x01384bf0();
              }
              if ((iVar3 != 0) &&
                 (iVar6 = func_0x01384ab8(iVar3,*(undefined4 *)(*piVar5 + 0x20)), iVar6 == 0)) {
                uVar17 = func_0x01384c10();
                func_0x01384aa0(uVar17,0);
              }
              if (piVar5[3] == 0) {
                func_0x01384bf4();
              }
              piVar5[4] = iVar3;
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              uVar17 = 0;
              func_0x01ca1c50(iVar4,0x6e,piVar5,0);
              if (param_1[0x1d] != 0) {
                uVar17 = 0;
                FUN_02bf0144(param_1[0x1d],1,param_1[0x19],0);
              }
            }
            else {
              iVar4 = FUN_02c10878(param_1);
              iVar6 = FUN_02c10650(param_1,iVar4);
              if (iVar6 != 0) {
                if (param_1[0x2b] != iVar4) {
                  iVar15 = param_1[0x2a];
                  if (iVar15 == 0) {
                    func_0x01384bf0();
                  }
                  *(undefined4 *)(iVar15 + 0xc) = 0;
                  iVar6 = *(int *)(iVar6 + 0x14);
                  *(int *)(iVar15 + 0x10) = *(int *)(iVar15 + 0x10) + 1;
                  if (iVar6 == 0) {
                    func_0x01384bf0();
                  }
                  piVar5 = (int *)func_0x03653608(iVar6,**(undefined4 **)(_UNK_02c16b08 + 0x2c16048)
                                                 );
LAB_02c16054:
                  if (piVar5 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar6 = *piVar5;
                  uVar13 = (uint)*(ushort *)(iVar6 + 0xb6);
                  if (uVar13 != 0) {
                    piVar14 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                    do {
                      if (piVar14[-1] == **(int **)(_UNK_02c16b18 + 0x2c16074)) {
                        puVar7 = (undefined4 *)(iVar6 + *piVar14 * 8 + 0xc0);
                        goto LAB_02c160c0;
                      }
                      uVar13 = uVar13 - 1;
                      piVar14 = piVar14 + 2;
                    } while (uVar13 != 0);
                  }
                  puVar7 = (undefined4 *)
                           func_0x014002dc(piVar5,**(int **)(_UNK_02c16b18 + 0x2c16074),0);
LAB_02c160c0:
                  iVar6 = (*(code *)*puVar7)(piVar5,puVar7[1]);
                  if (iVar6 != 0) {
                    if (piVar5 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar6 = *piVar5;
                    uVar13 = (uint)*(ushort *)(iVar6 + 0xb6);
                    if (uVar13 != 0) {
                      piVar14 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                      do {
                        if (piVar14[-1] == **(int **)(_UNK_02c16b0c + 0x2c160f8)) {
                          puVar7 = (undefined4 *)(iVar6 + *piVar14 * 8 + 0xc0);
                          goto LAB_02c16140;
                        }
                        uVar13 = uVar13 - 1;
                        piVar14 = piVar14 + 2;
                      } while (uVar13 != 0);
                    }
                    puVar7 = (undefined4 *)
                             func_0x014002dc(piVar5,**(int **)(_UNK_02c16b0c + 0x2c160f8),0);
LAB_02c16140:
                    uVar8 = (*(code *)*puVar7)(piVar5,puVar7[1]);
                    if (*(int *)(**(int **)(_UNK_02c16b10 + 0x2c16160) + 0x74) == 0) {
                      func_0x01384ab4();
                    }
                    func_0x02566088(&piStack_98,uVar8,0);
                    piVar2 = piStack_94;
                    piVar14 = piStack_98;
                    if (0 < (int)piStack_98) {
                      piVar11 = piStack_94;
                      piVar1 = param_1;
                      if (0 < (int)piStack_94) {
                        piVar11 = piStack_90;
                        piVar1 = piStack_90;
                      }
                      if (0 < (int)piVar11) {
                        iVar6 = param_1[0x2a];
                        if (iVar6 == 0) {
                          func_0x01384bf0();
                        }
                        iVar15 = *(int *)(iVar6 + 8);
                        uVar13 = *(uint *)(iVar6 + 0xc);
                        piVar11 = *(int **)(_UNK_02c16b14 + 0x2c161d4);
                        *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
                        iVar12 = *piVar11;
                        if (iVar15 == 0) {
                          func_0x01384bf0();
                        }
                        if (uVar13 < *(uint *)(iVar15 + 0xc)) {
                          *(uint *)(iVar6 + 0xc) = uVar13 + 1;
                          iVar15 = iVar15 + uVar13 * 0xc;
                          *(int **)(iVar15 + 0x10) = piVar14;
                          *(int **)(iVar15 + 0x14) = piVar2;
                          *(int **)(iVar15 + 0x18) = piVar1;
                        }
                        else {
                          func_0x0443cefc(iVar6,piVar14,piVar2,piVar1,
                                          *(undefined4 *)
                                           (*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
                        }
                      }
                    }
                    goto LAB_02c16054;
                  }
                  if (piVar5 != (int *)0x0) {
                    iVar6 = *piVar5;
                    uVar13 = (uint)*(ushort *)(iVar6 + 0xb6);
                    if (uVar13 != 0) {
                      piVar14 = (int *)(*(int *)(iVar6 + 0x58) + 4);
                      do {
                        if (piVar14[-1] == **(int **)(_UNK_02c16b1c + 0x2c1625c)) {
                          puVar7 = (undefined4 *)(iVar6 + *piVar14 * 8 + 0xc0);
                          goto LAB_02c162ac;
                        }
                        uVar13 = uVar13 - 1;
                        piVar14 = piVar14 + 2;
                      } while (uVar13 != 0);
                    }
                    puVar7 = (undefined4 *)
                             func_0x014002dc(piVar5,**(int **)(_UNK_02c16b1c + 0x2c1625c),0);
LAB_02c162ac:
                    (*(code *)*puVar7)(piVar5,puVar7[1]);
                  }
                  param_1[0x2b] = iVar4;
                }
                iVar6 = param_1[0x2a];
                if (iVar6 == 0) {
                  func_0x01384bf0();
                }
                if (*(int *)(iVar6 + 0xc) != 0) {
                  piVar5 = *(int **)(_UNK_02c16b20 + 0x2c162fc);
                  iVar15 = param_1[0x2a];
                  iVar6 = *piVar5;
                  if (*(int *)(iVar6 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar6 = *piVar5;
                  }
                  iVar12 = *(int *)(*(int *)(iVar6 + 0x5c) + 4);
                  if (iVar12 == 0) {
                    if (*(int *)(iVar6 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar6 = *piVar5;
                    }
                    uVar17 = **(undefined4 **)(iVar6 + 0x5c);
                    iVar12 = func_0x01384be4(**(undefined4 **)(_UNK_02c16b24 + 0x2c16348));
                    func_0x03a06bcc(iVar12,uVar17,**(undefined4 **)(_UNK_02c16b28 + 0x2c16368),0);
                    *(int *)(*(int *)(*piVar5 + 0x5c) + 4) = iVar12;
                  }
                  func_0x02fbdda8(&piStack_98,iVar15,iVar12,0,
                                  **(undefined4 **)(_UNK_02c16b2c + 0x2c16394));
                  piVar14 = piStack_94;
                  piVar5 = piStack_98;
                  if (*(int *)(**(int **)(_UNK_02c16b30 + 0x2c163ac) + 0x74) == 0) {
                    func_0x01384ab4();
                  }
                  iVar6 = func_0x028c8d78(0);
                  if (iVar6 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x0302a45c(aiStack_4c + 1,iVar6,aiStack_4c,
                                  **(undefined4 **)(_UNK_02c16b34 + 0x2c163f0));
                  if (param_1[0x1d] == 0) {
                    piStack_50 = piVar5;
                  }
                  else {
                    FUN_02bf06e8(param_1[0x1d],piVar5,piVar14,&piStack_50,aiStack_4c[0],0);
                  }
                  uVar17 = 0;
                  piVar5 = piVar14;
                  if (0 < (int)piVar14) {
                    piVar5 = piStack_50;
                  }
                  if (0 < (int)piVar5) {
                    FUN_02c0da40(&piStack_98,param_1);
                    piStack_68 = piStack_98;
                    piStack_64 = piStack_94;
                    piStack_60 = piStack_90;
                    uStack_5c = uStack_8c;
                    uStack_58 = uStack_88;
                    param_1[0x19] = param_1[0x19] - aiStack_4c[4];
                    iVar15 = FUN_02c15a44(param_1);
                    iVar6 = 0;
                    if (iVar15 != 0) {
                      iVar6 = param_1[0x29];
                    }
                    if (iVar15 != 0 && iVar6 != 0) {
                      FUN_02af96e4(iVar6,param_1[0x19],0);
                    }
                    uVar17 = FUN_02c10b64(param_1);
                    iVar6 = aiStack_4c[4];
                    iVar12 = param_1[0x19];
                    iVar15 = **(int **)(_UNK_02c16b3c + 0x2c164b0);
                    if (*(int *)(iVar15 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar15 = **(int **)(_UNK_02c16b40 + 0x2c164d4);
                    }
                    func_0x019a4b9c(uVar17,-iVar6,iVar12,
                                    *(undefined4 *)(*(int *)(iVar15 + 0x5c) + 0x46c),0);
                    if (*(int *)(**(int **)(_UNK_02c16b44 + 0x2c16500) + 0x74) == 0) {
                      func_0x01384ab4();
                    }
                    iVar15 = func_0x0300d558(**(undefined4 **)(_UNK_02c16b48 + 0x2c1651c));
                    uVar17 = FUN_02c10b64(param_1);
                    iVar6 = aiStack_4c[4];
                    if (iVar15 == 0) {
                      func_0x01384bf0();
                    }
                    func_0x034a0af8(iVar15,uVar17,iVar6,**(undefined4 **)(_UNK_02c16b4c + 0x2c1654c)
                                   );
                    uVar17 = FUN_02c10524(param_1);
                    iVar6 = param_1[0x1f];
                    if (iVar6 == 0) {
                      func_0x01384bf0();
                    }
                    uVar19 = *(undefined4 *)(iVar6 + 0x20);
                    uVar8 = FUN_02c10764(param_1);
                    piVar5 = piStack_50;
                    iVar6 = param_1[0x18];
                    uVar9 = func_0x02157e88(piStack_50,0);
                    func_0x023193f4(param_1,iVar4 + 1,uVar17,uVar19,uVar8,iVar6,piVar5,uVar9,
                                    aiStack_4c[3],0);
                    if (*(int *)(**(int **)(_UNK_02c16b50 + 0x2c165d8) + 0x74) == 0) {
                      func_0x01384ab4();
                    }
                    func_0x01dd7d28(0);
                    func_0x020da680(&piStack_98,iVar3,0);
                    piVar2 = piStack_94;
                    piVar5 = piStack_98;
                    pcVar16 = (char *)(_UNK_02c16b54 + 0x2c16618);
                    if (*pcVar16 == '\0') {
                      func_0x01384978(*(undefined4 *)(_UNK_02c16b58 + 0x2c1662c));
                      *pcVar16 = '\x01';
                    }
                    cVar18 = '\x01';
                    piVar11 = *(int **)(_UNK_02c16b5c + 0x2c16644);
                    if (*(int *)(*piVar11 + 0x74) == 0) {
                      func_0x01384ab4();
                      cVar18 = *pcVar16;
                    }
                    fVar20 = (float)VectorSignedToFloat(piVar5,(byte)(in_fpscr >> 0x16) & 3);
                    fVar10 = (float)func_0x02450364(fVar20 * 0.5);
                    fVar20 = _UNK_02c16a54;
                    uVar13 = in_fpscr & 0xfffffff | (uint)(fVar10 == _UNK_02c16a54) << 0x1e;
                    iVar4 = (int)fVar10;
                    if (SUB41(uVar13 >> 0x1e,0)) {
                      iVar4 = -0x80000000;
                    }
                    if (cVar18 == '\0') {
                      func_0x01384978(*(undefined4 *)(_UNK_02c16b60 + 0x2c166a0));
                      *pcVar16 = '\x01';
                    }
                    if (*(int *)(*piVar11 + 0x74) == 0) {
                      func_0x01384ab4();
                    }
                    fVar10 = (float)VectorSignedToFloat(piVar2,(byte)(uVar13 >> 0x16) & 3);
                    fVar10 = (float)func_0x02450364(fVar10 * 0.5);
                    iVar6 = (int)fVar10;
                    if (fVar10 == fVar20) {
                      iVar6 = -0x80000000;
                    }
                    func_0x01dd7f28(iVar3,piStack_50,piVar14,param_2,param_3,param_4,iVar4,iVar6,
                                    *(undefined4 *)
                                     (*(int *)(**(int **)(_UNK_02c16b64 + 0x2c166e8) + 0x5c) + 0x46c
                                     ),0x24,0);
                    iVar15 = aiStack_4c[0];
                    if (aiStack_4c[0] == 0) {
                      func_0x01384bf0();
                    }
                    func_0x0441b0e4(&piStack_98,iVar15,**(undefined4 **)(_UNK_02c16b68 + 0x2c1674c))
                    ;
                    uStack_70 = uStack_88;
                    piStack_80 = piStack_98;
                    piStack_7c = piStack_94;
                    piStack_78 = piStack_90;
                    uStack_74 = uStack_8c;
                    puVar7 = *(undefined4 **)(_UNK_02c16b6c + 0x2c16784);
                    while (iVar15 = func_0x03f4aab0(&piStack_80,*puVar7), uVar8 = uStack_70,
                          uVar17 = uStack_74, iVar15 != 0) {
                      iVar15 = **(int **)(_UNK_02c16b70 + 0x2c167a0);
                      if (*(int *)(iVar15 + 0x74) == 0) {
                        func_0x01384ab4();
                        iVar15 = **(int **)(_UNK_02c16b74 + 0x2c167c0);
                      }
                      uVar9 = *(undefined4 *)(*(int *)(iVar15 + 0x5c) + 0x46c);
                      if (*(int *)(**(int **)(_UNK_02c16b78 + 0x2c167cc) + 0x74) == 0) {
                        func_0x01384ab4(**(int **)(_UNK_02c16b78 + 0x2c167cc));
                      }
                      func_0x01dd7f28(iVar3,uVar17,uVar8,param_2,param_3,param_4,iVar4,iVar6,uVar9,
                                      0x24,0);
                    }
                    func_0x03f4aaac(&piStack_80,**(undefined4 **)(_UNK_02c16b7c + 0x2c16834));
                    uVar17 = 1;
                    FUN_02c0dc7c(param_1,&piStack_68);
                  }
                  func_0x028c98a0(aiStack_4c + 1,0);
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar3 = func_0x0229f13c(0x7ba9,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar17 = func_0x021ed9d4(iVar3,param_1,param_2,param_3,param_4,0);
  }
  return uVar17;
}



// ===== FAT.DiningBoardActivity$$OnPreUpdate RVA 0x2c06b84 =====

undefined4 FUN_02c16b84(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x7bad,0);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x7c) != 0) && (iVar1 = FUN_02c15a44(param_1), iVar1 != 0)) {
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      if ((*(int *)(param_2 + 0x28) == 0) || (*(char *)(*(int *)(param_2 + 0x28) + 0x46) != '\0')) {
        iVar1 = func_0x01f2a218(0);
        uVar4 = 0;
        if (iVar1 == 0) {
          iVar1 = func_0x01e40318(param_2,0x15,0);
          if ((iVar1 == 0) ||
             (iVar3 = *(int *)(iVar1 + 0x10), iVar1 = FUN_02b449f8(param_1,0), iVar3 != iVar1)) {
            iVar1 = *(int *)(param_1 + 0xa4);
            uVar4 = FUN_02c10b64(param_1);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            FUN_02afa744(iVar1,param_2,param_4,uVar4,0);
            uVar4 = 1;
          }
        }
        else {
          uVar2 = FUN_02b449f8(param_1,0);
          iVar1 = func_0x01e4b758(param_2,uVar2,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar1 = func_0x01e3e5b8(param_2,*(undefined4 *)(iVar1 + 8),0);
          iVar3 = FUN_02b449f8(param_1,0);
          if (iVar1 != iVar3) {
            iVar1 = *(int *)(param_1 + 0xa4);
            uVar2 = FUN_02c10b64(param_1);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar4 = 1;
            FUN_02afacd4(iVar1,param_2,param_4,uVar2,1,0);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7bad,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar4;
}



// ===== FAT.DiningBoardActivity$$FAT.IBoardActivityOutput.IsValidForOrder RVA 0x2c06d58 =====

uint FUN_02c16d58(int *param_1)

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
  
  iVar2 = func_0x0229f06c(0x7bae,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = func_0x0229f06c(0x617,0);
    if (iVar2 == 0) {
      return (uint)((param_1[0x2d] & 0xfffffffeU) == 2);
    }
    iVar2 = func_0x0229f13c(0x617,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x7bae,0);
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



// ===== FAT.DiningBoardActivity$$get_OutputType RVA 0x2c06dd4 =====

undefined4 FUN_02c16dd4(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



// ===== FAT.DiningBoardActivity$$set_OutputType RVA 0x2c06ddc =====

void FUN_02c16ddc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  return;
}



// ===== FAT.DiningBoardActivity$$get_OutputMethod RVA 0x2c06de4 =====

undefined4 FUN_02c16de4(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb4);
}



// ===== FAT.DiningBoardActivity$$set_OutputMethod RVA 0x2c06dec =====

void FUN_02c16dec(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  return;
}



// ===== FAT.DiningBoardActivity$$FAT.IBoardActivityOutput.GetReasonString RVA 0x2c06df4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c16df4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
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
  
  pcVar5 = (char *)(_UNK_02c16e94 + 0x2c16e08);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c16e98 + 0x2c16e1c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7baf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7baf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_0221b1d4 + 0x221b0f4);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0221b1d8 + 0x221b108),param_1,0);
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
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0221b1dc + 0x221b1c4));
    return uVar6;
  }
  piVar3 = *(int **)(_UNK_02c16e9c + 0x2c16e74);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x45c);
}



// ===== FAT.DiningBoardActivity$$FAT.IBoardActivityOutput.GetFlyType RVA 0x2c06ea0 =====

undefined4 FUN_02c16ea0(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x7bb0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7bb0,0);
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
  return 0x6f;
}



// ===== FAT.DiningBoardActivity$$get_Visual RVA 0x2c06ef4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c16ef4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x7bb1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7bb1,0);
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
  return *(undefined4 *)(param_1 + 0xbc);
}



// ===== FAT.DiningBoardActivity$$get_GuideRes RVA 0x2c06f48 =====

void FUN_02c16f48(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x7bb2,0);
  if (iVar1 == 0) {
    uStack_18 = *(undefined4 *)(param_2 + 200);
    uStack_14 = *(undefined4 *)(param_2 + 0xcc);
  }
  else {
    iVar1 = func_0x0229f13c(0x7bb2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021e4730(&uStack_18,iVar1,param_2,0);
  }
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}



// ===== FAT.DiningBoardActivity$$get_VisualMain RVA 0x2c06fb8 =====

void FUN_02c16fb8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xbc);
  *param_1 = *(undefined4 *)(param_2 + 0xb8);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity$$get_VisualLoading RVA 0x2c06fc4 =====

void FUN_02c16fc4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc4);
  *param_1 = *(undefined4 *)(param_2 + 0xc0);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity$$get_VisualHelp RVA 0x2c06fd0 =====

void FUN_02c16fd0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xcc);
  *param_1 = *(undefined4 *)(param_2 + 200);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity$$get_VisualMilestone RVA 0x2c06fdc =====

void FUN_02c16fdc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xd4);
  *param_1 = *(undefined4 *)(param_2 + 0xd0);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity$$get_VisualRewardTips RVA 0x2c06fe8 =====

void FUN_02c16fe8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xdc);
  *param_1 = *(undefined4 *)(param_2 + 0xd8);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity$$get_VisualTokenTip RVA 0x2c06ff4 =====

void FUN_02c16ff4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xe4);
  *param_1 = *(undefined4 *)(param_2 + 0xe0);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity$$get_VisualSuccess RVA 0x2c07000 =====

void FUN_02c17000(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xec);
  *param_1 = *(undefined4 *)(param_2 + 0xe8);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity$$get_StartPopup RVA 0x2c0700c =====

void FUN_02c1700c(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xf8);
  *param_1 = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity$$get_EndPopup RVA 0x2c07020 =====

void FUN_02c17020(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x104);
  *param_1 = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity$$get_BuildCompleteVisual RVA 0x2c07034 =====

undefined4 FUN_02c17034(int param_1)

{
  return *(undefined4 *)(param_1 + 0x108);
}



// ===== FAT.DiningBoardActivity$$get_ConvertPopup RVA 0x2c0703c =====

void FUN_02c1703c(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x114);
  *param_1 = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity$$BoardEntryAsset RVA 0x2c07050 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c17050(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_02c17144 + 0x2c17068);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c17148 + 0x2c1707c));
    func_0x01384978(*(undefined4 *)(_UNK_02c1714c + 0x2c17088));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x7bb3,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xbc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_18 = FUN_02b617fc(iVar1,0);
    iVar1 = FUN_02b63e8c(&uStack_18,**(undefined4 **)(_UNK_02c17150 + 0x2c1710c),&uStack_14,0);
    if (iVar1 == 0) {
      uStack_14 = **(undefined4 **)(**(int **)(_UNK_02c17154 + 0x2c17134) + 0x5c);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x7bb3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.DiningBoardActivity$$add_UIStateChanged RVA 0x2c07158 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c17158(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02c171fc + 0x2c17170);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c17200 + 0x2c17184));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_02c17204 + 0x2c1719c);
  iVar1 = *(int *)(param_1 + 0x118);
  do {
    iVar5 = 0;
    iVar2 = func_0x0487907c(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x118),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.DiningBoardActivity$$remove_UIStateChanged RVA 0x2c07208 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c17208(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02c172ac + 0x2c17220);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c172b0 + 0x2c17234));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_02c172b4 + 0x2c1724c);
  iVar1 = *(int *)(param_1 + 0x118);
  do {
    iVar5 = 0;
    iVar2 = func_0x0487929c(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x118),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.DiningBoardActivity$$add_BuildingUnlocked RVA 0x2c072b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c172b8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02c1735c + 0x2c172d0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c17360 + 0x2c172e4));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_02c17364 + 0x2c172fc);
  iVar1 = *(int *)(param_1 + 0x11c);
  do {
    iVar5 = 0;
    iVar2 = func_0x0487907c(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x11c),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.DiningBoardActivity$$remove_BuildingUnlocked RVA 0x2c07368 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c17368(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_02c1740c + 0x2c17380);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c17410 + 0x2c17394));
    *pcVar3 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_02c17414 + 0x2c173ac);
  iVar1 = *(int *)(param_1 + 0x11c);
  do {
    iVar5 = 0;
    iVar2 = func_0x0487929c(iVar1,param_2,0);
    if (iVar2 != 0) {
      uVar4 = *puVar6;
      iVar5 = func_0x01384ab8(iVar2,uVar4);
      if (iVar5 == 0) {
        func_0x01384fb4(iVar2,uVar4);
        iVar5 = 0;
      }
    }
    iVar2 = func_0x0138b0ec((int *)(param_1 + 0x11c),iVar5,iVar1);
    bVar7 = iVar1 != iVar2;
    iVar1 = iVar2;
  } while (bVar7);
  return;
}



// ===== FAT.DiningBoardActivity$$ResEnumerate RVA 0x2c0742c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c1742c(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_02c174dc + 0x2c17440);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c174e0 + 0x2c17454));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x7bb4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x7bb4,0);
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
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02c174e4 + 0x2c174ac));
  func_0x04874ed4(iVar1,0);
  *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
  uVar5 = func_0x048799ac(0);
  *(undefined4 *)(iVar1 + 0x14) = uVar5;
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return iVar1;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$.ctor RVA 0x2c074e8 =====

void FUN_02c174e8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  func_0x04874ed4(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = func_0x048799ac(0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity$$.cctor RVA 0x2c07510 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c17510(void)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_02c17598 + 0x2c17520);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c1759c + 0x2c17534));
    func_0x01384978(*(undefined4 *)(_UNK_02c175a0 + 0x2c17540));
    func_0x01384978(*(undefined4 *)(_UNK_02c175a4 + 0x2c1754c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02c175a8 + 0x2c17560));
  func_0x01b47770(uVar1,**(undefined4 **)(_UNK_02c175ac + 0x2c17578),0);
  **(undefined4 **)(**(int **)(_UNK_02c175b0 + 0x2c1758c) + 0x5c) = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity$$<>iFixBaseProxy_get_Valid RVA 0x2c075b4 =====

void FUN_02c175b4(int param_1)

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



// ===== FAT.DiningBoardActivity$$<>iFixBaseProxy_SetupFresh RVA 0x2c075bc =====

void FUN_02c175bc(undefined4 param_1)

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



// ===== FAT.DiningBoardActivity$$<>iFixBaseProxy_WhenEnd RVA 0x2c075c4 =====

void FUN_02c175c4(undefined4 param_1)

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



// ===== FAT.DiningBoardActivity$$<>iFixBaseProxy_WhenReset RVA 0x2c075cc =====

void FUN_02c175cc(undefined4 param_1)

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



// ===== FAT.DiningBoardActivity$$<>iFixBaseProxy_get_Visual RVA 0x2c075d4 =====

undefined4 FUN_02c175d4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.DiningBoardActivity$$<>iFixBaseProxy_get_GuideRes RVA 0x2c075dc =====

void FUN_02c175dc(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  *param_1 = *(undefined4 *)(param_2 + 0x1c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity$$<>iFixBaseProxy_ResEnumerate RVA 0x2c075f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c175f0(int *param_1)

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



// ===== FAT.DiningBoardActivity.<>c$$.cctor RVA 0x2c075f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c175f8(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_02c17650 + 0x2c17608);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c17654 + 0x2c1761c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_02c17658 + 0x2c17630);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x04874ed4(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity.<>c$$.ctor RVA 0x2c0765c =====

void FUN_02c1765c(void)

{
  return;
}



// ===== FAT.DiningBoardActivity.<>c$$<TryUseToken>b__163_0 RVA 0x2c07664 =====

undefined4 FUN_02c17664(void)

{
  undefined4 in_r3;
  
  return in_r3;
}



// ===== FAT.DiningBoardActivity.<>c__DisplayClass131_0$$<AddScoreFromItem>b__0 RVA 0x2c0766c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c1766c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar6;
  int iVar7;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  pcVar6 = (char *)(_UNK_02c17744 + 0x2c17680);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c17748 + 0x2c17694));
    func_0x01384978(*(undefined4 *)(_UNK_02c1774c + 0x2c176a0));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c17750 + 0x2c176b4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  FUN_02c10914(1);
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  FUN_02c0dc7c(iVar7,param_1 + 0xc);
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x88);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar7 + 0xc);
  *(undefined4 *)(iVar7 + 0xc) = 0;
  *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
  if (iVar5 < 1) {
    return;
  }
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 == 0) {
    func_0x03409d30(*(undefined4 *)(iRam0484e708 + 0x484e654),0,iVar5,0,unaff_r4,unaff_r5,unaff_r6,
                    unaff_lr);
    uVar3 = func_0x03409cd0();
    uVar4 = func_0x03409d30(*(undefined4 *)(iRam0484e70c + 0x484e668));
    func_0x04785e24(uVar3,uVar4,0);
  }
  else {
    if (iVar5 < 0) {
      func_0x03409d30(*(undefined4 *)(iRam0484e710 + 0x484e688),0,iVar5,0,unaff_r4,unaff_r5,unaff_r6
                      ,unaff_lr);
      uVar3 = func_0x03409cd0();
      uVar4 = *(undefined4 *)(iRam0484e714 + 0x484e69c);
    }
    else {
      iVar1 = func_0x0340a884(iVar7,0);
      if (iVar1 < 1) {
        iVar2 = func_0x048424dc(iVar7);
        if (-iVar1 <= iVar2 - iVar5) {
          (*(code *)&UNK_013c1aa4)(iVar7,-iVar1,iVar5);
          return;
        }
        func_0x03409d30(*(undefined4 *)(_UNK_0484e724 + 0x484e6c8));
        uVar3 = func_0x03409cd0();
        uVar4 = *(undefined4 *)(_UNK_0484e728 + 0x484e6dc);
      }
      else {
        func_0x03409d30(*(undefined4 *)(_UNK_0484e71c + 0x484e6a8));
        uVar3 = func_0x03409cd0();
        uVar4 = *(undefined4 *)(_UNK_0484e720 + 0x484e6bc);
      }
    }
    uVar4 = func_0x03409d30(uVar4);
    func_0x0481f540(uVar3,uVar4,0);
  }
  uVar4 = func_0x03409d30(*(undefined4 *)(_UNK_0484e718 + 0x484e6f8));
  func_0x03409d8c(uVar3,uVar4);
  func_0x03409d9c();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.DiningBoardActivity.<>c__DisplayClass152_0$$<SubmitToTable>g__SpawnRewardItem|3 RVA 0x2c07754 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c17754(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uVar11;
  
  pcVar3 = (char *)(_UNK_02c17a20 + 0x2c17778);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c17a24 + 0x2c1778c));
    func_0x01384978(*(undefined4 *)(_UNK_02c17a28 + 0x2c17798));
    func_0x01384978(*(undefined4 *)(_UNK_02c17a2c + 0x2c177a4));
    func_0x01384978(*(undefined4 *)(_UNK_02c17a30 + 0x2c177b0));
    func_0x01384978(*(undefined4 *)(_UNK_02c17a34 + 0x2c177bc));
    func_0x01384978(*(undefined4 *)(_UNK_02c17a38 + 0x2c177c8));
    *pcVar3 = '\x01';
  }
  if ((0 < param_2) && (*(int *)(param_1 + 8) != 0)) {
    piVar10 = *(int **)(_UNK_02c17a3c + 0x2c177f0);
    uVar6 = *(undefined4 *)(param_1 + 0xc);
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    uVar11 = *(undefined4 *)(param_1 + 0x18);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x01dd7838(param_2,uVar6,uVar8,uVar4,uVar11,0);
    iVar1 = func_0x020d8024(0,0x24,0);
    piVar5 = *(int **)(_UNK_02c17a40 + 0x2c17850);
    iVar2 = *piVar5;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar5;
    }
    uVar4 = **(undefined4 **)(iVar2 + 0x5c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_1 + 8);
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    uVar8 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar1 + 0x1c) = uVar4;
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x020ded9c(iVar2,param_2,iVar1,uVar6,uVar8,0,0,0);
    if (iVar1 == 0) {
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x01dd7d28(0);
      iVar2 = *(int *)(param_1 + 0x24);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar10 = *(int **)(_UNK_02c17a44 + 0x2c17918);
      iVar7 = *(int *)(iVar1 + 0x40);
      iVar1 = *piVar10;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar10;
      }
      uVar4 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x464);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x01cdcbac(iVar7,param_2,1,uVar4,0,0,0,0x11c,
                              **(undefined4 **)(_UNK_02c17a48 + 0x2c17958),
                              **(undefined4 **)(_UNK_02c17a4c + 0x2c17964),0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar7 = *(int *)(iVar2 + 8);
      uVar9 = *(uint *)(iVar2 + 0xc);
      piVar10 = *(int **)(_UNK_02c17a50 + 0x2c179c0);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      iVar1 = *piVar10;
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar7 + 0xc) <= uVar9) {
        uVar9 = *(uint *)(iVar2 + 0xc);
        func_0x0328f754(iVar2,uVar9 + 1,
                        *(undefined4 *)
                         (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x38)
                                           + 0x10) + 0x60) + 0x3c));
        iVar1 = *(int *)(iVar2 + 8);
        *(uint *)(iVar2 + 0xc) = uVar9 + 1;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar9) {
          func_0x01384bf4();
        }
        *(undefined4 *)(iVar1 + uVar9 * 4 + 0x10) = uVar4;
        return;
      }
      *(uint *)(iVar2 + 0xc) = uVar9 + 1;
      *(undefined4 *)(iVar7 + uVar9 * 4 + 0x10) = uVar4;
    }
    else {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
  }
  return;
}



// ===== FAT.DiningBoardActivity.<>c__DisplayClass152_0$$<SubmitToTable>g__PlayReleasePresentation|1 RVA 0x2c07a54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c17a54(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar2 = (char *)(_UNK_02c17c50 + 0x2c17a6c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c17c54 + 0x2c17a80));
    func_0x01384978(*(undefined4 *)(_UNK_02c17c58 + 0x2c17a8c));
    func_0x01384978(*(undefined4 *)(_UNK_02c17c5c + 0x2c17a98));
    func_0x01384978(*(undefined4 *)(_UNK_02c17c60 + 0x2c17aa4));
    func_0x01384978(*(undefined4 *)(_UNK_02c17c64 + 0x2c17ab0));
    func_0x01384978(*(undefined4 *)(_UNK_02c17c68 + 0x2c17abc));
    *pcVar2 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar3 = 0;
    piVar5 = *(int **)(_UNK_02c17c6c + 0x2c17aec);
    do {
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x01384ab4();
      }
      FUN_02c10914(0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x28));
  }
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x0328fe1c(&uStack_38,iVar3,**(undefined4 **)(_UNK_02c17c70 + 0x2c17b34));
  puVar8 = *(undefined4 **)(_UNK_02c17c74 + 0x2c17b4c);
  piVar5 = *(int **)(_UNK_02c17c78 + 0x2c17b54);
  while (iVar3 = func_0x03f5f428(&uStack_38,*puVar8), uVar1 = uStack_2c, iVar3 != 0) {
    uVar7 = *(undefined4 *)(param_1 + 0xc);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0206de24(uVar1,uVar7,uVar6,uVar4,0,0,0,0);
  }
  func_0x03f5f424(&uStack_38,**(undefined4 **)(_UNK_02c17c7c + 0x2c17bbc));
  return;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$System.IDisposable.Dispose RVA 0x2c07c88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c17c88(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0xfffffff4:
  case 10:
    break;
  case 0xfffffff5:
  case 9:
    pcVar5 = &UNK_02c1987c + _UNK_02c1991c;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_02c19890 + _UNK_02c19920));
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
        if (piVar4[-1] == **(int **)(&UNK_02c198bc + _UNK_02c19924)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02c19908;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02c198bc + _UNK_02c19924),0);
code_r0x02c19908:
                    /* WARNING: Could not recover jumptable at 0x02c19918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff6:
  case 8:
    pcVar5 = &UNK_02c197bc + _UNK_02c1985c;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_02c197d0 + _UNK_02c19860));
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
        if (piVar4[-1] == **(int **)(&UNK_02c197fc + _UNK_02c19864)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02c19848;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02c197fc + _UNK_02c19864),0);
code_r0x02c19848:
                    /* WARNING: Could not recover jumptable at 0x02c19858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff7:
  case 7:
    pcVar5 = &UNK_02c196fc + _UNK_02c1979c;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_02c19710 + _UNK_02c197a0));
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
        if (piVar4[-1] == **(int **)(&UNK_02c1973c + _UNK_02c197a4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02c19788;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02c1973c + _UNK_02c197a4),0);
code_r0x02c19788:
                    /* WARNING: Could not recover jumptable at 0x02c19798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff8:
  case 6:
    pcVar5 = &UNK_02c1963c + _UNK_02c196dc;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_02c19650 + _UNK_02c196e0));
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
        if (piVar4[-1] == **(int **)(&UNK_02c1967c + _UNK_02c196e4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02c196c8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02c1967c + _UNK_02c196e4),0);
code_r0x02c196c8:
                    /* WARNING: Could not recover jumptable at 0x02c196d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff9:
  case 5:
    pcVar5 = &UNK_02c1957c + _UNK_02c1961c;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_02c19590 + _UNK_02c19620));
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
        if (piVar4[-1] == **(int **)(&UNK_02c195bc + _UNK_02c19624)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02c19608;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02c195bc + _UNK_02c19624),0);
code_r0x02c19608:
                    /* WARNING: Could not recover jumptable at 0x02c19618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffa:
  case 4:
    pcVar5 = &UNK_02c194bc + _UNK_02c1955c;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_02c194d0 + _UNK_02c19560));
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
        if (piVar4[-1] == **(int **)(&UNK_02c194fc + _UNK_02c19564)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02c19548;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02c194fc + _UNK_02c19564),0);
code_r0x02c19548:
                    /* WARNING: Could not recover jumptable at 0x02c19558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffb:
  case 3:
    pcVar5 = &UNK_02c193fc + _UNK_02c1949c;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_02c19410 + _UNK_02c194a0));
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
        if (piVar4[-1] == **(int **)(&UNK_02c1943c + _UNK_02c194a4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02c19488;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02c1943c + _UNK_02c194a4),0);
code_r0x02c19488:
                    /* WARNING: Could not recover jumptable at 0x02c19498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffc:
  case 2:
    pcVar5 = &UNK_02c1933c + _UNK_02c193dc;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_02c19350 + _UNK_02c193e0));
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
        if (piVar4[-1] == **(int **)(&UNK_02c1937c + _UNK_02c193e4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02c193c8;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02c1937c + _UNK_02c193e4),0);
code_r0x02c193c8:
                    /* WARNING: Could not recover jumptable at 0x02c193d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffd:
  case 1:
    pcVar5 = &UNK_02c1927c + _UNK_02c1931c;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_02c19290 + _UNK_02c19320));
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
        if (piVar4[-1] == **(int **)(&UNK_02c192bc + _UNK_02c19324)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02c19308;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02c192bc + _UNK_02c19324),0);
code_r0x02c19308:
                    /* WARNING: Could not recover jumptable at 0x02c19318. Too many branches */
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
  pcVar5 = &UNK_02c1993c + _UNK_02c199dc;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(&UNK_02c19950 + _UNK_02c199e0));
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
      if (piVar4[-1] == **(int **)(&UNK_02c1997c + _UNK_02c199e4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x02c199c8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_02c1997c + _UNK_02c199e4),0);
code_r0x02c199c8:
                    /* WARNING: Could not recover jumptable at 0x02c199d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$MoveNext RVA 0x2c07d2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c17d2c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined8 uStack_28;
  int iStack_20;
  
  pcVar6 = (char *)(_UNK_02c18d18 + 0x2c17d44);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c18d48 + 0x2c17d58));
    func_0x01384978(*(undefined4 *)(_UNK_02c18d4c + 0x2c17d64));
    func_0x01384978(*(undefined4 *)(_UNK_02c18d50 + 0x2c17d70));
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
    iStack_20 = piVar8[0x3e];
    uStack_28 = *(undefined8 *)(piVar8 + 0x3c);
    piVar5 = (int *)FUN_02b64af8(&uStack_28,0);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_02c17e44 + _UNK_02c18dd8)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02c17f2c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_02c17e44 + _UNK_02c18dd8),0);
code_r0x02c17f2c:
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
    goto code_r0x02c18114;
  case 3:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffb;
    goto code_r0x02c182d8;
  case 4:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffa;
    goto code_r0x02c1849c;
  case 5:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff9;
    goto code_r0x02c18660;
  case 6:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff8;
    goto code_r0x02c18824;
  case 7:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff7;
    goto code_r0x02c189e8;
  case 8:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff6;
    goto code_r0x02c18bac;
  case 9:
    piVar5 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff5;
    goto code_r0x02c18d80;
  case 10:
    piVar8 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff4;
    goto code_r0x02c18f4c;
  default:
    goto LAB_02c19078;
  }
  if (piVar5 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar5;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(&UNK_02c17f68 + _UNK_02c18f1c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x02c17fb0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_02c17f68 + _UNK_02c18f1c),0);
code_r0x02c17fb0:
  iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
  if (iVar1 == 0) {
    func_0x02c19268(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iStack_20 = piVar8[0x41];
    uStack_28 = *(undefined8 *)(piVar8 + 0x3f);
    piVar5 = (int *)FUN_02b64af8(&uStack_28,0);
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_02c1807c + _UNK_02c1903c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02c180f4;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_02c1807c + _UNK_02c1903c),0);
code_r0x02c180f4:
    piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    *(int **)(param_1 + 0x1c) = piVar5;
code_r0x02c18114:
    if (piVar5 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar5;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_02c18130 + _UNK_02c19128)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x02c18178;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_02c18130 + _UNK_02c19128),0);
code_r0x02c18178:
    iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
    if (iVar1 == 0) {
      func_0x02c19328(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iStack_20 = piVar8[0x45];
      uStack_28 = *(undefined8 *)(piVar8 + 0x43);
      piVar5 = (int *)FUN_02b64af8(&uStack_28,0);
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(&UNK_02c18244 + _UNK_02c19208)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto code_r0x02c182b8;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_02c18244 + _UNK_02c19208),0);
code_r0x02c182b8:
      piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
      *(undefined4 *)(param_1 + 8) = 0xfffffffb;
      *(int **)(param_1 + 0x1c) = piVar5;
code_r0x02c182d8:
      if (piVar5 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar5;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(&UNK_02c182f4 + _UNK_02c19210)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
            goto code_r0x02c1833c;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_02c182f4 + _UNK_02c19210),0);
code_r0x02c1833c:
      iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
      if (iVar1 == 0) {
        func_0x02c193e8(param_1);
        *(undefined4 *)(param_1 + 0x1c) = 0;
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iStack_30 = piVar8[0x2e];
        iStack_2c = piVar8[0x2f];
        piVar5 = (int *)FUN_02b646a0(&iStack_30,0);
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar5;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar4[-1] == **(int **)(&UNK_02c18408 + _UNK_02c19214)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
              goto code_r0x02c1847c;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_02c18408 + _UNK_02c19214),0);
code_r0x02c1847c:
        piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
        *(undefined4 *)(param_1 + 8) = 0xfffffffa;
        *(int **)(param_1 + 0x1c) = piVar5;
code_r0x02c1849c:
        if (piVar5 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar5;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar4[-1] == **(int **)(&UNK_02c184b8 + _UNK_02c1921c)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
              goto code_r0x02c18500;
            }
            uVar3 = uVar3 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_02c184b8 + _UNK_02c1921c),0);
code_r0x02c18500:
        iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
        if (iVar1 == 0) {
          func_0x02c194a8(param_1);
          *(undefined4 *)(param_1 + 0x1c) = 0;
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iStack_30 = piVar8[0x30];
          iStack_2c = piVar8[0x31];
          piVar5 = (int *)FUN_02b646a0(&iStack_30,0);
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar5;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar4[-1] == **(int **)(&UNK_02c185cc + _UNK_02c19220)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                goto code_r0x02c18640;
              }
              uVar3 = uVar3 - 1;
              piVar4 = piVar4 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_02c185cc + _UNK_02c19220),0)
          ;
code_r0x02c18640:
          piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
          *(undefined4 *)(param_1 + 8) = 0xfffffff9;
          *(int **)(param_1 + 0x1c) = piVar5;
code_r0x02c18660:
          if (piVar5 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar5;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar4[-1] == **(int **)(&UNK_02c1867c + _UNK_02c19228)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                goto code_r0x02c186c4;
              }
              uVar3 = uVar3 - 1;
              piVar4 = piVar4 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar5,**(int **)(&UNK_02c1867c + _UNK_02c19228),0)
          ;
code_r0x02c186c4:
          iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
          if (iVar1 == 0) {
            func_0x02c19568(param_1);
            *(undefined4 *)(param_1 + 0x1c) = 0;
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iStack_30 = piVar8[0x32];
            iStack_2c = piVar8[0x33];
            piVar5 = (int *)FUN_02b646a0(&iStack_30,0);
            if (piVar5 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar5;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar4[-1] == **(int **)(&UNK_02c18790 + _UNK_02c1922c)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                  goto code_r0x02c18804;
                }
                uVar3 = uVar3 - 1;
                piVar4 = piVar4 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar5,**(int **)(&UNK_02c18790 + _UNK_02c1922c),0);
code_r0x02c18804:
            piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
            *(undefined4 *)(param_1 + 8) = 0xfffffff8;
            *(int **)(param_1 + 0x1c) = piVar5;
code_r0x02c18824:
            if (piVar5 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar5;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar4[-1] == **(int **)(&UNK_02c18840 + _UNK_02c19234)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                  goto code_r0x02c18888;
                }
                uVar3 = uVar3 - 1;
                piVar4 = piVar4 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar5,**(int **)(&UNK_02c18840 + _UNK_02c19234),0);
code_r0x02c18888:
            iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
            if (iVar1 == 0) {
              func_0x02c19628(param_1);
              *(undefined4 *)(param_1 + 0x1c) = 0;
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              iStack_30 = piVar8[0x34];
              iStack_2c = piVar8[0x35];
              piVar5 = (int *)FUN_02b646a0(&iStack_30,0);
              if (piVar5 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar5;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar4[-1] == **(int **)(&UNK_02c18954 + _UNK_02c19238)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                    goto code_r0x02c189c8;
                  }
                  uVar3 = uVar3 - 1;
                  piVar4 = piVar4 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar5,**(int **)(&UNK_02c18954 + _UNK_02c19238),0);
code_r0x02c189c8:
              piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
              *(undefined4 *)(param_1 + 8) = 0xfffffff7;
              *(int **)(param_1 + 0x1c) = piVar5;
code_r0x02c189e8:
              if (piVar5 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar5;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar4[-1] == **(int **)(&UNK_02c18a04 + _UNK_02c19240)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                    goto code_r0x02c18a4c;
                  }
                  uVar3 = uVar3 - 1;
                  piVar4 = piVar4 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar5,**(int **)(&UNK_02c18a04 + _UNK_02c19240),0);
code_r0x02c18a4c:
              iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
              if (iVar1 == 0) {
                func_0x02c196e8(param_1);
                *(undefined4 *)(param_1 + 0x1c) = 0;
                if (piVar8 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iStack_30 = piVar8[0x36];
                iStack_2c = piVar8[0x37];
                piVar5 = (int *)FUN_02b646a0(&iStack_30,0);
                if (piVar5 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = *piVar5;
                uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar3 != 0) {
                  piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar4[-1] == **(int **)(&UNK_02c18b18 + _UNK_02c19244)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                      goto code_r0x02c18b8c;
                    }
                    uVar3 = uVar3 - 1;
                    piVar4 = piVar4 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar5,**(int **)(&UNK_02c18b18 + _UNK_02c19244),0);
code_r0x02c18b8c:
                piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
                *(undefined4 *)(param_1 + 8) = 0xfffffff6;
                *(int **)(param_1 + 0x1c) = piVar5;
code_r0x02c18bac:
                if (piVar5 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = *piVar5;
                uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar3 != 0) {
                  piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar4[-1] == **(int **)(&UNK_02c18bc8 + _UNK_02c1924c)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                      goto code_r0x02c18c10;
                    }
                    uVar3 = uVar3 - 1;
                    piVar4 = piVar4 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar5,**(int **)(&UNK_02c18bc8 + _UNK_02c1924c),0);
code_r0x02c18c10:
                iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
                if (iVar1 == 0) {
                  func_0x02c197a8(param_1);
                  *(undefined4 *)(param_1 + 0x1c) = 0;
                  if (piVar8 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iStack_30 = piVar8[0x38];
                  iStack_2c = piVar8[0x39];
                  piVar5 = (int *)FUN_02b646a0(&iStack_30,0);
                  if (piVar5 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar1 = *piVar5;
                  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar3 != 0) {
                    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar4[-1] == **(int **)(&UNK_02c18cdc + _UNK_02c19250)) {
                        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                        goto code_r0x02c18d60;
                      }
                      uVar3 = uVar3 - 1;
                      piVar4 = piVar4 + 2;
                    } while (uVar3 != 0);
                  }
                  puVar2 = (undefined4 *)
                           func_0x014002dc(piVar5,**(int **)(&UNK_02c18cdc + _UNK_02c19250),0);
code_r0x02c18d60:
                  piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
                  *(undefined4 *)(param_1 + 8) = 0xfffffff5;
                  *(int **)(param_1 + 0x1c) = piVar5;
code_r0x02c18d80:
                  if (piVar5 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar1 = *piVar5;
                  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar3 != 0) {
                    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar4[-1] == **(int **)(&UNK_02c18d9c + _UNK_02c19258)) {
                        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
                        goto code_r0x02c18de8;
                      }
                      uVar3 = uVar3 - 1;
                      piVar4 = piVar4 + 2;
                    } while (uVar3 != 0);
                  }
                  puVar2 = (undefined4 *)
                           func_0x014002dc(piVar5,**(int **)(&UNK_02c18d9c + _UNK_02c19258),0);
code_r0x02c18de8:
                  iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
                  if (iVar1 == 0) {
                    func_0x02c19868(param_1);
                    *(undefined4 *)(param_1 + 0x1c) = 0;
                    if (piVar8 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iStack_30 = piVar8[0x3a];
                    iStack_2c = piVar8[0x3b];
                    piVar8 = (int *)FUN_02b646a0(&iStack_30,0);
                    if (piVar8 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar1 = *piVar8;
                    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                    if (uVar3 != 0) {
                      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                      do {
                        if (piVar5[-1] == **(int **)(&UNK_02c18eb4 + _UNK_02c1925c)) {
                          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                          goto code_r0x02c18f2c;
                        }
                        uVar3 = uVar3 - 1;
                        piVar5 = piVar5 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar2 = (undefined4 *)
                             func_0x014002dc(piVar8,**(int **)(&UNK_02c18eb4 + _UNK_02c1925c),0);
code_r0x02c18f2c:
                    piVar8 = (int *)(*(code *)*puVar2)(piVar8,puVar2[1]);
                    *(undefined4 *)(param_1 + 8) = 0xfffffff4;
                    *(int **)(param_1 + 0x1c) = piVar8;
code_r0x02c18f4c:
                    if (piVar8 == (int *)0x0) {
                      func_0x01384bf0();
                    }
                    iVar1 = *piVar8;
                    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                    if (uVar3 != 0) {
                      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                      do {
                        if (piVar5[-1] == **(int **)(&UNK_02c18f68 + _UNK_02c19264)) {
                          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                          goto code_r0x02c18fb4;
                        }
                        uVar3 = uVar3 - 1;
                        piVar5 = piVar5 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar2 = (undefined4 *)
                             func_0x014002dc(piVar8,**(int **)(&UNK_02c18f68 + _UNK_02c19264),0);
code_r0x02c18fb4:
                    iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
                    if (iVar1 == 0) {
                      func_0x02c19928(param_1);
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
                        if (piVar5[-1] == **(int **)(&UNK_02c18fec + _UNK_02c19260)) {
                          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                          goto code_r0x02c1904c;
                        }
                        uVar3 = uVar3 - 1;
                        piVar5 = piVar5 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar2 = (undefined4 *)
                             func_0x014002dc(piVar8,**(int **)(&UNK_02c18fec + _UNK_02c19260),0);
code_r0x02c1904c:
                    (*(code *)*puVar2)(&uStack_38,piVar8,puVar2[1]);
                    uVar7 = 10;
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
                        if (piVar5[-1] == **(int **)(&UNK_02c18e20 + _UNK_02c19254)) {
                          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                          goto code_r0x02c18efc;
                        }
                        uVar3 = uVar3 - 1;
                        piVar5 = piVar5 + 2;
                      } while (uVar3 != 0);
                    }
                    puVar2 = (undefined4 *)
                             func_0x014002dc(piVar8,**(int **)(&UNK_02c18e20 + _UNK_02c19254),0);
code_r0x02c18efc:
                    (*(code *)*puVar2)(&uStack_38,piVar8,puVar2[1]);
                    uVar7 = 9;
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
                      if (piVar5[-1] == **(int **)(&UNK_02c18c48 + _UNK_02c19248)) {
                        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                        goto code_r0x02c18d28;
                      }
                      uVar3 = uVar3 - 1;
                      piVar5 = piVar5 + 2;
                    } while (uVar3 != 0);
                  }
                  puVar2 = (undefined4 *)
                           func_0x014002dc(piVar8,**(int **)(&UNK_02c18c48 + _UNK_02c19248),0);
code_r0x02c18d28:
                  (*(code *)*puVar2)(&uStack_38,piVar8,puVar2[1]);
                  uVar7 = 8;
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
                    if (piVar5[-1] == **(int **)(&UNK_02c18a84 + _UNK_02c1923c)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                      goto code_r0x02c18b60;
                    }
                    uVar3 = uVar3 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar8,**(int **)(&UNK_02c18a84 + _UNK_02c1923c),0);
code_r0x02c18b60:
                (*(code *)*puVar2)(&uStack_38,piVar8,puVar2[1]);
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
                  if (piVar5[-1] == **(int **)(&UNK_02c188c0 + _UNK_02c19230)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                    goto code_r0x02c1899c;
                  }
                  uVar3 = uVar3 - 1;
                  piVar5 = piVar5 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar8,**(int **)(&UNK_02c188c0 + _UNK_02c19230),0);
code_r0x02c1899c:
              (*(code *)*puVar2)(&uStack_38,piVar8,puVar2[1]);
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
                if (piVar5[-1] == **(int **)(&UNK_02c186fc + _UNK_02c19224)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                  goto code_r0x02c187d8;
                }
                uVar3 = uVar3 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar8,**(int **)(&UNK_02c186fc + _UNK_02c19224),0);
code_r0x02c187d8:
            (*(code *)*puVar2)(&uStack_38,piVar8,puVar2[1]);
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
              if (piVar5[-1] == **(int **)(&UNK_02c18538 + _UNK_02c19218)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                goto code_r0x02c18614;
              }
              uVar3 = uVar3 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_02c18538 + _UNK_02c19218),0)
          ;
code_r0x02c18614:
          (*(code *)*puVar2)(&uStack_38,piVar8,puVar2[1]);
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
            if (piVar5[-1] == **(int **)(&UNK_02c18374 + _UNK_02c1920c)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto code_r0x02c18450;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_02c18374 + _UNK_02c1920c),0);
code_r0x02c18450:
        (*(code *)*puVar2)(&uStack_38,piVar8,puVar2[1]);
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
          if (piVar5[-1] == **(int **)(&UNK_02c181b0 + _UNK_02c191a4)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x02c1828c;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_02c181b0 + _UNK_02c191a4),0);
code_r0x02c1828c:
      (*(code *)*puVar2)(&uStack_38,piVar8,puVar2[1]);
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
        if (piVar5[-1] == **(int **)(&UNK_02c17fe8 + _UNK_02c18fa4)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x02c180c4;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_02c17fe8 + _UNK_02c18fa4),0);
code_r0x02c180c4:
    (*(code *)*puVar2)(&uStack_38,piVar8,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  uVar7 = 1;
  *(undefined4 *)(param_1 + 0xc) = uStack_38;
  *(undefined4 *)(param_1 + 0x10) = uStack_34;
LAB_02c19078:
  return uVar7;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$<>m__Finally1 RVA 0x2c09268 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c19268(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02c1931c + 0x2c1927c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c19320 + 0x2c19290));
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
      if (piVar4[-1] == **(int **)(_UNK_02c19324 + 0x2c192bc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02c19308;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02c19324 + 0x2c192bc),0);
LAB_02c19308:
                    /* WARNING: Could not recover jumptable at 0x02c19318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$<>m__Finally2 RVA 0x2c09328 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c19328(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02c193dc + 0x2c1933c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c193e0 + 0x2c19350));
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
      if (piVar4[-1] == **(int **)(_UNK_02c193e4 + 0x2c1937c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02c193c8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02c193e4 + 0x2c1937c),0);
LAB_02c193c8:
                    /* WARNING: Could not recover jumptable at 0x02c193d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$<>m__Finally3 RVA 0x2c093e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c193e8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02c1949c + 0x2c193fc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c194a0 + 0x2c19410));
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
      if (piVar4[-1] == **(int **)(_UNK_02c194a4 + 0x2c1943c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02c19488;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02c194a4 + 0x2c1943c),0);
LAB_02c19488:
                    /* WARNING: Could not recover jumptable at 0x02c19498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$<>m__Finally4 RVA 0x2c094a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c194a8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02c1955c + 0x2c194bc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c19560 + 0x2c194d0));
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
      if (piVar4[-1] == **(int **)(_UNK_02c19564 + 0x2c194fc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02c19548;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02c19564 + 0x2c194fc),0);
LAB_02c19548:
                    /* WARNING: Could not recover jumptable at 0x02c19558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$<>m__Finally5 RVA 0x2c09568 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c19568(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02c1961c + 0x2c1957c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c19620 + 0x2c19590));
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
      if (piVar4[-1] == **(int **)(_UNK_02c19624 + 0x2c195bc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02c19608;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02c19624 + 0x2c195bc),0);
LAB_02c19608:
                    /* WARNING: Could not recover jumptable at 0x02c19618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$<>m__Finally6 RVA 0x2c09628 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c19628(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02c196dc + 0x2c1963c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c196e0 + 0x2c19650));
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
      if (piVar4[-1] == **(int **)(_UNK_02c196e4 + 0x2c1967c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02c196c8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02c196e4 + 0x2c1967c),0);
LAB_02c196c8:
                    /* WARNING: Could not recover jumptable at 0x02c196d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$<>m__Finally7 RVA 0x2c096e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c196e8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02c1979c + 0x2c196fc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c197a0 + 0x2c19710));
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
      if (piVar4[-1] == **(int **)(_UNK_02c197a4 + 0x2c1973c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02c19788;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02c197a4 + 0x2c1973c),0);
LAB_02c19788:
                    /* WARNING: Could not recover jumptable at 0x02c19798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$<>m__Finally8 RVA 0x2c097a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c197a8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02c1985c + 0x2c197bc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c19860 + 0x2c197d0));
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
      if (piVar4[-1] == **(int **)(_UNK_02c19864 + 0x2c197fc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02c19848;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02c19864 + 0x2c197fc),0);
LAB_02c19848:
                    /* WARNING: Could not recover jumptable at 0x02c19858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$<>m__Finally9 RVA 0x2c09868 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c19868(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02c1991c + 0x2c1987c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c19920 + 0x2c19890));
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
      if (piVar4[-1] == **(int **)(_UNK_02c19924 + 0x2c198bc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02c19908;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02c19924 + 0x2c198bc),0);
LAB_02c19908:
                    /* WARNING: Could not recover jumptable at 0x02c19918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$<>m__Finally10 RVA 0x2c09928 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c19928(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_02c199dc + 0x2c1993c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c199e0 + 0x2c19950));
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
      if (piVar4[-1] == **(int **)(_UNK_02c199e4 + 0x2c1997c)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_02c199c8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_02c199e4 + 0x2c1997c),0);
LAB_02c199c8:
                    /* WARNING: Could not recover jumptable at 0x02c199d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$System.Collections.Generic.IEnumerator<(System.String,EL.Resource.AssetTag)>.get_Current RVA 0x2c099e8 =====

void FUN_02c199e8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$System.Collections.IEnumerator.Reset RVA 0x2c099fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c199fc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int unaff_r9;
  undefined1 in_ZR;
  byte in_CY;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  func_0x01384988(*(undefined4 *)(iRam02c19a38 + 0x2c19a0c));
  uVar1 = func_0x01384be4();
  func_0x04827f0c(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(iRam02c19a3c + 0x2c19a28));
  func_0x01384aa0(uVar1,uVar2);
  iVar3 = func_0x01384928();
  if (!(bool)in_ZR) {
    pcVar4 = (char *)(_UNK_02c19a9c + 0x2c19a58);
    uStack_18 = uVar1;
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02c19aa0 + 0x2c19a6c));
      *pcVar4 = '\x01';
    }
    uStack_20 = *(undefined4 *)(iVar3 + 0xc);
    uStack_1c = *(undefined4 *)(iVar3 + 0x10);
    func_0x01384abc(**(undefined4 **)(_UNK_02c19aa4 + 0x2c19a88),&uStack_20);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02c19a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_r9 + 0x1b0000 + (uint)in_CY))();
  return;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$System.Collections.IEnumerator.get_Current RVA 0x2c09a40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c19a40(int param_1)

{
  char *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_02c19a9c + 0x2c19a58);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c19aa0 + 0x2c19a6c));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)(param_1 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_02c19aa4 + 0x2c19a88),&uStack_18);
  return;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$System.Collections.Generic.IEnumerable<(System.String,EL.Resource.AssetTag)>.GetEnumerator RVA 0x2c09aa8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c19aa8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_02c19b48 + 0x2c19abc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c19b4c + 0x2c19ad0));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x048799ac(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02c19b50 + 0x2c19b14));
    func_0x04874ed4(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x048799ac(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}



// ===== FAT.DiningBoardActivity.<ResEnumerate>d__228$$System.Collections.IEnumerable.GetEnumerator RVA 0x2c09b54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_02c19aa8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_02c19b48 + 0x2c19abc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c19b4c + 0x2c19ad0));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x048799ac(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02c19b50 + 0x2c19b14));
    func_0x04874ed4(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x048799ac(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}


