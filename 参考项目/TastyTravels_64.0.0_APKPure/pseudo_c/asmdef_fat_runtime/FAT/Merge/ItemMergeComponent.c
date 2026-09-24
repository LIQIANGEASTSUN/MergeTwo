/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.ItemMergeComponent$$PeekMergeResult RVA 0x211f278 =====

void FUN_0212f278(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x5ba5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ba5,0);
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
    func_0x0245498c(&uStack_38,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = FUN_02123568(param_2);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = FUN_02119d28(iVar1,0,0);
  iVar1 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = FUN_02119d28(iVar1,0,0);
  func_0x0212f350(param_1,param_2,uVar4,uVar2);
  return;
}



// ===== FAT.Merge.ItemMergeComponent$$PeekMergeResult RVA 0x211f350 =====

void FUN_0212f350(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = func_0x0229f06c(0x5ba6,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = FUN_02123568(param_2);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_0210e2d4(iVar1,0);
    iVar1 = FUN_02123568(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = FUN_0210e2d4(iVar1,0);
    func_0x0212f430(param_1,uVar2,uVar3,param_3,param_4);
  }
  else {
    iVar1 = func_0x0229f13c(0x5ba6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021832b8(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.ItemMergeComponent$$PeekMergeResult RVA 0x211f430 =====

int FUN_0212f430(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = func_0x0229f06c(0x5ba0,0);
  if (iVar1 == 0) {
    if ((((param_4 == 0 || param_5 == 0) || (iVar1 = func_0x0212f4e4(param_4), iVar1 != 8)) ||
        (iVar1 = func_0x0212f4e4(param_5), iVar1 != 8)) &&
       (bVar2 = param_2 == param_3, param_3 = 0, bVar2)) {
      param_3 = *(int *)(param_1 + 0x10);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5ba0,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_3 = func_0x02233d44(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return param_3;
}



// ===== FAT.Merge.ItemMergeComponent$$OnPostAttach RVA 0x211f548 =====

void FUN_0212f548(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xb3e2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0xb3e2,0);
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
  FUN_02127894(param_1);
  iVar1 = FUN_02123568(param_1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = FUN_0210e2d4(iVar1,0);
  uVar4 = func_0x02167970(uVar4,0);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return;
}



// ===== FAT.Merge.ItemMergeComponent$$.ctor RVA 0x211f5d0 =====

void FUN_0212f5d0(int param_1)

{
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0x101;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.Merge.ItemMergeComponent$$<>iFixBaseProxy_OnPostAttach RVA 0x211f5e8 =====

void thunk_FUN_02127894(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x279,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x279,0);
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


