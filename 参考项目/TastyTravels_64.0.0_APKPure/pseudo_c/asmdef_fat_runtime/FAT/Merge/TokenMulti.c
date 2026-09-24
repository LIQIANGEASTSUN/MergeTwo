/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.TokenMulti$$get_activeTokenMultiId RVA 0x214e630 =====

undefined4 FUN_0215e630(int param_1)

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
  
  iVar1 = func_0x0229f06c(600,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(600,0);
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
  return *(undefined4 *)(param_1 + 8);
}



// ===== FAT.Merge.TokenMulti$$get_hasActiveTokenMulti RVA 0x214e684 =====

uint FUN_0215e684(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x6df,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x6df,0);
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
  return (uint)(0 < *(int *)(param_1 + 0x10));
}



// ===== FAT.Merge.TokenMulti$$get_countdown RVA 0x214e6e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215e6e8(int param_1)

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
  
  pcVar3 = (char *)(_UNK_0215e794 + 0x215e6fc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215e798 + 0x215e710));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa090,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa090,0);
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
    func_0x0245498c(&uStack_30,0,0);
    return;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_0215e79c + 0x215e768) + 0x74) == 0) {
    func_0x01384ab4();
  }
  (*(code *)&SUB_04825cf4)(0,iVar1 - iVar4,0);
  return;
}



// ===== FAT.Merge.TokenMulti$$get_tokenMultiDurationMilli RVA 0x214e7a0 =====

undefined4 FUN_0215e7a0(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4e3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4e3,0);
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
  return *(undefined4 *)(param_1 + 0x10);
}



// ===== FAT.Merge.TokenMulti$$get_tokenMultiLifeCountMilli RVA 0x214e7f4 =====

undefined4 FUN_0215e7f4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb4e4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb4e4,0);
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
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== FAT.Merge.TokenMulti$$.ctor RVA 0x214e848 =====

void FUN_0215e848(int param_1,undefined4 param_2)

{
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  return;
}



// ===== FAT.Merge.TokenMulti$$Deserialize RVA 0x214e864 =====

void FUN_0215e864(int param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x5c69,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c69,0);
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
  if (*(int *)(param_2 + 0x68) != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    uVar4 = *(undefined4 *)(*(int *)(param_2 + 0x68) + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02139cf4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_020dfd3c(iVar1,uVar4,0);
    if ((iVar1 != 0) && (iVar1 = func_0x0215e948(param_1,iVar1), iVar1 != 0)) {
      iVar1 = *(int *)(param_2 + 0x68);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0x10);
    }
  }
  return;
}



// ===== FAT.Merge.TokenMulti$$TryActivateTokenMulti RVA 0x214e948 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0215e948(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_0215ea70 + 0x215e964);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215ea74 + 0x215e978));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x1518,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar1 = func_0x02feb690(param_2,&iStack_14,0,**(undefined4 **)(_UNK_0215ea78 + 0x215e9f8));
    if (iVar1 != 0) {
      func_0x0215edac(param_1);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar2 = FUN_0210e5f4(param_2,0);
      iVar1 = iStack_14;
      *(undefined4 *)(param_1 + 8) = uVar2;
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      iVar1 = FUN_021378d4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 1;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0x18);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1518,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021734d8(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.Merge.TokenMulti$$Serialize RVA 0x214ea7c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215ea7c(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_0215eb70 + 0x215ea94);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215eb74 + 0x215eaa8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c72,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c72,0);
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
  iVar1 = *(int *)(param_2 + 0x68);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0215eb78 + 0x215eb24));
    func_0x017999e0(iVar1,0);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    *(int *)(param_2 + 0x68) = iVar1;
    if (iVar1 == 0) {
      func_0x01384bf0();
      iVar1 = *(int *)(param_2 + 0x68);
      uRam00000010 = uVar5;
      if (iVar1 == 0) {
        func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto LAB_0215eb4c;
    }
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x10) = uVar5;
LAB_0215eb4c:
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 8);
  return;
}



// ===== FAT.Merge.TokenMulti$$Update RVA 0x214eb7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0215eb7c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
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
  
  iVar1 = func_0x0229f06c(0x5e6a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e6a,0);
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
    uVar2 = func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    return uVar2;
  }
  if ((int)*(uint *)(param_1 + 8) < 1) {
    return *(uint *)(param_1 + 8);
  }
  uVar2 = *(int *)(param_1 + 0xc) + param_2;
  *(uint *)(param_1 + 0xc) = uVar2;
  if ((int)uVar2 < *(int *)(param_1 + 0x10)) {
    return uVar2;
  }
  func_0x0215ec0c(param_1);
  pcVar4 = (char *)(_UNK_0215eda0 + 0x215ec9c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215eda4 + 0x215ecb0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e6d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e6d,0);
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
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02139cf4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02f583b4(iVar1,**(undefined4 **)(_UNK_0215eda8 + 0x215ed34));
  if (iVar1 != 0) {
    iVar5 = *(int *)(param_1 + 0x14);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_02139cf4(iVar5,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_020e7594(iVar5,iVar1,0);
    return (uint)(iVar1 != 0);
  }
  return 0;
}



// ===== FAT.Merge.TokenMulti$$_RemoveCurrentTokenMulti RVA 0x214ec0c =====

uint FUN_0215ec0c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar4;
  int iVar5;
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
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x5e6b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e6b,0);
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
    uVar2 = func_0x0245495c(iVar4,uVar6,&uStack_30,uVar3);
    return uVar2;
  }
  uVar6 = *(undefined4 *)(param_1 + 8);
  func_0x0215ee0c(param_1);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  iVar4 = func_0x0229f06c(0x5e6c,0,0);
  if (iVar4 != 0) {
    iVar4 = func_0x0229f13c(0x5e6c,0);
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
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar4 = FUN_02139cf4(iVar1);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = FUN_020dfd3c(iVar4,uVar6,0);
  if (iVar4 != 0) {
    FUN_021467e8(iVar1,iVar4,0x10);
  }
  return (uint)(iVar4 != 0);
}



// ===== FAT.Merge.TokenMulti$$_TryActivateNextTokenMulti RVA 0x214ec88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0215ec88(int param_1)

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
  
  pcVar4 = (char *)(_UNK_0215eda0 + 0x215ec9c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0215eda4 + 0x215ecb0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5e6d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5e6d,0);
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
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02139cf4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02f583b4(iVar1,**(undefined4 **)(_UNK_0215eda8 + 0x215ed34));
  if (iVar1 != 0) {
    iVar5 = *(int *)(param_1 + 0x14);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = FUN_02139cf4(iVar5,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_020e7594(iVar5,iVar1,0);
    return (uint)(iVar1 != 0);
  }
  return 0;
}



// ===== FAT.Merge.TokenMulti$$_Reset RVA 0x214edac =====

void FUN_0215edac(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x25a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x25a,0);
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



// ===== FAT.Merge.TokenMulti$$ClearTokenMulti RVA 0x214ee0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0215ee0c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x259,0);
  if (iVar1 == 0) {
    FUN_0215edac(param_1);
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = FUN_02139cf4(iVar1,0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_020ec74c + 0x20ec678);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_020ec750 + 0x20ec68c),0);
      func_0x01384978(*(undefined4 *)(_UNK_020ec754 + 0x20ec698));
      *pcVar3 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x25b,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
      }
      if (*(int *)(**(int **)(_UNK_020ec758 + 0x20ec70c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      param_1 = func_0x0300d558(**(undefined4 **)(_UNK_020ec75c + 0x20ec728));
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0229f06c(0x3f,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x028c4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
        return;
      }
      iVar1 = func_0x0229f13c(0x3f,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      iVar1 = func_0x0229f13c(0x25b,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x259,0);
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


