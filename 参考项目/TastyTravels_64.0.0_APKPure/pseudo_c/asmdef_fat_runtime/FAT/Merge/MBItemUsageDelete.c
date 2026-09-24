/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MBItemUsageDelete$$OnBtnClick RVA 0x2293a0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a3a0c(int param_1)

{
  int iVar1;
  int *piVar2;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_022a3cb8 + 0x22a3a24);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a3cbc + 0x22a3a38));
    func_0x01384978(*(undefined4 *)(_UNK_022a3cc0 + 0x22a3a44));
    func_0x01384978(*(undefined4 *)(_UNK_022a3cc4 + 0x22a3a50));
    func_0x01384978(*(undefined4 *)(_UNK_022a3cc8 + 0x22a3a5c));
    func_0x01384978(*(undefined4 *)(_UNK_022a3ccc + 0x22a3a68));
    func_0x01384978(*(undefined4 *)(_UNK_022a3cd0 + 0x22a3a74));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xb546);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb546);
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
  FUN_022a2578(param_1);
  iVar4 = *(int *)(param_1 + 0x10);
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_022a3cd4 + 0x22a3ad4));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x7c);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_020eaa6c(iVar1,uVar6,0);
  if (iVar1 == 0) {
    if (iVar4 != 0) {
      piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_022a3ce8 + 0x22a3bfc),1);
      uStack_18 = FUN_0210e5f4(iVar4,0);
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_022a3cec + 0x22a3c1c),&uStack_18);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
        uVar6 = func_0x01384c10();
        func_0x01384aa0(uVar6,0);
      }
      if (piVar2[3] == 0) {
        func_0x01384bf4();
      }
      piVar2[4] = iVar1;
      if (*(int *)(**(int **)(_UNK_022a3cf0 + 0x22a3c88) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x024517c0(**(undefined4 **)(_UNK_022a3cf4 + 0x22a3cac),piVar2,0);
    }
  }
  else if (iVar4 != 0) {
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_022a3cd8 + 0x22a3b2c),1);
    uStack_14 = FUN_0210e5f4(iVar4,0);
    iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_022a3cdc + 0x22a3b4c),&uStack_14);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    if ((iVar1 != 0) && (iVar4 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)
       ) {
      uVar6 = func_0x01384c10();
      func_0x01384aa0(uVar6,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = iVar1;
    if (*(int *)(**(int **)(_UNK_022a3ce0 + 0x22a3bb8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02450c80(**(undefined4 **)(_UNK_022a3ce4 + 0x22a3bdc),piVar2,0);
  }
  return;
}



// ===== FAT.Merge.MBItemUsageDelete$$.ctor RVA 0x2293cf8 =====

void FUN_022a3cf8(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.Merge.MBItemUsageDelete$$<>iFixBaseProxy_OnBtnClick RVA 0x2293d00 =====

void thunk_FUN_022a2578(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x7760);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x7760);
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


