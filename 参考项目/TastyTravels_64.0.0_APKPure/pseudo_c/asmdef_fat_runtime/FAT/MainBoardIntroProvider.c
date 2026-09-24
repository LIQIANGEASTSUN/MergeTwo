/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MainBoardIntroProvider$$.ctor RVA 0x1df8cb4 =====

void FUN_01e08cb4(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.MainBoardIntroProvider$$CreateSteps RVA 0x1dfa678 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01e0a678(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
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
  
  pcVar4 = (char *)(_UNK_01e0aa68 + 0x1e0a690);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e0aa6c + 0x1e0a6a4));
    func_0x01384978(*(undefined4 *)(_UNK_01e0aa70 + 0x1e0a6b0));
    func_0x01384978(*(undefined4 *)(_UNK_01e0aa74 + 0x1e0a6bc));
    func_0x01384978(*(undefined4 *)(_UNK_01e0aa78 + 0x1e0a6c8));
    func_0x01384978(*(undefined4 *)(_UNK_01e0aa7c + 0x1e0a6d4));
    func_0x01384978(*(undefined4 *)(_UNK_01e0aa80 + 31500000));
    func_0x01384978(*(undefined4 *)(_UNK_01e0aa84 + 0x1e0a6ec));
    func_0x01384978(*(undefined4 *)(_UNK_01e0aa88 + 0x1e0a6f8));
    func_0x01384978(*(undefined4 *)(_UNK_01e0aa8c + 0x1e0a704));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa025,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xa025,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0228b824 + 0x228b730);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0228b828 + 0x228b744),param_1,param_2,0);
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
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0228b82c + 0x228b814));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01e0aa90 + 0x1e0a760));
  func_0x0328e950(iVar1,**(undefined4 **)(_UNK_01e0aa94 + 0x1e0a774));
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01e0aa98 + 0x1e0a788));
  func_0x0244f5a0(uVar6,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(uint *)(iVar1 + 0xc);
  piVar7 = *(int **)(_UNK_01e0aa9c + 0x1e0a7c4);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar8 = *piVar7;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  if (uVar5 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar5 + 1;
    *(undefined4 *)(iVar3 + uVar5 * 4 + 0x10) = uVar6;
  }
  else {
    func_0x0328f170(iVar1,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01e0aaa0 + 0x1e0a814));
  func_0x0244f5a0(uVar6,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(uint *)(iVar1 + 0xc);
  iVar8 = *piVar7;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  if (uVar5 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar5 + 1;
    *(undefined4 *)(iVar3 + uVar5 * 4 + 0x10) = uVar6;
  }
  else {
    func_0x0328f170(iVar1,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01e0aaa4 + 0x1e0a88c));
  func_0x0244f5a0(uVar6,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(uint *)(iVar1 + 0xc);
  iVar8 = *piVar7;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  if (uVar5 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar5 + 1;
    *(undefined4 *)(iVar3 + uVar5 * 4 + 0x10) = uVar6;
  }
  else {
    func_0x0328f170(iVar1,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01e0aaa8 + 0x1e0a904));
  func_0x0244f5a0(uVar6,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(uint *)(iVar1 + 0xc);
  iVar8 = *piVar7;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  if (uVar5 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar5 + 1;
    *(undefined4 *)(iVar3 + uVar5 * 4 + 0x10) = uVar6;
  }
  else {
    func_0x0328f170(iVar1,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01e0aaac + 0x1e0a97c));
  func_0x0244f5a0(uVar6,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(uint *)(iVar1 + 0xc);
  iVar8 = *piVar7;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  if (uVar5 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar5 + 1;
    *(undefined4 *)(iVar3 + uVar5 * 4 + 0x10) = uVar6;
  }
  else {
    func_0x0328f170(iVar1,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01e0aab0 + 0x1e0a9f4));
  func_0x0244f5a0(uVar6,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(uint *)(iVar1 + 0xc);
  iVar8 = *piVar7;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  if (uVar5 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar5 + 1;
    *(undefined4 *)(iVar3 + uVar5 * 4 + 0x10) = uVar6;
  }
  else {
    func_0x0328f170(iVar1,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
  }
  return iVar1;
}



// ===== FAT.MainBoardIntroProvider$$OnIntroFinished RVA 0x1dfaae4 =====

/* WARNING: Removing unreachable block (ram,0x01c7907c) */

void FUN_01e0aae4(int param_1)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0xa026,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xfc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01e7e820(iVar1,0);
    if (iVar1 != 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xfc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e8454c(iVar1,0,0);
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_01c74c78(iVar1,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_1 = *(int *)(iVar1 + 0x9c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0229f06c(0x7587,0,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x7587,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_28 = 0;
      func_0x0245494c(&uStack_50,0,0,0);
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01485278(&uStack_38,param_1,0);
      func_0x01485228(&uStack_38,0,0);
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
    if (*(char *)(param_1 + 0x39) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x39) = 0;
    iVar1 = func_0x0229f06c(0x35,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x39) != '\0') {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(char *)(iVar1 + 0x10) != '\0') {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined1 *)(iVar1 + 0x10) = 1;
      return;
    }
    iVar1 = func_0x0229f13c(0x35,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa026,0);
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
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2);
  return;
}



// ===== FAT.MainBoardIntroProvider$$<>iFixBaseProxy_OnIntroFinished RVA 0x1dfac1c =====

void thunk_FUN_01e0a18c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x5f6c,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x5f6c,0);
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


