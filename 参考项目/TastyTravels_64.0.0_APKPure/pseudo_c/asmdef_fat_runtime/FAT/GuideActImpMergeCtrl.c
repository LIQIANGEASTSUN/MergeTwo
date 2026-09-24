/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.GuideActImpMergeCtrl$$Play RVA 0x1c49474 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c59474(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  char *pcVar6;
  char cStack_19;
  
  pcVar6 = (char *)(_UNK_01c595d4 + 0x1c59490);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c595d8 + 0x1c594a4));
    func_0x01384978(*(undefined4 *)(_UNK_01c595dc + 0x1c594b0));
    *pcVar6 = '\x01';
  }
  cStack_19 = '\0';
  iVar2 = func_0x0229f06c(0x93ce,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      func_0x01384bf4();
    }
    uVar4 = *(undefined4 *)(param_2 + 0x10);
    if (*(int *)(**(int **)(_UNK_01c595e0 + 0x1c59530) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x024514bc(uVar4,&cStack_19,0);
    iVar3 = func_0x03668dfc(**(undefined4 **)(_UNK_01c595e4 + 0x1c59564));
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    cVar1 = cStack_19;
    iVar3 = *(int *)(iVar3 + 0x78);
    if (iVar2 == 0) {
      bVar5 = false;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
    }
    else {
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      bVar5 = cVar1 == '\0';
    }
    func_0x021478d4(iVar3,0,bVar5,0);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    iVar2 = func_0x0229f13c(0x93ce,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.GuideActImpMergeCtrl$$.ctor RVA 0x1c495e8 =====

void FUN_01c595e8(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  (*(code *)&UNK_051877b0)(param_1,0);
  return;
}



// ===== FAT.GuideActImpMergeCtrl$$<>iFixBaseProxy_Play RVA 0x1c495f8 =====

void thunk_FUN_01c47208(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x92e1,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x92e1,0);
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


