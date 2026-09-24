/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardOrderRequireItem$$get_itemId RVA 0x1f6865c =====

undefined4 FUN_01f7865c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



// ===== FAT.MBBoardOrderRequireItem$$set_itemId RVA 0x1f68664 =====

void FUN_01f78664(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



// ===== FAT.MBBoardOrderRequireItem$$SetData RVA 0x1f6866c =====

/* WARNING: Possible PIC construction at 0x01f78758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f7878c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f787ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f788c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01f788e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01f788cc) */
/* WARNING: Removing unreachable block (ram,0x01f788d8) */
/* WARNING: Removing unreachable block (ram,0x01f788dc) */
/* WARNING: Removing unreachable block (ram,0x01f787b0) */
/* WARNING: Removing unreachable block (ram,0x01f787c8) */
/* WARNING: Removing unreachable block (ram,0x01f787cc) */
/* WARNING: Removing unreachable block (ram,0x01f787e0) */
/* WARNING: Removing unreachable block (ram,0x01f787f4) */
/* WARNING: Removing unreachable block (ram,0x01f78804) */
/* WARNING: Removing unreachable block (ram,0x01f7880c) */
/* WARNING: Removing unreachable block (ram,0x01f7881c) */
/* WARNING: Removing unreachable block (ram,0x01f78820) */
/* WARNING: Removing unreachable block (ram,0x01f7883c) */
/* WARNING: Removing unreachable block (ram,0x01f78840) */
/* WARNING: Removing unreachable block (ram,0x01f78858) */
/* WARNING: Removing unreachable block (ram,0x01f7886c) */
/* WARNING: Removing unreachable block (ram,0x01f78870) */
/* WARNING: Removing unreachable block (ram,0x01f78888) */
/* WARNING: Removing unreachable block (ram,0x01f78894) */
/* WARNING: Removing unreachable block (ram,0x01f78898) */
/* WARNING: Removing unreachable block (ram,0x01f78790) */
/* WARNING: Removing unreachable block (ram,0x01f7879c) */
/* WARNING: Removing unreachable block (ram,0x01f787a0) */
/* WARNING: Removing unreachable block (ram,0x01f7875c) */
/* WARNING: Removing unreachable block (ram,0x01f788a4) */
/* WARNING: Removing unreachable block (ram,0x01f788b8) */
/* WARNING: Removing unreachable block (ram,0x01f788bc) */
/* WARNING: Removing unreachable block (ram,0x01f78768) */
/* WARNING: Removing unreachable block (ram,0x01f7877c) */
/* WARNING: Removing unreachable block (ram,0x01f78780) */
/* WARNING: Removing unreachable block (ram,0x01f788ec) */
/* WARNING: Removing unreachable block (ram,0x01f78904) */
/* WARNING: Removing unreachable block (ram,0x01f78908) */
/* WARNING: Removing unreachable block (ram,0x01f7891c) */
/* WARNING: Removing unreachable block (ram,0x01f78930) */
/* WARNING: Removing unreachable block (ram,0x01f78940) */
/* WARNING: Removing unreachable block (ram,0x01f78948) */
/* WARNING: Removing unreachable block (ram,0x01f78958) */
/* WARNING: Removing unreachable block (ram,0x01f7895c) */
/* WARNING: Removing unreachable block (ram,0x01f78978) */
/* WARNING: Removing unreachable block (ram,0x01f7897c) */
/* WARNING: Removing unreachable block (ram,0x01f78994) */
/* WARNING: Removing unreachable block (ram,0x01f789a8) */
/* WARNING: Removing unreachable block (ram,0x01f789ac) */
/* WARNING: Removing unreachable block (ram,0x01f789c4) */
/* WARNING: Removing unreachable block (ram,0x01f789d0) */
/* WARNING: Removing unreachable block (ram,0x01f789d4) */
/* WARNING: Removing unreachable block (ram,0x01f789dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7866c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01f789ec + 0x1f7868c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f789f0 + 0x1f786a4));
    func_0x01384978(*(undefined4 *)(_UNK_01f789f4 + 0x1f786b0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa60d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa60d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0218d77c(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0205a350(iVar1,param_2,1,0);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,1,0);
  return;
}



// ===== FAT.MBBoardOrderRequireItem$$SetChecker RVA 0x1f68a18 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f78a18(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
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
  
  pcVar5 = (char *)(_UNK_01f78ae0 + 0x1f78a30);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01f78ae4 + 0x1f78a44));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa60f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa60f,0);
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
  if (*(int *)(**(int **)(_UNK_01f78ae8 + 0x1f78aa0) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar2 = func_0x020843f8(0);
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,uVar2 & param_2,0);
  return;
}



// ===== FAT.MBBoardOrderRequireItem$$RefreshTagShop RVA 0x1f68aec =====

void FUN_01f78aec(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa610,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa610,0);
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
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xdc);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 0;
  iVar1 = func_0x01eb718c(iVar1,uVar4,1,0);
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    uVar2 = func_0x01ea65b0(iVar1,0);
  }
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar3,uVar2,0);
  return;
}



// ===== FAT.MBBoardOrderRequireItem$$SetOrderConsumeState RVA 0x1f68bb4 =====

void FUN_01f78bb4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa75f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa75f,0);
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
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



// ===== FAT.MBBoardOrderRequireItem$$IsInConsumedState RVA 0x1f68c0c =====

uint FUN_01f78c0c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x659c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x659c,0);
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
  return (uint)*(byte *)(param_1 + 0x30);
}



// ===== FAT.MBBoardOrderRequireItem$$.ctor RVA 0x1f68c60 =====

void FUN_01f78c60(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


