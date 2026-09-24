/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.PopupActivity$$get_PopupUI RVA 0x1e90634 =====

undefined4 FUN_01ea0634(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== FAT.PopupActivity$$set_PopupUI RVA 0x1e9063c =====

void FUN_01ea063c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



// ===== FAT.PopupActivity$$get_Visual RVA 0x1e90644 =====

undefined4 FUN_01ea0644(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== FAT.PopupActivity$$set_Visual RVA 0x1e9064c =====

void FUN_01ea064c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== FAT.PopupActivity$$get_PopupRes RVA 0x1e90654 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ea0654(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0xa253,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa253,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021c9074 + 0x21c8f94);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c9078 + 0x21c8fa8),param_1,0);
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
    uVar3 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c907c + 0x21c9064));
    return uVar3;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc);
  }
  return uVar3;
}



// ===== FAT.PopupActivity$$set_PopupRes RVA 0x1e906b8 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ea06b8(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0xa254,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa254,0);
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
  func_0x01384988(*(undefined4 *)(_UNK_01ea0744 + 0x1ea0718));
  uVar4 = func_0x01384be4();
  func_0x0244f7fc(uVar4,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01ea0748 + 0x1ea0734));
  func_0x01384aa0(uVar4,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.PopupActivity$$.ctor RVA 0x1e9074c =====

void FUN_01ea074c(int param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.PopupActivity$$.ctor RVA 0x1e90754 =====

void FUN_01ea0754(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_01e7e7ac(param_1,0);
  (**(code **)(*param_1 + 0x128))
            (param_1,param_2,param_3,param_4,param_5,param_6,*(undefined4 *)(*param_1 + 300));
  return;
}



// ===== FAT.PopupActivity$$Setup RVA 0x1e907ac =====

void FUN_01ea07ac(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = func_0x0229f06c(0x310,0);
  if (iVar1 == 0) {
    if (param_3 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02b61550(param_3,0);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01ea0880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x130))(param_1,*(undefined4 *)(*param_1 + 0x134));
      return;
    }
    param_1[0x12] = param_3;
    param_1[0x10] = param_2;
    if (param_3 == 0) {
      func_0x01384bf0();
      iVar1 = func_0x02b615ac(0,0);
      param_1[2] = iVar1;
      func_0x01384bf0();
    }
    else {
      iVar1 = func_0x02b615ac(param_3,0);
      param_1[2] = iVar1;
    }
    *(char *)((int)param_1 + 0x4d) = (char)param_6;
    *(undefined1 *)(param_1 + 0xc) = 1;
    iVar1 = *(int *)(param_3 + 0x10);
    *(char *)(param_1 + 0x13) = (char)param_5;
    param_1[0x11] = param_4;
    param_1[0xd] = iVar1;
    if (iVar1 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(iVar1 + 0x1d) != '\0';
    }
    *(bool *)((int)param_1 + 0x3a) = bVar2;
  }
  else {
    iVar1 = func_0x0229f13c(0x310,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021847e0(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}



// ===== FAT.PopupActivity$$Clear RVA 0x1e908e0 =====

void FUN_01ea08e0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x312,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x312,0);
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
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}



// ===== FAT.PopupActivity$$CheckValid RVA 0x1e90940 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ea0940(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_01ea0a5c + 0x1ea0958);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ea0a60 + 0x1ea096c));
    func_0x01384978(*(undefined4 *)(_UNK_01ea0a64 + 0x1ea0978));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3b9b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3b9b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0217b3f0 + 0x217b2d8);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217b3f4 + 0x217b2ec),param_1,param_2,0);
      *pcVar4 = '\x01';
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
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,1,0);
    uVar6 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0217b3f8 + 0x217b3cc));
    *param_2 = uVar6;
    uVar6 = func_0x0245496c(&uStack_38,1,0);
    return uVar6;
  }
  iVar1 = FUN_01e7e164(param_1,param_2,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 8) == '\0') {
    if (*(char *)(param_1 + 0x4d) == '\0') {
      return 1;
    }
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02b48934(iVar1,0);
    if (iVar1 != 0) {
      return 1;
    }
    puVar2 = *(undefined4 **)(&UNK_01ea0a5c + _UNK_01ea0a6c);
  }
  else {
    puVar2 = *(undefined4 **)(_UNK_01ea0a68 + 0x1ea0a0c);
  }
  *param_2 = *puVar2;
  return 0;
}



// ===== FAT.PopupActivity$$Ready RVA 0x1e90a70 =====

/* WARNING: Removing unreachable block (ram,0x01eea79c) */
/* WARNING: Removing unreachable block (ram,0x01eea7b0) */
/* WARNING: Removing unreachable block (ram,0x01eea7b4) */
/* WARNING: Removing unreachable block (ram,0x01eea7c0) */
/* WARNING: Removing unreachable block (ram,0x01eea7c4) */
/* WARNING: Removing unreachable block (ram,0x01eea814) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ea0a70(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
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
  
  pcVar4 = (char *)(_UNK_01ea0b1c + 0x1ea0a84);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ea0b20 + 0x1ea0a98));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa255,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa255,0);
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
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01ea0b24 + 0x1ea0af0));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_01eea81c + 0x1eea4b8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01eea820 + 0x1eea4cc),0,1,0);
    func_0x01384978(*(undefined4 *)(_UNK_01eea824 + 0x1eea4d8));
    func_0x01384978(*(undefined4 *)(_UNK_01eea828 + 0x1eea4e4));
    *pcVar4 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x23a9,0);
  if (iVar6 == 0) {
    iVar6 = func_0x03668dfc(**(undefined4 **)(_UNK_01eea82c + 0x1eea548));
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar6 = func_0x01c36988(iVar6,0);
    if (iVar6 != 0) {
      piVar5 = *(int **)(_UNK_01eea830 + 0x1eea580);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x01384ab4();
      }
      pcVar4 = (char *)(_UNK_01eea834 + 0x1eea59c);
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01eea838 + 0x1eea5b0));
        *pcVar4 = '\x01';
      }
      iVar6 = *piVar5;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x01384ab4();
        iVar6 = *piVar5;
      }
      if (((**(char **)(iVar6 + 0x5c) != '\0') && (iVar6 = func_0x01ee76dc(iVar1), iVar6 == 0)) &&
         (iVar6 = func_0x01ee7730(iVar1), iVar6 == 0)) {
        iVar6 = func_0x01c24918(0);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(iVar6 + 0x9c);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 0;
        iVar6 = FUN_01c74c1c(iVar6,0);
        if (iVar6 == 0) {
          iVar6 = func_0x01c24918(0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          iVar6 = *(int *)(iVar6 + 0xc0);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          uVar2 = 0;
          iVar6 = func_0x01aa645c(iVar6,0);
          if (iVar6 == 0) {
            iVar6 = func_0x01c24918(0);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            iVar6 = *(int *)(iVar6 + 0xc4);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            iVar6 = func_0x01ab84a0(iVar6,0);
            if (iVar6 == 0) {
              piVar5 = *(int **)(_UNK_01eea83c + 0x1eea6c8);
              iVar6 = *piVar5;
              if (*(int *)(iVar6 + 0x74) == 0) {
                func_0x01384ab4();
                iVar6 = *piVar5;
              }
              iVar6 = func_0x01eea2b8(iVar1,*(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x104));
              if (iVar6 == 0) {
                iVar6 = *piVar5;
                if (*(int *)(iVar6 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar6 = *piVar5;
                }
                iVar6 = func_0x01eea2b8(iVar1,*(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x2b8));
                if (iVar6 == 0) {
                  iVar6 = *piVar5;
                  if (*(int *)(iVar6 + 0x74) == 0) {
                    func_0x01384ab4();
                    iVar6 = *piVar5;
                  }
                  iVar6 = func_0x01eea2b8(iVar1,*(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x10c));
                  if (iVar6 == 0) {
                    iVar6 = *piVar5;
                    if (*(int *)(iVar6 + 0x74) == 0) {
                      func_0x01384ab4();
                      iVar6 = *piVar5;
                    }
                    iVar6 = func_0x01eea2b8(iVar1,*(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x264));
                    if ((iVar6 == 0) && (iVar6 = func_0x01eea3b8(iVar1,5), iVar6 != 0)) {
                      iVar1 = func_0x01eea3b8(iVar1,6);
                      return (uint)(iVar1 != 0);
                    }
                  }
                }
              }
            }
            uVar2 = 0;
          }
        }
      }
    }
  }
  else {
    iVar6 = func_0x0229f13c(0x23a9,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_28 = 0;
    uVar2 = func_0x02194e48(iVar6,iVar1,0,1);
  }
  return uVar2;
}



// ===== FAT.PopupActivity$$OpenPopup RVA 0x1e90b28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ea0b28(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_01ea0d64 + 0x1ea0b3c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ea0d68 + 0x1ea0b50));
    func_0x01384978(*(undefined4 *)(_UNK_01ea0d6c + 0x1ea0b5c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa256,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa256,0);
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
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
    uVar7 = func_0x0245496c(&uStack_30,0,0);
    return uVar7;
  }
  iVar1 = param_1[0x10];
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar7 = 0;
  if (*(char *)(iVar1 + 8) == '\0') {
    piVar6 = (int *)param_1[0x10];
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = (**(code **)(*piVar6 + 0x1f0))(piVar6,param_1,*(undefined4 *)(*piVar6 + 500));
    if (iVar1 != 0) {
      if ((char)param_1[0x13] != '\0') {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar5 = *(int *)(iVar1 + 0xfc);
        iVar1 = param_1[10];
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x01e811c0(iVar5,iVar1,0);
        if (iVar1 == 0) {
          return 0;
        }
      }
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01ea0d70 + 0x1ea0c58));
      uVar7 = (**(code **)(*param_1 + 0xf8))(param_1,*(undefined4 *)(*param_1 + 0xfc));
      piVar6 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01ea0d74 + 0x1ea0c88),2);
      iVar5 = param_1[0x10];
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar5 != 0) &&
         (iVar2 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if (piVar6[3] == 0) {
        func_0x01384bf4();
      }
      piVar6[4] = iVar5;
      iVar5 = param_1[0xf];
      if ((iVar5 != 0) &&
         (iVar2 = func_0x01384ab8(iVar5,*(undefined4 *)(*piVar6 + 0x20)), iVar2 == 0)) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if ((uint)piVar6[3] < 2) {
        func_0x01384bf4();
      }
      piVar6[5] = iVar5;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01ee858c(iVar1,uVar7,piVar6,0);
      param_1[0xf] = 0;
      func_0x019a88cc(param_1[0x10],0);
      uVar7 = 1;
    }
  }
  return uVar7;
}



// ===== FAT.PopupActivity$$ToString RVA 0x1e90d78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ea0d78(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_01ea0f14 + 0x1ea0d90);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ea0f18 + 0x1ea0da4));
    func_0x01384978(*(undefined4 *)(_UNK_01ea0f1c + 0x1ea0db0));
    func_0x01384978(*(undefined4 *)(_UNK_01ea0f20 + 0x1ea0dbc));
    func_0x01384978(*(undefined4 *)(_UNK_01ea0f24 + 0x1ea0dc8));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa257,0);
  if (iVar1 == 0) {
    piVar2 = (int *)func_0x02450044(param_1,0);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    uVar3 = (**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
    uStack_30 = *(undefined4 *)(param_1 + 8);
    uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_01ea0f28 + 0x1ea0e5c),&uStack_30);
    uVar6 = **(undefined4 **)(_UNK_01ea0f2c + 0x1ea0e80);
    if (*(int *)(param_1 + 0x40) == 0) {
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_30 = 0;
    }
    else {
      func_0x02b489c0(&uStack_30,*(int *)(param_1 + 0x40),0);
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_40 = 0;
      func_0x035025ac(&uStack_40,uStack_30,uStack_2c,uStack_28,
                      **(undefined4 **)(_UNK_01ea0f30 + 0x1ea0eb0));
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uStack_28 = uStack_38;
      uStack_24 = uStack_34;
    }
    uStack_40 = uStack_30;
    uStack_3c = uStack_2c;
    uStack_38 = uStack_28;
    uStack_34 = uStack_24;
    uVar5 = func_0x01384abc(**(undefined4 **)(_UNK_01ea0f34 + 0x1ea0ee4));
    func_0x02450228(uVar6,uVar3,uVar4,uVar5,0);
  }
  else {
    iVar1 = func_0x0229f13c(0xa257,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173e78(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.PopupActivity$$<>iFixBaseProxy_CheckValid RVA 0x1e90f38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ea0f38(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
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
  
  pcVar4 = (char *)(_UNK_01e7e248 + 0x1e7e17c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e7e24c + 0x1e7e190),param_2,0);
    func_0x01384978(*(undefined4 *)(_UNK_01e7e250 + 0x1e7e19c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x169,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x169,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0217b3f0 + 0x217b2d8);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217b3f4 + 0x217b2ec),param_1,param_2,0);
      *pcVar4 = '\x01';
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
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,1,0);
    uVar6 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0217b3f8 + 0x217b3cc));
    *param_2 = uVar6;
    uVar6 = func_0x0245496c(&uStack_38,1,0);
    return uVar6;
  }
  if (param_1[0xd] == 0) {
    puVar2 = *(undefined4 **)(_UNK_01e7e254 + 0x1e7e230);
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,*(undefined4 *)(*param_1 + 0xfc));
    if (iVar1 != 0) {
      *param_2 = 0;
      return 1;
    }
    puVar2 = *(undefined4 **)(_UNK_01e7e258 + 0x1e7e23c);
  }
  *param_2 = *puVar2;
  return 0;
}



// ===== FAT.PopupActivity$$<>iFixBaseProxy_get_PopupRes RVA 0x1e90f40 =====

undefined4 FUN_01ea0f40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}



// ===== FAT.PopupActivity$$<>iFixBaseProxy_set_PopupRes RVA 0x1e90f48 =====

void FUN_01ea0f48(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



// ===== FAT.PopupActivity$$<>iFixBaseProxy_Ready RVA 0x1e90f50 =====

undefined4 FUN_01ea0f50(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x699,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x699,0);
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



// ===== FAT.PopupActivity$$<>iFixBaseProxy_OpenPopup RVA 0x1e90f58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ea0f58(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  
  pcVar4 = (char *)(_UNK_01e7e688 + 0x1e7e554);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e7e68c + 0x1e7e568),0);
    func_0x01384978(*(undefined4 *)(_UNK_01e7e690 + 0x1e7e574));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x69c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x69c,0);
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
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
    uVar7 = func_0x0245496c(&uStack_30,0,0);
    return uVar7;
  }
  puVar2 = *(undefined4 **)(_UNK_01e7e694 + 0x1e7e5d4);
  param_1[3] = param_1[3] + 1;
  iVar1 = func_0x034aaa34(*puVar2);
  uVar7 = (**(code **)(*param_1 + 0xf8))(param_1,*(undefined4 *)(*param_1 + 0xfc));
  iVar6 = **(int **)(_UNK_01e7e698 + 0x1e7e604);
  iVar5 = *(int *)(iVar6 + 0x1c);
  if (iVar5 == 0) {
    func_0x0140024c(iVar6);
    iVar5 = *(int *)(iVar6 + 0x1c);
  }
  iVar5 = *(int *)(iVar5 + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x014001f0();
  }
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x1c) + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x014001f0();
  }
  uVar3 = **(undefined4 **)(iVar5 + 0x5c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01ee858c(iVar1,uVar7,uVar3,0);
  return 1;
}



// ===== FAT.PopupActivity$$<>iFixBaseProxy_ToString RVA 0x1e90f60 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ea0f60(int param_1)

{
  int iVar1;
  int *piVar2;
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
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_01e7e798 + 0x1e7e6b4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e7e79c + 0x1e7e6c8),0);
    func_0x01384978(*(undefined4 *)(_UNK_01e7e7a0 + 0x1e7e6d4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa240,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa240,0);
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
    func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return;
  }
  piVar2 = (int *)func_0x02450044(param_1,0);
  if (piVar2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar6 = (**(code **)(*piVar2 + 0x100))(piVar2,*(undefined4 *)(*piVar2 + 0x104));
  uStack_14 = *(undefined4 *)(param_1 + 8);
  uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_01e7e7a4 + 0x1e7e768),&uStack_14);
  func_0x0244f690(**(undefined4 **)(_UNK_01e7e7a8 + 0x1e7e78c),uVar6,uVar3,0);
  return;
}


