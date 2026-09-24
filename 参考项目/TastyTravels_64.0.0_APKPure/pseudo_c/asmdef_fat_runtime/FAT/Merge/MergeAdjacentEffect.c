/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.Merge.MergeAdjacentEffect$$Init RVA 0x20fcf10 =====

void FUN_0210cf10(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x5bc1,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = param_3;
  }
  else {
    iVar1 = func_0x0229f13c(0x5bc1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.Merge.MergeAdjacentEffect$$_ReverseDir RVA 0x20fcf84 =====

int FUN_0210cf84(undefined4 param_1,int param_2)

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
  
  iVar1 = func_0x0229f06c(0x5bca,0);
  if (iVar1 == 0) {
    if (param_2 < 5) {
      param_2 = param_2 + 4;
    }
    else {
      param_2 = param_2 + -4;
    }
    return param_2;
  }
  iVar1 = func_0x0229f13c(0x5bca,0);
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
  iVar1 = func_0x0245498c(&uStack_38,0,0);
  return iVar1;
}



// ===== FAT.Merge.MergeAdjacentEffect$$_RoundTraverse RVA 0x20fcfe8 =====

void FUN_0210cfe8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = func_0x0229f06c(0x5bc8,0);
  uVar6 = 0;
  if (iVar1 == 0) {
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = uVar6 + 1;
      if (*(int *)(iVar1 + 0xc) <= (int)uVar4) break;
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar4) {
        func_0x01384bf4();
      }
      iVar5 = *(int *)(param_1 + 0x10);
      iVar1 = *(int *)(iVar1 + uVar6 * 8 + 0x18);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar5 + 0xc) <= uVar4) {
        func_0x01384bf4();
      }
      uVar2 = func_0x0210d114(param_1,iVar1 + param_3,*(int *)(iVar5 + uVar6 * 8 + 0x1c) + param_4);
      uVar6 = uVar4;
      if (param_2 != 0) {
        uVar3 = FUN_0210cf84(param_1,uVar4);
        (**(code **)(param_2 + 0xc))
                  (*(undefined4 *)(param_2 + 0x20),uVar2,uVar3,*(undefined4 *)(param_2 + 0x14));
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x5bc8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02234068(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.MergeAdjacentEffect$$_CalculateIdxByCoord RVA 0x20fd114 =====

int FUN_0210d114(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar2 = func_0x0229f06c(0x5bc9,0);
  if (iVar2 == 0) {
    iVar2 = -1;
    if (-1 < param_2 && -1 < param_3) {
      iVar3 = *(int *)(param_1 + 8);
      bVar6 = SBORROW4(iVar3,param_2);
      iVar1 = iVar3 - param_2;
      bVar5 = iVar3 == param_2;
      if (param_2 < iVar3) {
        iVar4 = *(int *)(param_1 + 0xc);
        bVar6 = SBORROW4(iVar4,param_3);
        iVar1 = iVar4 - param_3;
        bVar5 = iVar4 == param_3;
      }
      if (!bVar5 && iVar1 < 0 == bVar6) {
        iVar2 = iVar3 * param_3 + param_2;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x5bc9,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02180128(iVar2,param_1,param_2,param_3,0);
  }
  return iVar2;
}



// ===== FAT.Merge.MergeAdjacentEffect$$_SetAdjacentFlag RVA 0x20fd1a4 =====

void FUN_0210d1a4(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x5bc7,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(param_2 + 0xc) <= param_3) {
      func_0x01384bf4();
    }
    param_2 = param_2 + param_3 * 4;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1 << (param_4 - 1U & 0x1f);
  }
  else {
    iVar1 = func_0x0229f13c(0x5bc7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217fd9c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.MergeAdjacentEffect$$_ClearAdjacentFlag RVA 0x20fd24c =====

void FUN_0210d24c(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x5bcf,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if (*(uint *)(param_2 + 0xc) <= param_3) {
      func_0x01384bf4();
    }
    param_2 = param_2 + param_3 * 4;
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) & ~(1 << (param_4 - 1U & 0x1f));
  }
  else {
    iVar1 = func_0x0229f13c(0x5bcf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217fd9c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.Merge.MergeAdjacentEffect$$_CalculateCoordByIdx RVA 0x20fd2f4 =====

undefined4 FUN_0210d2f4(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  
  iVar1 = func_0x0229f06c(0xb32d,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01457ae8(param_2,*(undefined4 *)(param_1 + 8));
    *param_4 = uVar2;
    func_0x01458344(param_2,*(undefined4 *)(param_1 + 8));
    *param_3 = extraout_r1;
    uVar2 = 1;
  }
  else {
    iVar1 = func_0x0229f13c(0xb32d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02182904(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.Merge.MergeAdjacentEffect$$.ctor RVA 0x20fd388 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0210d388(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pcVar4 = (char *)(_UNK_0210d510 + 0x210d39c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210d514 + 0x210d3b0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384a00(**(undefined4 **)(_UNK_0210d518 + 0x210d3c8),9);
  pcVar4 = (char *)(_UNK_0210d51c + 0x210d3dc);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0210d520 + 0x210d3f0));
    *pcVar4 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_0210d524 + 0x210d408) + 0x5c);
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(uint *)(iVar1 + 0xc);
  if (uVar3 == 0) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x10) = uVar5;
  *(undefined4 *)(iVar1 + 0x14) = uVar6;
  if (uVar3 < 2) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x18) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x1c) = 1;
  if (uVar3 < 3) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 1;
  if (uVar3 < 4) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x28) = 1;
  *(undefined4 *)(iVar1 + 0x2c) = 1;
  if (uVar3 < 5) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x30) = 1;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  if (uVar3 < 6) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x38) = 1;
  *(undefined4 *)(iVar1 + 0x3c) = 0xffffffff;
  if (uVar3 < 7) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0xffffffff;
  if (uVar3 < 8) {
    func_0x01384bf4();
    uVar3 = *(uint *)(iVar1 + 0xc);
  }
  *(undefined4 *)(iVar1 + 0x48) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x4c) = 0xffffffff;
  if (uVar3 < 9) {
    func_0x01384bf4();
  }
  *(undefined4 *)(iVar1 + 0x50) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(int *)(param_1 + 0x10) = iVar1;
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}


