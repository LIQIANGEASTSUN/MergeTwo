/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MBItemUsageUndo$$OnBtnClick RVA 0x2294dac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022a4dac(undefined4 param_1)

{
  char cVar1;
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
  undefined4 uStack_14;
  
  pcVar6 = (char *)(_UNK_022a4f24 + 0x22a4dc0);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_022a4f28 + 0x22a4dd4));
    func_0x01384978(*(undefined4 *)(_UNK_022a4f2c + 0x22a4de0));
    func_0x01384978(*(undefined4 *)(_UNK_022a4f30 + 0x22a4dec));
    func_0x01384978(*(undefined4 *)(_UNK_022a4f34 + 0x22a4df8));
    func_0x01384978(*(undefined4 *)(_UNK_022a4f38 + 0x22a4e04));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0xb55a);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0xb55a);
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
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar3 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_022a4f3c + 0x22a4e54));
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x7c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = FUN_020eb3ac(iVar3,0);
  if (iVar3 != 0) {
    if (*(int *)(**(int **)(_UNK_022a4f40 + 0x22a4e98) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_022a4f44 + 0x22a4eb4));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0349eb38(iVar3,0,**(undefined4 **)(_UNK_022a4f48 + 0x22a4ed8));
    iVar3 = func_0x01c24918(0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar7 = **(undefined4 **)(_UNK_022a4f4c + 0x22a4f18);
    pcVar6 = (char *)(_UNK_01bf33ec + 0x1bf32a0);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01bf33f0 + 0x1bf32b4),uVar7,0);
      func_0x01384978(*(undefined4 *)(_UNK_01bf33f4 + 0x1bf32c0));
      *pcVar6 = '\x01';
    }
    uStack_14 = 0;
    iVar5 = func_0x0229f06c(0x47,0);
    if (iVar5 == 0) {
      iVar5 = func_0x01489db8(uVar7,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar3 + 0x18);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        iVar5 = func_0x0244f844(iVar5,uVar7,&uStack_14,**(undefined4 **)(_UNK_01bf33f8 + 0x1bf3350))
        ;
        if (iVar5 == 0) {
          iVar5 = func_0x018872a8(uVar7,0);
          if (iVar5 == 0) {
            return;
          }
          uVar7 = *(undefined4 *)(iVar5 + 0x18);
          if (*(int *)(**(int **)(_UNK_01bf33fc + 0x1bf3398) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar2 = func_0x025550ec(uVar7,0);
          cVar1 = *(char *)(iVar5 + 0x1c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar4 = *(undefined4 *)(iVar2 + 8);
          uVar7 = *(undefined4 *)(iVar2 + 0xc);
          if (cVar1 != '\0') {
            func_0x01bfe144(iVar3,uVar4,uVar7);
            return;
          }
        }
        else {
          uVar4 = *(undefined4 *)(iVar3 + 8);
          uVar7 = uStack_14;
        }
        func_0x01bfe078(iVar3,uVar4,uVar7);
      }
    }
    else {
      iVar5 = func_0x0229f13c(0x47,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x02174108(iVar5,iVar3,uVar7,0);
    }
    return;
  }
  return;
}



// ===== FAT.Merge.MBItemUsageUndo$$.ctor RVA 0x2294f50 =====

void FUN_022a4f50(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}



// ===== FAT.Merge.MBItemUsageUndo$$<>iFixBaseProxy_OnBtnClick RVA 0x2294f58 =====

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


