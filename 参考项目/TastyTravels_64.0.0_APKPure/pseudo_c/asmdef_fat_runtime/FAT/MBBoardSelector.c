/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.MBBoardSelector$$get_lastCoord RVA 0x1df6a98 =====

void FUN_01e06a98(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *param_1 = *(undefined4 *)(param_2 + 0x18);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.MBBoardSelector$$set_lastCoord RVA 0x1df6aac =====

void FUN_01e06aac(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  return;
}



// ===== FAT.MBBoardSelector$$FAT.IMergeBoard.Init RVA 0x1df6ab8 =====

void FUN_01e06ab8(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0xa010,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0xa010,0);
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



// ===== FAT.MBBoardSelector$$FAT.IMergeBoard.Setup RVA 0x1df6b04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e06b04(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01e06c98 + 0x1e06b24);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e06c9c + 0x1e06b38));
    func_0x01384978(*(undefined4 *)(_UNK_01e06ca0 + 0x1e06b44));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0xa011,0);
  if (iVar1 == 0) {
    piVar5 = *(int **)(_UNK_01e06ca4 + 0x1e06ba8);
    *(undefined4 *)(param_1 + 0x24) = param_3;
    *(undefined4 *)(param_1 + 0x20) = param_2;
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar4 = (char *)(_UNK_01e06ca8 + 0x1e06bcc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e06cac + 0x1e06be0));
      *pcVar4 = '\x01';
    }
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    iVar3 = *(int *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fe5c(iVar3,uVar2,uVar2,0);
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244fe5c(iVar1,uVar2,uVar2,0);
    func_0x01e06cb4(param_1);
    uStack_1c = 0;
    uStack_20 = 0;
    func_0x038fd264(&uStack_20,0xffffffff,0xffffffff,**(undefined4 **)(_UNK_01e06cb0 + 0x1e06c70));
    *(undefined4 *)(param_1 + 0x18) = uStack_20;
    *(undefined4 *)(param_1 + 0x1c) = uStack_1c;
  }
  else {
    iVar1 = func_0x0229f13c(0xa011,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardSelector$$Hide RVA 0x1df6cb4 =====

/* WARNING: Possible PIC construction at 0x01e06d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e06d3c) */
/* WARNING: Removing unreachable block (ram,0x01e06d48) */
/* WARNING: Removing unreachable block (ram,0x01e06d4c) */
/* WARNING: Removing unreachable block (ram,0x01e06d64) */
/* WARNING: Removing unreachable block (ram,0x01e06d68) */

void FUN_01e06cb4(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x5ee8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ee8,0);
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
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244ffd4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  (*(code *)&UNK_05189da8)(iVar1,0,0);
  return;
}



// ===== FAT.MBBoardSelector$$FAT.IMergeBoard.Cleanup RVA 0x1df6d7c =====

/* WARNING: Possible PIC construction at 0x01e06d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e06d3c) */
/* WARNING: Removing unreachable block (ram,0x01e06d48) */
/* WARNING: Removing unreachable block (ram,0x01e06d4c) */
/* WARNING: Removing unreachable block (ram,0x01e06d64) */
/* WARNING: Removing unreachable block (ram,0x01e06d68) */

void FUN_01e06d7c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0xa012,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x5ee8,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      (*(code *)&UNK_05189da8)(iVar1,0,0);
      return;
    }
    iVar1 = func_0x0229f13c(0x5ee8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0xa012,0);
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
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.MBBoardSelector$$ForceShowSelector RVA 0x1df6dd4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e06dd4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01e06fb4 + 0x1e06df4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e06fb8 + 0x1e06e08));
    func_0x01384978(*(undefined4 *)(_UNK_01e06fbc + 0x1e06e14));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x764c,0);
  if (iVar1 == 0) {
    FUN_01e06cb4(param_1);
    uStack_1c = 0;
    uStack_20 = 0;
    func_0x038fd264(&uStack_20,param_2,param_3,**(undefined4 **)(_UNK_01e06fc0 + 0x1e06e8c));
    piVar4 = *(int **)(_UNK_01e06fc4 + 0x1e06eb0);
    *(undefined4 *)(param_1 + 0x18) = uStack_20;
    *(undefined4 *)(param_1 + 0x1c) = uStack_1c;
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar3 = (char *)(_UNK_01e06fc8 + 0x1e06ed4);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01e06fcc + 0x1e06ee8));
      *pcVar3 = '\x01';
    }
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    iVar2 = *(int *)(param_1 + 0x10);
    fVar5 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
    fVar6 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = fVar5 * 0.5 + fVar5 * fVar7;
    fVar5 = fVar6 * -fVar5 - fVar5 * 0.5;
    if (iVar2 == 0) {
      func_0x01384bf0();
      func_0x0244fdbc(0,fVar7,fVar5,0);
      func_0x01384bf0();
    }
    else {
      func_0x0244fdbc(iVar2,fVar7,fVar5,0);
    }
    iVar1 = func_0x0244ffd4(iVar2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0244ffe4(iVar1,1,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x764c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.MBBoardSelector$$Show RVA 0x1df6fd0 =====

/* WARNING: Possible PIC construction at 0x01e07150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e07214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e07310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e07348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e071d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01e06d38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01e071dc) */
/* WARNING: Removing unreachable block (ram,0x01e071e8) */
/* WARNING: Removing unreachable block (ram,0x01e071ec) */
/* WARNING: Removing unreachable block (ram,0x01e07204) */
/* WARNING: Removing unreachable block (ram,0x01e07208) */
/* WARNING: Removing unreachable block (ram,0x01e07314) */
/* WARNING: Removing unreachable block (ram,0x01e0731c) */
/* WARNING: Removing unreachable block (ram,0x01e07320) */
/* WARNING: Removing unreachable block (ram,0x01e07338) */
/* WARNING: Removing unreachable block (ram,0x01e0733c) */
/* WARNING: Removing unreachable block (ram,0x01e07218) */
/* WARNING: Removing unreachable block (ram,0x01e07230) */
/* WARNING: Removing unreachable block (ram,0x01e07234) */
/* WARNING: Removing unreachable block (ram,0x01e07248) */
/* WARNING: Removing unreachable block (ram,0x01e0725c) */
/* WARNING: Removing unreachable block (ram,0x01e0726c) */
/* WARNING: Removing unreachable block (ram,0x01e07274) */
/* WARNING: Removing unreachable block (ram,0x01e072cc) */
/* WARNING: Removing unreachable block (ram,0x01e072b4) */
/* WARNING: Removing unreachable block (ram,0x01e072e8) */
/* WARNING: Removing unreachable block (ram,0x01e07300) */
/* WARNING: Removing unreachable block (ram,0x01e07304) */
/* WARNING: Removing unreachable block (ram,0x01e07154) */
/* WARNING: Removing unreachable block (ram,0x01e07160) */
/* WARNING: Removing unreachable block (ram,0x01e07164) */
/* WARNING: Removing unreachable block (ram,0x01e0717c) */
/* WARNING: Removing unreachable block (ram,0x01e07180) */
/* WARNING: Removing unreachable block (ram,0x01e07210) */
/* WARNING: Removing unreachable block (ram,0x01e06d3c) */
/* WARNING: Removing unreachable block (ram,0x01e06d48) */
/* WARNING: Removing unreachable block (ram,0x01e06d4c) */
/* WARNING: Removing unreachable block (ram,0x01e06d64) */
/* WARNING: Removing unreachable block (ram,0x01e06d68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e06fd0(int param_1,undefined4 param_2,undefined4 param_3)

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
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01e07354 + 0x1e06ff0);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e07358 + 0x1e07004));
    func_0x01384978(*(undefined4 *)(_UNK_01e0735c + 0x1e07010));
    func_0x01384978(*(undefined4 *)(_UNK_01e07360 + 0x1e0701c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x764f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x764f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = 0;
    func_0x02179a68(iVar1,param_1,param_2,param_3);
    return;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01e07364 + 0x1e07080));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x7c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x020e81ec(iVar1,param_2,param_3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0229f06c(0x5ee8,0);
    if (iVar1 != 0) {
      iVar1 = func_0x0229f13c(0x5ee8,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_30 = 0;
      func_0x0245494c(&uStack_48,0,0);
      uStack_30 = uStack_48;
      uStack_2c = uStack_44;
      uStack_28 = uStack_40;
      uStack_24 = uStack_3c;
      if (*(int *)(iVar1 + 0x10) != 0) {
        func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
      }
      func_0x01485278(&uStack_30,param_1,0);
      iVar4 = *(int *)(iVar1 + 8);
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 2;
      if (iVar1 == 0) {
        uVar3 = 1;
      }
      func_0x0245495c(iVar4,uVar2,&uStack_30,uVar3,0,0);
      return;
    }
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x0244ffd4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
  }
  else {
    uStack_24 = 0;
    uStack_28 = 0;
    func_0x038fd264(&uStack_28,param_2,param_3,**(undefined4 **)(_UNK_01e07368 + 0x1e070dc));
    *(undefined4 *)(param_1 + 0x18) = uStack_28;
    *(undefined4 *)(param_1 + 0x1c) = uStack_24;
    uVar2 = func_0x0210e2d4(iVar1,0);
    iVar1 = func_0x02167970(uVar2,0);
    if (iVar1 < 1) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0244ffd4(iVar1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = 1;
    }
  }
  (*(code *)&UNK_05189da8)(iVar1,uVar2,0);
  return;
}



// ===== FAT.MBBoardSelector$$.ctor RVA 0x1df7378 =====

void FUN_01e07378(undefined4 param_1)

{
  (*(code *)&UNK_0518b71c)(param_1,0);
  return;
}


