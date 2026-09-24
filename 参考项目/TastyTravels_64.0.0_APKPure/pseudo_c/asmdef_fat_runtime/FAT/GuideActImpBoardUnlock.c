/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.GuideActImpBoardUnlock$$Play RVA 0x1c3cc7c =====

void FUN_01c4cc7c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  uStack_18 = 0;
  iVar1 = func_0x0229f06c(0x934e,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(param_2 + 0xc) == 2) {
      func_0x0245085c(*(undefined4 *)(param_2 + 0x10),&uStack_14,0);
      if (*(uint *)(param_2 + 0xc) < 2) {
        func_0x01384bf4();
      }
      func_0x0245085c(*(undefined4 *)(param_2 + 0x14),&uStack_18,0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01dbb000(iVar1,0);
      if (((iVar1 != 0) && (iVar1 = func_0x02139cf4(iVar1,0), iVar1 != 0)) &&
         (iVar1 = func_0x020e81ec(iVar1,uStack_14,uStack_18,0), iVar1 != 0)) {
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x4c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = func_0x01dbb000(iVar2,0);
        if (iVar2 != 0) {
          iVar2 = func_0x02139cf4(iVar2,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          func_0x020eb26c(iVar2,iVar1,0);
        }
      }
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x934e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.GuideActImpBoardUnlock$$.ctor RVA 0x1c3ce04 =====

void FUN_01c4ce04(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  (*(code *)&UNK_051877b0)(param_1,0);
  return;
}



// ===== FAT.GuideActImpBoardUnlock$$<>iFixBaseProxy_Play RVA 0x1c3ce14 =====

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


