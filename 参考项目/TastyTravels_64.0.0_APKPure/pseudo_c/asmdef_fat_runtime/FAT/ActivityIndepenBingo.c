/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.ActivityIndepenBingo$$get_detailID RVA 0x1a2b1ac =====

undefined4 FUN_01a3b1ac(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.ActivityIndepenBingo$$set_detailID RVA 0x1a2b1b4 =====

void FUN_01a3b1b4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_groupDetailID RVA 0x1a2b1bc =====

undefined4 FUN_01a3b1bc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.ActivityIndepenBingo$$set_groupDetailID RVA 0x1a2b1c4 =====

void FUN_01a3b1c4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_boardIndex RVA 0x1a2b1cc =====

undefined4 FUN_01a3b1cc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// ===== FAT.ActivityIndepenBingo$$set_boardIndex RVA 0x1a2b1d4 =====

void FUN_01a3b1d4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_waitEnterNextBoard RVA 0x1a2b1dc =====

undefined1 FUN_01a3b1dc(int param_1)

{
  return *(undefined1 *)(param_1 + 0x48);
}



// ===== FAT.ActivityIndepenBingo$$set_waitEnterNextBoard RVA 0x1a2b1e4 =====

void FUN_01a3b1e4(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_waitRecycle RVA 0x1a2b1ec =====

undefined1 FUN_01a3b1ec(int param_1)

{
  return *(undefined1 *)(param_1 + 0x49);
}



// ===== FAT.ActivityIndepenBingo$$set_waitRecycle RVA 0x1a2b1f4 =====

void FUN_01a3b1f4(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x49) = param_2;
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_roundConf RVA 0x1a2b1fc =====

undefined4 FUN_01a3b1fc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}



// ===== FAT.ActivityIndepenBingo$$set_roundConf RVA 0x1a2b204 =====

void FUN_01a3b204(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x54) = param_2;
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_conf RVA 0x1a2b20c =====

undefined4 FUN_01a3b20c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.ActivityIndepenBingo$$set_conf RVA 0x1a2b214 =====

void FUN_01a3b214(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_detailConf RVA 0x1a2b21c =====

undefined4 FUN_01a3b21c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// ===== FAT.ActivityIndepenBingo$$set_detailConf RVA 0x1a2b224 =====

void FUN_01a3b224(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_groupDetailConf RVA 0x1a2b22c =====

undefined4 FUN_01a3b22c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// ===== FAT.ActivityIndepenBingo$$set_groupDetailConf RVA 0x1a2b234 =====

void FUN_01a3b234(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_bingoBoardConf RVA 0x1a2b23c =====

undefined4 FUN_01a3b23c(int param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// ===== FAT.ActivityIndepenBingo$$set_bingoBoardConf RVA 0x1a2b244 =====

void FUN_01a3b244(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_GuideRes RVA 0x1a2b24c =====

void FUN_01a3b24c(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x800d,0);
  if (iVar1 == 0) {
    uStack_18 = *(undefined4 *)(param_2 + 0xb8);
    uStack_14 = *(undefined4 *)(param_2 + 0xbc);
  }
  else {
    iVar1 = func_0x0229f13c(0x800d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021e4730(&uStack_18,iVar1,param_2,0);
  }
  *param_1 = uStack_18;
  param_1[1] = uStack_14;
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_Visual RVA 0x1a2b2bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a3b2bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x800e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x800e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c7f44 + 0x21c7e64);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c7f48 + 0x21c7e78),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7f4c + 0x21c7f34));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x7c);
}



// ===== FAT.ActivityIndepenBingo$$add_Invalidate RVA 0x1a2b310 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a3b310(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_01a3b3a4 + 0x1a3b328);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3b3a8 + 0x1a3b33c));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01a3b3ac + 0x1a3b354);
  iVar1 = *(int *)(param_1 + 0xd4);
  do {
    piVar2 = (int *)func_0x024507e8(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_01a3b384:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_01a3b384;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0xd4),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.ActivityIndepenBingo$$remove_Invalidate RVA 0x1a2b3b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a3b3b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  bool bVar6;
  
  pcVar4 = (char *)(_UNK_01a3b444 + 0x1a3b3c8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3b448 + 0x1a3b3dc));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01a3b44c + 0x1a3b3f4);
  iVar1 = *(int *)(param_1 + 0xd4);
  do {
    piVar2 = (int *)func_0x024507f8(iVar1,param_2,0);
    if (piVar2 == (int *)0x0) {
LAB_01a3b424:
      piVar2 = (int *)0x0;
    }
    else if (*piVar2 != *piVar5) {
      func_0x01384fb4(piVar2);
      goto LAB_01a3b424;
    }
    iVar3 = func_0x0138b0ec((int *)(param_1 + 0xd4),piVar2,iVar1);
    bVar6 = iVar1 == iVar3;
    iVar1 = iVar3;
    if (bVar6) {
      return;
    }
  } while( true );
}



// ===== FAT.ActivityIndepenBingo$$get_World RVA 0x1a2b450 =====

undefined4 FUN_01a3b450(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd8);
}



// ===== FAT.ActivityIndepenBingo$$set_World RVA 0x1a2b458 =====

void FUN_01a3b458(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_WorldTracer RVA 0x1a2b460 =====

undefined4 FUN_01a3b460(int param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}



// ===== FAT.ActivityIndepenBingo$$set_WorldTracer RVA 0x1a2b468 =====

void FUN_01a3b468(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xdc) = param_2;
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_IsEnd RVA 0x1a2b470 =====

uint FUN_01a3b470(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x800f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x800f,0);
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
  uVar2 = func_0x02b48934(param_1,0);
  return uVar2 ^ 1;
}



// ===== FAT.ActivityIndepenBingo$$get_CountdownLimit RVA 0x1a2b4d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a3b4d0(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
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
  
  pcVar4 = (char *)(_UNK_01a3b5a8 + 0x1a3b4e4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3b5ac + 0x1a3b4f8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8010,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8010,0);
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
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
    func_0x0245499c(&uStack_30,0,0);
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x34);
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01a3b5b0 + 0x1a3b550));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar8 = func_0x01c359e8(iVar1,0);
  fVar2 = (float)func_0x01457e28(uVar6 - (uint)uVar8,
                                 iVar5 - ((int)((ulonglong)uVar8 >> 0x20) +
                                         (uint)(uVar6 < (uint)uVar8)));
  if (fVar2 < 0.0) {
    fVar2 = _UNK_01a3b5a4;
  }
  func_0x01457d14(fVar2);
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_recycleReward RVA 0x1a2b5b4 =====

undefined4 FUN_01a3b5b4(int param_1)

{
  return *(undefined4 *)(param_1 + 0xe0);
}



// ===== FAT.ActivityIndepenBingo$$set_recycleReward RVA 0x1a2b5bc =====

void FUN_01a3b5bc(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe0) = param_2;
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_Feature RVA 0x1a2b5c4 =====

undefined4 FUN_01a3b5c4(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x8011,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8011,0);
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
  return 0x6d;
}



// ===== FAT.ActivityIndepenBingo$$SetBoardData RVA 0x1a2b618 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0214bc3c) */
/* WARNING: Removing unreachable block (ram,0x0214b9ec) */
/* WARNING: Removing unreachable block (ram,0x0214b350) */
/* WARNING: Removing unreachable block (ram,0x0214b344) */
/* WARNING: Removing unreachable block (ram,0x0214acf8) */
/* WARNING: Removing unreachable block (ram,0x0214b080) */
/* WARNING: Removing unreachable block (ram,0x0214b08c) */
/* WARNING: Removing unreachable block (ram,0x0214b9e0) */
/* WARNING: Removing unreachable block (ram,0x0214bc48) */
/* WARNING: Removing unreachable block (ram,0x0214c20c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a3b618(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = func_0x0229f06c(0x8012,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8012,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar14 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar2 == 0) {
      uVar9 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x0245495c(iVar11,uVar14,&uStack_38,uVar9);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  func_0x01a3b728(param_1);
  func_0x01a3b8c0(param_1);
  func_0x01a3b9c4(param_1);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(param_1 + 0x58);
  uVar14 = *(undefined4 *)(param_1 + 0xd8);
  iVar2 = *(int *)(iVar2 + 0x4c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar9 = *(undefined4 *)(iVar11 + 0x18);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  uStack_24 = 0;
  func_0x01db8438(iVar2,uVar14,uVar9,0);
  iVar2 = *(int *)(param_1 + 0xd8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar10 = (char *)(_UNK_0214b97c + 0x214aa08);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214b980 + 0x214aa1c),param_2,0,0);
    func_0x01384978(*(undefined4 *)(_UNK_0214b984 + 0x214aa28));
    func_0x01384978(*(undefined4 *)(_UNK_0214b988 + 0x214aa34));
    func_0x01384978(*(undefined4 *)(_UNK_0214b98c + 0x214aa40));
    func_0x01384978(*(undefined4 *)(_UNK_0214b990 + 0x214aa4c));
    func_0x01384978(*(undefined4 *)(_UNK_0214b994 + 0x214aa58));
    func_0x01384978(*(undefined4 *)(_UNK_0214b998 + 0x214aa64));
    func_0x01384978(*(undefined4 *)(_UNK_0214b99c + 0x214aa70));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9a0 + 0x214aa7c));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9a4 + 0x214aa88));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9a8 + 0x214aa94));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9ac + 0x214aaa0));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9b0 + 0x214aaac));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9b4 + 0x214aab8));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9b8 + 0x214aac4));
    func_0x01384978(*(undefined4 *)(_UNK_0214bac4 + 0x214aad0));
    func_0x01384978(*(undefined4 *)(_UNK_0214bac8 + 0x214aadc));
    func_0x01384978(*(undefined4 *)(_UNK_0214bacc + 0x214aae8));
    func_0x01384978(*(undefined4 *)(_UNK_0214bad0 + 0x214aaf4));
    func_0x01384978(*(undefined4 *)(_UNK_0214bad4 + 0x214ab00));
    func_0x01384978(*(undefined4 *)(_UNK_0214bad8 + 0x214ab0c));
    func_0x01384978(*(undefined4 *)(_UNK_0214badc + 0x214ab18));
    func_0x01384978(*(undefined4 *)(_UNK_0214bae0 + 0x214ab24));
    func_0x01384978(*(undefined4 *)(_UNK_0214bae4 + 0x214ab30));
    func_0x01384978(*(undefined4 *)(_UNK_0214bae8 + 0x214ab3c));
    func_0x01384978(*(undefined4 *)(_UNK_0214baec + 0x214ab48));
    func_0x01384978(*(undefined4 *)(_UNK_0214baf0 + 0x214ab54));
    func_0x01384978(*(undefined4 *)(_UNK_0214baf4 + 0x214ab60));
    func_0x01384978(*(undefined4 *)(_UNK_0214baf8 + 0x214ab6c));
    func_0x01384978(*(undefined4 *)(_UNK_0214bafc + 0x214ab78));
    func_0x01384978(*(undefined4 *)(_UNK_0214bb7c + 0x214ab84));
    func_0x01384978(*(undefined4 *)(_UNK_0214bb80 + 0x214ab90));
    *pcVar10 = '\x01';
  }
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  iVar11 = func_0x0229f06c(0x5c51,0);
  if (iVar11 != 0) {
    iVar11 = func_0x0229f13c(0x5c51,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar11,iVar2,param_2,0,0);
    return;
  }
  iVar11 = func_0x01c24918(0);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar2 + 0x34);
  iVar11 = *(int *)(iVar11 + 0x38);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar12 + 0xc);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar12,**(undefined4 **)(_UNK_0214bc10 + 0x214ac60));
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar16 = *(uint *)(param_2 + 0x48);
  uVar17 = *(uint *)(param_2 + 0x4c);
  if (uVar16 != 0 || uVar17 != 0) {
    iVar12 = 0;
    puVar15 = *(undefined4 **)(_UNK_0214bc14 + 0x214ac90);
    do {
      if ((uVar16 & 1) != 0) {
        iVar13 = *(int *)(iVar2 + 0x6c);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        func_0x024519c0(iVar13,iVar12,*puVar15);
      }
      bVar1 = (byte)uVar17;
      uVar17 = uVar17 >> 1;
      iVar12 = iVar12 + 1;
      uVar16 = (uint)(bVar1 & 1) << 0x1f | uVar16 >> 1;
    } while (uVar16 != 0 || uVar17 != 0);
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar9 = *(undefined4 *)(param_2 + 0x3c);
  uVar14 = *(undefined4 *)(param_2 + 0x44);
  uVar6 = *(undefined4 *)(param_2 + 0x34);
  *(int *)(iVar2 + 0x80) = *(int *)(param_2 + 0x30);
  *(undefined4 *)(iVar2 + 0x84) = uVar6;
  *(undefined4 *)(iVar2 + 0x90) = uVar14;
  *(undefined4 *)(iVar2 + 0x94) = uVar9;
  piVar3 = (int *)func_0x021566f4(0);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar3;
  uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar17 != 0) {
    piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_0214bcb8 + 0x214ad30)) {
        puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
        goto LAB_0214ad78;
      }
      uVar17 = uVar17 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar17 != 0);
  }
  puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214bcb8 + 0x214ad30),0);
LAB_0214ad78:
  (*(code *)*puVar15)(piVar3,puVar15[1]);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar13 = *(int *)(iVar2 + 0x9c);
  iVar12 = (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x10)) * 1000;
  if (iVar12 < 2) {
    iVar12 = 1;
  }
  *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(param_2 + 0xc);
  *(int *)(iVar2 + 0x44) = iVar12;
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar13,**(undefined4 **)(_UNK_0214bd90 + 0x214addc));
  iVar12 = *(int *)(param_2 + 0x50);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x034658b4(iVar12,**(undefined4 **)(_UNK_0214bd94 + 0x214ae00));
  piVar7 = *(int **)(_UNK_0214bd98 + 0x214ae1c);
  puVar15 = *(undefined4 **)(_UNK_0214bd9c + 0x214ae24);
LAB_0214ae20:
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar3;
  uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar17 != 0) {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_0214bda0 + 0x214ae3c)) {
        puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
        goto LAB_0214ae84;
      }
      uVar17 = uVar17 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar17 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214bda0 + 0x214ae3c),0);
LAB_0214ae84:
  iVar12 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  if (iVar12 != 0) {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
          goto LAB_0214aef8;
        }
        uVar17 = uVar17 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar17 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar7,0);
LAB_0214aef8:
    (*(code *)*puVar4)(&uStack_68,piVar3,puVar4[1]);
    iVar12 = iStack_64;
    uVar14 = uStack_68;
    iVar13 = func_0x02142c70(iVar2,uStack_68,2);
    if (iVar13 == 0) {
      piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0214bf34 + 0x214af5c),1);
      uStack_68 = uVar14;
      iVar12 = func_0x01384abc(**(undefined4 **)(_UNK_0214bf64 + 0x214af74),&uStack_68);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar12 != 0) &&
         (iVar13 = func_0x01384ab8(iVar12,*(undefined4 *)(*piVar8 + 0x20)), iVar13 == 0)) {
        uVar14 = func_0x01384c10();
        func_0x01384aa0(uVar14,0);
      }
      if (piVar8[3] == 0) {
        func_0x01384bf4();
      }
      piVar8[4] = iVar12;
      if (*(int *)(**(int **)(_UNK_0214bfc0 + 0x214afdc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(*puVar15,piVar8,0);
    }
    else {
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0214c448(iVar13,*(undefined4 *)(iVar12 + 0xc),*(undefined4 *)(iVar12 + 0x10));
    }
    goto LAB_0214ae20;
  }
  if (piVar3 != (int *)0x0) {
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c004 + 0x214b020)) {
          puVar4 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b068;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c004 + 0x214b020),0);
LAB_0214b068:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  iVar12 = *(int *)(iVar2 + 0x98);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar12,**(undefined4 **)(_UNK_0214c090 + 0x214b0b0));
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(param_2 + 0x58);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x034658b4(iVar12,**(undefined4 **)(_UNK_0214c0c0 + 0x214b0e4));
  piVar7 = *(int **)(_UNK_0214c0c4 + 0x214b100);
LAB_0214b0fc:
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar3;
  uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar17 != 0) {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_0214c0c8 + 0x214b118)) {
        puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
        goto LAB_0214b160;
      }
      uVar17 = uVar17 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar17 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c0c8 + 0x214b118),0);
LAB_0214b160:
  iVar12 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  if (iVar12 != 0) {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
          goto LAB_0214b1d4;
        }
        uVar17 = uVar17 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar17 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar7,0);
LAB_0214b1d4:
    (*(code *)*puVar4)(&uStack_68,piVar3,puVar4[1]);
    iVar12 = iStack_64;
    uVar14 = uStack_68;
    iVar13 = func_0x0214225c(iVar2,uStack_68,0xd);
    if (iVar13 == 0) {
      piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0214c218 + 0x214b220),1);
      uStack_68 = uVar14;
      iVar12 = func_0x01384abc(**(undefined4 **)(_UNK_0214c228 + 0x214b238),&uStack_68);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar12 != 0) &&
         (iVar13 = func_0x01384ab8(iVar12,*(undefined4 *)(*piVar8 + 0x20)), iVar13 == 0)) {
        uVar14 = func_0x01384c10();
        func_0x01384aa0(uVar14,0);
      }
      if (piVar8[3] == 0) {
        func_0x01384bf4();
      }
      piVar8[4] = iVar12;
      if (*(int *)(**(int **)(_UNK_0214c258 + 0x214b2a0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(*puVar15,piVar8,0);
    }
    else {
      func_0x0214c4c8(iVar13,iVar12);
    }
    goto LAB_0214b0fc;
  }
  if (piVar3 != (int *)0x0) {
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c2b4 + 0x214b2e4)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b32c;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c2b4 + 0x214b2e4),0);
LAB_0214b32c:
    (*(code *)*puVar15)(piVar3,puVar15[1]);
  }
  iVar12 = func_0x01c24918(0);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar12 + 0xc);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar14 = func_0x01ca5188(iVar12,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(param_2 + 0x28);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x03653608(iVar12,**(undefined4 **)(_UNK_0214c3b0 + 0x214b3bc));
  do {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c3dc + 0x214b3e8)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b430;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c3dc + 0x214b3e8),0);
LAB_0214b430:
    iVar12 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    if (iVar12 == 0) {
      iVar11 = 0x15;
      iVar12 = 0;
      goto LAB_0214b574;
    }
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c3b8 + 0x214b464)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b4b4;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c3b8 + 0x214b464),0);
LAB_0214b4b4:
    iVar12 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(iVar12 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar13 = func_0x01cccae0(iVar11,uVar9,0);
    if ((iVar13 == 0) && (iVar13 = func_0x02168818(*(undefined4 *)(iVar12 + 0x10),0), iVar13 == 0))
    break;
    func_0x0214c9b0(iVar2,iVar12,uVar14,&uStack_28);
    iVar13 = *(int *)(iVar2 + 0x34);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar9 = uStack_28;
    iVar13 = *(int *)(iVar13 + 0xc);
    uVar6 = *(undefined4 *)(iVar12 + 0xc);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    func_0x03d6491c(iVar13,uVar6,uVar9,**(undefined4 **)(_UNK_0214c3d8 + 0x214b558));
  } while( true );
  uStack_68 = *(undefined4 *)(iVar12 + 0xc);
  uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c3bc + 0x214bdb8));
  uVar14 = func_0x01384abc(uVar14,&uStack_68);
  uStack_48 = *(undefined4 *)(iVar12 + 0x10);
  uVar9 = func_0x01384988(*(undefined4 *)(_UNK_0214c3c0 + 0x214bdd8));
  uVar9 = func_0x01384abc(uVar9,&uStack_48);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uStack_4c = *(undefined4 *)(param_2 + 0x38);
  uVar6 = func_0x01384988(*(undefined4 *)(_UNK_0214c3c4 + 0x214be0c));
  uVar6 = func_0x01384abc(uVar6,&uStack_4c);
  uVar5 = func_0x01384988(*(undefined4 *)(_UNK_0214c3c8 + 0x214be24));
  uVar14 = func_0x02450228(uVar5,uVar14,uVar9,uVar6,0);
  iVar11 = func_0x01384988(*(undefined4 *)(_UNK_0214c3cc + 0x214be4c));
  if (*(int *)(iVar11 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar14,0);
  func_0x01384988(*(undefined4 *)(_UNK_0214c3d0 + 0x214be74));
  uVar9 = func_0x01384be4();
  func_0x0244f904(uVar9,uVar14,0);
  uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c3d4 + 0x214be94));
  func_0x01384aa0(uVar9,uVar14);
  uVar18 = func_0x01384928();
  if ((int)((ulonglong)uVar18 >> 0x20) != 1) {
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar17 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar17 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_0214c3ec + 0x214c1ac)) {
            puVar15 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_0214c1f4;
          }
          uVar17 = uVar17 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar17 != 0);
      }
      puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c3ec + 0x214c1ac),0);
LAB_0214c1f4:
      (*(code *)*puVar15)(piVar3,puVar15[1]);
    }
    func_0x01459844((int)uVar18);
    func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar7 = (int *)func_0x0145b008((int)uVar18);
  iVar12 = *piVar7;
  iVar11 = 0;
  func_0x0145b0f8();
LAB_0214b574:
  if (piVar3 != (int *)0x0) {
    iVar13 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c3e0 + 0x214b590)) {
          puVar15 = (undefined4 *)(iVar13 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b5d8;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c3e0 + 0x214b590),0);
LAB_0214b5d8:
    (*(code *)*puVar15)(piVar3,puVar15[1]);
  }
  if (iVar12 != 0) {
    func_0x01384bec(iVar12);
  }
  if (iVar11 != 0x15 && iVar11 != 0) {
    return;
  }
  iVar11 = *(int *)(iVar2 + 0x34);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar11 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64e30(&uStack_68,iVar11,**(undefined4 **)(_UNK_0214c3e4 + 0x214b638));
  uStack_30 = (ulonglong)uStack_58;
  uStack_40 = uStack_68;
  iStack_3c = iStack_64;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  puVar15 = *(undefined4 **)(_UNK_0214c3e8 + 0x214b664);
  while (iVar11 = func_0x03f9b324(&uStack_40,*puVar15), iVar11 != 0) {
    iVar11 = (int)uStack_30;
    if ((int)uStack_30 == 0) {
      func_0x01384bf0();
    }
    func_0x02117bcc(iVar11,0);
  }
  func_0x03f9b464(&uStack_40,**(undefined4 **)(_UNK_0214c3f0 + 0x214b6a0));
  iVar12 = *(int *)(iVar2 + 0x34);
  iVar11 = *(int *)(iVar2 + 0x50);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar14 = *(undefined4 *)(iVar12 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x02113ec4(iVar11,param_2,uVar14,0);
  iVar11 = *(int *)(iVar2 + 0x54);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x0214cca8(iVar11,param_2);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(param_2 + 0x5c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_0214c3f8 + 0x214b728));
  do {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c428 + 0x214b750)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b798;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c428 + 0x214b750),0);
LAB_0214b798:
    iVar11 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    if (iVar11 == 0) {
      if (piVar3 == (int *)0x0) goto LAB_0214b9d8;
      iVar11 = *piVar3;
      uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar17 == 0) goto LAB_0214b96c;
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      break;
    }
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c400 + 0x214b7cc)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b814;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c400 + 0x214b7cc),0);
LAB_0214b814:
    uVar14 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    iVar11 = *(int *)(iVar2 + 0x34);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xc);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = func_0x03d66780(iVar11,uVar14,&uStack_44,**(undefined4 **)(_UNK_0214c404 + 0x214b854));
    uVar9 = uStack_44;
    if (iVar11 == 0) {
      uStack_68 = uVar14;
      uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c408 + 0x214bccc));
      uVar14 = func_0x01384abc(uVar14,&uStack_68);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uStack_48 = *(undefined4 *)(param_2 + 0x38);
      uVar9 = func_0x01384988(*(undefined4 *)(_UNK_0214c40c + 0x214bd00));
      uVar9 = func_0x01384abc(uVar9,&uStack_48);
      uVar6 = func_0x01384988(*(undefined4 *)(_UNK_0214c410 + 0x214bd18));
      uVar14 = func_0x0244f690(uVar6,uVar14,uVar9,0);
      iVar2 = func_0x01384988(*(undefined4 *)(_UNK_0214c414 + 0x214bd38));
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar14,0);
      func_0x01384988(*(undefined4 *)(_UNK_0214c418 + 0x214bd60));
      uVar9 = func_0x01384be4();
      func_0x0244f904(uVar9,uVar14,0);
      uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c41c + 0x214bd80));
      func_0x01384aa0(uVar9,uVar14);
      func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar11 = *(int *)(iVar2 + 0x68);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar11 + 8);
    uVar17 = *(uint *)(iVar11 + 0xc);
    piVar7 = *(int **)(_UNK_0214c420 + 0x214b8a0);
    *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
    iVar12 = *piVar7;
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    if (uVar17 < *(uint *)(iVar13 + 0xc)) {
      *(uint *)(iVar11 + 0xc) = uVar17 + 1;
      *(undefined4 *)(iVar13 + uVar17 * 4 + 0x10) = uVar9;
    }
    else {
      func_0x0328f170(iVar11,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38))
      ;
    }
    iVar11 = *(int *)(iVar2 + 0x34);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xc);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x03d66094(iVar11,uVar14,**(undefined4 **)(_UNK_0214c424 + 0x214b910));
  } while( true );
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar7 = piVar7 + 2;
    if (uVar17 == 0) break;
    if (piVar7[-1] == **(int **)(_UNK_0214c42c + 0x214b940)) {
      puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
      goto LAB_0214b9c8;
    }
  }
LAB_0214b96c:
  puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c42c + 0x214b940),0);
LAB_0214b9c8:
  (*(code *)*puVar15)(piVar3,puVar15[1]);
LAB_0214b9d8:
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar2 + 0x34);
  iVar11 = *(int *)(iVar2 + 0x4c);
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(param_2 + 0x18);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar14 = *(undefined4 *)(iVar12 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x020daf18(iVar11,uVar14,0);
  iVar11 = *(int *)(param_2 + 0x1c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_0214c430 + 0x214ba60));
  do {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c43c + 0x214ba88)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214bb0c;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c43c + 0x214ba88),0);
LAB_0214bb0c:
    iVar11 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    if (iVar11 == 0) break;
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c438 + 0x214bb40)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214bb90;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c438 + 0x214bb40),0);
LAB_0214bb90:
    uVar14 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    func_0x02144c58(iVar2,uVar14,1);
  } while( true );
  if (piVar3 != (int *)0x0) {
    iVar11 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c440 + 0x214bbd4)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214bc24;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c440 + 0x214bbd4),0);
LAB_0214bc24:
    (*(code *)*puVar15)(piVar3,puVar15[1]);
  }
  iVar11 = *(int *)(iVar2 + 0x58);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x02139c14(iVar11,param_2);
  iVar11 = *(int *)(iVar2 + 0x5c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x0215e864(iVar11,param_2,0);
  iVar2 = *(int *)(iVar2 + 0x60);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01db6ad4(iVar2,param_2,0);
  return;
}



// ===== FAT.ActivityIndepenBingo$$_CreateWorld RVA 0x1a2b728 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a3b728(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
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
  
  pcVar5 = (char *)(_UNK_01a3b8ac + 0x1a3b73c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3b8b0 + 0x1a3b750));
    func_0x01384978(*(undefined4 *)(_UNK_01a3b8b4 + 0x1a3b75c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8013,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8013,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4);
    return;
  }
  uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01a3b8b8 + 0x1a3b7b4));
  func_0x02143488(uVar7,0);
  iVar1 = *(int *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xd8) = uVar7;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x34) == '\0') {
    iVar1 = *(int *)(param_1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02143dc4(iVar1,0);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(char *)(iVar1 + 0x35) == '\0') {
    iVar1 = *(int *)(param_1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021440e4(iVar1,0);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 0x4c);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a3b8bc + 0x1a3b85c));
  func_0x01db7f44(iVar1,0);
  uVar7 = *(undefined4 *)(param_1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 8) = 10;
  *(undefined4 *)(iVar1 + 0xc) = uVar7;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  pcVar5 = (char *)(_UNK_01db80d4 + 0x1db7f64);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01db80d8 + 0x1db7f78),iVar1,0);
    func_0x01384978(*(undefined4 *)(_UNK_01db80dc + 0x1db7f84));
    func_0x01384978(*(undefined4 *)(_UNK_01db80e0 + 0x1db7f90));
    func_0x01384978(*(undefined4 *)(_UNK_01db80e4 + 0x1db7f9c));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5baa,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5baa,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_1c = uStack_14;
    uStack_20 = uStack_18;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,iVar1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar6,0);
    func_0x01485278(&uStack_38,iVar1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar6,*(undefined4 *)(iVar1 + 0xc));
  iVar6 = *(int *)(iVar6 + 0x18);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar6 + 8);
  uVar8 = *(uint *)(iVar6 + 0xc);
  piVar3 = *(int **)(_UNK_01db80e8 + 0x1db8034);
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  iVar9 = *piVar3;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (uVar8 < *(uint *)(iVar2 + 0xc)) {
    *(uint *)(iVar6 + 0xc) = uVar8 + 1;
    *(int *)(iVar2 + uVar8 * 4 + 0x10) = iVar1;
  }
  else {
    func_0x0328f170(iVar6,iVar1,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
  }
  if (*(int *)(**(int **)(_UNK_01db80ec + 0x1db8084) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar6 = func_0x0300d558(**(undefined4 **)(_UNK_01db80f0 + 0x1db80a0));
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar6 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0349eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar7,*(undefined4 *)(iVar1 + 0x14));
  return;
}



// ===== FAT.ActivityIndepenBingo$$_CreateWorldTracer RVA 0x1a2b8c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a3b8c0(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01a3b9a8 + 0x1a3b8d4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3b9ac + 0x1a3b8e8));
    func_0x01384978(*(undefined4 *)(_UNK_01a3b9b0 + 0x1a3b8f4));
    func_0x01384978(*(undefined4 *)(_UNK_01a3b9b4 + 0x1a3b900));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8016,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8016,0);
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
    return;
  }
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01a3b9b8 + 0x1a3b958));
  func_0x024500b4(uVar5,param_1,**(undefined4 **)(_UNK_01a3b9bc + 0x1a3b974),0);
  uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01a3b9c0 + 0x1a3b988));
  func_0x0214d6c8(uVar2,uVar5,0,0);
  *(undefined4 *)(param_1 + 0xdc) = uVar2;
  return;
}



// ===== FAT.ActivityIndepenBingo$$_Bind RVA 0x1a2b9c4 =====

void FUN_01a3b9c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  iVar1 = func_0x0229f06c(0x8019,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8019,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
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
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2);
    return;
  }
  uVar5 = *(undefined4 *)(param_1 + 0xd8);
  iVar1 = *(int *)(param_1 + 0xdc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0214e900(iVar1,uVar5,0);
  iVar1 = *(int *)(param_1 + 0xd8);
  uVar5 = *(undefined4 *)(param_1 + 0xdc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0229f06c(0x5bb9,0,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x5bb9,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar5,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,uVar5,0);
    iVar4 = *(int *)(iVar3 + 8);
    uVar5 = *(undefined4 *)(iVar3 + 0xc);
    iVar1 = *(int *)(iVar3 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  *(undefined4 *)(iVar1 + 0x2c) = uVar5;
  return;
}



// ===== FAT.ActivityIndepenBingo$$FillBoardData RVA 0x1a2ba54 =====

/* WARNING: Possible PIC construction at 0x02147e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02147e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a3ba54(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int unaff_r4;
  char *pcVar11;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar12;
  undefined4 uVar13;
  undefined4 unaff_r7;
  undefined4 *puVar14;
  undefined4 *unaff_r8;
  int unaff_r9;
  uint uVar15;
  int unaff_r10;
  undefined4 *puVar16;
  undefined4 unaff_lr;
  undefined8 uVar17;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int aiStack_28 [4];
  
  iVar1 = func_0x0229f06c(0x801b,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0xd8);
    if (param_1 == 0) {
      return;
    }
    pcVar11 = (char *)(_UNK_0214881c + 0x2147b9c);
    if (*pcVar11 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02148820 + 0x2147bb0),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_02148824 + 0x2147bbc));
      func_0x01384978(*(undefined4 *)(_UNK_02148828 + 0x2147bc8));
      func_0x01384978(*(undefined4 *)(_UNK_0214882c + 0x2147bd4));
      func_0x01384978(*(undefined4 *)(_UNK_02148830 + 0x2147be0));
      func_0x01384978(*(undefined4 *)(_UNK_02148834 + 0x2147bec));
      func_0x01384978(*(undefined4 *)(_UNK_02148838 + 0x2147bf8));
      func_0x01384978(*(undefined4 *)(_UNK_0214883c + 0x2147c04));
      func_0x01384978(*(undefined4 *)(_UNK_02148840 + 0x2147c10));
      func_0x01384978(*(undefined4 *)(_UNK_02148844 + 0x2147c1c));
      func_0x01384978(*(undefined4 *)(_UNK_02148848 + 0x2147c28));
      func_0x01384978(*(undefined4 *)(_UNK_0214884c + 0x2147c34));
      func_0x01384978(*(undefined4 *)(_UNK_02148850 + 0x2147c40));
      func_0x01384978(*(undefined4 *)(_UNK_02148854 + 0x2147c4c));
      func_0x01384978(*(undefined4 *)(_UNK_02148858 + 0x2147c58));
      func_0x01384978(*(undefined4 *)(_UNK_0214885c + 0x2147c64));
      func_0x01384978(*(undefined4 *)(_UNK_02148860 + 0x2147c70));
      func_0x01384978(*(undefined4 *)(_UNK_02148864 + 0x2147c7c));
      func_0x01384978(*(undefined4 *)(_UNK_02148868 + 0x2147c88));
      func_0x01384978(*(undefined4 *)(_UNK_0214886c + 0x2147c94));
      func_0x01384978(*(undefined4 *)(_UNK_02148870 + 0x2147ca0));
      func_0x01384978(*(undefined4 *)(_UNK_02148874 + 0x2147cac));
      func_0x01384978(*(undefined4 *)(_UNK_02148878 + 0x2147cb8));
      func_0x01384978(*(undefined4 *)(_UNK_0214887c + 0x2147cc4));
      func_0x01384978(*(undefined4 *)(_UNK_02148880 + 0x2147cd0));
      func_0x01384978(*(undefined4 *)(_UNK_02148884 + 0x2147cdc));
      func_0x01384978(*(undefined4 *)(_UNK_02148888 + 0x2147ce8));
      func_0x01384978(*(undefined4 *)(_UNK_0214888c + 0x2147cf4));
      func_0x01384978(*(undefined4 *)(_UNK_02148890 + 0x2147d00));
      func_0x01384978(*(undefined4 *)(_UNK_02148894 + 0x2147d0c));
      func_0x01384978(*(undefined4 *)(_UNK_02148898 + 0x2147d18));
      func_0x01384978(*(undefined4 *)(_UNK_0214889c + 0x2147d24));
      func_0x01384978(*(undefined4 *)(_UNK_021488a0 + 0x2147d30));
      func_0x01384978(*(undefined4 *)(_UNK_021488a4 + 0x2147d3c));
      func_0x01384978(*(undefined4 *)(_UNK_021488a8 + 0x2147d48));
      func_0x01384978(*(undefined4 *)(_UNK_021488ac + 0x2147d54));
      func_0x01384978(*(undefined4 *)(_UNK_021488b0 + 0x2147d60));
      func_0x01384978(*(undefined4 *)(_UNK_021488b4 + 0x2147d6c));
      *pcVar11 = '\x01';
    }
    uStack_94 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_90 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_8c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_60 = 0;
    unaff_r8 = &uStack_38;
    uStack_78 = 0;
    aiStack_28[0] = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_38 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_48 = 0;
    uStack_84 = uStack_94;
    uStack_80 = uStack_90;
    uStack_7c = uStack_8c;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    uStack_5c = uStack_94;
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    uStack_44 = uStack_94;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    uStack_34 = uStack_94;
    uStack_30 = uStack_90;
    uStack_2c = uStack_8c;
    iVar1 = func_0x0229f06c(0x5c6c,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar13 = *(undefined4 *)(iVar1 + 8);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_2 + 0x38) = uVar13;
      uVar17 = func_0x02140d24(param_1);
      uVar17 = func_0x01458584((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),1000,0);
      *(undefined8 *)(param_2 + 0x30) = uVar17;
      piVar2 = (int *)func_0x021566f4(0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_021488b8 + 0x2147e74)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_02147ebc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021488b8 + 0x2147e74),0);
LAB_02147ebc:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
      uVar13 = *(undefined4 *)(param_1 + 0x94);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(param_2 + 0x3c) = uVar13;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x021139b0(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02148958(iVar1,param_2);
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02139e7c(iVar1,param_2);
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0215ea7c(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x60);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01db6828(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02110804(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x020dc720(iVar1,aiStack_28,0);
      iVar1 = aiStack_28[0];
      iStack_b4 = param_2;
      if (iVar6 != 0) {
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        func_0x0325a3b4(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488bc + 0x2147fe8));
        uStack_38 = uStack_b0;
        uStack_34 = uStack_ac;
        uStack_30 = uStack_a8;
        uStack_2c = uStack_a4;
        puVar3 = *(undefined4 **)(_UNK_021488c0 + 0x2148004);
        puVar14 = *(undefined4 **)(_UNK_021488c4 + 0x214800c);
        while (iVar1 = func_0x03f597e0(unaff_r8,*puVar3), uVar7 = uStack_2c, iVar1 != 0) {
          iVar1 = *(int *)(param_2 + 0x6c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0364baf8(iVar1,uVar7,*puVar14);
        }
        func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_021488c8 + 0x2148050));
      }
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x40);
      uVar17 = func_0x02140d24(param_1);
      uVar7 = *(uint *)(param_1 + 0x44);
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar13 = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_2 + 0x44) = uVar13;
      uVar17 = func_0x01458584((uint)uVar17 - uVar7,
                               (int)((ulonglong)uVar17 >> 0x20) -
                               (((int)uVar7 >> 0x1f) + (uint)((uint)uVar17 < uVar7)),1000,0);
      *(undefined8 *)(param_2 + 0x10) = uVar17;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0x10)) {
        iVar1 = *(int *)(param_1 + 0x6c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02454910(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488d0 + 0x21480dc));
        uVar7 = 0;
        uVar15 = 0;
        uStack_48 = uStack_b0;
        uStack_44 = uStack_ac;
        uStack_40 = uStack_a8;
        uStack_3c = uStack_a4;
        puVar3 = *(undefined4 **)(_UNK_021488d4 + 0x2148104);
        while (iVar1 = func_0x03f5a2cc(&uStack_48,*puVar3), iVar1 != 0) {
          uVar4 = uStack_3c & 0x3f;
          uVar8 = uVar4 - 0x20;
          uVar5 = 1 << uVar4;
          if (-1 < (int)uVar8) {
            uVar5 = 0;
          }
          uVar7 = uVar5 | uVar7;
          uVar5 = 1 >> (0x20 - uVar4 & 0xff);
          if (-1 < (int)uVar8) {
            uVar5 = 1 << (uVar8 & 0xff);
          }
          uVar15 = uVar5 | uVar15;
        }
        func_0x03f5a2c8(&uStack_48,**(undefined4 **)(_UNK_021488dc + 0x214814c));
        if (iStack_b4 == 0) {
          func_0x01384bf0();
        }
        *(uint *)(param_2 + 0x48) = uVar7;
        *(uint *)(param_2 + 0x4c) = uVar15;
      }
      iVar1 = *(int *)(param_1 + 0x9c);
      iStack_b8 = param_1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488e4 + 0x2148190));
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      uStack_58 = uStack_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      puVar14 = *(undefined4 **)(_UNK_021488e8 + 0x21481bc);
      puVar3 = *(undefined4 **)(_UNK_021488ec + 0x21481c4);
      while (iVar1 = func_0x03f9b324(&uStack_60,*puVar14), uVar7 = uStack_54, iVar1 != 0) {
        iVar1 = (int)uStack_50;
        iVar12 = *(int *)(iStack_b4 + 0x50);
        iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_021488f4 + 0x21481ec));
        func_0x01797598(iVar6,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148a58(iVar1);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar6 + 0x10) = uVar13;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148aac(iVar1);
        *(undefined4 *)(iVar6 + 0xc) = uVar13;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar12,uVar7,iVar6,*puVar3);
      }
      func_0x03f9b464(&uStack_60,**(undefined4 **)(_UNK_021488f8 + 0x214826c));
      iVar1 = *(int *)(iStack_b8 + 0x98);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar1,**(undefined4 **)(_UNK_02148900 + 0x214829c));
      uStack_78 = uStack_b0;
      uStack_74 = uStack_ac;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
      uStack_68 = uStack_a0;
      puVar3 = *(undefined4 **)(_UNK_02148904 + 0x21482c8);
      puVar14 = *(undefined4 **)(_UNK_02148908 + 0x21482d0);
      puVar16 = *(undefined4 **)(_UNK_0214890c + 0x21482d8);
      while (iVar1 = func_0x03f9b324(&uStack_78,*puVar3), uVar7 = uStack_6c, iVar1 != 0) {
        iVar1 = (int)uStack_68;
        uVar13 = func_0x01384be4(*puVar14);
        FUN_01798ae4(uVar13,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02148b00(iVar1,uVar13);
        iVar1 = *(int *)(iStack_b4 + 0x58);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar1,uVar7,uVar13,*puVar16);
      }
      func_0x03f9b464(&uStack_78,**(undefined4 **)(_UNK_02148914 + 0x2148354));
      iVar6 = iStack_b4;
      iVar1 = iStack_b8;
      uVar13 = **(undefined4 **)(_UNK_0214891c + 0x2148368);
      *(int *)(iStack_b8 + 0xa4) = iStack_b4;
      uVar13 = func_0x01384be4(uVar13);
      func_0x03ccb96c(uVar13,iVar1,**(undefined4 **)(_UNK_02148920 + 0x2148390),0);
      func_0x021475dc(iVar1,uVar13,0x7fffffff);
      iVar12 = *(int *)(iVar1 + 0x68);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_b0,iVar12,**(undefined4 **)(_UNK_02148924 + 0x21483d0));
      uStack_88 = uStack_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      puVar3 = *(undefined4 **)(_UNK_02148928 + 0x21483ec);
      puVar14 = *(undefined4 **)(_UNK_0214892c + 0x21483f4);
      while (iVar12 = func_0x03f5f428(&uStack_88,*puVar3), uVar7 = uStack_7c, iVar12 != 0) {
        iVar12 = *(int *)(iVar6 + 0x5c);
        if (uStack_7c == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x0210e5f4(uVar7,0);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x0364baf8(iVar12,uVar13,*puVar14);
      }
      func_0x03f5f424(&uStack_88,**(undefined4 **)(_UNK_02148934 + 0x2148454));
      iVar6 = *(int *)(iVar1 + 0x34);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x03d6476c(iVar6,**(undefined4 **)(_UNK_0214893c + 0x2148488));
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x0382ab5c(&uStack_98,iVar6,**(undefined4 **)(_UNK_02148940 + 0x21484b4));
      puVar3 = *(undefined4 **)(_UNK_02148944 + 0x21484c8);
      while (iVar6 = func_0x03f9b9f8(&uStack_98,*puVar3), iVar6 != 0) {
        if (uStack_8c != 0) {
          func_0x02148de8(iVar1);
        }
      }
      func_0x03f9b9f4(&uStack_98,**(undefined4 **)(_UNK_0214894c + 0x21484fc));
      return;
    }
    iVar1 = func_0x0229f13c(0x5c6c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2147e08;
    unaff_r4 = iVar1;
    unaff_r9 = param_2;
    unaff_r10 = param_1;
    register0x00000054 = (BADSPACEBASE *)&iStack_b8;
  }
  else {
    iVar1 = func_0x0229f13c(0x801b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar6 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar6 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar6,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar10 = 3;
  if (iVar1 == 0) {
    uVar10 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar13,(undefined1 *)((int)register0x00000054 + -0x38),uVar10);
  return;
}



// ===== FAT.ActivityIndepenBingo$$_InitWorld RVA 0x1a2bac8 =====

void FUN_01a3bac8(int param_1)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x801c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x801c,0);
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
  FUN_01a3b728(param_1);
  FUN_01a3b8c0(param_1);
  FUN_01a3b9c4(param_1);
  func_0x01a3bba4(param_1);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0x58);
  uVar4 = *(undefined4 *)(param_1 + 0xd8);
  iVar1 = *(int *)(iVar1 + 0x4c);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(iVar3 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  uStack_14 = 0;
  func_0x01db8438(iVar1,uVar4,uVar2,1);
  return;
}



// ===== FAT.ActivityIndepenBingo$$_CreateInventory RVA 0x1a2bba4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a3bba4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x801d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x801d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = iStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar11 = *(int *)(iVar1 + 8);
    uVar12 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    iVar1 = func_0x0245495c(iVar11,uVar12,&uStack_30,uVar7,0,0);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02141880(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x02112bc0(iVar1,1,0);
  iVar1 = *(int *)(param_1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02141880(iVar1,0);
  iVar11 = *(int *)(param_1 + 0x58);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar12 = *(undefined4 *)(iVar11 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar8 = (char *)(_UNK_02115fa4 + 0x2115cc0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02115fa8 + 0x2115cd4),uVar12,1,0);
    func_0x01384978(*(undefined4 *)(_UNK_02115fac + 0x2115ce0));
    func_0x01384978(*(undefined4 *)(_UNK_02115fb0 + 0x2115cec));
    func_0x01384978(*(undefined4 *)(_UNK_02115fb4 + 0x2115cf8));
    func_0x01384978(*(undefined4 *)(_UNK_02115fb8 + 0x2115d04));
    func_0x01384978(*(undefined4 *)(_UNK_02115fbc + 0x2115d10));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar11 = func_0x0229f06c(0x55d,0);
  if (iVar11 == 0) {
    iVar11 = *(int *)(iVar1 + 8);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d66780(iVar11,1,&iStack_28,**(undefined4 **)(_UNK_02115fc0 + 0x2115d98));
    iVar11 = iStack_28;
    if (iVar2 == 0) {
      piVar13 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_02115fc8 + 0x2115ee8),1);
      uStack_2c = 1;
      iVar1 = func_0x01384abc(**(undefined4 **)(_UNK_02115fcc + 0x2115f00),&uStack_2c);
      if (piVar13 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar11 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar13 + 0x20)), iVar11 == 0)) {
        uVar12 = func_0x01384c10();
        func_0x01384aa0(uVar12,0);
      }
      if (piVar13[3] == 0) {
        func_0x01384bf4();
      }
      piVar13[4] = iVar1;
      if (*(int *)(**(int **)(_UNK_02115fd0 + 0x2115f64) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar11 = 0;
      func_0x028c2f28(**(undefined4 **)(_UNK_02115fd4 + 0x2115f8c),piVar13,0);
    }
    else {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar11 = func_0x02115fd8(iVar11,uVar12);
      if (iVar11 == 0) {
        iVar11 = 0;
      }
      else {
        uVar3 = *(uint *)(iVar11 + 0xc);
        if (0 < (int)uVar3) {
          uVar10 = 0;
          piVar13 = *(int **)(_UNK_02115fc4 + 0x2115dec);
          do {
            if (uVar3 <= uVar10) {
              func_0x01384bf4();
            }
            iVar2 = *(int *)(iVar11 + uVar10 * 4 + 0x10);
            if (iVar2 != 0) {
              piVar9 = *(int **)(iVar1 + 0x10);
              if (piVar9 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar4 = *piVar9;
              uVar3 = (uint)*(ushort *)(iVar4 + 0xb6);
              if (uVar3 != 0) {
                piVar6 = (int *)(*(int *)(iVar4 + 0x58) + 4);
                do {
                  if (piVar6[-1] == *piVar13) {
                    puVar5 = (undefined4 *)(iVar4 + *piVar6 * 8 + 0xc0);
                    goto LAB_02115e64;
                  }
                  uVar3 = uVar3 - 1;
                  piVar6 = piVar6 + 2;
                } while (uVar3 != 0);
              }
              puVar5 = (undefined4 *)func_0x014002dc(piVar9,*piVar13,0);
LAB_02115e64:
              iVar4 = (*(code *)*puVar5)(piVar9,puVar5[1]);
              if (iVar4 == 0) {
                func_0x01384bf0();
              }
              func_0x02144d84(iVar4,iVar2,0,0);
            }
            uVar3 = *(uint *)(iVar11 + 0xc);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar3);
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 != 0) {
          uStack_30 = *(undefined4 *)(iVar1 + 0x14);
          (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),1,iVar11,0);
        }
      }
    }
  }
  else {
    iVar11 = func_0x0229f13c(0x55d,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uStack_30 = 0;
    iVar11 = func_0x0218e0a0(iVar11,iVar1,uVar12,1);
  }
  return iVar11;
}



// ===== FAT.ActivityIndepenBingo$$_OnBoardItemChange RVA 0x1a2bc84 =====

void FUN_01a3bc84(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8017,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8017,0);
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
  iVar1 = *(int *)(param_1 + 0xd4);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a3bcec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}



// ===== FAT.ActivityIndepenBingo$$CheckIndicator RVA 0x1a2bcf4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a3bcf4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_01a3beb8 + 0x1a3bd14);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3bebc + 0x1a3bd28));
    func_0x01384978(*(undefined4 *)(_UNK_01a3bec0 + 0x1a3bd34));
    func_0x01384978(*(undefined4 *)(_UNK_01a3bec4 + 0x1a3bd40));
    func_0x01384978(*(undefined4 *)(_UNK_01a3bec8 + 0x1a3bd4c));
    func_0x01384978(*(undefined4 *)(_UNK_01a3becc + 0x1a3bd58));
    func_0x01384978(*(undefined4 *)(_UNK_01a3bed0 + 0x1a3bd64));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x801e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a3bed4 + 0x1a3bdc8));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *param_3 = **(undefined4 **)(_UNK_01a3bed8 + 0x1a3bdf0);
    puVar3 = *(undefined4 **)(_UNK_01a3bedc + 0x1a3be00);
    *(undefined4 *)(iVar1 + 8) = param_2;
    iVar4 = func_0x034aaa34(*puVar3);
    iVar6 = *(int *)(param_1 + 0x78);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar6 + 0xc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x01eea2b8(iVar4,uVar2,0);
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x68);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar5 = *(undefined4 *)(iVar4 + 8);
      uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01a3bee0 + 0x1a3be60));
      func_0x02450808(uVar2,iVar1,**(undefined4 **)(_UNK_01a3bee4 + 0x1a3be80),0);
      iVar1 = func_0x02f82090(uVar5,uVar2,**(undefined4 **)(_UNK_01a3bee8 + 0x1a3be98));
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 3;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x801e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021ca740(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.ActivityIndepenBingo.<>c__DisplayClass91_0$$.ctor RVA 0x1a2beec =====

void FUN_01a3beec(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityIndepenBingo$$CheckBingoComplete RVA 0x1a2bef4 =====

/* WARNING: Possible PIC construction at 0x02f868b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02f868b8) */
/* WARNING: Removing unreachable block (ram,0x02f86468) */
/* WARNING: Removing unreachable block (ram,0x02f85c3c) */
/* WARNING: Removing unreachable block (ram,0x02f854dc) */
/* WARNING: Removing unreachable block (ram,0x02f84d44) */
/* WARNING: Removing unreachable block (ram,0x02f845c0) */
/* WARNING: Removing unreachable block (ram,0x02f83e50) */
/* WARNING: Removing unreachable block (ram,0x02f836cc) */
/* WARNING: Removing unreachable block (ram,0x02f82f5c) */
/* WARNING: Removing unreachable block (ram,0x02f827d8) */
/* WARNING: Removing unreachable block (ram,0x02f82420) */
/* WARNING: Removing unreachable block (ram,0x02f82b90) */
/* WARNING: Removing unreachable block (ram,0x02f83314) */
/* WARNING: Removing unreachable block (ram,0x02f83a98) */
/* WARNING: Removing unreachable block (ram,0x02f84208) */
/* WARNING: Removing unreachable block (ram,0x02f84978) */
/* WARNING: Removing unreachable block (ram,0x02f85110) */
/* WARNING: Removing unreachable block (ram,0x02f85894) */
/* WARNING: Removing unreachable block (ram,0x02f85fe4) */
/* WARNING: Removing unreachable block (ram,0x02f86830) */
/* WARNING: Removing unreachable block (ram,0x02f858b0) */
/* WARNING: Removing unreachable block (ram,0x02f854f8) */
/* WARNING: Removing unreachable block (ram,0x02f8512c) */
/* WARNING: Removing unreachable block (ram,0x02f84d60) */
/* WARNING: Removing unreachable block (ram,0x02f84994) */
/* WARNING: Removing unreachable block (ram,0x02f849a0) */
/* WARNING: Removing unreachable block (ram,0x02f84d6c) */
/* WARNING: Removing unreachable block (ram,0x02f85138) */
/* WARNING: Removing unreachable block (ram,0x02f85504) */
/* WARNING: Removing unreachable block (ram,0x02f858bc) */
/* WARNING: Removing unreachable block (ram,0x02f854fc) */
/* WARNING: Removing unreachable block (ram,0x02f84d64) */
/* WARNING: Removing unreachable block (ram,0x02f84998) */
/* WARNING: Removing unreachable block (ram,0x02f85130) */
/* WARNING: Removing unreachable block (ram,0x02f858b4) */
/* WARNING: Removing unreachable block (ram,0x02f85500) */
/* WARNING: Removing unreachable block (ram,0x02f84d68) */
/* WARNING: Removing unreachable block (ram,0x02f85134) */
/* WARNING: Removing unreachable block (ram,0x02f858b8) */
/* WARNING: Removing unreachable block (ram,0x02f8499c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_01a3bef4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  int extraout_r2_05;
  int extraout_r2_06;
  int extraout_r2_07;
  int extraout_r2_08;
  int extraout_r2_09;
  int extraout_r2_10;
  int extraout_r2_11;
  int extraout_r2_12;
  int extraout_r2_13;
  int extraout_r2_14;
  int extraout_r2_15;
  int extraout_r2_16;
  int extraout_r2_17;
  int extraout_r2_18;
  int extraout_r2_19;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  int extraout_r3_04;
  int extraout_r3_05;
  int extraout_r3_06;
  int extraout_r3_07;
  int extraout_r3_08;
  int extraout_r3_09;
  int extraout_r3_10;
  int extraout_r3_11;
  int extraout_r3_12;
  int extraout_r3_13;
  char *pcVar13;
  int iVar14;
  undefined4 uVar15;
  code *pcVar16;
  undefined1 *puVar17;
  code *unaff_r7;
  int *piVar18;
  code *pcVar19;
  int *unaff_r8;
  undefined4 unaff_r9;
  int iVar20;
  undefined4 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  int iVar25;
  bool bVar26;
  bool bVar27;
  undefined1 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 auStack_38 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar13 = (char *)(_UNK_01a3c048 + 0x1a3bf08);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3c04c + 0x1a3bf1c));
    func_0x01384978(*(undefined4 *)(_UNK_01a3c050 + 0x1a3bf28));
    func_0x01384978(*(undefined4 *)(_UNK_01a3c054 + 0x1a3bf34));
    func_0x01384978(*(undefined4 *)(_UNK_01a3c058 + 0x1a3bf40));
    *pcVar13 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8021,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8021,0);
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
    uStack_20 = auStack_38[0];
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar14 = *(int *)(iVar1 + 8);
    uVar15 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar14 == 0) {
      func_0x01384bf0();
    }
    uVar10 = 2;
    if (iVar1 == 0) {
      uVar10 = 1;
    }
    func_0x0245495c(iVar14,uVar15,&uStack_30,uVar10,0,0);
    piVar2 = (int *)func_0x0245496c(&uStack_30,0,0);
    return piVar2;
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    return (int *)0x0;
  }
  piVar18 = *(int **)(_UNK_01a3c05c + 0x1a3bfa4);
  piVar2 = *(int **)(*(int *)(param_1 + 0x68) + 8);
  iVar1 = *piVar18;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar18;
  }
  iVar14 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar14 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar18;
    }
    uVar15 = **(undefined4 **)(iVar1 + 0x5c);
    iVar14 = func_0x01384be4(**(undefined4 **)(_UNK_01a3c060 + 0x1a3bff0));
    func_0x02450808(iVar14,uVar15,**(undefined4 **)(_UNK_01a3c064 + 0x1a3c010),0);
    *(int *)(*(int *)(*piVar18 + 0x5c) + 4) = iVar14;
  }
  iVar1 = **(int **)(_UNK_01a3c068 + 0x1a3c034);
  puVar21 = auStack_38;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f82434 + 0x2f820bc));
    func_0x01384978(*(undefined4 *)(iRam02f82438 + 0x2f820c8));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x0140024c(iVar1);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f8243c + 0x2f82348);
  }
  else {
    if (iVar14 != 0) {
      iVar6 = **(int **)(iVar1 + 0x1c);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x014001f0(iVar6);
      }
      iVar3 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar18[-1] == iVar6) {
            puVar4 = (undefined4 *)(iVar3 + *piVar18 * 8 + 0xc0);
            goto LAB_02f82158;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar6,0);
LAB_02f82158:
      piVar2 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
      piVar18 = *(int **)(iRam02f82444 + 0x2f8217c);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar18) {
              puVar4 = (undefined4 *)(iVar6 + *piVar11 * 8 + 0xc0);
              goto LAB_02f821d4;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,*piVar18,0);
LAB_02f821d4:
        piVar11 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
        if (piVar11 == (int *)0x0) {
          iVar1 = 0;
          piVar11 = (int *)0x0;
          goto LAB_02f822b0;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x014001f0(iVar6);
        }
        iVar3 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar6) {
              puVar4 = (undefined4 *)(iVar3 + *piVar12 * 8 + 0xc0);
              goto LAB_02f82268;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar6,0);
LAB_02f82268:
        (*(code *)*puVar4)(&uStack_30,piVar2,puVar4[1]);
        auStack_38[0] = *(undefined4 *)(iVar14 + 0x14);
        iVar6 = (**(code **)(iVar14 + 0xc))
                          (*(undefined4 *)(iVar14 + 0x20),uStack_30,uStack_2c,uStack_28);
      } while (iVar6 == 0);
      iVar1 = 0;
      goto LAB_02f822b0;
    }
    uVar15 = *(undefined4 *)(iRam02f82440 + 0x2f82354);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,iVar1);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar18 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar18;
    piVar11 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f822b0:
    if (piVar2 != (int *)0x0) {
      iVar14 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(iRam02f82448 + 0x2f822c8)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
            goto LAB_02f82310;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f82448 + 0x2f822c8),0);
LAB_02f82310:
      (*(code *)*puVar4)(piVar2,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar11;
  }
  uVar10 = 0;
  if (piVar2 != (int *)0x0) {
    iVar6 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar9 != 0) {
      piVar18 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar18[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f8244c + 0x2f823c0)) {
          puVar4 = (undefined4 *)(iVar6 + *piVar18 * 8 + 0xc0);
          goto LAB_02f82408;
        }
        uVar9 = uVar9 - 1;
        piVar18 = piVar18 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,(code *)**(int **)(iRam02f8244c + 0x2f823c0),0);
LAB_02f82408:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  uVar29 = func_0x01062280();
  iVar3 = (int)((ulonglong)uVar29 >> 0x20);
  piVar18 = (int *)uVar29;
  bVar26 = false;
  iVar6 = extraout_r2;
  if ((bool)uVar28) {
    uVar10 = 0xfd07dd04;
    iVar6 = 0xe000000 - iVar3;
    bVar26 = iVar6 == 0;
  }
  bVar27 = false;
  if (bVar26) {
    puVar21 = (undefined4 *)(-iVar3 + 0x840);
    bVar27 = -iVar3 == -0x840;
  }
  bVar26 = false;
  if (bVar27) {
    iVar1 = (int)&UNK_00bc0000 - extraout_r3;
    bVar26 = iVar1 == 0;
  }
  bVar27 = false;
  if (bVar26) {
    iVar6 = -0x7c000000 - iVar3;
    bVar27 = iVar6 == 0;
  }
  if (bVar27) {
    uVar10 = 0xfd081bac;
  }
  *(undefined4 *)((int)puVar21 + -4) = 0x2f82434;
  *(int *)((int)puVar21 + -8) = iVar1;
  *(undefined4 *)((int)puVar21 + -0xc) = unaff_r9;
  *(int **)((int)puVar21 + -0x10) = unaff_r8;
  *(code **)((int)puVar21 + -0x14) = unaff_r7;
  *(undefined4 *)((int)puVar21 + -0x18) = uVar15;
  *(undefined4 *)((int)puVar21 + -0x1c) = uVar10;
  *(int **)((int)puVar21 + -0x20) = piVar2;
  puVar22 = (undefined1 *)((int)puVar21 + -0x28);
  if (*(int *)(iVar6 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f827ec + 0x2f8247c));
    func_0x01384978(*(undefined4 *)(iRam02f827f0 + 0x2f82488));
    if (*(int *)(iVar6 + 0x1c) == 0) {
      func_0x0140024c(iVar6);
    }
  }
  if (piVar18 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f827f4 + 0x2f82700);
  }
  else {
    if (iVar3 != 0) {
      iVar1 = **(int **)(iVar6 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar14 = *piVar18;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
            goto LAB_02f82518;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar18,iVar1,0);
LAB_02f82518:
      piVar18 = (int *)(*(code *)*puVar4)(piVar18,puVar4[1]);
      piVar2 = *(int **)(iRam02f827fc + 0x2f8253c);
      do {
        if (piVar18 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar18;
        uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar2) {
              puVar4 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
              goto LAB_02f82594;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar18,*piVar2,0);
LAB_02f82594:
        piVar11 = (int *)(*(code *)*puVar4)(piVar18,puVar4[1]);
        if (piVar11 == (int *)0x0) {
          iVar1 = 0;
          piVar11 = (int *)0x0;
          goto LAB_02f82668;
        }
        if (piVar18 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(*(int *)(iVar6 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar14 = *piVar18;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar14 + *piVar12 * 8 + 0xc0);
              goto LAB_02f82628;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar18,iVar1,0);
LAB_02f82628:
        (*(code *)*puVar4)((undefined1 *)((int)puVar21 + -0x28),piVar18,puVar4[1]);
        iVar1 = (**(code **)(iVar3 + 0xc))
                          (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)((int)puVar21 + -0x28),
                           *(undefined4 *)((int)puVar21 + -0x24),*(undefined4 *)(iVar3 + 0x14));
      } while (iVar1 == 0);
      iVar1 = 0;
      goto LAB_02f82668;
    }
    uVar15 = *(undefined4 *)(iRam02f827f8 + 0x2f8270c);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,iVar6);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar2;
    piVar11 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f82668:
    if (piVar18 != (int *)0x0) {
      iVar14 = *piVar18;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f82800 + 0x2f82680)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
            goto LAB_02f826c8;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar18,**(int **)(iRam02f82800 + 0x2f82680),0);
LAB_02f826c8:
      (*(code *)*puVar4)(piVar18,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar11;
  }
  uVar10 = 0;
  if (piVar18 != (int *)0x0) {
    iVar1 = *piVar18;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar2[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f82804 + 0x2f82778)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f827c0;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar18,(code *)**(int **)(iRam02f82804 + 0x2f82778),0);
LAB_02f827c0:
    (*(code *)*puVar4)(piVar18,puVar4[1]);
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  uVar29 = func_0x01062280();
  iVar3 = (int)((ulonglong)uVar29 >> 0x20);
  piVar2 = (int *)uVar29;
  bVar26 = false;
  iVar1 = extraout_r2_00;
  if ((bool)uVar28) {
    uVar10 = 0xfd0d180c;
    iVar1 = 0x1e - iVar3;
    bVar26 = iVar1 == 0;
  }
  bVar27 = false;
  if (bVar26) {
    puVar22 = (undefined1 *)((int)__DT_REL + -iVar3 + 0x8a934);
    bVar27 = -iVar3 == -0xcc000;
  }
  bVar26 = false;
  if (bVar27) {
    iVar6 = 0x1000000 - extraout_r3_00;
    bVar26 = iVar6 == 0;
  }
  bVar27 = false;
  if (bVar26) {
    iVar1 = 0xc4 - iVar3;
    bVar27 = iVar1 == 0;
  }
  if (bVar27) {
    uVar10 = 0xfe67d7f4;
  }
  *(undefined4 *)(puVar22 + -4) = 0x2f827ec;
  *(int *)(puVar22 + -8) = iVar6;
  *(undefined4 *)(puVar22 + -0xc) = unaff_r9;
  *(int **)(puVar22 + -0x10) = unaff_r8;
  *(code **)(puVar22 + -0x14) = unaff_r7;
  *(undefined4 *)(puVar22 + -0x18) = uVar15;
  *(undefined4 *)(puVar22 + -0x1c) = uVar10;
  *(int **)(puVar22 + -0x20) = piVar18;
  puVar23 = puVar22 + -0x28;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f82ba4 + 0x2f82834));
    func_0x01384978(*(undefined4 *)(iRam02f82ba8 + 0x2f82840));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x0140024c(iVar1);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f82bac + 0x2f82ab8);
  }
  else {
    if (iVar3 != 0) {
      iVar14 = **(int **)(iVar1 + 0x1c);
      if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
        iVar14 = func_0x014001f0(iVar14);
      }
      iVar6 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar18[-1] == iVar14) {
            puVar4 = (undefined4 *)(iVar6 + *piVar18 * 8 + 0xc0);
            goto LAB_02f828d0;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar14,0);
LAB_02f828d0:
      piVar2 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
      piVar18 = *(int **)(iRam02f82bb4 + 0x2f828f4);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar18) {
              puVar4 = (undefined4 *)(iVar14 + *piVar11 * 8 + 0xc0);
              goto LAB_02f8294c;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,*piVar18,0);
LAB_02f8294c:
        piVar11 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
        if (piVar11 == (int *)0x0) {
          iVar1 = 0;
          piVar11 = (int *)0x0;
          goto LAB_02f82a20;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
          iVar14 = func_0x014001f0(iVar14);
        }
        iVar6 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar14) {
              puVar4 = (undefined4 *)(iVar6 + *piVar12 * 8 + 0xc0);
              goto LAB_02f829e0;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar14,0);
LAB_02f829e0:
        (*(code *)*puVar4)(puVar22 + -0x28,piVar2,puVar4[1]);
        iVar14 = (**(code **)(iVar3 + 0xc))
                           (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(puVar22 + -0x28),
                            *(undefined4 *)(puVar22 + -0x24),*(undefined4 *)(iVar3 + 0x14));
      } while (iVar14 == 0);
      iVar1 = 0;
      goto LAB_02f82a20;
    }
    uVar15 = *(undefined4 *)(iRam02f82bb0 + 0x2f82ac4);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,iVar1);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar18 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar18;
    piVar11 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f82a20:
    if (piVar2 != (int *)0x0) {
      iVar14 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(iRam02f82bb8 + 0x2f82a38)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
            goto LAB_02f82a80;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f82bb8 + 0x2f82a38),0);
LAB_02f82a80:
      (*(code *)*puVar4)(piVar2,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar11;
  }
  uVar10 = 0;
  if (piVar2 != (int *)0x0) {
    iVar6 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar9 != 0) {
      piVar18 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar18[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f82bbc + 0x2f82b30)) {
          puVar4 = (undefined4 *)(iVar6 + *piVar18 * 8 + 0xc0);
          goto LAB_02f82b78;
        }
        uVar9 = uVar9 - 1;
        piVar18 = piVar18 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,(code *)**(int **)(iRam02f82bbc + 0x2f82b30),0);
LAB_02f82b78:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  uVar29 = func_0x01062280();
  iVar6 = (int)((ulonglong)uVar29 >> 0x20);
  piVar18 = (int *)uVar29;
  bVar26 = false;
  if ((bool)uVar28) {
    uVar10 = 0x6c7d454;
    iVar6 = 0x3000 - iVar6;
    bVar26 = iVar6 == 0;
  }
  bVar27 = false;
  if (bVar26) {
    puVar23 = (undefined1 *)((int)__DT_REL + -iVar6 + 0x4be934);
    bVar27 = -iVar6 == -0x500000;
  }
  bVar26 = false;
  if (bVar27) {
    iVar1 = 0x13 - extraout_r3_01;
    bVar26 = iVar1 == 0;
  }
  bVar27 = false;
  if (bVar26) {
    iVar6 = 0x300 - iVar6;
    bVar27 = iVar6 == 0;
  }
  if (bVar27) {
    uVar10 = 0x7d07d43e;
  }
  *(undefined4 *)(puVar23 + -4) = 0x2f82ba4;
  *(int *)(puVar23 + -8) = iVar14;
  *(int *)(puVar23 + -0xc) = iVar1;
  *(undefined4 *)(puVar23 + -0x10) = unaff_r9;
  *(int **)(puVar23 + -0x14) = unaff_r8;
  *(code **)(puVar23 + -0x18) = unaff_r7;
  *(undefined4 *)(puVar23 + -0x1c) = uVar15;
  *(undefined4 *)(puVar23 + -0x20) = uVar10;
  *(int **)(puVar23 + -0x24) = piVar2;
  puVar24 = puVar23 + -0x48;
  if (*(int *)(extraout_r2_01 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f82f70 + 0x2f82bec));
    func_0x01384978(*(undefined4 *)(iRam02f82f74 + 0x2f82bf8));
    if (*(int *)(extraout_r2_01 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_01);
    }
  }
  if (piVar18 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f82f78 + 0x2f82e84);
  }
  else {
    if (iVar6 != 0) {
      iVar1 = **(int **)(extraout_r2_01 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar14 = *piVar18;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar1) {
            puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
            goto LAB_02f82c88;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar18,iVar1,0);
LAB_02f82c88:
      unaff_r8 = (int *)(*(code *)*puVar4)(piVar18,puVar4[1]);
      do {
        if (unaff_r8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *unaff_r8;
        uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar9 != 0) {
          piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar2[-1] == **(int **)(iRam02f82f80 + 0x2f82cc0)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
              goto LAB_02f82d08;
            }
            uVar9 = uVar9 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,**(int **)(iRam02f82f80 + 0x2f82cc0),0);
LAB_02f82d08:
        piVar2 = (int *)(*(code *)*puVar4)(unaff_r8,puVar4[1]);
        if (piVar2 == (int *)0x0) {
          iVar1 = 0;
          piVar2 = (int *)0x0;
          goto LAB_02f82dec;
        }
        if (unaff_r8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(*(int *)(extraout_r2_01 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar14 = *unaff_r8;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar18[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
              goto LAB_02f82d9c;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,iVar1,0);
LAB_02f82d9c:
        (*(code *)*puVar4)(puVar23 + -0x38,unaff_r8,puVar4[1]);
        uVar15 = *(undefined4 *)(iVar6 + 0x20);
        pcVar16 = *(code **)(iVar6 + 0xc);
        uVar10 = *(undefined4 *)(iVar6 + 0x14);
        *(undefined4 *)(puVar23 + -0x48) = *(undefined4 *)(puVar23 + -0x30);
        *(undefined4 *)(puVar23 + -0x44) = *(undefined4 *)(puVar23 + -0x2c);
        *(undefined4 *)(puVar23 + -0x40) = uVar10;
        iVar1 = (*pcVar16)(uVar15,*(undefined4 *)(puVar23 + -0x30),*(undefined4 *)(puVar23 + -0x38),
                           *(undefined4 *)(puVar23 + -0x34));
      } while (iVar1 == 0);
      iVar1 = 0;
      goto LAB_02f82dec;
    }
    uVar15 = *(undefined4 *)(iRam02f82f7c + 0x2f82e90);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,extraout_r2_01);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar2;
    piVar2 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f82dec:
    if (unaff_r8 != (int *)0x0) {
      iVar14 = *unaff_r8;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(iRam02f82f84 + 0x2f82e04)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
            goto LAB_02f82e4c;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,**(int **)(iRam02f82f84 + 0x2f82e04),0);
LAB_02f82e4c:
      (*(code *)*puVar4)(unaff_r8,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar2;
  }
  uVar10 = 0;
  if (unaff_r8 != (int *)0x0) {
    iVar1 = *unaff_r8;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar2[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f82f88 + 0x2f82efc)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f82f44;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc();
LAB_02f82f44:
    (*(code *)*puVar4)();
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  uVar29 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar29 >> 0x20);
  piVar2 = (int *)uVar29;
  bVar26 = false;
  if ((bool)uVar28) {
    uVar10 = 0x3d07d096;
    iVar1 = 0x8000 - iVar1;
    bVar26 = iVar1 == 0;
  }
  bVar27 = false;
  if (bVar26) {
    puVar24 = (undefined1 *)(-iVar1 + 0x20000001);
    bVar27 = -iVar1 == -0x20000001;
  }
  bVar26 = false;
  iVar3 = extraout_r2_01;
  if (bVar27) {
    iVar3 = 0x2000 - extraout_r3_02;
    bVar26 = iVar3 == 0;
  }
  bVar27 = false;
  if (bVar26) {
    iVar1 = 0x100000 - iVar1;
    bVar27 = iVar1 == 0;
  }
  if (bVar27) {
    uVar10 = 0xfd07d140;
    piVar18 = (int *)0xfd07d3c0;
  }
  *(undefined4 *)(puVar24 + -4) = 0x2f82f70;
  *(int *)(puVar24 + -8) = iVar6;
  *(int *)(puVar24 + -0xc) = iVar3;
  *(int **)(puVar24 + -0x10) = unaff_r8;
  *(code **)(puVar24 + -0x14) = unaff_r7;
  *(undefined4 *)(puVar24 + -0x18) = uVar15;
  *(undefined4 *)(puVar24 + -0x1c) = uVar10;
  *(int **)(puVar24 + -0x20) = piVar18;
  if (*(int *)(extraout_r2_02 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f83328 + 0x2f82fb8));
    func_0x01384978(*(undefined4 *)(iRam02f8332c + 0x2f82fc4));
    if (*(int *)(extraout_r2_02 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_02);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f83330 + 0x2f8323c);
  }
  else {
    if (iVar1 != 0) {
      iVar14 = **(int **)(extraout_r2_02 + 0x1c);
      if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
        iVar14 = func_0x014001f0(iVar14);
      }
      iVar6 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar18[-1] == iVar14) {
            puVar4 = (undefined4 *)(iVar6 + *piVar18 * 8 + 0xc0);
            goto LAB_02f83054;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar14,0);
LAB_02f83054:
      piVar2 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
      piVar18 = *(int **)(iRam02f83338 + 0x2f83078);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar18) {
              puVar4 = (undefined4 *)(iVar14 + *piVar11 * 8 + 0xc0);
              goto LAB_02f830d0;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,*piVar18,0);
LAB_02f830d0:
        piVar11 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
        if (piVar11 == (int *)0x0) {
          iVar1 = 0;
          piVar11 = (int *)0x0;
          goto LAB_02f831a4;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(*(int *)(extraout_r2_02 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
          iVar14 = func_0x014001f0(iVar14);
        }
        iVar6 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar14) {
              puVar4 = (undefined4 *)(iVar6 + *piVar12 * 8 + 0xc0);
              goto LAB_02f83164;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar14,0);
LAB_02f83164:
        (*(code *)*puVar4)(puVar24 + -0x28,piVar2,puVar4[1]);
        iVar14 = (**(code **)(iVar1 + 0xc))
                           (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(puVar24 + -0x28),
                            *(undefined4 *)(puVar24 + -0x24),*(undefined4 *)(iVar1 + 0x14));
      } while (iVar14 == 0);
      iVar1 = 0;
      goto LAB_02f831a4;
    }
    uVar15 = *(undefined4 *)(iRam02f83334 + 0x2f83248);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,extraout_r2_02);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar18 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar18;
    piVar11 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f831a4:
    if (piVar2 != (int *)0x0) {
      iVar14 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(iRam02f8333c + 0x2f831bc)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
            goto LAB_02f83204;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f8333c + 0x2f831bc),0);
LAB_02f83204:
      (*(code *)*puVar4)(piVar2,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar11;
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar18 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar18[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f83340 + 0x2f832b4)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar18 * 8 + 0xc0);
          goto LAB_02f832fc;
        }
        uVar9 = uVar9 - 1;
        piVar18 = piVar18 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,(code *)**(int **)(iRam02f83340 + 0x2f832b4),0);
LAB_02f832fc:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  uVar29 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar29 >> 0x20);
  piVar18 = (int *)uVar29;
  bVar26 = false;
  if ((bool)uVar28) {
    piVar2 = (int *)0xfd07cd30;
    iVar1 = 0x3c00000 - iVar1;
    bVar26 = iVar1 == 0;
  }
  bVar27 = false;
  if (bVar26 && iVar1 == 0x240) {
    iVar3 = 0x320000 - extraout_r3_03;
    bVar27 = iVar3 == 0;
  }
  bVar26 = false;
  if (bVar27) {
    iVar1 = 0x22000000 - iVar1;
    bVar26 = iVar1 == 0;
  }
  if (bVar26) {
    piVar2 = (int *)0xfd07e8b8;
  }
  *(undefined4 *)(puVar24 + -0x2c) = 0x2f83328;
  *(int *)(puVar24 + -0x30) = extraout_r2_02;
  *(int *)(puVar24 + -0x34) = iVar3;
  *(int **)(puVar24 + -0x38) = unaff_r8;
  *(code **)(puVar24 + -0x3c) = unaff_r7;
  *(undefined4 *)(puVar24 + -0x40) = uVar15;
  *(undefined4 *)(puVar24 + -0x44) = 0;
  *(int **)(puVar24 + -0x48) = piVar2;
  if (*(int *)(extraout_r2_03 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f836e0 + 0x2f83370));
    func_0x01384978(*(undefined4 *)(iRam02f836e4 + 0x2f8337c));
    if (*(int *)(extraout_r2_03 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_03);
    }
  }
  if (piVar18 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f836e8 + 0x2f835f4);
  }
  else {
    if (iVar1 != 0) {
      iVar14 = **(int **)(extraout_r2_03 + 0x1c);
      if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
        iVar14 = func_0x014001f0(iVar14);
      }
      iVar6 = *piVar18;
      uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar14) {
            puVar4 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xc0);
            goto LAB_02f8340c;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar18,iVar14,0);
LAB_02f8340c:
      piVar18 = (int *)(*(code *)*puVar4)(piVar18,puVar4[1]);
      piVar2 = *(int **)(iRam02f836f0 + 0x2f83430);
      do {
        if (piVar18 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *piVar18;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar2) {
              puVar4 = (undefined4 *)(iVar14 + *piVar11 * 8 + 0xc0);
              goto LAB_02f83488;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar18,*piVar2,0);
LAB_02f83488:
        piVar11 = (int *)(*(code *)*puVar4)(piVar18,puVar4[1]);
        if (piVar11 == (int *)0x0) {
          iVar1 = 0;
          piVar11 = (int *)0x0;
          goto LAB_02f8355c;
        }
        if (piVar18 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(*(int *)(extraout_r2_03 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
          iVar14 = func_0x014001f0(iVar14);
        }
        iVar6 = *piVar18;
        uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar14) {
              puVar4 = (undefined4 *)(iVar6 + *piVar12 * 8 + 0xc0);
              goto LAB_02f8351c;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar18,iVar14,0);
LAB_02f8351c:
        (*(code *)*puVar4)(puVar24 + -0x50,piVar18,puVar4[1]);
        iVar14 = (**(code **)(iVar1 + 0xc))
                           (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(puVar24 + -0x50),
                            *(undefined4 *)(puVar24 + -0x4c),*(undefined4 *)(iVar1 + 0x14));
      } while (iVar14 == 0);
      iVar1 = 0;
      goto LAB_02f8355c;
    }
    uVar15 = *(undefined4 *)(iRam02f836ec + 0x2f83600);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,extraout_r2_03);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar2;
    piVar11 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f8355c:
    if (piVar18 != (int *)0x0) {
      iVar14 = *piVar18;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f836f4 + 0x2f83574)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
            goto LAB_02f835bc;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar18,**(int **)(iRam02f836f4 + 0x2f83574),0);
LAB_02f835bc:
      (*(code *)*puVar4)(piVar18,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar11;
  }
  if (piVar18 != (int *)0x0) {
    iVar1 = *piVar18;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar2[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f836f8 + 0x2f8366c)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f836b4;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar18,(code *)**(int **)(iRam02f836f8 + 0x2f8366c),0);
LAB_02f836b4:
    (*(code *)*puVar4)(piVar18,puVar4[1]);
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  uVar29 = func_0x01062280();
  pcVar13 = (char *)((ulonglong)uVar29 >> 0x20);
  piVar2 = (int *)uVar29;
  bVar26 = false;
  if ((bool)uVar28) {
    piVar18 = (int *)0xfd094918;
    pcVar13 = (char *)(0x40000008 - (int)pcVar13);
    bVar26 = pcVar13 == (char *)0x0;
  }
  bVar27 = false;
  if (bVar26 && pcVar13 == "EEE6do_getES4_S4_bRNS_8ios_baseERjRe") {
    iVar3 = 0x1000000 - extraout_r3_04;
    bVar27 = iVar3 == 0;
  }
  bVar26 = false;
  if (bVar27) {
    pcVar13 = (char *)(0x34 - (int)pcVar13);
    bVar26 = pcVar13 == (char *)0x0;
  }
  if (bVar26) {
    piVar18 = (int *)0xfd6bc900;
  }
  *(undefined4 *)(puVar24 + -0x54) = 0x2f836e0;
  *(int *)(puVar24 + -0x58) = iVar14;
  *(int *)(puVar24 + -0x5c) = extraout_r2_03;
  *(int *)(puVar24 + -0x60) = iVar3;
  *(int **)(puVar24 + -100) = unaff_r8;
  *(code **)(puVar24 + -0x68) = unaff_r7;
  *(undefined4 *)(puVar24 + -0x6c) = uVar15;
  *(undefined4 *)(puVar24 + -0x70) = 0;
  *(int **)(puVar24 + -0x74) = piVar18;
  if (*(int *)(extraout_r2_04 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f83aac + 0x2f83728));
    func_0x01384978(*(undefined4 *)(iRam02f83ab0 + 0x2f83734));
    if (*(int *)(extraout_r2_04 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_04);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f83ab4 + 0x2f839c0);
  }
  else {
    if (pcVar13 != (char *)0x0) {
      iVar1 = **(int **)(extraout_r2_04 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar14 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar18[-1] == iVar1) {
            puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
            goto LAB_02f837c4;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_02f837c4:
      unaff_r8 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
      do {
        if (unaff_r8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *unaff_r8;
        uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar9 != 0) {
          piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar2[-1] == **(int **)(iRam02f83abc + 0x2f837fc)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
              goto LAB_02f83844;
            }
            uVar9 = uVar9 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,**(int **)(iRam02f83abc + 0x2f837fc),0);
LAB_02f83844:
        piVar2 = (int *)(*(code *)*puVar4)(unaff_r8,puVar4[1]);
        if (piVar2 == (int *)0x0) {
          iVar1 = 0;
          piVar2 = (int *)0x0;
          goto LAB_02f83928;
        }
        if (unaff_r8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(*(int *)(extraout_r2_04 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar14 = *unaff_r8;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar18[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
              goto LAB_02f838d8;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,iVar1,0);
LAB_02f838d8:
        (*(code *)*puVar4)(puVar24 + -0x88,unaff_r8,puVar4[1]);
        uVar15 = *(undefined4 *)(pcVar13 + 0x20);
        pcVar16 = *(code **)(pcVar13 + 0xc);
        uVar10 = *(undefined4 *)(pcVar13 + 0x14);
        *(undefined4 *)(puVar24 + -0x98) = *(undefined4 *)(puVar24 + -0x80);
        *(undefined4 *)(puVar24 + -0x94) = *(undefined4 *)(puVar24 + -0x7c);
        *(undefined4 *)(puVar24 + -0x90) = uVar10;
        iVar1 = (*pcVar16)(uVar15,*(undefined4 *)(puVar24 + -0x80),*(undefined4 *)(puVar24 + -0x88),
                           *(undefined4 *)(puVar24 + -0x84));
      } while (iVar1 == 0);
      iVar1 = 0;
      goto LAB_02f83928;
    }
    uVar15 = *(undefined4 *)(iRam02f83ab8 + 0x2f839cc);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,extraout_r2_04);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar2;
    piVar2 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f83928:
    if (unaff_r8 != (int *)0x0) {
      iVar14 = *unaff_r8;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(iRam02f83ac0 + 0x2f83940)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
            goto LAB_02f83988;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,**(int **)(iRam02f83ac0 + 0x2f83940),0);
LAB_02f83988:
      (*(code *)*puVar4)(unaff_r8,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar2;
  }
  if (unaff_r8 != (int *)0x0) {
    iVar1 = *unaff_r8;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar18 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar18[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f83ac4 + 0x2f83a38)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar18 * 8 + 0xc0);
          goto LAB_02f83a80;
        }
        uVar9 = uVar9 - 1;
        piVar18 = piVar18 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc();
LAB_02f83a80:
    (*(code *)*puVar4)();
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  uVar29 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar29 >> 0x20);
  piVar18 = (int *)uVar29;
  bVar26 = false;
  if ((bool)uVar28) {
    piVar2 = (int *)0xffa7c54c;
    piVar18 = (int *)(0xcc0 - iVar1);
    bVar26 = piVar18 == (int *)0x0;
  }
  bVar27 = false;
  iVar6 = extraout_r2_04;
  if (bVar26 && iVar1 == 0xc0000) {
    iVar6 = 0x40000004 - extraout_r3_05;
    bVar27 = iVar6 == 0;
  }
  bVar26 = false;
  if (bVar27) {
    piVar18 = (int *)(0x40 - iVar1);
    bVar26 = piVar18 == (int *)0x0;
  }
  if (bVar26) {
    piVar2 = (int *)0x9507c534;
  }
  *(undefined4 *)(puVar24 + -0x9c) = 0x2f83aac;
  *(char **)(puVar24 + -0xa0) = pcVar13;
  *(int *)(puVar24 + -0xa4) = iVar6;
  *(int **)(puVar24 + -0xa8) = unaff_r8;
  *(code **)(puVar24 + -0xac) = unaff_r7;
  *(undefined4 *)(puVar24 + -0xb0) = uVar15;
  *(undefined4 *)(puVar24 + -0xb4) = 0;
  *(int **)(puVar24 + -0xb8) = piVar2;
  if (*(int *)(extraout_r2_05 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f83e64 + 0x2f83af4));
    func_0x01384978(*(undefined4 *)(iRam02f83e68 + 0x2f83b00));
    if (*(int *)(extraout_r2_05 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_05);
    }
  }
  if (piVar18 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f83e6c + 0x2f83d78);
  }
  else {
    if (iVar1 != 0) {
      iVar14 = **(int **)(extraout_r2_05 + 0x1c);
      if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
        iVar14 = func_0x014001f0(iVar14);
      }
      iVar6 = *piVar18;
      uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar14) {
            puVar4 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xc0);
            goto LAB_02f83b90;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar18,iVar14,0);
LAB_02f83b90:
      piVar18 = (int *)(*(code *)*puVar4)(piVar18,puVar4[1]);
      piVar2 = *(int **)(iRam02f83e74 + 0x2f83bb4);
      do {
        if (piVar18 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *piVar18;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar2) {
              puVar4 = (undefined4 *)(iVar14 + *piVar11 * 8 + 0xc0);
              goto LAB_02f83c0c;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar18,*piVar2,0);
LAB_02f83c0c:
        piVar11 = (int *)(*(code *)*puVar4)(piVar18,puVar4[1]);
        if (piVar11 == (int *)0x0) {
          iVar1 = 0;
          piVar11 = (int *)0x0;
          goto LAB_02f83ce0;
        }
        if (piVar18 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(*(int *)(extraout_r2_05 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
          iVar14 = func_0x014001f0(iVar14);
        }
        iVar6 = *piVar18;
        uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar14) {
              puVar4 = (undefined4 *)(iVar6 + *piVar12 * 8 + 0xc0);
              goto LAB_02f83ca0;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar18,iVar14,0);
LAB_02f83ca0:
        (*(code *)*puVar4)(puVar24 + -0xc0,piVar18,puVar4[1]);
        iVar14 = (**(code **)(iVar1 + 0xc))
                           (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(puVar24 + -0xc0),
                            *(undefined4 *)(puVar24 + -0xbc),*(undefined4 *)(iVar1 + 0x14));
      } while (iVar14 == 0);
      iVar1 = 0;
      goto LAB_02f83ce0;
    }
    uVar15 = *(undefined4 *)(iRam02f83e70 + 0x2f83d84);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,extraout_r2_05);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar2;
    piVar11 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f83ce0:
    if (piVar18 != (int *)0x0) {
      iVar14 = *piVar18;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f83e78 + 0x2f83cf8)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
            goto LAB_02f83d40;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar18,**(int **)(iRam02f83e78 + 0x2f83cf8),0);
LAB_02f83d40:
      (*(code *)*puVar4)(piVar18,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar11;
  }
  if (piVar18 != (int *)0x0) {
    iVar1 = *piVar18;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar2[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f83e7c + 0x2f83df0)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f83e38;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar18,(code *)**(int **)(iRam02f83e7c + 0x2f83df0),0);
LAB_02f83e38:
    (*(code *)*puVar4)(piVar18,puVar4[1]);
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  uVar29 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar29 >> 0x20);
  piVar2 = (int *)uVar29;
  bVar26 = false;
  if ((bool)uVar28) {
    piVar18 = (int *)0x6d07c197;
    piVar2 = (int *)-iVar1;
    bVar26 = piVar2 == (int *)0x0;
  }
  bVar27 = false;
  if (bVar26 && iVar1 == 0x54000000) {
    unaff_r8 = (int *)(0x8c0 - extraout_r3_06);
    bVar27 = unaff_r8 == (int *)0x0;
  }
  bVar26 = false;
  if (bVar27) {
    piVar2 = (int *)((int)__DT_REL + (0xa934 - iVar1));
    bVar26 = piVar2 == (int *)0x0;
  }
  if (bVar26) {
    piVar18 = (int *)0xfd07c25c;
  }
  *(undefined4 *)(puVar24 + -0xc4) = 0x2f83e64;
  *(int *)(puVar24 + -200) = extraout_r2_05;
  *(int *)(puVar24 + -0xcc) = iVar6;
  *(int **)(puVar24 + -0xd0) = unaff_r8;
  *(code **)(puVar24 + -0xd4) = unaff_r7;
  *(undefined4 *)(puVar24 + -0xd8) = uVar15;
  *(undefined4 *)(puVar24 + -0xdc) = 0;
  *(int **)(puVar24 + -0xe0) = piVar18;
  if (*(int *)(extraout_r2_06 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f8421c + 0x2f83eac));
    func_0x01384978(*(undefined4 *)(iRam02f84220 + 0x2f83eb8));
    if (*(int *)(extraout_r2_06 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_06);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f84224 + 0x2f84130);
  }
  else {
    if (iVar1 != 0) {
      iVar14 = **(int **)(extraout_r2_06 + 0x1c);
      if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
        iVar14 = func_0x014001f0(iVar14);
      }
      iVar6 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar18[-1] == iVar14) {
            puVar4 = (undefined4 *)(iVar6 + *piVar18 * 8 + 0xc0);
            goto LAB_02f83f48;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar14,0);
LAB_02f83f48:
      piVar2 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
      piVar18 = *(int **)(iRam02f8422c + 0x2f83f6c);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar18) {
              puVar4 = (undefined4 *)(iVar14 + *piVar11 * 8 + 0xc0);
              goto LAB_02f83fc4;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,*piVar18,0);
LAB_02f83fc4:
        piVar11 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
        if (piVar11 == (int *)0x0) {
          iVar1 = 0;
          piVar11 = (int *)0x0;
          goto LAB_02f84098;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(*(int *)(extraout_r2_06 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
          iVar14 = func_0x014001f0(iVar14);
        }
        iVar6 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar14) {
              puVar4 = (undefined4 *)(iVar6 + *piVar12 * 8 + 0xc0);
              goto LAB_02f84058;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar14,0);
LAB_02f84058:
        (*(code *)*puVar4)(puVar24 + -0xe8,piVar2,puVar4[1]);
        iVar14 = (**(code **)(iVar1 + 0xc))
                           (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(puVar24 + -0xe8),
                            *(undefined4 *)(puVar24 + -0xe4),*(undefined4 *)(iVar1 + 0x14));
      } while (iVar14 == 0);
      iVar1 = 0;
      goto LAB_02f84098;
    }
    uVar15 = *(undefined4 *)(iRam02f84228 + 0x2f8413c);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,extraout_r2_06);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar18 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar18;
    piVar11 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f84098:
    if (piVar2 != (int *)0x0) {
      iVar14 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(iRam02f84230 + 0x2f840b0)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
            goto LAB_02f840f8;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f84230 + 0x2f840b0),0);
LAB_02f840f8:
      (*(code *)*puVar4)(piVar2,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar11;
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar18 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar18[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f84234 + 0x2f841a8)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar18 * 8 + 0xc0);
          goto LAB_02f841f0;
        }
        uVar9 = uVar9 - 1;
        piVar18 = piVar18 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,(code *)**(int **)(iRam02f84234 + 0x2f841a8),0);
LAB_02f841f0:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  uVar29 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar29 >> 0x20);
  piVar18 = (int *)uVar29;
  bVar26 = false;
  if ((bool)uVar28) {
    piVar2 = (int *)0xfd07be00;
    piVar18 = (int *)(&UNK_01200000 + -iVar1);
    bVar26 = piVar18 == (int *)0x0;
  }
  bVar27 = false;
  if (bVar26 && iVar1 == 0x9c) {
    unaff_r8 = (int *)((int)__DT_REL + (0x92934 - extraout_r3_07));
    bVar27 = unaff_r8 == (int *)0x0;
  }
  if (bVar27) {
    piVar18 = (int *)(0x9400000 - iVar1);
  }
  *(undefined4 *)(puVar24 + -0xec) = 0x2f8421c;
  *(int *)(puVar24 + -0xf0) = extraout_r2_06;
  *(int *)(puVar24 + -0xf4) = iVar6;
  *(int **)(puVar24 + -0xf8) = unaff_r8;
  *(code **)(puVar24 + -0xfc) = unaff_r7;
  *(undefined4 *)(puVar24 + -0x100) = uVar15;
  *(undefined4 *)(puVar24 + -0x104) = 0;
  *(int **)(puVar24 + -0x108) = piVar2;
  if (*(int *)(extraout_r2_07 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f845d4 + 0x2f84264));
    func_0x01384978(*(undefined4 *)(iRam02f845d8 + 0x2f84270));
    if (*(int *)(extraout_r2_07 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_07);
    }
  }
  if (piVar18 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f845dc + 0x2f844e8);
  }
  else {
    if (iVar1 != 0) {
      iVar14 = **(int **)(extraout_r2_07 + 0x1c);
      if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
        iVar14 = func_0x014001f0(iVar14);
      }
      iVar6 = *piVar18;
      uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar14) {
            puVar4 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xc0);
            goto LAB_02f84300;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar18,iVar14,0);
LAB_02f84300:
      piVar18 = (int *)(*(code *)*puVar4)(piVar18,puVar4[1]);
      piVar2 = *(int **)(iRam02f845e4 + 0x2f84324);
      do {
        if (piVar18 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *piVar18;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar2) {
              puVar4 = (undefined4 *)(iVar14 + *piVar11 * 8 + 0xc0);
              goto LAB_02f8437c;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar18,*piVar2,0);
LAB_02f8437c:
        piVar11 = (int *)(*(code *)*puVar4)(piVar18,puVar4[1]);
        if (piVar11 == (int *)0x0) {
          iVar1 = 0;
          piVar11 = (int *)0x0;
          goto LAB_02f84450;
        }
        if (piVar18 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(*(int *)(extraout_r2_07 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
          iVar14 = func_0x014001f0(iVar14);
        }
        iVar6 = *piVar18;
        uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar14) {
              puVar4 = (undefined4 *)(iVar6 + *piVar12 * 8 + 0xc0);
              goto LAB_02f84410;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar18,iVar14,0);
LAB_02f84410:
        (*(code *)*puVar4)(puVar24 + -0x110,piVar18,puVar4[1]);
        iVar14 = (**(code **)(iVar1 + 0xc))
                           (*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(puVar24 + -0x110),
                            *(undefined4 *)(puVar24 + -0x10c),*(undefined4 *)(iVar1 + 0x14));
      } while (iVar14 == 0);
      iVar1 = 0;
      goto LAB_02f84450;
    }
    uVar15 = *(undefined4 *)(iRam02f845e0 + 0x2f844f4);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,extraout_r2_07);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar2;
    piVar11 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f84450:
    if (piVar18 != (int *)0x0) {
      iVar14 = *piVar18;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f845e8 + 0x2f84468)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
            goto LAB_02f844b0;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar18,**(int **)(iRam02f845e8 + 0x2f84468),0);
LAB_02f844b0:
      (*(code *)*puVar4)(piVar18,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar11;
  }
  if (piVar18 != (int *)0x0) {
    iVar1 = *piVar18;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar2[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f845ec + 0x2f84560)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f845a8;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar18,(code *)**(int **)(iRam02f845ec + 0x2f84560),0);
LAB_02f845a8:
    (*(code *)*puVar4)(piVar18,puVar4[1]);
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  uVar29 = func_0x01062280();
  iVar3 = (int)((ulonglong)uVar29 >> 0x20);
  piVar2 = (int *)uVar29;
  bVar26 = false;
  iVar1 = extraout_r3_08;
  if ((bool)uVar28) {
    iVar1 = -0x2f7d9dc;
    piVar2 = (int *)(0x40000002 - iVar3);
    bVar26 = piVar2 == (int *)0x0;
  }
  bVar27 = false;
  if (bVar26) {
    iVar14 = 0xe400 - iVar3;
    bVar27 = iVar14 == 0;
  }
  bVar26 = false;
  if (bVar27) {
    unaff_r8 = (int *)(0x700000 - iVar1);
    bVar26 = unaff_r8 == (int *)0x0;
  }
  if (bVar26) {
    piVar2 = (int *)(-0x3ffffff3 - iVar3);
  }
  *(undefined4 *)(puVar24 + -0x114) = 0x2f845d4;
  *(int *)(puVar24 + -0x118) = extraout_r2_07;
  *(int *)(puVar24 + -0x11c) = iVar6;
  *(int **)(puVar24 + -0x120) = unaff_r8;
  *(code **)(puVar24 + -0x124) = unaff_r7;
  *(undefined4 *)(puVar24 + -0x128) = uVar15;
  *(undefined4 *)(puVar24 + -300) = 0;
  *(int **)(puVar24 + -0x130) = piVar18;
  if (*(int *)(extraout_r2_08 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f8498c + 0x2f8461c));
    func_0x01384978(*(undefined4 *)(iRam02f84990 + 0x2f84628));
    if (*(int *)(extraout_r2_08 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_08);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f84994 + 0x2f848a0);
  }
  else {
    if (iVar3 != 0) {
      iVar1 = **(int **)(extraout_r2_08 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar14 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar18[-1] == iVar1) {
            puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
            goto LAB_02f846b8;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_02f846b8:
      piVar2 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
      piVar18 = *(int **)(iRam02f8499c + 0x2f846dc);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar18) {
              puVar4 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
              goto LAB_02f84734;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,*piVar18,0);
LAB_02f84734:
        piVar11 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
        if (piVar11 == (int *)0x0) {
          iVar1 = 0;
          piVar11 = (int *)0x0;
          goto LAB_02f84808;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(*(int *)(extraout_r2_08 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar14 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar14 + *piVar12 * 8 + 0xc0);
              goto LAB_02f847c8;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_02f847c8:
        (*(code *)*puVar4)(puVar24 + -0x138,piVar2,puVar4[1]);
        iVar1 = (**(code **)(iVar3 + 0xc))
                          (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(puVar24 + -0x138),
                           *(undefined4 *)(puVar24 + -0x134),*(undefined4 *)(iVar3 + 0x14));
      } while (iVar1 == 0);
      iVar1 = 0;
      goto LAB_02f84808;
    }
    uVar15 = *(undefined4 *)(iRam02f84998 + 0x2f848ac);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,extraout_r2_08);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar18 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar18;
    piVar11 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f84808:
    if (piVar2 != (int *)0x0) {
      iVar14 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(iRam02f849a0 + 0x2f84820)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
            goto LAB_02f84868;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f849a0 + 0x2f84820),0);
LAB_02f84868:
      (*(code *)*puVar4)(piVar2,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar11;
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar18 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar18[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f849a4 + 0x2f84918)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar18 * 8 + 0xc0);
          goto LAB_02f84960;
        }
        uVar9 = uVar9 - 1;
        piVar18 = piVar18 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,(code *)**(int **)(iRam02f849a4 + 0x2f84918),0);
LAB_02f84960:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  uVar29 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar29 >> 0x20);
  piVar18 = (int *)uVar29;
  if ((bool)uVar28) {
                    /* WARNING: Could not recover jumptable at 0x02f84990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar2 = (int *)(*(code *)(0x360 - (int)piVar18))();
    return piVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x02f8499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  *(undefined4 *)(puVar24 + -0x13c) = 0x2f8498c;
  *(int *)(puVar24 + -0x140) = iVar14;
  *(int *)(puVar24 + -0x144) = extraout_r2_08;
  *(int *)(puVar24 + -0x148) = iVar6;
  *(int **)(puVar24 + -0x14c) = unaff_r8;
  *(code **)(puVar24 + -0x150) = unaff_r7;
  *(undefined4 *)(puVar24 + -0x154) = uVar15;
  *(undefined4 *)(puVar24 + -0x158) = 0;
  *(int **)(puVar24 + -0x15c) = piVar2;
  if (*(int *)(extraout_r2_09 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f84d58 + 0x2f849d4));
    func_0x01384978(*(undefined4 *)(iRam02f84d5c + 0x2f849e0));
    if (*(int *)(extraout_r2_09 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_09);
    }
  }
  if (piVar18 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f84d60 + 0x2f84c6c);
  }
  else {
    if (iVar1 != 0) {
      iVar14 = **(int **)(extraout_r2_09 + 0x1c);
      if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
        iVar14 = func_0x014001f0(iVar14);
      }
      iVar6 = *piVar18;
      uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar14) {
            puVar4 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xc0);
            goto LAB_02f84a70;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar18,iVar14,0);
LAB_02f84a70:
      unaff_r8 = (int *)(*(code *)*puVar4)(piVar18,puVar4[1]);
      do {
        if (unaff_r8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *unaff_r8;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar2[-1] == **(int **)(iRam02f84d68 + 0x2f84aa8)) {
              puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
              goto LAB_02f84af0;
            }
            uVar9 = uVar9 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,**(int **)(iRam02f84d68 + 0x2f84aa8),0);
LAB_02f84af0:
        piVar2 = (int *)(*(code *)*puVar4)(unaff_r8,puVar4[1]);
        if (piVar2 == (int *)0x0) {
          iVar1 = 0;
          piVar2 = (int *)0x0;
          goto LAB_02f84bd4;
        }
        if (unaff_r8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(*(int *)(extraout_r2_09 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
          iVar14 = func_0x014001f0(iVar14);
        }
        iVar6 = *unaff_r8;
        uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar18[-1] == iVar14) {
              puVar4 = (undefined4 *)(iVar6 + *piVar18 * 8 + 0xc0);
              goto LAB_02f84b84;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,iVar14,0);
LAB_02f84b84:
        (*(code *)*puVar4)(puVar24 + -0x170,unaff_r8,puVar4[1]);
        uVar15 = *(undefined4 *)(iVar1 + 0x20);
        pcVar16 = *(code **)(iVar1 + 0xc);
        uVar10 = *(undefined4 *)(iVar1 + 0x14);
        *(undefined4 *)(puVar24 + -0x180) = *(undefined4 *)(puVar24 + -0x168);
        *(undefined4 *)(puVar24 + -0x17c) = *(undefined4 *)(puVar24 + -0x164);
        *(undefined4 *)(puVar24 + -0x178) = uVar10;
        iVar14 = (*pcVar16)(uVar15,*(undefined4 *)(puVar24 + -0x168),
                            *(undefined4 *)(puVar24 + -0x170),*(undefined4 *)(puVar24 + -0x16c));
      } while (iVar14 == 0);
      iVar1 = 0;
      goto LAB_02f84bd4;
    }
    uVar15 = *(undefined4 *)(iRam02f84d64 + 0x2f84c78);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,extraout_r2_09);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar2;
    piVar2 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f84bd4:
    if (unaff_r8 != (int *)0x0) {
      iVar14 = *unaff_r8;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(iRam02f84d6c + 0x2f84bec)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
            goto LAB_02f84c34;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,**(int **)(iRam02f84d6c + 0x2f84bec),0);
LAB_02f84c34:
      (*(code *)*puVar4)(unaff_r8,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar2;
  }
  if (unaff_r8 != (int *)0x0) {
    iVar6 = *unaff_r8;
    uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar2[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f84d70 + 0x2f84ce4)) {
          puVar4 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xc0);
          goto LAB_02f84d2c;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,(code *)**(int **)(iRam02f84d70 + 0x2f84ce4),0);
LAB_02f84d2c:
    (*(code *)*puVar4)(unaff_r8,puVar4[1]);
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  uVar29 = func_0x01062280();
  iVar6 = (int)((ulonglong)uVar29 >> 0x20);
  piVar2 = (int *)uVar29;
  if ((bool)uVar28) {
                    /* WARNING: Could not recover jumptable at 0x02f84d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar2 = (int *)(*(code *)(0x2000 - (int)piVar2))();
    return piVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x02f84d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  *(undefined4 *)(puVar24 + -0x184) = 0x2f84d58;
  *(int *)(puVar24 + -0x188) = iVar14;
  *(int *)(puVar24 + -0x18c) = iVar1;
  *(int *)(puVar24 + -400) = extraout_r2_09;
  *(int **)(puVar24 + -0x194) = unaff_r8;
  *(code **)(puVar24 + -0x198) = unaff_r7;
  *(undefined4 *)(puVar24 + -0x19c) = uVar15;
  *(undefined4 *)(puVar24 + -0x1a0) = 0;
  *(int **)(puVar24 + -0x1a4) = piVar18;
  if (*(int *)(extraout_r2_10 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f85124 + 0x2f84da0));
    func_0x01384978(*(undefined4 *)(iRam02f85128 + 0x2f84dac));
    if (*(int *)(extraout_r2_10 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_10);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f8512c + 0x2f85038);
  }
  else {
    if (iVar6 != 0) {
      iVar1 = **(int **)(extraout_r2_10 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar14 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar18[-1] == iVar1) {
            puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
            goto LAB_02f84e3c;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_02f84e3c:
      unaff_r8 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
      do {
        if (unaff_r8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *unaff_r8;
        uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar9 != 0) {
          piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar2[-1] == **(int **)(iRam02f85134 + 0x2f84e74)) {
              puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
              goto LAB_02f84ebc;
            }
            uVar9 = uVar9 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,**(int **)(iRam02f85134 + 0x2f84e74),0);
LAB_02f84ebc:
        piVar2 = (int *)(*(code *)*puVar4)(unaff_r8,puVar4[1]);
        if (piVar2 == (int *)0x0) {
          iVar1 = 0;
          piVar2 = (int *)0x0;
          goto LAB_02f84fa0;
        }
        if (unaff_r8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(*(int *)(extraout_r2_10 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar14 = *unaff_r8;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar18[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
              goto LAB_02f84f50;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,iVar1,0);
LAB_02f84f50:
        (*(code *)*puVar4)(puVar24 + -0x1b8,unaff_r8,puVar4[1]);
        uVar15 = *(undefined4 *)(iVar6 + 0x20);
        pcVar16 = *(code **)(iVar6 + 0xc);
        uVar10 = *(undefined4 *)(iVar6 + 0x14);
        *(undefined4 *)(puVar24 + -0x1c8) = *(undefined4 *)(puVar24 + -0x1b0);
        *(undefined4 *)(puVar24 + -0x1c4) = *(undefined4 *)(puVar24 + -0x1ac);
        *(undefined4 *)(puVar24 + -0x1c0) = uVar10;
        iVar1 = (*pcVar16)(uVar15,*(undefined4 *)(puVar24 + -0x1b0),
                           *(undefined4 *)(puVar24 + -0x1b8),*(undefined4 *)(puVar24 + -0x1b4));
      } while (iVar1 == 0);
      iVar1 = 0;
      goto LAB_02f84fa0;
    }
    uVar15 = *(undefined4 *)(iRam02f85130 + 0x2f85044);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,extraout_r2_10);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar2;
    piVar2 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f84fa0:
    if (unaff_r8 != (int *)0x0) {
      iVar14 = *unaff_r8;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(iRam02f85138 + 0x2f84fb8)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
            goto LAB_02f85000;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,**(int **)(iRam02f85138 + 0x2f84fb8),0);
LAB_02f85000:
      (*(code *)*puVar4)(unaff_r8,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar2;
  }
  if (unaff_r8 != (int *)0x0) {
    iVar1 = *unaff_r8;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar18 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar18[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f8513c + 0x2f850b0)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar18 * 8 + 0xc0);
          goto LAB_02f850f8;
        }
        uVar9 = uVar9 - 1;
        piVar18 = piVar18 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,(code *)**(int **)(iRam02f8513c + 0x2f850b0),0);
LAB_02f850f8:
    (*(code *)*puVar4)(unaff_r8,puVar4[1]);
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  uVar29 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar29 >> 0x20);
  piVar18 = (int *)uVar29;
  if ((bool)uVar28) {
                    /* WARNING: Could not recover jumptable at 0x02f85128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar2 = (int *)(*(code *)((int)__DT_REL + (0x4fe934 - (int)piVar18)))();
    return piVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x02f85134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  *(undefined4 *)(puVar24 + -0x1cc) = 0x2f85124;
  *(int *)(puVar24 + -0x1d0) = iVar14;
  *(int *)(puVar24 + -0x1d4) = iVar6;
  *(int *)(puVar24 + -0x1d8) = extraout_r2_10;
  *(int **)(puVar24 + -0x1dc) = unaff_r8;
  *(code **)(puVar24 + -0x1e0) = unaff_r7;
  *(undefined4 *)(puVar24 + -0x1e4) = uVar15;
  *(undefined4 *)(puVar24 + -0x1e8) = 0;
  *(int **)(puVar24 + -0x1ec) = piVar2;
  if (*(int *)(extraout_r2_11 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f854f0 + 0x2f8516c));
    func_0x01384978(*(undefined4 *)(iRam02f854f4 + 0x2f85178));
    if (*(int *)(extraout_r2_11 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_11);
    }
  }
  if (piVar18 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f854f8 + 0x2f85404);
  }
  else {
    if (iVar1 != 0) {
      iVar14 = **(int **)(extraout_r2_11 + 0x1c);
      if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
        iVar14 = func_0x014001f0(iVar14);
      }
      iVar6 = *piVar18;
      uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar14) {
            puVar4 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xc0);
            goto LAB_02f85208;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar18,iVar14,0);
LAB_02f85208:
      unaff_r8 = (int *)(*(code *)*puVar4)(piVar18,puVar4[1]);
      do {
        if (unaff_r8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *unaff_r8;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar2[-1] == **(int **)(iRam02f85500 + 0x2f85240)) {
              puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
              goto LAB_02f85288;
            }
            uVar9 = uVar9 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,**(int **)(iRam02f85500 + 0x2f85240),0);
LAB_02f85288:
        piVar2 = (int *)(*(code *)*puVar4)(unaff_r8,puVar4[1]);
        if (piVar2 == (int *)0x0) {
          iVar1 = 0;
          piVar2 = (int *)0x0;
          goto LAB_02f8536c;
        }
        if (unaff_r8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(*(int *)(extraout_r2_11 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
          iVar14 = func_0x014001f0(iVar14);
        }
        iVar6 = *unaff_r8;
        uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar18[-1] == iVar14) {
              puVar4 = (undefined4 *)(iVar6 + *piVar18 * 8 + 0xc0);
              goto LAB_02f8531c;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,iVar14,0);
LAB_02f8531c:
        (*(code *)*puVar4)(puVar24 + -0x200,unaff_r8,puVar4[1]);
        uVar15 = *(undefined4 *)(iVar1 + 0x20);
        pcVar16 = *(code **)(iVar1 + 0xc);
        uVar10 = *(undefined4 *)(iVar1 + 0x14);
        *(undefined4 *)(puVar24 + -0x210) = *(undefined4 *)(puVar24 + -0x1f8);
        *(undefined4 *)(puVar24 + -0x20c) = *(undefined4 *)(puVar24 + -500);
        *(undefined4 *)(puVar24 + -0x208) = uVar10;
        iVar14 = (*pcVar16)(uVar15,*(undefined4 *)(puVar24 + -0x1f8),
                            *(undefined4 *)(puVar24 + -0x200),*(undefined4 *)(puVar24 + -0x1fc));
      } while (iVar14 == 0);
      iVar1 = 0;
      goto LAB_02f8536c;
    }
    uVar15 = *(undefined4 *)(iRam02f854fc + 0x2f85410);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,extraout_r2_11);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar2;
    piVar2 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f8536c:
    if (unaff_r8 != (int *)0x0) {
      iVar14 = *unaff_r8;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(iRam02f85504 + 0x2f85384)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
            goto LAB_02f853cc;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,**(int **)(iRam02f85504 + 0x2f85384),0);
LAB_02f853cc:
      (*(code *)*puVar4)(unaff_r8,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar2;
  }
  if (unaff_r8 != (int *)0x0) {
    iVar6 = *unaff_r8;
    uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar2[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f85508 + 0x2f8547c)) {
          puVar4 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xc0);
          goto LAB_02f854c4;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(unaff_r8,(code *)**(int **)(iRam02f85508 + 0x2f8547c),0);
LAB_02f854c4:
    (*(code *)*puVar4)(unaff_r8,puVar4[1]);
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  uVar29 = func_0x01062280();
  iVar6 = (int)((ulonglong)uVar29 >> 0x20);
  piVar2 = (int *)uVar29;
  if ((bool)uVar28) {
                    /* WARNING: Could not recover jumptable at 0x02f854f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar2 = (int *)(*(code *)(-0x78000000 - (int)piVar2))();
    return piVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x02f85500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  *(undefined4 *)(puVar24 + -0x214) = 0x2f854f0;
  *(int *)(puVar24 + -0x218) = iVar1;
  *(int *)(puVar24 + -0x21c) = extraout_r2_11;
  *(int **)(puVar24 + -0x220) = unaff_r8;
  *(code **)(puVar24 + -0x224) = unaff_r7;
  *(undefined4 *)(puVar24 + -0x228) = uVar15;
  *(undefined4 *)(puVar24 + -0x22c) = 0;
  *(int **)(puVar24 + -0x230) = piVar18;
  if (*(int *)(extraout_r2_12 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f858a8 + 0x2f85538));
    func_0x01384978(*(undefined4 *)(iRam02f858ac + 0x2f85544));
    if (*(int *)(extraout_r2_12 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_12);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f858b0 + 0x2f857bc);
  }
  else {
    if (iVar6 != 0) {
      iVar1 = **(int **)(extraout_r2_12 + 0x1c);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x014001f0(iVar1);
      }
      iVar14 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar18[-1] == iVar1) {
            puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
            goto LAB_02f855d4;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_02f855d4:
      piVar2 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
      piVar18 = *(int **)(iRam02f858b8 + 0x2f855f8);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar18) {
              puVar4 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
              goto LAB_02f85650;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,*piVar18,0);
LAB_02f85650:
        piVar11 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
        if (piVar11 == (int *)0x0) {
          iVar1 = 0;
          piVar11 = (int *)0x0;
          goto LAB_02f85724;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(*(int *)(extraout_r2_12 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar14 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar1) {
              puVar4 = (undefined4 *)(iVar14 + *piVar12 * 8 + 0xc0);
              goto LAB_02f856e4;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar1,0);
LAB_02f856e4:
        (*(code *)*puVar4)(puVar24 + -0x238,piVar2,puVar4[1]);
        iVar1 = (**(code **)(iVar6 + 0xc))
                          (*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)(puVar24 + -0x238),
                           *(undefined4 *)(puVar24 + -0x234),*(undefined4 *)(iVar6 + 0x14));
      } while (iVar1 == 0);
      iVar1 = 0;
      goto LAB_02f85724;
    }
    uVar15 = *(undefined4 *)(iRam02f858b4 + 0x2f857c8);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,extraout_r2_12);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar18 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar18;
    piVar11 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f85724:
    if (piVar2 != (int *)0x0) {
      iVar14 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar18[-1] == **(int **)(iRam02f858bc + 0x2f8573c)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
            goto LAB_02f85784;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f858bc + 0x2f8573c),0);
LAB_02f85784:
      (*(code *)*puVar4)(piVar2,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar11;
  }
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar18 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar18[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f858c0 + 0x2f85834)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar18 * 8 + 0xc0);
          goto LAB_02f8587c;
        }
        uVar9 = uVar9 - 1;
        piVar18 = piVar18 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,(code *)**(int **)(iRam02f858c0 + 0x2f85834),0);
LAB_02f8587c:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  uVar29 = func_0x01062280();
  iVar1 = (int)((ulonglong)uVar29 >> 0x20);
  piVar18 = (int *)uVar29;
  if ((bool)uVar28) {
                    /* WARNING: Could not recover jumptable at 0x02f858ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar2 = (int *)(*(code *)(0xbc - (int)piVar18))();
    return piVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x02f858b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  *(undefined4 *)(puVar24 + -0x23c) = 0x2f858a8;
  *(int *)(puVar24 + -0x240) = iVar14;
  *(int *)(puVar24 + -0x244) = extraout_r2_11;
  *(int **)(puVar24 + -0x248) = unaff_r8;
  *(code **)(puVar24 + -0x24c) = unaff_r7;
  *(undefined4 *)(puVar24 + -0x250) = uVar15;
  *(undefined4 *)(puVar24 + -0x254) = 0;
  *(int **)(puVar24 + -600) = piVar2;
  if (*(int *)(extraout_r2_13 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f85c50 + 0x2f858ec));
    func_0x01384978(*(undefined4 *)(iRam02f85c54 + 0x2f858f8));
    if (*(int *)(extraout_r2_13 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_13);
    }
  }
  if (piVar18 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f85c58 + 0x2f85b64);
  }
  else {
    if (iVar1 != 0) {
      iVar14 = **(int **)(extraout_r2_13 + 0x1c);
      if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
        iVar14 = func_0x014001f0(iVar14);
      }
      iVar6 = *piVar18;
      uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar14) {
            puVar4 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xc0);
            goto LAB_02f85988;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar18,iVar14,0);
LAB_02f85988:
      piVar18 = (int *)(*(code *)*puVar4)(piVar18,puVar4[1]);
      piVar2 = *(int **)(iRam02f85c60 + 0x2f859a8);
      do {
        if (piVar18 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *piVar18;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar2) {
              puVar4 = (undefined4 *)(iVar14 + *piVar11 * 8 + 0xc0);
              goto LAB_02f85a00;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar18,*piVar2,0);
LAB_02f85a00:
        piVar11 = (int *)(*(code *)*puVar4)(piVar18,puVar4[1]);
        if (piVar11 == (int *)0x0) {
          iVar1 = 0;
          piVar11 = (int *)0x0;
          goto LAB_02f85ad0;
        }
        if (piVar18 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(*(int *)(extraout_r2_13 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
          iVar14 = func_0x014001f0(iVar14);
        }
        iVar6 = *piVar18;
        uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar14) {
              puVar4 = (undefined4 *)(iVar6 + *piVar12 * 8 + 0xc0);
              goto LAB_02f85a94;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar18,iVar14,0);
LAB_02f85a94:
        uVar15 = (*(code *)*puVar4)(piVar18,puVar4[1]);
        iVar14 = (**(code **)(iVar1 + 0xc))
                           (*(undefined4 *)(iVar1 + 0x20),uVar15,*(undefined4 *)(iVar1 + 0x14));
      } while (iVar14 == 0);
      iVar1 = 0;
      goto LAB_02f85ad0;
    }
    uVar15 = *(undefined4 *)(iRam02f85c5c + 0x2f85b70);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,extraout_r2_13);
  uVar29 = func_0x01384928();
  uVar15 = (undefined4)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) == 1) {
    piVar2 = (int *)func_0x0145b008(uVar15);
    iVar1 = *piVar2;
    piVar11 = (int *)0x0;
    func_0x0145b0f8();
LAB_02f85ad0:
    if (piVar18 != (int *)0x0) {
      iVar14 = *piVar18;
      uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
        do {
          if (piVar2[-1] == **(int **)(iRam02f85c64 + 0x2f85ae8)) {
            puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
            goto LAB_02f85b30;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar18,**(int **)(iRam02f85c64 + 0x2f85ae8),0);
LAB_02f85b30:
      (*(code *)*puVar4)(piVar18,puVar4[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return piVar11;
  }
  if (piVar18 != (int *)0x0) {
    iVar1 = *piVar18;
    uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar2[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f85c68 + 0x2f85bdc)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar2 * 8 + 0xc0);
          goto LAB_02f85c24;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar18,(code *)**(int **)(iRam02f85c68 + 0x2f85bdc),0);
LAB_02f85c24:
    (*(code *)*puVar4)(piVar18,puVar4[1]);
  }
  uVar28 = 1;
  func_0x01459844(uVar15);
  iVar3 = 0x2f85c50;
  uVar29 = func_0x01062280();
  iVar6 = (int)((ulonglong)uVar29 >> 0x20);
  piVar2 = (int *)uVar29;
  bVar26 = false;
  iVar1 = extraout_r2_14;
  if ((bool)uVar28) {
    iVar1 = 0x3607a3a8;
    iVar3 = 0x200 - (int)piVar2;
    bVar26 = iVar3 == 0;
  }
  bVar27 = false;
  iVar20 = extraout_r2_12;
  if (bVar26) {
    iVar20 = 0x6800000 - iVar6;
    bVar27 = iVar20 == 0;
  }
  bVar26 = false;
  if (bVar27) {
    unaff_r7 = (code *)(0xa0 - extraout_r3_09);
    bVar26 = unaff_r7 == (code *)0x0;
  }
  bVar27 = false;
  if (bVar26) {
    iVar3 = 0x5800 - (int)piVar2;
    bVar27 = iVar3 == 0;
  }
  if (bVar27) {
    iVar1 = 0x3d07a39f;
  }
  *(int *)(puVar24 + -0x25c) = iVar3;
  *(int *)(puVar24 + -0x260) = iVar14;
  *(int *)(puVar24 + -0x264) = extraout_r2_13;
  *(int **)(puVar24 + -0x268) = unaff_r8;
  *(code **)(puVar24 + -0x26c) = unaff_r7;
  *(undefined4 *)(puVar24 + -0x270) = uVar15;
  *(undefined4 *)(puVar24 + -0x274) = 0;
  *(int **)(puVar24 + -0x278) = piVar18;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f85ff8 + 0x2f85c94));
    func_0x01384978(*(undefined4 *)(iRam02f85ffc + 0x2f85ca0));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x0140024c(iVar1);
    }
  }
  if (piVar2 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f86000 + 0x2f85f0c);
  }
  else {
    if (iVar6 != 0) {
      iVar14 = **(int **)(iVar1 + 0x1c);
      if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
        iVar14 = func_0x014001f0(iVar14);
      }
      iVar3 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar18[-1] == iVar14) {
            puVar4 = (undefined4 *)(iVar3 + *piVar18 * 8 + 0xc0);
            goto LAB_02f85d30;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar14,0);
LAB_02f85d30:
      piVar2 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
      piVar18 = *(int **)(iRam02f86008 + 0x2f85d50);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar11[-1] == *piVar18) {
              puVar4 = (undefined4 *)(iVar14 + *piVar11 * 8 + 0xc0);
              goto LAB_02f85da8;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,*piVar18,0);
LAB_02f85da8:
        piVar11 = (int *)(*(code *)*puVar4)(piVar2,puVar4[1]);
        if (piVar11 == (int *)0x0) {
          iVar1 = 0;
          piVar11 = (int *)0x0;
          goto LAB_02f85e78;
        }
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
          iVar14 = func_0x014001f0(iVar14);
        }
        iVar3 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar14) {
              puVar4 = (undefined4 *)(iVar3 + *piVar12 * 8 + 0xc0);
              goto LAB_02f85e3c;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar2,iVar14,0);
LAB_02f85e3c:
        uVar15 = (*(code *)*puVar4)(piVar2,puVar4[1]);
        iVar14 = (**(code **)(iVar6 + 0xc))
                           (*(undefined4 *)(iVar6 + 0x20),uVar15,*(undefined4 *)(iVar6 + 0x14));
      } while (iVar14 == 0);
      iVar1 = 0;
      goto LAB_02f85e78;
    }
    uVar15 = *(undefined4 *)(iRam02f86004 + 0x2f85f18);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,iVar1);
  uVar29 = func_0x01384928();
  iVar6 = (int)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) != 1) {
    if (piVar2 != (int *)0x0) {
      iVar3 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          unaff_r7 = (code *)piVar18[-1];
          if (unaff_r7 == (code *)**(int **)(iRam02f86010 + 0x2f85f84)) {
            puVar4 = (undefined4 *)(iVar3 + *piVar18 * 8 + 0xc0);
            goto LAB_02f85fcc;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar2,(code *)**(int **)(iRam02f86010 + 0x2f85f84),0);
LAB_02f85fcc:
      (*(code *)*puVar4)(piVar2,puVar4[1]);
    }
    uVar28 = 1;
    func_0x01459844(iVar6);
    iVar25 = 0x2f85ff8;
    uVar29 = func_0x01062280();
    iVar7 = (int)((ulonglong)uVar29 >> 0x20);
    piVar18 = (int *)uVar29;
    bVar26 = false;
    iVar3 = extraout_r2_15;
    if ((bool)uVar28) {
      iVar3 = -0x42f85ffd;
      iVar25 = 0x180000 - (int)piVar18;
      bVar26 = iVar25 == 0;
    }
    bVar27 = false;
    if (bVar26) {
      iVar20 = 0xc - iVar7;
      bVar27 = iVar20 == 0;
    }
    bVar26 = false;
    if (bVar27) {
      iVar6 = 0xf800 - extraout_r3_10;
      bVar26 = iVar6 == 0;
    }
    bVar27 = false;
    if (bVar26) {
      iVar25 = (int)&UNK_00b00000 - (int)piVar18;
      bVar27 = iVar25 == 0;
    }
    if (bVar27) {
      iVar3 = -0x2f85fd4;
      iVar7 = -0x2f85ee8;
    }
    *(int *)(puVar24 + -0x27c) = iVar25;
    *(int *)(puVar24 + -0x280) = iVar14;
    *(int *)(puVar24 + -0x284) = iVar20;
    *(int *)(puVar24 + -0x288) = iVar1;
    *(int **)(puVar24 + -0x28c) = unaff_r8;
    *(code **)(puVar24 + -0x290) = unaff_r7;
    *(int *)(puVar24 + -0x294) = iVar6;
    *(undefined4 *)(puVar24 + -0x298) = 0;
    *(int **)(puVar24 + -0x29c) = piVar2;
    *(int *)(puVar24 + -0x2b4) = iVar7;
    *(undefined4 *)(puVar24 + -0x2a4) = **(undefined4 **)(iRam02f8647c + 0x2f86038);
    piVar2 = *(int **)(iVar3 + 0x1c);
    if (piVar2 == (int *)0x0) {
      func_0x01384978(*(undefined4 *)(iRam02f86480 + 0x2f86054));
      func_0x01384978(*(undefined4 *)(iRam02f86484 + 0x2f86060));
      piVar2 = *(int **)(iVar3 + 0x1c);
      if (piVar2 == (int *)0x0) {
        func_0x0140024c(iVar3);
        piVar2 = *(int **)(iVar3 + 0x1c);
      }
    }
    iVar1 = piVar2[5];
    *(int *)(puVar24 + -0x2b0) = iVar3;
    iVar14 = *(int *)(iVar1 + 0x84);
    uVar9 = iVar14 + 7U & 0xfffffff8;
    puVar17 = puVar24 + (-0x2b8 - uVar9);
    puVar4 = (undefined4 *)(puVar17 + -uVar9);
    iVar1 = (int)puVar4 - uVar9;
    func_0x0145894c(iVar1,iVar14);
    if (piVar18 == (int *)0x0) goto LAB_02f86388;
    if (*(int *)(puVar24 + -0x2b4) == 0) {
      uVar15 = *(undefined4 *)(iRam02f8648c + 0x2f863a0);
      goto LAB_02f8639c;
    }
    iVar6 = *piVar2;
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x014001f0(iVar6);
    }
    iVar3 = *piVar18;
    uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar2[-1] == iVar6) {
          puVar5 = (undefined4 *)(iVar3 + *piVar2 * 8 + 0xc0);
          goto LAB_02f8612c;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar18,iVar6,0);
LAB_02f8612c:
    piVar2 = (int *)(*(code *)*puVar5)(piVar18,puVar5[1]);
    do {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar9 != 0) {
        piVar18 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          unaff_r7 = (code *)piVar18[-1];
          if (unaff_r7 == (code *)**(int **)(iRam02f86490 + 0x2f8615c)) {
            puVar5 = (undefined4 *)(iVar6 + *piVar18 * 8 + 0xc0);
            goto LAB_02f861a4;
          }
          uVar9 = uVar9 - 1;
          piVar18 = piVar18 + 2;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar2,(code *)**(int **)(iRam02f86490 + 0x2f8615c),0);
LAB_02f861a4:
      piVar18 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
      if (piVar18 == (int *)0x0) {
        iVar6 = 0;
        piVar18 = (int *)0x0;
        goto LAB_02f862e4;
      }
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(*(int *)(*(int *)(puVar24 + -0x2b0) + 0x1c) + 0xc);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x014001f0(iVar6);
      }
      iVar3 = *piVar2;
      uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar11[-1] == iVar6) {
            iVar6 = iVar3 + *piVar11 * 8 + 0xc0;
            goto LAB_02f8623c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar9 != 0);
      }
      iVar6 = func_0x014002dc(piVar2,iVar6,0);
LAB_02f8623c:
      iVar6 = *(int *)(iVar6 + 4);
      *(undefined1 **)(puVar24 + -0x2ac) = puVar17;
      uVar15 = *(undefined4 *)(iVar6 + 4);
      pcVar16 = *(code **)(iVar6 + 8);
      *(undefined1 **)(iVar1 + -8) = puVar17;
      (*pcVar16)(uVar15,iVar6,piVar2,puVar24 + -0x2ac);
      func_0x01458934(iVar1,puVar17,iVar14);
      func_0x01458934(puVar4,iVar1,iVar14);
      puVar8 = *(undefined4 **)(*(int *)(*(int *)(puVar24 + -0x2b0) + 0x1c) + 0x18);
      puVar5 = puVar4;
      if (-1 < *(int *)(*(int *)(*(int *)(*(int *)(puVar24 + -0x2b0) + 0x1c) + 0x14) + 0x14)) {
        puVar5 = (undefined4 *)*puVar4;
      }
      uVar15 = *puVar8;
      unaff_r7 = (code *)puVar8[2];
      *(undefined4 **)(puVar24 + -0x2ac) = puVar5;
      *(undefined1 **)(iVar1 + -8) = puVar24 + -0x2a5;
      (*unaff_r7)(uVar15,puVar8,*(undefined4 *)(puVar24 + -0x2b4),puVar24 + -0x2ac);
    } while (puVar24[-0x2a5] == '\0');
    iVar6 = 0;
LAB_02f862e4:
    do {
      if (piVar2 != (int *)0x0) {
        iVar3 = *piVar2;
        uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            unaff_r7 = (code *)piVar11[-1];
            if (unaff_r7 == (code *)**(int **)(iRam02f86494 + 0x2f862fc)) {
              puVar4 = (undefined4 *)(iVar3 + *piVar11 * 8 + 0xc0);
              goto LAB_02f86344;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)
                 func_0x014002dc(piVar2,(code *)**(int **)(iRam02f86494 + 0x2f862fc),0);
LAB_02f86344:
        (*(code *)*puVar4)(piVar2,puVar4[1]);
      }
      if (iVar6 != 0) {
        func_0x01384bec(iVar6);
      }
      if (**(int **)(iRam02f86498 + 0x2f86370) == *(int *)(puVar24 + -0x2a4)) {
        return piVar18;
      }
      func_0x0145b028(**(int **)(iRam02f86498 + 0x2f86370));
LAB_02f86388:
      uVar15 = *(undefined4 *)(iRam02f86488 + 0x2f86394);
LAB_02f8639c:
      uVar15 = func_0x01384988(uVar15);
      uVar15 = func_0x04a21c20(uVar15,0);
      func_0x01384aa0(uVar15,*(undefined4 *)(puVar24 + -0x2b0));
      uVar29 = func_0x01384928();
      iVar6 = (int)uVar29;
      if ((int)((ulonglong)uVar29 >> 0x20) != 1) goto LAB_02f863f0;
      piVar18 = (int *)func_0x0145b008(iVar6);
      iVar6 = *piVar18;
      piVar18 = (int *)0x0;
      func_0x0145b0f8();
    } while( true );
  }
  piVar18 = (int *)func_0x0145b008(iVar6);
  iVar1 = *piVar18;
  piVar11 = (int *)0x0;
  func_0x0145b0f8();
LAB_02f85e78:
  if (piVar2 != (int *)0x0) {
    iVar14 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
    if (uVar9 != 0) {
      piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
      do {
        if (piVar18[-1] == **(int **)(iRam02f8600c + 0x2f85e90)) {
          puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
          goto LAB_02f85ed8;
        }
        uVar9 = uVar9 - 1;
        piVar18 = piVar18 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(iRam02f8600c + 0x2f85e90),0);
LAB_02f85ed8:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  if (iVar1 != 0) {
    func_0x01384bec(iVar1);
  }
  return piVar11;
LAB_02f863f0:
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    uVar9 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        unaff_r7 = (code *)piVar11[-1];
        if (unaff_r7 == (code *)**(int **)(iRam02f8649c + 0x2f86408)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar11 * 8 + 0xc0);
          goto LAB_02f86450;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar2,(code *)**(int **)(iRam02f8649c + 0x2f86408),0);
LAB_02f86450:
    (*(code *)*puVar4)(piVar2,puVar4[1]);
  }
  uVar28 = 1;
  func_0x01459844(iVar6);
  iVar20 = 0x2f8647c;
  uVar29 = func_0x01062280();
  iVar3 = (int)((ulonglong)uVar29 >> 0x20);
  piVar11 = (int *)uVar29;
  bVar26 = false;
  if ((bool)uVar28) {
    iVar3 = -0x2f85cc8;
    iVar20 = 0x28000000 - (int)piVar11;
    bVar26 = iVar20 == 0;
  }
  bVar27 = false;
  iVar7 = iVar1;
  if (bVar26) {
    iVar7 = 0x380 - iVar3;
    bVar27 = iVar7 == 0;
  }
  bVar26 = false;
  if (bVar27) {
    iVar6 = 0x700000 - extraout_r3_11;
    bVar26 = iVar6 == 0;
  }
  bVar27 = false;
  if (bVar26) {
    iVar20 = -0x5c000000 - (int)piVar11;
    bVar27 = iVar20 == 0;
  }
  if (bVar27) {
    iVar3 = -0x2ebe4a4;
  }
  *(int *)(iVar1 + -4) = iVar20;
  *(undefined1 **)(iVar1 + -8) = puVar24 + -0x280;
  *(int *)(iVar1 + -0xc) = iVar14;
  *(int *)(iVar1 + -0x10) = iVar7;
  *(int **)(iVar1 + -0x14) = piVar18;
  *(code **)(iVar1 + -0x18) = unaff_r7;
  *(int *)(iVar1 + -0x1c) = iVar6;
  *(undefined4 *)(iVar1 + -0x20) = 0;
  *(int **)(iVar1 + -0x24) = piVar2;
  if (*(int *)(extraout_r2_16 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f86844 + 0x2f864cc));
    func_0x01384978(*(undefined4 *)(iRam02f86848 + 0x2f864d8));
    if (*(int *)(extraout_r2_16 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_16);
    }
  }
  if (piVar11 == (int *)0x0) {
    uVar15 = *(undefined4 *)(iRam02f8684c + 0x2f86758);
  }
  else {
    if (iVar3 != 0) {
      iVar14 = **(int **)(extraout_r2_16 + 0x1c);
      if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
        iVar14 = func_0x014001f0(iVar14);
      }
      iVar6 = *piVar11;
      uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar2[-1] == iVar14) {
            puVar4 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xc0);
            goto LAB_02f86568;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar11,iVar14,0);
LAB_02f86568:
      piVar11 = (int *)(*(code *)*puVar4)(piVar11,puVar4[1]);
      piVar2 = *(int **)(iRam02f86854 + 0x2f8658c);
      do {
        if (piVar11 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *piVar11;
        uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
        if (uVar9 != 0) {
          piVar18 = (int *)(*(int *)(iVar14 + 0x58) + 4);
          do {
            if (piVar18[-1] == *piVar2) {
              puVar4 = (undefined4 *)(iVar14 + *piVar18 * 8 + 0xc0);
              goto LAB_02f865e4;
            }
            uVar9 = uVar9 - 1;
            piVar18 = piVar18 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar11,*piVar2,0);
LAB_02f865e4:
        piVar18 = (int *)(*(code *)*puVar4)(piVar11,puVar4[1]);
        if (piVar18 == (int *)0x0) {
          iVar1 = 0;
          piVar18 = (int *)0x0;
          goto LAB_02f866c0;
        }
        if (piVar11 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar14 = *(int *)(*(int *)(extraout_r2_16 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar14 + 0xbd) & 1) == 0) {
          iVar14 = func_0x014001f0(iVar14);
        }
        iVar6 = *piVar11;
        uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar9 != 0) {
          piVar12 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar12[-1] == iVar14) {
              puVar4 = (undefined4 *)(iVar6 + *piVar12 * 8 + 0xc0);
              goto LAB_02f86678;
            }
            uVar9 = uVar9 - 1;
            piVar12 = piVar12 + 2;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar11,iVar14,0);
LAB_02f86678:
        (*(code *)*puVar4)(iVar1 + -0x30,piVar11,puVar4[1]);
        uVar15 = *(undefined4 *)(iVar3 + 0x20);
        pcVar16 = *(code **)(iVar3 + 0xc);
        *(undefined4 *)(iVar1 + -0x38) = *(undefined4 *)(iVar3 + 0x14);
        iVar14 = (*pcVar16)(uVar15,*(undefined4 *)(iVar1 + -0x30),*(undefined4 *)(iVar1 + -0x2c),
                            *(undefined4 *)(iVar1 + -0x28));
      } while (iVar14 == 0);
      iVar1 = 0;
      goto LAB_02f866c0;
    }
    uVar15 = *(undefined4 *)(iRam02f86850 + 0x2f86764);
  }
  uVar15 = func_0x01384988(uVar15);
  uVar15 = func_0x04a21c20(uVar15,0);
  func_0x01384aa0(uVar15,extraout_r2_16);
  uVar29 = func_0x01384928();
  iVar14 = (int)uVar29;
  if ((int)((ulonglong)uVar29 >> 0x20) != 1) {
    if (piVar11 != (int *)0x0) {
      iVar6 = *piVar11;
      uVar9 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar9 != 0) {
        piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          unaff_r7 = (code *)piVar2[-1];
          if (unaff_r7 == (code *)**(int **)(iRam02f8685c + 0x2f867d0)) {
            puVar4 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xc0);
            goto LAB_02f86818;
          }
          uVar9 = uVar9 - 1;
          piVar2 = piVar2 + 2;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar11,(code *)**(int **)(iRam02f8685c + 0x2f867d0),0)
      ;
LAB_02f86818:
      (*(code *)*puVar4)(piVar11,puVar4[1]);
    }
    uVar28 = 1;
    func_0x01459844(iVar14);
    iVar20 = 0x2f86844;
    uVar29 = func_0x01062280();
    pcVar16 = (code *)((ulonglong)uVar29 >> 0x20);
    iVar6 = (int)uVar29;
    bVar26 = false;
    if ((bool)uVar28) {
      pcVar16 = (code *)0xfd07d7b4;
      iVar20 = 10 - iVar6;
      bVar26 = iVar20 == 0;
    }
    bVar27 = false;
    if (bVar26) {
      iVar7 = 0x74000 - (int)pcVar16;
      bVar27 = iVar7 == 0;
    }
    uVar29 = CONCAT44(extraout_r2_17,iVar7);
    bVar26 = false;
    if (bVar27) {
      iVar14 = -0x54000000 - extraout_r3_12;
      bVar26 = iVar14 == 0;
    }
    bVar27 = false;
    if (bVar26) {
      iVar20 = 0x74 - iVar6;
      bVar27 = iVar20 == 0;
    }
    if (bVar27) {
      pcVar16 = (code *)0xfd07979c;
    }
    uVar30 = CONCAT44(pcVar16,iVar6);
    *(int *)(iVar1 + -0x3c) = iVar20;
    *(int **)(iVar1 + -0x40) = piVar18;
    *(code **)(iVar1 + -0x44) = unaff_r7;
    *(int *)(iVar1 + -0x48) = iVar14;
    *(undefined4 *)(iVar1 + -0x4c) = 0;
    *(int **)(iVar1 + -0x50) = piVar11;
    pcVar19 = (code *)(iVar1 + -0x58);
    piVar2 = *(int **)(iVar1 + -0x38);
    if (piVar2[7] == 0) {
      func_0x0140024c(piVar2);
    }
    uVar28 = iVar6 == 0;
    if ((bool)uVar28) {
      uVar15 = func_0x01384988(*(undefined4 *)(iRam02f868e0 + 0x2f868cc));
      uVar15 = func_0x04a21c20(uVar15,0);
      func_0x01384aa0(uVar15,piVar2);
      uVar29 = func_0x01384928();
      iVar14 = (int)((ulonglong)uVar29 >> 0x20);
      if ((bool)uVar28) {
        iVar7 = -iVar14;
      }
      *(undefined4 *)(iVar1 + -0x5c) = 0x2f868e0;
      *(int *)(iVar1 + -0x60) = iVar3;
      *(int *)(iVar1 + -100) = iVar7;
      *(int **)(iVar1 + -0x68) = piVar2;
      *(code **)(iVar1 + -0x6c) = pcVar16;
      *(int *)(iVar1 + -0x70) = extraout_r2_17;
      *(int *)(iVar1 + -0x74) = extraout_r3_12;
      *(undefined4 *)(iVar1 + -0x78) = 0;
      iVar3 = iVar1 + -0x60;
      piVar2 = *(int **)(iRam02f869dc + 0x2f86908);
      *(int *)(iVar1 + -0x80) = *piVar2;
      iVar6 = *(int *)(extraout_r2_18 + 0x1c);
      *(int *)(iVar1 + -0x90) = iVar14;
      if (iVar6 == 0) {
        func_0x0140024c(extraout_r2_18);
        iVar6 = *(int *)(extraout_r2_18 + 0x1c);
      }
      pcVar19 = (code *)((iVar1 + -0x90) - (*(int *)(*(int *)(iVar6 + 4) + 0x84) + 7U & 0xfffffff8))
      ;
      uVar28 = (int)uVar29 == 0;
      pcVar16 = pcVar19;
      if (!(bool)uVar28) {
        iVar20 = iVar1 + -0x90;
        if (*(int *)(*(int *)(iVar6 + 4) + 0x14) < 0) {
          iVar20 = iVar14;
        }
        func_0x01458934(pcVar19,iVar20);
        puVar4 = *(undefined4 **)(iVar6 + 8);
        iVar20 = *(int *)(*(int *)(iVar6 + 4) + 0x14);
        uVar15 = *puVar4;
        *(int *)(iVar1 + -0x8c) = (int)uVar29;
        if (-1 < iVar20) {
          pcVar16 = *(code **)pcVar19;
        }
        *(code **)(iVar1 + -0x88) = pcVar16;
        pcVar16 = (code *)puVar4[2];
        *(int *)(pcVar19 + -8) = iVar1 + -0x84;
        (*pcVar16)(uVar15,puVar4,0,iVar1 + -0x8c);
        uVar28 = *piVar2 == *(int *)(iVar1 + -0x80);
        if ((bool)uVar28) {
          return *(int **)(iVar1 + -0x84);
        }
        func_0x0145b028(*(int **)(iVar1 + -0x84));
      }
      uVar15 = func_0x01384988(*(undefined4 *)(iRam02f869e0 + 0x2f869c8));
      uVar15 = func_0x04a21c20(uVar15,0);
      func_0x01384aa0(uVar15,extraout_r2_18);
      iVar25 = 0x2f869dc;
      uVar30 = func_0x01384928();
      iVar1 = extraout_r2_19;
      iVar20 = extraout_r3_13;
      iVar7 = extraout_r2_18;
      if ((bool)uVar28) {
        uVar30 = CONCAT44(0x9d07961c,(int)uVar30);
        uVar29 = CONCAT44(iVar14,0x62fc69e4);
      }
    }
    else {
      *(undefined4 *)(iVar1 + -0x58) = *(undefined4 *)(piVar2[7] + 8);
      iVar25 = 0x2f868b8;
      iVar1 = extraout_r2_17;
      iVar20 = extraout_r3_12;
      iVar7 = extraout_r3_12;
    }
    *(int *)(pcVar19 + -4) = iVar25;
    *(int *)(pcVar19 + -8) = iVar3;
    *(int *)(pcVar19 + -0xc) = (int)uVar29;
    *(int **)(pcVar19 + -0x10) = piVar2;
    *(code **)(pcVar19 + -0x14) = pcVar16;
    *(int *)(pcVar19 + -0x18) = (int)((ulonglong)uVar29 >> 0x20);
    *(int *)(pcVar19 + -0x1c) = iVar7;
    *(int *)(pcVar19 + -0x20) = iVar6;
    iVar14 = *(int *)pcVar19;
    piVar2 = *(int **)(iVar14 + 0x1c);
    if (piVar2 == (int *)0x0) {
      func_0x0140024c(iVar14);
      piVar2 = *(int **)(iVar14 + 0x1c);
    }
    if ((*(ushort *)(*piVar2 + 0xbd) & 1) == 0) {
      func_0x014001f0();
    }
    piVar2 = (int *)func_0x01384be4();
    func_0x03200f40(piVar2,0xfffffffe,*(undefined4 *)(*(int *)(iVar14 + 0x1c) + 4));
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    piVar2[8] = (int)uVar30;
    piVar2[0xc] = (int)((ulonglong)uVar30 >> 0x20);
    piVar2[0xd] = iVar1;
    piVar2[0xe] = iVar20;
    return piVar2;
  }
  piVar2 = (int *)func_0x0145b008(iVar14);
  iVar1 = *piVar2;
  piVar18 = (int *)0x0;
  func_0x0145b0f8();
LAB_02f866c0:
  if (piVar11 != (int *)0x0) {
    iVar14 = *piVar11;
    uVar9 = (uint)*(ushort *)(iVar14 + 0xb6);
    if (uVar9 != 0) {
      piVar2 = (int *)(*(int *)(iVar14 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(iRam02f86858 + 0x2f866d8)) {
          puVar4 = (undefined4 *)(iVar14 + *piVar2 * 8 + 0xc0);
          goto LAB_02f86720;
        }
        uVar9 = uVar9 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar11,**(int **)(iRam02f86858 + 0x2f866d8),0);
LAB_02f86720:
    (*(code *)*puVar4)(piVar11,puVar4[1]);
  }
  if (iVar1 != 0) {
    func_0x01384bec(iVar1);
  }
  return piVar18;
}



// ===== FAT.ActivityIndepenBingo$$GetBingoTotalNum RVA 0x1a2c06c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a3c06c(int param_1)

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
  
  pcVar3 = (char *)(_UNK_01a3c11c + 0x1a3c080);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3c120 + 0x1a3c094));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8030,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8030,0);
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
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x68) + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    return *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0x18);
  }
  return 0;
}



// ===== FAT.ActivityIndepenBingo$$GetBingoCount RVA 0x1a2c128 =====

/* WARNING: Removing unreachable block (ram,0x02f930ac) */
/* WARNING: Removing unreachable block (ram,0x02f92934) */
/* WARNING: Removing unreachable block (ram,0x02f9219c) */
/* WARNING: Removing unreachable block (ram,0x02f92568) */
/* WARNING: Removing unreachable block (ram,0x02f92cf0) */
/* WARNING: Removing unreachable block (ram,0x02f93540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a3c128(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  undefined *extraout_r2_04;
  int extraout_r2_05;
  int extraout_r2_06;
  int extraout_r2_07;
  undefined4 uVar9;
  int *piVar10;
  char *pcVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  code *pcVar15;
  int *piVar16;
  int iVar17;
  int unaff_r8;
  int *piVar18;
  int *unaff_r9;
  int *unaff_r10;
  int *piVar19;
  undefined1 *puVar20;
  int iVar21;
  undefined1 uVar22;
  bool bVar23;
  bool bVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  int iStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  int *piStack_44;
  int *piStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar11 = (char *)(_UNK_01a3c27c + 0x1a3c13c);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3c280 + 0x1a3c150));
    func_0x01384978(*(undefined4 *)(_UNK_01a3c284 + 0x1a3c15c));
    func_0x01384978(*(undefined4 *)(_UNK_01a3c288 + 0x1a3c168));
    func_0x01384978(*(undefined4 *)(_UNK_01a3c28c + 0x1a3c174));
    *pcVar11 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8031,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8031,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&iStack_48,0,0);
    iStack_30 = iStack_48;
    uStack_2c = piStack_44;
    uStack_28 = piStack_40;
    uStack_24 = iStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&iStack_30,param_1,0);
    iVar12 = *(int *)(iVar1 + 8);
    uVar14 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 2;
    if (iVar1 == 0) {
      uVar9 = 1;
    }
    uStack_50 = 0;
    iStack_4c = 0;
    func_0x0245495c(iVar12,uVar14,&iStack_30,uVar9);
    iVar1 = func_0x0245498c(&iStack_30,0,0);
    return iVar1;
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    return 0;
  }
  piVar16 = *(int **)(_UNK_01a3c290 + 0x1a3c1d8);
  piVar10 = *(int **)(*(int *)(param_1 + 0x68) + 8);
  iVar1 = *piVar16;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar16;
  }
  iVar12 = *(int *)(*(int *)(iVar1 + 0x5c) + 8);
  if (iVar12 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar16;
    }
    uVar14 = **(undefined4 **)(iVar1 + 0x5c);
    iVar12 = func_0x01384be4(**(undefined4 **)(_UNK_01a3c294 + 0x1a3c224));
    func_0x02450808(iVar12,uVar14,**(undefined4 **)(_UNK_01a3c298 + 0x1a3c244),0);
    *(int *)(*(int *)(*piVar16 + 0x5c) + 8) = iVar12;
  }
  iVar1 = **(int **)(_UNK_01a3c29c + 0x1a3c268);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f921b0 + 0x2f91e24));
    func_0x01384978(*(undefined4 *)(iRam02f921b4 + 0x2f91e30));
    if (*(int *)(iVar1 + 0x1c) == 0) {
      func_0x0140024c(iVar1);
    }
  }
  if (piVar10 == (int *)0x0) {
    uVar14 = *(undefined4 *)(iRam02f921b8 + 0x2f920b4);
LAB_02f920bc:
    uVar14 = func_0x01384988(uVar14);
    uVar14 = func_0x04a21c20(uVar14,0);
    func_0x01384aa0(uVar14,iVar1);
    func_0x01384928();
  }
  else {
    if (iVar12 == 0) {
      uVar14 = *(undefined4 *)(iRam02f921bc + 0x2f920c0);
      goto LAB_02f920bc;
    }
    iVar6 = **(int **)(iVar1 + 0x1c);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x014001f0(iVar6);
    }
    iVar2 = *piVar10;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar16[-1] == iVar6) {
          puVar3 = (undefined4 *)(iVar2 + *piVar16 * 8 + 0xc0);
          goto LAB_02f91ec0;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,iVar6,0);
LAB_02f91ec0:
    piVar10 = (int *)(*(code *)*puVar3)(piVar10,puVar3[1]);
    unaff_r8 = 0;
    unaff_r9 = &iStack_30;
    unaff_r10 = *(int **)(iRam02f921c0 + 0x2f91ee8);
LAB_02f91ee4:
    do {
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *piVar10;
      uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar16[-1] == *unaff_r10) {
            puVar3 = (undefined4 *)(iVar6 + *piVar16 * 8 + 0xc0);
            goto LAB_02f91f40;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar10,*unaff_r10,0);
LAB_02f91f40:
      iVar6 = (*(code *)*puVar3)(piVar10,puVar3[1]);
      if (iVar6 == 0) {
        iVar1 = 0;
        goto LAB_02f9201c;
      }
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x014001f0(iVar6);
      }
      iVar2 = *piVar10;
      uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar16[-1] == iVar6) {
            puVar3 = (undefined4 *)(iVar2 + *piVar16 * 8 + 0xc0);
            goto LAB_02f91fd0;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar10,iVar6,0);
LAB_02f91fd0:
      (*(code *)*puVar3)(unaff_r9,piVar10,puVar3[1]);
      uStack_38 = *(undefined4 *)(iVar12 + 0x14);
      iVar6 = (**(code **)(iVar12 + 0xc))
                        (*(undefined4 *)(iVar12 + 0x20),iStack_30,uStack_2c,uStack_28);
    } while (iVar6 == 0);
    if (unaff_r8 != 0x7fffffff) {
      unaff_r8 = unaff_r8 + 1;
      goto LAB_02f91ee4;
    }
  }
  uVar14 = func_0x01384bf8();
  func_0x01384aa0(uVar14,iVar1);
  uVar25 = func_0x01384928();
  uVar14 = (undefined4)uVar25;
  if ((int)((ulonglong)uVar25 >> 0x20) == 1) {
    piVar16 = (int *)func_0x0145b008(uVar14);
    iVar1 = *piVar16;
    func_0x0145b0f8();
LAB_02f9201c:
    if (piVar10 != (int *)0x0) {
      iVar12 = *piVar10;
      uVar8 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(int *)(iVar12 + 0x58) + 4);
        do {
          if (piVar16[-1] == **(int **)(iRam02f921c4 + 0x2f92034)) {
            puVar3 = (undefined4 *)(iVar12 + *piVar16 * 8 + 0xc0);
            goto LAB_02f9207c;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f921c4 + 0x2f92034),0);
LAB_02f9207c:
      (*(code *)*puVar3)(piVar10,puVar3[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return unaff_r8;
  }
  iVar6 = 0;
  if (piVar10 != (int *)0x0) {
    iVar2 = *piVar10;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        iVar12 = piVar16[-1];
        if (iVar12 == **(int **)(iRam02f921c8 + 0x2f9213c)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar16 * 8 + 0xc0);
          goto LAB_02f92184;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f921c8 + 0x2f9213c),0);
LAB_02f92184:
    (*(code *)*puVar3)(piVar10,puVar3[1]);
  }
  uVar22 = 1;
  func_0x01459844(uVar14);
  iVar21 = 0x2f921b0;
  uVar25 = func_0x01062280();
  iVar17 = (int)((ulonglong)uVar25 >> 0x20);
  piVar16 = (int *)uVar25;
  bVar23 = false;
  iVar2 = extraout_r2;
  if ((bool)uVar22) {
    uVar14 = 0xfd06defc;
    iVar2 = (int)&UNK_03400000 - (int)piVar16;
    bVar23 = iVar2 == 0;
  }
  bVar24 = false;
  if (bVar23) {
    iVar21 = 6 - (int)piVar16;
    bVar24 = iVar21 == 0;
  }
  bVar23 = false;
  if (bVar24) {
    unaff_r10 = (int *)((int)__DT_SYMTAB + (0x3df0 - iVar2));
    bVar23 = unaff_r10 == (int *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    iVar2 = 0x600000 - (int)piVar16;
    bVar24 = iVar2 == 0;
  }
  if (bVar24) {
    iVar6 = 0x2500 - iVar21;
  }
  piVar19 = &iStack_60;
  piStack_58 = piVar10;
  iStack_54 = iVar6;
  uStack_50 = uVar14;
  iStack_4c = iVar12;
  iStack_48 = unaff_r8;
  piStack_44 = unaff_r9;
  piStack_40 = unaff_r10;
  iStack_3c = iVar21;
  if (*(int *)(iVar2 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f9257c + 0x2f921f8));
    func_0x01384978(*(undefined4 *)(iRam02f92580 + 0x2f92204));
    if (*(int *)(iVar2 + 0x1c) == 0) {
      func_0x0140024c(iVar2);
    }
  }
  if (piVar16 == (int *)0x0) {
    uVar14 = *(undefined4 *)(iRam02f92584 + 0x2f92480);
LAB_02f92488:
    uVar14 = func_0x01384988(uVar14);
    uVar14 = func_0x04a21c20(uVar14,0);
    func_0x01384aa0(uVar14,iVar2);
    func_0x01384928();
  }
  else {
    if (iVar17 == 0) {
      uVar14 = *(undefined4 *)(iRam02f92588 + 0x2f9248c);
      goto LAB_02f92488;
    }
    iVar12 = **(int **)(iVar2 + 0x1c);
    if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
      iVar12 = func_0x014001f0(iVar12);
    }
    iVar6 = *piVar16;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar10[-1] == iVar12) {
          puVar3 = (undefined4 *)(iVar6 + *piVar10 * 8 + 0xc0);
          goto LAB_02f92294;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar16,iVar12,0);
LAB_02f92294:
    piVar16 = (int *)(*(code *)*puVar3)(piVar16,puVar3[1]);
    unaff_r8 = 0;
    unaff_r10 = *(int **)(iRam02f9258c + 0x2f922bc);
LAB_02f922b8:
    do {
      if (piVar16 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar12 = *piVar16;
      uVar8 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
        do {
          if (piVar10[-1] == *unaff_r10) {
            puVar3 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xc0);
            goto LAB_02f92314;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar16,*unaff_r10,0);
LAB_02f92314:
      iVar12 = (*(code *)*puVar3)(piVar16,puVar3[1]);
      if (iVar12 == 0) {
        iVar1 = 0;
        goto LAB_02f923e8;
      }
      if (piVar16 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar12 = *(int *)(*(int *)(iVar2 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
        iVar12 = func_0x014001f0(iVar12);
      }
      iVar6 = *piVar16;
      uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar10[-1] == iVar12) {
            puVar3 = (undefined4 *)(iVar6 + *piVar10 * 8 + 0xc0);
            goto LAB_02f923a4;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar16,iVar12,0);
LAB_02f923a4:
      (*(code *)*puVar3)(&iStack_60,piVar16,puVar3[1]);
      iVar12 = (**(code **)(iVar17 + 0xc))
                         (*(undefined4 *)(iVar17 + 0x20),iStack_60,uStack_5c,
                          *(undefined4 *)(iVar17 + 0x14));
    } while (iVar12 == 0);
    unaff_r9 = &iStack_60;
    if (unaff_r8 != 0x7fffffff) {
      unaff_r8 = unaff_r8 + 1;
      goto LAB_02f922b8;
    }
  }
  uVar14 = func_0x01384bf8();
  func_0x01384aa0(uVar14,iVar2);
  uVar25 = func_0x01384928();
  uVar14 = (undefined4)uVar25;
  if ((int)((ulonglong)uVar25 >> 0x20) == 1) {
    piVar10 = (int *)func_0x0145b008(uVar14);
    iVar1 = *piVar10;
    func_0x0145b0f8();
LAB_02f923e8:
    if (piVar16 != (int *)0x0) {
      iVar12 = *piVar16;
      uVar8 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(iRam02f92590 + 0x2f92400)) {
            puVar3 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xc0);
            goto LAB_02f92448;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar16,**(int **)(iRam02f92590 + 0x2f92400),0);
LAB_02f92448:
      (*(code *)*puVar3)(piVar16,puVar3[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return unaff_r8;
  }
  uVar9 = 0;
  if (piVar16 != (int *)0x0) {
    iVar12 = *piVar16;
    uVar8 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        iVar17 = piVar10[-1];
        if (iVar17 == **(int **)(iRam02f92594 + 0x2f92508)) {
          puVar3 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xc0);
          goto LAB_02f92550;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar16,**(int **)(iRam02f92594 + 0x2f92508),0);
LAB_02f92550:
    (*(code *)*puVar3)(piVar16,puVar3[1]);
  }
  uVar22 = 1;
  func_0x01459844(uVar14);
  uVar25 = func_0x01062280();
  iVar6 = (int)((ulonglong)uVar25 >> 0x20);
  piVar10 = (int *)uVar25;
  bVar23 = false;
  iVar12 = extraout_r2_00;
  if ((bool)uVar22) {
    uVar9 = 0xfd07b284;
    iVar12 = -0xffffffd - (int)piVar10;
    bVar23 = iVar12 == 0;
  }
  bVar24 = false;
  if (bVar23) {
    piVar19 = (int *)(-(int)piVar10 + 0x1300);
    bVar24 = -(int)piVar10 == -0x1300;
  }
  bVar23 = false;
  if (bVar24) {
    unaff_r10 = (int *)(&UNK_02100000 + -iVar12);
    bVar23 = unaff_r10 == (int *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    iVar12 = 0x10000001 - (int)piVar10;
    bVar24 = iVar12 == 0;
  }
  if (bVar24) {
    uVar9 = 0xfd38da84;
  }
  *(undefined4 *)((int)piVar19 + -4) = 0x2f9257c;
  *(int **)((int)piVar19 + -8) = unaff_r10;
  *(int **)((int)piVar19 + -0xc) = unaff_r9;
  *(int *)((int)piVar19 + -0x10) = unaff_r8;
  *(int *)((int)piVar19 + -0x14) = iVar17;
  *(undefined4 *)((int)piVar19 + -0x18) = uVar14;
  *(undefined4 *)((int)piVar19 + -0x1c) = uVar9;
  *(int **)((int)piVar19 + -0x20) = piVar16;
  puVar20 = (undefined1 *)((int)piVar19 + -0x28);
  if (*(int *)(iVar12 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f92948 + 0x2f925c4));
    func_0x01384978(*(undefined4 *)(iRam02f9294c + 0x2f925d0));
    if (*(int *)(iVar12 + 0x1c) == 0) {
      func_0x0140024c(iVar12);
    }
  }
  if (piVar10 == (int *)0x0) {
    uVar14 = *(undefined4 *)(iRam02f92950 + 0x2f9284c);
LAB_02f92854:
    uVar14 = func_0x01384988(uVar14);
    uVar14 = func_0x04a21c20(uVar14,0);
    func_0x01384aa0(uVar14,iVar12);
    func_0x01384928();
  }
  else {
    if (iVar6 == 0) {
      uVar14 = *(undefined4 *)(iRam02f92954 + 0x2f92858);
      goto LAB_02f92854;
    }
    iVar2 = **(int **)(iVar12 + 0x1c);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x014001f0(iVar2);
    }
    iVar17 = *piVar10;
    uVar8 = (uint)*(ushort *)(iVar17 + 0xb6);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(int *)(iVar17 + 0x58) + 4);
      do {
        if (piVar16[-1] == iVar2) {
          puVar3 = (undefined4 *)(iVar17 + *piVar16 * 8 + 0xc0);
          goto LAB_02f92660;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,iVar2,0);
LAB_02f92660:
    piVar10 = (int *)(*(code *)*puVar3)(piVar10,puVar3[1]);
    unaff_r8 = 0;
    unaff_r10 = *(int **)(iRam02f92958 + 0x2f92688);
LAB_02f92684:
    do {
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *piVar10;
      uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar16[-1] == *unaff_r10) {
            puVar3 = (undefined4 *)(iVar2 + *piVar16 * 8 + 0xc0);
            goto LAB_02f926e0;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar10,*unaff_r10,0);
LAB_02f926e0:
      iVar2 = (*(code *)*puVar3)(piVar10,puVar3[1]);
      if (iVar2 == 0) {
        iVar1 = 0;
        goto LAB_02f927b4;
      }
      if (piVar10 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(*(int *)(iVar12 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x014001f0(iVar2);
      }
      iVar17 = *piVar10;
      uVar8 = (uint)*(ushort *)(iVar17 + 0xb6);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(int *)(iVar17 + 0x58) + 4);
        do {
          if (piVar16[-1] == iVar2) {
            puVar3 = (undefined4 *)(iVar17 + *piVar16 * 8 + 0xc0);
            goto LAB_02f92770;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar10,iVar2,0);
LAB_02f92770:
      (*(code *)*puVar3)((undefined1 *)((int)piVar19 + -0x28),piVar10,puVar3[1]);
      iVar2 = (**(code **)(iVar6 + 0xc))
                        (*(undefined4 *)(iVar6 + 0x20),*(undefined4 *)((int)piVar19 + -0x28),
                         *(undefined4 *)((int)piVar19 + -0x24),*(undefined4 *)(iVar6 + 0x14));
    } while (iVar2 == 0);
    unaff_r9 = (int *)((int)piVar19 + -0x28);
    if (unaff_r8 != 0x7fffffff) {
      unaff_r8 = unaff_r8 + 1;
      goto LAB_02f92684;
    }
  }
  uVar14 = func_0x01384bf8();
  func_0x01384aa0(uVar14,iVar12);
  uVar25 = func_0x01384928();
  uVar14 = (undefined4)uVar25;
  if ((int)((ulonglong)uVar25 >> 0x20) == 1) {
    piVar16 = (int *)func_0x0145b008(uVar14);
    iVar1 = *piVar16;
    func_0x0145b0f8();
LAB_02f927b4:
    if (piVar10 != (int *)0x0) {
      iVar12 = *piVar10;
      uVar8 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(int *)(iVar12 + 0x58) + 4);
        do {
          if (piVar16[-1] == **(int **)(iRam02f9295c + 0x2f927cc)) {
            puVar3 = (undefined4 *)(iVar12 + *piVar16 * 8 + 0xc0);
            goto LAB_02f92814;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f9295c + 0x2f927cc),0);
LAB_02f92814:
      (*(code *)*puVar3)(piVar10,puVar3[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return unaff_r8;
  }
  iVar12 = 0;
  if (piVar10 != (int *)0x0) {
    iVar2 = *piVar10;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        iVar6 = piVar16[-1];
        if (iVar6 == **(int **)(iRam02f92960 + 0x2f928d4)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar16 * 8 + 0xc0);
          goto LAB_02f9291c;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f92960 + 0x2f928d4),0);
LAB_02f9291c:
    (*(code *)*puVar3)(piVar10,puVar3[1]);
  }
  uVar22 = 1;
  func_0x01459844(uVar14);
  uVar25 = func_0x01062280();
  iVar17 = (int)((ulonglong)uVar25 >> 0x20);
  piVar16 = (int *)uVar25;
  bVar23 = false;
  iVar2 = extraout_r2_01;
  if ((bool)uVar22) {
    iVar12 = -0x2f62948;
    iVar2 = 0x30 - (int)piVar16;
    bVar23 = iVar2 == 0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar20 = (undefined1 *)(-(int)piVar16 + 0x200000);
    bVar24 = -(int)piVar16 == -0x200000;
  }
  bVar23 = false;
  if (bVar24) {
    unaff_r10 = (int *)(-0x1ffffffe - iVar2);
    bVar23 = unaff_r10 == (int *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    iVar17 = 0x1e0 - (int)piVar16;
    bVar24 = iVar17 == 0;
  }
  if (bVar24) {
    iVar12 = 0x3c06d6b8;
  }
  *(undefined4 *)(puVar20 + -4) = 0x2f92948;
  *(int *)(puVar20 + -8) = iVar1;
  *(int **)(puVar20 + -0xc) = unaff_r9;
  *(int *)(puVar20 + -0x10) = unaff_r8;
  *(int *)(puVar20 + -0x14) = iVar6;
  *(undefined4 *)(puVar20 + -0x18) = uVar14;
  *(int *)(puVar20 + -0x1c) = iVar12;
  puVar3 = (undefined4 *)(puVar20 + -0x20);
  *puVar3 = piVar10;
  if (*(int *)(iVar2 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f92d04 + 0x2f9298c));
    func_0x01384978(*(undefined4 *)(iRam02f92d08 + 0x2f92998));
    if (*(int *)(iVar2 + 0x1c) == 0) {
      func_0x0140024c(iVar2);
    }
  }
  if (piVar16 == (int *)0x0) {
    uVar14 = *(undefined4 *)(iRam02f92d0c + 0x2f92c08);
LAB_02f92c10:
    uVar14 = func_0x01384988(uVar14);
    uVar14 = func_0x04a21c20(uVar14,0);
    func_0x01384aa0(uVar14,iVar2);
    func_0x01384928();
  }
  else {
    if (iVar17 == 0) {
      uVar14 = *(undefined4 *)(iRam02f92d10 + 0x2f92c14);
      goto LAB_02f92c10;
    }
    iVar6 = **(int **)(iVar2 + 0x1c);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x014001f0(iVar6);
    }
    iVar21 = *piVar16;
    uVar8 = (uint)*(ushort *)(iVar21 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar21 + 0x58) + 4);
      do {
        iVar12 = piVar10[-1];
        if (iVar12 == iVar6) {
          puVar4 = (undefined4 *)(iVar21 + *piVar10 * 8 + 0xc0);
          goto LAB_02f92a28;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar16,iVar6,0);
LAB_02f92a28:
    piVar16 = (int *)(*(code *)*puVar4)(piVar16,puVar4[1]);
    unaff_r8 = 0;
    unaff_r9 = *(int **)(iRam02f92d14 + 0x2f92a4c);
LAB_02f92a48:
    do {
      if (piVar16 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *piVar16;
      uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          iVar12 = piVar10[-1];
          if (iVar12 == *unaff_r9) {
            puVar4 = (undefined4 *)(iVar6 + *piVar10 * 8 + 0xc0);
            goto LAB_02f92aa4;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar16,*unaff_r9,0);
LAB_02f92aa4:
      iVar6 = (*(code *)*puVar4)(piVar16,puVar4[1]);
      if (iVar6 == 0) {
        iVar1 = 0;
        goto LAB_02f92b74;
      }
      if (piVar16 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(*(int *)(iVar2 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x014001f0(iVar6);
      }
      iVar21 = *piVar16;
      uVar8 = (uint)*(ushort *)(iVar21 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar21 + 0x58) + 4);
        do {
          iVar12 = piVar10[-1];
          if (iVar12 == iVar6) {
            puVar4 = (undefined4 *)(iVar21 + *piVar10 * 8 + 0xc0);
            goto LAB_02f92b34;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar16,iVar6,0);
LAB_02f92b34:
      uVar14 = (*(code *)*puVar4)(piVar16,puVar4[1]);
      iVar6 = (**(code **)(iVar17 + 0xc))
                        (*(undefined4 *)(iVar17 + 0x20),uVar14,*(undefined4 *)(iVar17 + 0x14));
    } while (iVar6 == 0);
    if (unaff_r8 != 0x7fffffff) {
      unaff_r8 = unaff_r8 + 1;
      goto LAB_02f92a48;
    }
  }
  uVar14 = func_0x01384bf8();
  func_0x01384aa0(uVar14,iVar2);
  uVar25 = func_0x01384928();
  uVar14 = (undefined4)uVar25;
  if ((int)((ulonglong)uVar25 >> 0x20) == 1) {
    piVar10 = (int *)func_0x0145b008(uVar14);
    iVar1 = *piVar10;
    func_0x0145b0f8();
LAB_02f92b74:
    if (piVar16 != (int *)0x0) {
      iVar12 = *piVar16;
      uVar8 = (uint)*(ushort *)(iVar12 + 0xb6);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(int *)(iVar12 + 0x58) + 4);
        do {
          if (piVar10[-1] == **(int **)(iRam02f92d18 + 0x2f92b8c)) {
            puVar3 = (undefined4 *)(iVar12 + *piVar10 * 8 + 0xc0);
            goto LAB_02f92bd4;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar16,**(int **)(iRam02f92d18 + 0x2f92b8c),0);
LAB_02f92bd4:
      (*(code *)*puVar3)(piVar16,puVar3[1]);
    }
    if (iVar1 != 0) {
      func_0x01384bec(iVar1);
    }
    return unaff_r8;
  }
  if (piVar16 != (int *)0x0) {
    iVar6 = *piVar16;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        iVar12 = piVar10[-1];
        if (iVar12 == **(int **)(iRam02f92d1c + 0x2f92c90)) {
          puVar4 = (undefined4 *)(iVar6 + *piVar10 * 8 + 0xc0);
          goto LAB_02f92cd8;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar16,**(int **)(iRam02f92d1c + 0x2f92c90),0);
LAB_02f92cd8:
    (*(code *)*puVar4)(piVar16,puVar4[1]);
  }
  uVar22 = 1;
  func_0x01459844(uVar14);
  uVar25 = func_0x01062280();
  pcVar11 = (char *)((ulonglong)uVar25 >> 0x20);
  piVar10 = (int *)uVar25;
  bVar23 = false;
  if ((bool)uVar22) {
    iVar12 = 0xe06d2fc;
    pcVar11 = (char *)(0x6800 - (int)piVar10);
    bVar23 = pcVar11 == (char *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    puVar3 = (undefined4 *)(-(int)piVar10 + 0x31000000);
    bVar24 = -(int)piVar10 == -0x31000000;
  }
  bVar23 = false;
  if (bVar24) {
    unaff_r9 = (int *)(0x3f0 - extraout_r2_02);
    bVar23 = unaff_r9 == (int *)0x0;
  }
  bVar24 = false;
  if (bVar23) {
    pcVar11 = "_ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE10pubseekposENS_4fposI9mbstate_tEEj"
              + (0x40 - (int)piVar10);
    bVar24 = pcVar11 == (char *)0x0;
  }
  if (bVar24) {
    iVar12 = -0x2f92d00;
  }
  puVar3[-1] = 0x2f92d04;
  puVar3[-2] = iVar1;
  puVar3[-3] = unaff_r9;
  puVar3[-4] = unaff_r8;
  puVar3[-5] = uVar14;
  puVar3[-6] = 0;
  puVar3[-7] = iVar12;
  puVar3 = puVar3 + -8;
  *puVar3 = piVar16;
  if (*(int *)(extraout_r2_02 + 0x1c) == 0) {
    func_0x01384978(*(undefined4 *)(iRam02f930c0 + 0x2f92d48));
    func_0x01384978(*(undefined4 *)(iRam02f930c4 + 0x2f92d54));
    if (*(int *)(extraout_r2_02 + 0x1c) == 0) {
      func_0x0140024c(extraout_r2_02);
    }
  }
  if (piVar10 == (int *)0x0) {
    uVar14 = *(undefined4 *)(iRam02f930c8 + 0x2f92fc4);
  }
  else {
    if (pcVar11 != (char *)0x0) {
      iVar6 = **(int **)(extraout_r2_02 + 0x1c);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x014001f0(iVar6);
      }
      iVar2 = *piVar10;
      uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          iVar12 = piVar16[-1];
          if (iVar12 == iVar6) {
            puVar4 = (undefined4 *)(iVar2 + *piVar16 * 8 + 0xc0);
            goto LAB_02f92de4;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar6,0);
LAB_02f92de4:
      piVar10 = (int *)(*(code *)*puVar4)(piVar10,puVar4[1]);
      unaff_r8 = 0;
      unaff_r9 = *(int **)(iRam02f930d0 + 0x2f92e08);
LAB_02f92e04:
      do {
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *piVar10;
        uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            iVar12 = piVar16[-1];
            if (iVar12 == *unaff_r9) {
              puVar4 = (undefined4 *)(iVar6 + *piVar16 * 8 + 0xc0);
              goto LAB_02f92e60;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar10,*unaff_r9,0);
LAB_02f92e60:
        iVar6 = (*(code *)*puVar4)(piVar10,puVar4[1]);
        if (iVar6 == 0) {
          iVar1 = 0;
          goto LAB_02f92f30;
        }
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(*(int *)(extraout_r2_02 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x014001f0(iVar6);
        }
        iVar2 = *piVar10;
        uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            iVar12 = piVar16[-1];
            if (iVar12 == iVar6) {
              puVar4 = (undefined4 *)(iVar2 + *piVar16 * 8 + 0xc0);
              goto LAB_02f92ef0;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined4 *)func_0x014002dc(piVar10,iVar6,0);
LAB_02f92ef0:
        uVar14 = (*(code *)*puVar4)(piVar10,puVar4[1]);
        iVar6 = (**(code **)(pcVar11 + 0xc))
                          (*(undefined4 *)(pcVar11 + 0x20),uVar14,*(undefined4 *)(pcVar11 + 0x14));
      } while (iVar6 == 0);
      if (unaff_r8 != 0x7fffffff) {
        unaff_r8 = unaff_r8 + 1;
        goto LAB_02f92e04;
      }
      goto LAB_02f92fe4;
    }
    uVar14 = *(undefined4 *)(iRam02f930cc + 0x2f92fd0);
  }
  uVar14 = func_0x01384988(uVar14);
  uVar14 = func_0x04a21c20(uVar14,0);
  func_0x01384aa0(uVar14,extraout_r2_02);
  func_0x01384928();
LAB_02f92fe4:
  uVar14 = func_0x01384bf8();
  func_0x01384aa0(uVar14,extraout_r2_02);
  uVar25 = func_0x01384928();
  uVar14 = (undefined4)uVar25;
  if ((int)((ulonglong)uVar25 >> 0x20) != 1) {
    if (piVar10 != (int *)0x0) {
      iVar6 = *piVar10;
      uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          iVar12 = piVar16[-1];
          if (iVar12 == **(int **)(iRam02f930d8 + 0x2f9304c)) {
            puVar4 = (undefined4 *)(iVar6 + *piVar16 * 8 + 0xc0);
            goto LAB_02f93094;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 2;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f930d8 + 0x2f9304c),0);
LAB_02f93094:
      (*(code *)*puVar4)(piVar10,puVar4[1]);
    }
    uVar22 = 1;
    func_0x01459844(uVar14);
    uVar25 = func_0x01062280();
    iVar6 = (int)((ulonglong)uVar25 >> 0x20);
    piVar16 = (int *)uVar25;
    bVar23 = false;
    if ((bool)uVar22) {
      iVar12 = -0x2f9309e;
      iVar6 = (int)&UNK_00ac0000 - (int)piVar16;
      bVar23 = iVar6 == 0;
    }
    bVar24 = false;
    if (bVar23) {
      puVar3 = (undefined4 *)(-(int)piVar16 + -0x80000000);
      bVar24 = -(int)piVar16 == -0x80000000;
    }
    bVar23 = false;
    if (bVar24) {
      unaff_r9 = (int *)(0x4000 - extraout_r2_03);
      bVar23 = unaff_r9 == (int *)0x0;
    }
    bVar24 = false;
    if (bVar23) {
      iVar6 = 0x3e00000 - (int)piVar16;
      bVar24 = iVar6 == 0;
    }
    if (bVar24) {
      piVar10 = (int *)0xfd06d780;
    }
    puVar3[-1] = 0x2f930c0;
    puVar3[-2] = iVar1;
    puVar3[-3] = unaff_r10;
    puVar3[-4] = unaff_r9;
    puVar3[-5] = unaff_r8;
    puVar3[-6] = uVar14;
    puVar3[-7] = 0;
    puVar3[-8] = iVar12;
    puVar3[-9] = piVar10;
    puVar4 = puVar3 + -2;
    puVar3[-0xe] = iVar6;
    puVar3[-0xb] = **(undefined4 **)(iRam02f93554 + 0x2f93100);
    piVar10 = *(int **)(extraout_r2_03 + 0x1c);
    if (piVar10 == (int *)0x0) {
      func_0x01384978(*(undefined4 *)(iRam02f93558 + 0x2f9311c));
      func_0x01384978(*(undefined4 *)(iRam02f9355c + 0x2f93128));
      piVar10 = *(int **)(extraout_r2_03 + 0x1c);
      if (piVar10 == (int *)0x0) {
        func_0x0140024c(extraout_r2_03);
        piVar10 = *(int **)(extraout_r2_03 + 0x1c);
      }
    }
    iVar12 = *(int *)(piVar10[5] + 0x84);
    uVar8 = iVar12 + 7U & 0xfffffff8;
    iVar1 = (int)puVar3 + (-0x40 - uVar8);
    puVar13 = (undefined4 *)(iVar1 - uVar8);
    piVar18 = (int *)((int)puVar13 - uVar8);
    func_0x0145894c(piVar18,iVar12);
    if (piVar16 == (int *)0x0) goto LAB_02f93450;
    if (puVar3[-0xe] == 0) {
      uVar14 = *(undefined4 *)(iRam02f93564 + 0x2f93468);
      goto LAB_02f93464;
    }
    iVar6 = *piVar10;
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x014001f0(iVar6);
    }
    iVar2 = *piVar16;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar10[-1] == iVar6) {
          puVar5 = (undefined4 *)(iVar2 + *piVar10 * 8 + 0xc0);
          goto LAB_02f931f0;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar16,iVar6,0);
LAB_02f931f0:
    piVar10 = (int *)(*(code *)*puVar5)(piVar16,puVar5[1]);
    iVar6 = 0;
    do {
      puVar3[-0xf] = iVar6;
      do {
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *piVar10;
        uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar16[-1] == **(int **)(iRam02f93568 + 0x2f93228)) {
              puVar5 = (undefined4 *)(iVar6 + *piVar16 * 8 + 0xc0);
              goto LAB_02f93270;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f93568 + 0x2f93228),0);
LAB_02f93270:
        iVar6 = (*(code *)*puVar5)(piVar10,puVar5[1]);
        if (iVar6 == 0) {
          iVar12 = 0;
          goto LAB_02f933ac;
        }
        if (piVar10 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar6 = *(int *)(*(int *)(extraout_r2_03 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
          iVar6 = func_0x014001f0(iVar6);
        }
        iVar2 = *piVar10;
        uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar8 != 0) {
          piVar16 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar16[-1] == iVar6) {
              iVar6 = iVar2 + *piVar16 * 8 + 0xc0;
              goto LAB_02f93300;
            }
            uVar8 = uVar8 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar8 != 0);
        }
        iVar6 = func_0x014002dc(piVar10,iVar6,0);
LAB_02f93300:
        iVar6 = *(int *)(iVar6 + 4);
        puVar3[-0xd] = iVar1;
        uVar14 = *(undefined4 *)(iVar6 + 4);
        pcVar15 = *(code **)(iVar6 + 8);
        *(int *)((int)piVar18 + -8) = iVar1;
        (*pcVar15)(uVar14,iVar6,piVar10,puVar3 + -0xd);
        func_0x01458934(piVar18,iVar1,iVar12);
        func_0x01458934(puVar13,piVar18,iVar12);
        puVar7 = *(undefined4 **)(*(int *)(extraout_r2_03 + 0x1c) + 0x18);
        puVar5 = puVar13;
        if (-1 < *(int *)(*(int *)(*(int *)(extraout_r2_03 + 0x1c) + 0x14) + 0x14)) {
          puVar5 = (undefined4 *)*puVar13;
        }
        uVar14 = *puVar7;
        pcVar15 = (code *)puVar7[2];
        puVar3[-0xd] = puVar5;
        *(int *)((int)piVar18 + -8) = (int)puVar3 + -0x2d;
        (*pcVar15)(uVar14,puVar7,puVar3[-0xe],puVar3 + -0xd);
      } while (*(char *)((int)puVar3 + -0x2d) == '\0');
      if (puVar3[-0xf] == 0x7fffffff) goto LAB_02f9347c;
      iVar6 = puVar3[-0xf] + 1;
    } while( true );
  }
  piVar16 = (int *)func_0x0145b008(uVar14);
  iVar1 = *piVar16;
  func_0x0145b0f8();
LAB_02f92f30:
  if (piVar10 != (int *)0x0) {
    iVar12 = *piVar10;
    uVar8 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar16[-1] == **(int **)(iRam02f930d4 + 0x2f92f48)) {
          puVar3 = (undefined4 *)(iVar12 + *piVar16 * 8 + 0xc0);
          goto LAB_02f92f90;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f930d4 + 0x2f92f48),0);
LAB_02f92f90:
    (*(code *)*puVar3)(piVar10,puVar3[1]);
  }
  if (iVar1 != 0) {
    func_0x01384bec(iVar1);
  }
  return unaff_r8;
LAB_02f9347c:
  while( true ) {
    uVar14 = func_0x01384bf8();
    func_0x01384aa0(uVar14,extraout_r2_03);
    uVar25 = func_0x01384928();
    iVar12 = (int)uVar25;
    if ((int)((ulonglong)uVar25 >> 0x20) != 1) break;
    piVar16 = (int *)func_0x0145b008(iVar12);
    iVar12 = *piVar16;
    func_0x0145b0f8();
LAB_02f933ac:
    if (piVar10 != (int *)0x0) {
      iVar6 = *piVar10;
      uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar8 != 0) {
        piVar16 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          iVar1 = piVar16[-1];
          if (iVar1 == **(int **)(iRam02f9356c + 0x2f933c4)) {
            puVar13 = (undefined4 *)(iVar6 + *piVar16 * 8 + 0xc0);
            goto LAB_02f9340c;
          }
          uVar8 = uVar8 - 1;
          piVar16 = piVar16 + 2;
        } while (uVar8 != 0);
      }
      puVar13 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f9356c + 0x2f933c4),0);
LAB_02f9340c:
      (*(code *)*puVar13)(piVar10,puVar13[1]);
    }
    if (iVar12 != 0) {
      func_0x01384bec(iVar12);
    }
    if (**(int **)(iRam02f93570 + 0x2f93438) == puVar3[-0xb]) {
      return puVar3[-0xf];
    }
    func_0x0145b028(puVar3[-0xf]);
LAB_02f93450:
    uVar14 = *(undefined4 *)(iRam02f93560 + 0x2f9345c);
LAB_02f93464:
    uVar14 = func_0x01384988(uVar14);
    uVar14 = func_0x04a21c20(uVar14,0);
    func_0x01384aa0(uVar14,extraout_r2_03);
    func_0x01384928();
  }
  if (piVar10 != (int *)0x0) {
    iVar6 = *piVar10;
    uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar8 != 0) {
      piVar16 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        iVar1 = piVar16[-1];
        if (iVar1 == **(int **)(iRam02f93574 + 0x2f934e0)) {
          puVar3 = (undefined4 *)(iVar6 + *piVar16 * 8 + 0xc0);
          goto LAB_02f93528;
        }
        uVar8 = uVar8 - 1;
        piVar16 = piVar16 + 2;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar10,**(int **)(iRam02f93574 + 0x2f934e0),0);
LAB_02f93528:
    (*(code *)*puVar3)(piVar10,puVar3[1]);
  }
  uVar22 = 1;
  func_0x01459844(iVar12);
  uVar26 = func_0x01062280();
  iVar2 = (int)(uVar26 >> 0x20);
  iVar6 = (int)uVar26;
  bVar23 = false;
  if ((bool)uVar22) {
    piVar10 = (int *)0xfd06f7ac;
    iVar2 = -0x28000000 - iVar6;
    bVar23 = iVar2 == 0;
  }
  bVar24 = false;
  if ((bVar23 && iVar6 == 0x1c00) && extraout_r2_04 == &UNK_02a00000) {
    iVar2 = 0x60000003 - iVar6;
    bVar24 = iVar2 == 0;
  }
  if (bVar24) {
    piVar10 = (int *)0xfd42caac;
  }
  *(undefined4 *)((int)piVar18 + -4) = 0x2f93554;
  *(undefined4 **)((int)piVar18 + -8) = puVar4;
  *(undefined4 *)((int)piVar18 + -0xc) = 0;
  *(int *)((int)piVar18 + -0x10) = (int)piVar10;
  if (*(int *)(iVar2 + 0x1c) == 0) {
    func_0x0140024c(iVar2);
  }
  if (iVar6 == 0) {
    uVar14 = func_0x01384988(*(undefined4 *)(iRam02f935d8 + 0x2f935c4));
    uVar14 = func_0x04a21c20(uVar14,0);
    func_0x01384aa0(uVar14,iVar2);
    uVar26 = func_0x01384928();
    iVar6 = (int)(uVar26 >> 0x20);
    *(undefined4 *)((int)piVar18 + -0x14) = 0x2f935d8;
    *(undefined4 **)((int)piVar18 + -0x18) = puVar4;
    *(undefined4 *)((int)piVar18 + -0x1c) = 0;
    piVar10 = (int *)((int)piVar18 + -0x20);
    *piVar10 = iVar2;
    if (*(int *)(iVar6 + 0x1c) == 0) {
      func_0x0140024c(iVar6);
    }
    if ((int)uVar26 == 0) {
      uVar14 = func_0x01384988(*(undefined4 *)(iRam02f9363c + 0x2f93628));
      uVar14 = func_0x04a21c20(uVar14,0);
      func_0x01384aa0(uVar14,iVar6);
      uVar25 = func_0x01384928();
      iVar2 = (int)((ulonglong)uVar25 >> 0x20);
      *(undefined4 *)((int)piVar18 + -0x24) = 0x2f9363c;
      *(undefined4 **)((int)piVar18 + -0x28) = puVar4;
      *(undefined4 *)((int)piVar18 + -0x2c) = 0;
      *(int *)((int)piVar18 + -0x30) = iVar6;
      if (*(int *)(iVar2 + 0x1c) == 0) {
        func_0x0140024c(iVar2);
      }
      if ((int)uVar25 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02f93680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar1 = (*(code *)**(undefined4 **)(*(int *)(iVar2 + 0x1c) + 4))((int)uVar25,0);
        return iVar1;
      }
      uVar14 = func_0x01384988(*(undefined4 *)(iRam02f936a4 + 0x2f93690));
      uVar14 = func_0x04a21c20(uVar14,0);
      func_0x01384aa0(uVar14,iVar2);
      uVar26 = func_0x01384928();
      *(undefined4 *)((int)piVar18 + -0x34) = 0x2f936a4;
      *(int *)((int)piVar18 + -0x38) = iVar12;
      *(undefined4 *)((int)piVar18 + -0x3c) = 0;
      piVar10 = (int *)((int)piVar18 + -0x40);
      *piVar10 = iVar2;
      if (*(int *)(extraout_r2_05 + 0x1c) == 0) {
        func_0x0140024c(extraout_r2_05);
      }
      if ((int)uVar26 == 0) {
        uVar14 = func_0x01384988(*(undefined4 *)(iRam02f9370c + 0x2f936f8));
        uVar14 = func_0x04a21c20(uVar14,0);
        func_0x01384aa0(uVar14,extraout_r2_05);
        uVar25 = func_0x01384928();
        iVar17 = (int)((ulonglong)uVar25 >> 0x20);
        *(undefined4 *)((int)piVar18 + -0x44) = 0x2f9370c;
        *(undefined4 *)((int)piVar18 + -0x48) = 0;
        *(int *)((int)piVar18 + -0x4c) = (int)(uVar26 >> 0x20);
        piVar18 = (int *)((int)piVar18 + -0x50);
        *piVar18 = extraout_r2_05;
        if (*(int *)(extraout_r2_06 + 0x1c) == 0) {
          func_0x0140024c(extraout_r2_06);
        }
        if ((int)uVar25 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02f93754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar1 = (*(code *)**(undefined4 **)(*(int *)(extraout_r2_06 + 0x1c) + 8))
                            ((int)uVar25,iVar17);
          return iVar1;
        }
        uVar14 = func_0x01384988(*(undefined4 *)(iRam02f93778 + 0x2f93764));
        uVar14 = func_0x04a21c20(uVar14,0);
        func_0x01384aa0(uVar14,extraout_r2_06);
        iVar21 = 0x2f93778;
        uVar26 = func_0x01384928();
        iVar12 = 0;
        iVar6 = extraout_r2_07;
        iVar2 = extraout_r2_06;
        goto LAB_02f9377c;
      }
      iVar6 = *(int *)(*(int *)(extraout_r2_05 + 0x1c) + 8);
      iVar2 = *piVar10;
      iVar17 = *(int *)((int)piVar18 + -0x3c);
      iVar12 = *(int *)((int)piVar18 + -0x38);
      iVar21 = *(int *)((int)piVar18 + -0x34);
    }
    else {
      uVar26 = uVar26 & 0xffffffff;
      iVar6 = *(int *)(*(int *)(iVar6 + 0x1c) + 4);
      iVar2 = *piVar10;
      iVar17 = *(int *)((int)piVar18 + -0x1c);
      puVar4 = *(undefined4 **)((int)piVar18 + -0x18);
      iVar21 = *(int *)((int)piVar18 + -0x14);
    }
    piVar10[3] = iVar21;
    piVar10[2] = (int)puVar4;
    piVar10[1] = iVar1;
    *piVar10 = iVar12;
    piVar10[-1] = iVar17;
    piVar10[-2] = iVar2;
    piVar10 = *(int **)(iVar6 + 0x1c);
    if (piVar10 == (int *)0x0) {
      func_0x0140024c(iVar6);
      piVar10 = *(int **)(iVar6 + 0x1c);
    }
    if ((*(ushort *)(*piVar10 + 0xbd) & 1) == 0) {
      func_0x014001f0();
    }
    iVar1 = func_0x01384be4();
    func_0x0320b024(iVar1,0xfffffffe,*(undefined4 *)(*(int *)(iVar6 + 0x1c) + 4));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar1 + 0x18) = (int)(uVar26 >> 0x20);
    *(int *)(iVar1 + 0x20) = (int)uVar26;
    return iVar1;
  }
  uVar26 = uVar26 & 0xffffffff;
  iVar6 = *(int *)(*(int *)(iVar2 + 0x1c) + 4);
  iVar2 = *(int *)((int)piVar18 + -0x10);
  iVar17 = *(int *)((int)piVar18 + -0xc);
  puVar4 = *(undefined4 **)((int)piVar18 + -8);
  iVar21 = *(int *)((int)piVar18 + -4);
LAB_02f9377c:
  piVar18[-1] = iVar21;
  piVar18[-2] = (int)puVar4;
  piVar18[-3] = iVar1;
  piVar18[-4] = iVar12;
  piVar18[-5] = iVar17;
  piVar18[-6] = iVar2;
  piVar10 = *(int **)(iVar6 + 0x1c);
  if (piVar10 == (int *)0x0) {
    func_0x0140024c(iVar6);
    piVar10 = *(int **)(iVar6 + 0x1c);
  }
  if ((*(ushort *)(*piVar10 + 0xbd) & 1) == 0) {
    func_0x014001f0();
  }
  iVar1 = func_0x01384be4();
  func_0x0320aac8(iVar1,0xfffffffe,*(undefined4 *)(*(int *)(iVar6 + 0x1c) + 4));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 0x18) = (int)(uVar26 >> 0x20);
  *(int *)(iVar1 + 0x20) = (int)uVar26;
  return iVar1;
}



// ===== FAT.ActivityIndepenBingo$$CompleteBingo RVA 0x1a2c2a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a3c2a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 *param_6,int *param_7,undefined1 *param_8,undefined1 *param_9)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  pcVar10 = (char *)(_UNK_01a3cb5c + 0x1a3c2c0);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb60 + 0x1a3c2d8));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb64 + 0x1a3c2e4));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb68 + 0x1a3c2f0));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb6c + 0x1a3c2fc));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb70 + 0x1a3c308));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb74 + 0x1a3c314));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb78 + 0x1a3c320));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb7c + 0x1a3c32c));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb80 + 0x1a3c338));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb84 + 0x1a3c344));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb88 + 0x1a3c350));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb8c + 0x1a3c35c));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb90 + 0x1a3c368));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb94 + 0x1a3c374));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb98 + 0x1a3c380));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cb9c + 0x1a3c38c));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cba0 + 0x1a3c398));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cba4 + 0x1a3c3a4));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cba8 + 0x1a3c3b0));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cbac + 0x1a3c3bc));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cbb0 + 0x1a3c3c8));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cbb4 + 0x1a3c3d4));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cbb8 + 0x1a3c3e0));
    func_0x01384978(*(undefined4 *)(_UNK_01a3cbbc + 0x1a3c3ec));
    *pcVar10 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  iStack_34 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  iVar2 = func_0x0229f06c(0x8032,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8032,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02257a74(iVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            param_9,0);
    return uVar3;
  }
  uStack_28 = 0;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  func_0x038fd264(&uStack_30,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
                  **(undefined4 **)(_UNK_01a3cbc0 + 0x1a3c4ac));
  *param_8 = 0;
  *param_9 = 0;
  piVar7 = *(int **)(_UNK_01a3cbc4 + 0x1a3c4e0);
  iVar2 = *piVar7;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar7;
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x0359c380(&uStack_48,iVar2,&iStack_34,**(undefined4 **)(_UNK_01a3cbc8 + 0x1a3c51c));
  iVar2 = iStack_34;
  uVar8 = *(undefined4 *)(param_2 + 0xc);
  uStack_3c = uStack_44;
  uStack_40 = uStack_48;
  if (iStack_34 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar2 + 8);
  uVar3 = *(uint *)(iVar2 + 0xc);
  piVar7 = *(int **)(_UNK_01a3cbcc + 0x1a3c568);
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  iVar12 = *piVar7;
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  if (uVar3 < *(uint *)(iVar11 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar3 + 1;
    iVar11 = iVar11 + uVar3 * 8;
    *(undefined4 *)(iVar11 + 0x10) = uVar8;
    *(undefined4 *)(iVar11 + 0x14) = 1;
  }
  else {
    func_0x0326a8b0(iVar2,uVar8,1,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
  }
  iVar2 = *(int *)(param_1 + 0xe4);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x035d1598(iVar2,param_3,param_4,param_5,**(undefined4 **)(_UNK_01a3cbd0 + 0x1a3c5d0));
  iVar2 = iStack_34;
  iVar11 = *(int *)(param_1 + 0xd8);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x021491b8(iVar11,iVar2,0,0,0);
  uVar8 = func_0x01a3cc1c(param_1,uStack_30,uStack_2c,&uStack_28);
  *param_6 = uVar8;
  iVar2 = func_0x01a3ce84(param_1,uStack_30,uStack_2c,&uStack_28);
  *param_7 = iVar2;
  if (*(int *)(**(int **)(_UNK_01a3cbd4 + 0x1a3c65c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01a3cbd8 + 0x1a3c678));
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x028c3fd8(iVar2,0);
  if ((uStack_28 & 0x20) == 0) {
    *param_8 = 0;
  }
  else {
    iVar2 = func_0x01a3d0ec(param_1);
    *param_8 = (char)iVar2;
    if (iVar2 != 0) goto LAB_01a3c6ec;
  }
  uVar1 = 0;
  if ((uStack_28 & 0x20) != 0) {
    uVar1 = func_0x01a3d260(param_1);
  }
  *param_9 = uVar1;
LAB_01a3c6ec:
  func_0x028c98a0(&uStack_40,0);
  iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01a3cbdc + 0x1a3c704));
  func_0x0328e950(iVar2,**(undefined4 **)(_UNK_01a3cbe0 + 0x1a3c718));
  uVar8 = *param_6;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar2 + 8);
  uVar3 = *(uint *)(iVar2 + 0xc);
  piVar7 = *(int **)(_UNK_01a3cbe4 + 0x1a3c754);
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  iVar12 = *piVar7;
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  if (uVar3 < *(uint *)(iVar11 + 0xc)) {
    *(uint *)(iVar2 + 0xc) = uVar3 + 1;
    *(undefined4 *)(iVar11 + uVar3 * 4 + 0x10) = uVar8;
  }
  else {
    func_0x0328f170(iVar2,uVar8,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
  }
  func_0x0328f380(iVar2,*param_7,**(undefined4 **)(_UNK_01a3cbe8 + 0x1a3c7a4));
  piVar7 = *(int **)(_UNK_01a3cbec + 0x1a3c7c0);
  iVar11 = *piVar7;
  if (*(int *)(iVar11 + 0x74) == 0) {
    func_0x01384ab4();
    iVar11 = *piVar7;
  }
  iVar12 = *(int *)(*(int *)(iVar11 + 0x5c) + 0xc);
  if (iVar12 == 0) {
    if (*(int *)(iVar11 + 0x74) == 0) {
      func_0x01384ab4();
      iVar11 = *piVar7;
    }
    uVar8 = **(undefined4 **)(iVar11 + 0x5c);
    iVar12 = func_0x01384be4(**(undefined4 **)(_UNK_01a3cbf0 + 0x1a3c808));
    func_0x0244fb14(iVar12,uVar8,**(undefined4 **)(_UNK_01a3cbf4 + 0x1a3c828),0);
    *(int *)(*(int *)(*piVar7 + 0x5c) + 0xc) = iVar12;
  }
  uVar8 = func_0x02fab288(iVar2,iVar12,**(undefined4 **)(_UNK_01a3cbf8 + 0x1a3c84c));
  uStack_48 = *(undefined4 *)(param_2 + 0xc);
  puVar9 = *(undefined4 **)(_UNK_01a3cbfc + 0x1a3c868);
  uVar4 = func_0x01384abc(*puVar9,&uStack_48);
  uStack_4c = *(undefined4 *)(param_2 + 0x14);
  uVar5 = func_0x01384abc(*puVar9,&uStack_4c);
  uStack_50 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = func_0x01384abc(*puVar9,&uStack_50);
  uVar4 = func_0x02450228(**(undefined4 **)(_UNK_01a3cc00 + 0x1a3c8bc),uVar4,uVar5,uVar6,0);
  if (*(int *)(**(int **)(_UNK_01a3cc04 + 0x1a3c8d8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar8 = func_0x030e6638(0x2c,uVar8,**(undefined4 **)(_UNK_01a3cc08 + 0x1a3c8f8));
  iVar2 = *param_7;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = uStack_28;
  iVar11 = *(int *)(param_1 + 0x68);
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar7;
  uVar5 = *(undefined4 *)(iVar11 + 8);
  if (*(int *)(iVar12 + 0x74) == 0) {
    func_0x01384ab4();
    iVar12 = *piVar7;
  }
  iVar11 = *(int *)(*(int *)(iVar12 + 0x5c) + 0x10);
  if (iVar11 == 0) {
    if (*(int *)(iVar12 + 0x74) == 0) {
      func_0x01384ab4();
      iVar12 = *piVar7;
    }
    uVar6 = **(undefined4 **)(iVar12 + 0x5c);
    iVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01a3cc0c + 0x1a3c984));
    func_0x02450808(iVar11,uVar6,**(undefined4 **)(_UNK_01a3cc10 + 0x1a3c9a4),0);
    *(int *)(*(int *)(*piVar7 + 0x5c) + 0x10) = iVar11;
  }
  uVar5 = func_0x02f91df8(uVar5,iVar11,**(undefined4 **)(_UNK_01a3cc14 + 0x1a3c9c8));
  iVar11 = *(int *)(param_1 + 0x68);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar11 + 8);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0245080c(iVar11,**(undefined4 **)(_UNK_01a3cc18 + 0x1a3ca04));
  func_0x019b9ee4(param_1,uVar4,uVar8,0 < iVar2,(uVar3 & 0x20) != 0,uVar5,uVar6,
                  *(int *)(param_1 + 0x44) + 1,*(int *)(param_1 + 0x24) + 1,0);
  iVar2 = *param_7;
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar2 + 0xc)) {
    uVar3 = (uStack_28 & 0x3f) >> 5;
    func_0x019ba07c(param_1,(uStack_28 & 6) != 0,(uStack_28 & 0x18) != 0,uVar3,
                    *(int *)(param_1 + 0x44) + 1,*(undefined4 *)(param_1 + 0x4c),
                    *(int *)(param_1 + 0x24) + 1,uVar3,0);
  }
  return uStack_28;
}



// ===== FAT.ActivityIndepenBingo$$_ClaimCellReward RVA 0x1a2cc1c =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a3cc1c(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  
  pcVar4 = (char *)(_UNK_01a3ce58 + 0x1a3cc3c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3ce5c + 0x1a3cc54));
    func_0x01384978(*(undefined4 *)(_UNK_01a3ce60 + 0x1a3cc60));
    func_0x01384978(*(undefined4 *)(_UNK_01a3ce64 + 0x1a3cc6c));
    func_0x01384978(*(undefined4 *)(_UNK_01a3ce68 + 0x1a3cc78));
    func_0x01384978(*(undefined4 *)(_UNK_01a3ce6c + 0x1a3cc84));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8033,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450810(iVar1,param_2,param_3,**(undefined4 **)(_UNK_01a3ce70 + 0x1a3cd10));
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x68);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x024505cc(iVar1,param_2,param_3,**(undefined4 **)(_UNK_01a3ce74 + 0x1a3cd54));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 8) = 2;
      *param_4 = *param_4 | 1;
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar1 + 0x10);
      iVar5 = *(int *)(iVar3 + 0x40);
      iVar3 = iVar6;
      if (iVar6 == 0) {
        func_0x01384bf0();
        iVar3 = *(int *)(iVar1 + 0x10);
        if (iVar3 == 0) {
          func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      piVar8 = *(int **)(_UNK_01a3ce78 + 0x1a3cdc8);
      uVar2 = *(undefined4 *)(iVar3 + 0xc);
      uVar7 = *(undefined4 *)(iVar6 + 8);
      iVar1 = *piVar8;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar8;
      }
      uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x300);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x01cdcbac(iVar5,uVar7,uVar2,uVar9,0,0,0,0xe0,
                              **(undefined4 **)(_UNK_01a3ce7c + 0x1a3ce0c),
                              **(undefined4 **)(_UNK_01a3ce80 + 0x1a3ce18),0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8033,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0225760c(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.ActivityIndepenBingo$$_ClaimBingoReward RVA 0x1a2ce84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a3ce84(int param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01a3d0d8 + 0x1a3cea4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3d0dc + 0x1a3cebc));
    func_0x01384978(*(undefined4 *)(_UNK_01a3d0e0 + 0x1a3cec8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8034,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01a3d0e4 + 0x1a3cf2c));
    func_0x0328e950(uVar2,**(undefined4 **)(_UNK_01a3d0e8 + 0x1a3cf40));
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01a3d42c(iVar1,param_2,param_3,uVar2);
    if (iVar1 != 0) {
      *param_4 = *param_4 | 2;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    }
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01a3db18(iVar1,param_2,param_3,uVar2);
    if (iVar1 != 0) {
      *param_4 = *param_4 | 4;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    }
    if (param_2 == param_3) {
      iVar1 = *(int *)(param_1 + 0x68);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01a3e204(iVar1,param_2,param_3,uVar2);
      if (iVar1 != 0) {
        *param_4 = *param_4 | 8;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      }
    }
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01a3e8f0(iVar1);
    if (param_3 + param_2 == iVar1 + 1) {
      iVar1 = *(int *)(param_1 + 0x68);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01a3e954(iVar1,param_2,param_3,uVar2);
      if (iVar1 != 0) {
        *param_4 = *param_4 | 0x10;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
      }
    }
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01a3f060(iVar1,param_2,param_3,uVar2);
    if (iVar1 != 0) {
      *param_4 = *param_4 | 0x20;
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8034,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x022578e4(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar2;
}



// ===== FAT.ActivityIndepenBingo$$CheckEnterNextBoard RVA 0x1a2d0ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a3d0ec(int param_1)

{
  int iVar1;
  int *piVar2;
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
  undefined4 uStack_18;
  
  pcVar4 = (char *)(_UNK_01a3d248 + 0x1a3d104);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3d24c + 0x1a3d118));
    func_0x01384978(*(undefined4 *)(_UNK_01a3d250 + 0x1a3d124));
    func_0x01384978(*(undefined4 *)(_UNK_01a3d254 + 0x1a3d130));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x803b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x803b,0);
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
    uVar6 = func_0x0245496c(&uStack_30,0,0);
    return uVar6;
  }
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  func_0x019ba204(param_1,*(undefined4 *)(iVar1 + 0xc),*(int *)(param_1 + 0x44) + 1,
                  *(int *)(param_1 + 0x24) + 1);
  iVar5 = *(int *)(param_1 + 0x60);
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x14);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 0;
  if (iVar1 + 1 < *(int *)(iVar5 + 0xc)) {
    piVar2 = *(int **)(_UNK_01a3d258 + 0x1a3d1fc);
    *(undefined1 *)(param_1 + 0x48) = 1;
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01a3d25c + 0x1a3d21c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3fd8(iVar1,0);
    uVar6 = 1;
  }
  return uVar6;
}



// ===== FAT.ActivityIndepenBingo$$CheckEnterNextRound RVA 0x1a2d260 =====

undefined4 FUN_01a3d260(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x803c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x803c,0);
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
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  return 1;
}



// ===== FAT.ActivityIndepenBingo$$DequeueItemFly RVA 0x1a2d2bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a3d2bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01a3d40c + 0x1a3d2dc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3d410 + 0x1a3d2f4));
    func_0x01384978(*(undefined4 *)(_UNK_01a3d414 + 0x1a3d300));
    func_0x01384978(*(undefined4 *)(_UNK_01a3d418 + 0x1a3d30c));
    func_0x01384978(*(undefined4 *)(_UNK_01a3d41c + 0x1a3d318));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x803e,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xe4);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0x14)) {
      uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01a3d420 + 0x1a3d39c));
      func_0x02450814(uVar2,param_1,**(undefined4 **)(_UNK_01a3d424 + 0x1a3d3bc),0);
      if (*(int *)(**(int **)(_UNK_01a3d428 + 0x1a3d3d0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02074880(param_2,1,param_3,param_4,param_5,0,uVar2,0,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x803e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021dc2d4(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.ActivityIndepenBingo$$GetBoardRewardInfo RVA 0x1a2f740 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a3f740(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01a3f8e0 + 0x1a3f75c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3f8e4 + 0x1a3f770));
    func_0x01384978(*(undefined4 *)(_UNK_01a3f8e8 + 0x1a3f77c));
    func_0x01384978(*(undefined4 *)(_UNK_01a3f8ec + 0x1a3f788));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8040,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_2 + 100);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar1 + 0x2c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    puVar8 = *(undefined4 **)(_UNK_01a3f8f0 + 0x1a3f81c);
    uVar2 = func_0x03653d1c(iVar6,0,*puVar8);
    if (*(int *)(**(int **)(_UNK_01a3f8f4 + 0x1a3f830) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar2 = func_0x02565a88(uVar2,0);
    iVar6 = *(int *)(iVar1 + 0x28);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x03653d1c(iVar6,0,*puVar8);
    uVar3 = func_0x02565a88(uVar3,0);
    iVar1 = *(int *)(iVar1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x03653d1c(iVar1,0,*puVar8);
    uVar4 = func_0x02565a88(uVar4,0);
    puVar8 = *(undefined4 **)(_UNK_01a3f8f8 + 0x1a3f8c0);
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    uVar5 = *puVar8;
    *(undefined4 *)(param_1 + 1) = 0;
    func_0x039394cc(param_1,uVar2,uVar3,uVar4,uVar5);
  }
  else {
    iVar1 = func_0x0229f13c(0x8040,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02257ce0(&uStack_30,iVar1,param_2,0);
    *(undefined4 *)(param_1 + 1) = uStack_28;
    *param_1 = uStack_30;
  }
  return;
}



// ===== FAT.ActivityIndepenBingo$$GetBingoBoardIndex RVA 0x1a2f8fc =====

int FUN_01a3f8fc(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8041,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8041,0);
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
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  return *(int *)(param_1 + 0x44) + 1;
}



// ===== FAT.ActivityIndepenBingo$$BoardEntryAsset RVA 0x1a2f954 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a3f954(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01a3fa40 + 0x1a3f96c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3fa44 + 0x1a3f980));
    func_0x01384978(*(undefined4 *)(_UNK_01a3fa48 + 0x1a3f98c));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x8042,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03470a60(iVar1,**(undefined4 **)(_UNK_01a3fa50 + 0x1a3fa2c),&uStack_14,
                    **(undefined4 **)(_UNK_01a3fa4c + 0x1a3fa20));
  }
  else {
    iVar1 = func_0x0229f13c(0x8042,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.ActivityIndepenBingo$$MetaEntryAsset RVA 0x1a2fa54 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a3fa54(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_01a3fad8 + 0x1a3fa68);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3fadc + 0x1a3fa7c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8043,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8043,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_02173f74 + 0x2173e94);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02173f78 + 0x2173ea8),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_02173f7c + 0x2173f64));
    return uVar5;
  }
  return **(undefined4 **)(_UNK_01a3fae0 + 0x1a3fad4);
}



// ===== FAT.ActivityIndepenBingo$$.ctor RVA 0x1a2fae4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a3fae4(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  
  pcVar4 = (char *)(_UNK_01a3ff30 + 0x1a3fb00);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a3ff34 + 0x1a3fb14));
    func_0x01384978(*(undefined4 *)(_UNK_01a3ff38 + 0x1a3fb20));
    func_0x01384978(*(undefined4 *)(_UNK_01a3ff3c + 0x1a3fb2c));
    func_0x01384978(*(undefined4 *)(_UNK_01a3ff40 + 0x1a3fb38));
    func_0x01384978(*(undefined4 *)(_UNK_01a3ff44 + 0x1a3fb44));
    func_0x01384978(*(undefined4 *)(_UNK_01a3ff48 + 0x1a3fb50));
    func_0x01384978(*(undefined4 *)(_UNK_01a3ff4c + 0x1a3fb5c));
    func_0x01384978(*(undefined4 *)(_UNK_01a3ff50 + 0x1a3fb68));
    func_0x01384978(*(undefined4 *)(_UNK_01a3ff54 + 0x1a3fb74));
    func_0x01384978(*(undefined4 *)(_UNK_01a3ff58 + 0x1a3fb80));
    func_0x01384978(*(undefined4 *)(_UNK_01a3ff5c + 0x1a3fb8c));
    *pcVar4 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a3ff60 + 0x1a3fbd0));
  func_0x01a3ff8c();
  piVar5 = *(int **)(_UNK_01a3ff64 + 0x1a3fbe8);
  iVar2 = *piVar5;
  iVar3 = *(int *)(iVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  if (iVar3 == 0) {
    func_0x01384ab4();
    iVar2 = *piVar5;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x02b64854(&uStack_30,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x8cc),0);
  iVar2 = *piVar5;
  *(undefined4 *)(param_1 + 0x74) = uStack_28;
  *(ulonglong *)(param_1 + 0x6c) = CONCAT44(uStack_2c,uStack_30);
  uStack_34 = 0;
  uStack_38 = 0;
  func_0x02b644a0(&uStack_38,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x8c8),0);
  uStack_44 = 0;
  *(undefined4 *)(param_1 + 0x78) = uStack_38;
  *(undefined4 *)(param_1 + 0x7c) = uStack_34;
  uStack_48 = 0;
  uStack_40 = 0;
  func_0x02b64854(&uStack_48,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x8d0),0);
  iVar2 = *piVar5;
  *(undefined4 *)(param_1 + 0x88) = uStack_40;
  *(ulonglong *)(param_1 + 0x80) = CONCAT44(uStack_44,uStack_48);
  uStack_4c = 0;
  uStack_50 = 0;
  func_0x02b644a0(&uStack_50,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x8f0),0);
  *(undefined4 *)(param_1 + 0x8c) = uStack_50;
  *(undefined4 *)(param_1 + 0x90) = uStack_4c;
  uStack_54 = 0;
  uStack_58 = 0;
  func_0x02b644a0(&uStack_58,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x8ec),0);
  *(undefined4 *)(param_1 + 0x94) = uStack_58;
  *(undefined4 *)(param_1 + 0x98) = uStack_54;
  uStack_64 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x02b64854(&uStack_68,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x8dc),0);
  iVar2 = *piVar5;
  *(undefined4 *)(param_1 + 0xa4) = uStack_60;
  *(ulonglong *)(param_1 + 0x9c) = CONCAT44(uStack_64,uStack_68);
  uStack_6c = 0;
  uStack_70 = 0;
  func_0x02b644a0(&uStack_70,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x8d4),0);
  uStack_74 = 0;
  *(undefined4 *)(param_1 + 0xa8) = uStack_70;
  *(undefined4 *)(param_1 + 0xac) = uStack_6c;
  uStack_78 = 0;
  func_0x02b644a0(&uStack_78,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x8d8),0);
  uStack_7c = 0;
  *(undefined4 *)(param_1 + 0xb0) = uStack_78;
  *(undefined4 *)(param_1 + 0xb4) = uStack_74;
  uStack_80 = 0;
  func_0x02b644a0(&uStack_80,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x8e0),0);
  uStack_84 = 0;
  *(undefined4 *)(param_1 + 0xb8) = uStack_80;
  *(undefined4 *)(param_1 + 0xbc) = uStack_7c;
  uStack_88 = 0;
  func_0x02b644a0(&uStack_88,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x8e4),0);
  uStack_8c = 0;
  *(undefined4 *)(param_1 + 0xc0) = uStack_88;
  *(undefined4 *)(param_1 + 0xc4) = uStack_84;
  uStack_90 = 0;
  func_0x02b644a0(&uStack_90,*(undefined4 *)(*(int *)(*piVar5 + 0x5c) + 0x8e8),0);
  *(undefined4 *)(param_1 + 200) = uStack_90;
  *(undefined4 *)(param_1 + 0xcc) = uStack_8c;
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a3ff68 + 0x1a3fe18));
  func_0x035d0f70(uVar1,**(undefined4 **)(_UNK_01a3ff6c + 0x1a3fe2c));
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  func_0x02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar1 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  if (*(int *)(**(int **)(_UNK_01a3ff70 + 0x1a3fe78) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar1 = func_0x036a1750(uVar1,**(undefined4 **)(_UNK_01a3ff74 + 0x1a3fe94));
  iVar2 = *(int *)(**(int **)(_UNK_01a3ff78 + 0x1a3feac) + 0x74);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  if (iVar2 == 0) {
    func_0x01384ab4();
  }
  iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01a3ff7c + 0x1a3fecc));
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a3ff80 + 0x1a3fee0));
  func_0x02450820(uVar1,param_1,**(undefined4 **)(_UNK_01a3ff84 + 0x1a3fefc),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x034a0e84(iVar2,uVar1,**(undefined4 **)(_UNK_01a3ff88 + 0x1a3ff20));
  return;
}



// ===== FAT.ActivityIndepenBingo$$WhenEnd RVA 0x1a30018 =====

/* WARNING: Possible PIC construction at 0x01a405e4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a40018(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  int unaff_r5;
  char *pcVar3;
  int iVar4;
  int *unaff_r6;
  undefined4 uVar5;
  int unaff_r7;
  undefined4 *puVar6;
  int iVar7;
  int *unaff_r8;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 unaff_lr;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  
  puVar10 = &uStack_48;
  pcVar3 = (char *)(_UNK_01a405f0 + 0x1a40030);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a405f4 + 0x1a40044));
    func_0x01384978(*(undefined4 *)(_UNK_01a405f8 + 0x1a40050));
    func_0x01384978(*(undefined4 *)(_UNK_01a405fc + 0x1a4005c));
    func_0x01384978(*(undefined4 *)(_UNK_01a40600 + 0x1a40068));
    func_0x01384978(*(undefined4 *)(_UNK_01a40604 + 0x1a40074));
    func_0x01384978(*(undefined4 *)(_UNK_01a40608 + 0x1a40080));
    func_0x01384978(*(undefined4 *)(_UNK_01a4060c + 0x1a4008c));
    func_0x01384978(*(undefined4 *)(_UNK_01a40610 + 0x1a40098));
    func_0x01384978(*(undefined4 *)(_UNK_01a40614 + 0x1a400a4));
    func_0x01384978(*(undefined4 *)(_UNK_01a40618 + 0x1a400b0));
    func_0x01384978(*(undefined4 *)(_UNK_01a4061c + 0x1a400bc));
    func_0x01384978(*(undefined4 *)(_UNK_01a40620 + 0x1a400c8));
    func_0x01384978(*(undefined4 *)(_UNK_01a40624 + 0x1a400d4));
    func_0x01384978(*(undefined4 *)(_UNK_01a40628 + 0x1a400e0));
    func_0x01384978(*(undefined4 *)(_UNK_01a4062c + 0x1a400ec));
    func_0x01384978(*(undefined4 *)(_UNK_01a40630 + 0x1a400f8));
    func_0x01384978(*(undefined4 *)(_UNK_01a40634 + 0x1a40104));
    func_0x01384978(*(undefined4 *)(_UNK_01a40638 + 0x1a40110));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8044,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8044,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    piStack_28 = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    piStack_28 = (int *)uStack_40;
    uStack_24 = uStack_3c;
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
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a4063c + 0x1a4016c));
  func_0x0244f5a0(iVar1,0);
  if (*(int *)(**(int **)(_UNK_01a40640 + 0x1a40188) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar4 = func_0x0300d558(**(undefined4 **)(_UNK_01a40644 + 0x1a401a4));
  uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01a40648 + 0x1a401b8));
  func_0x02450820(uVar5,param_1,**(undefined4 **)(_UNK_01a4064c + 0x1a401d4),0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x034a10dc(iVar4,uVar5,**(undefined4 **)(_UNK_01a40650 + 0x1a401f8));
  iVar4 = func_0x01a40688(param_1);
  if (iVar4 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0xd0) == '\0') {
    func_0x019ba484(param_1,*(int *)(param_1 + 0x24),
                    *(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x24) * 3,0);
    puVar6 = *(undefined4 **)(_UNK_01a40654 + 0x1a40264);
    uVar5 = func_0x01384be4(*puVar6);
    puVar8 = *(undefined4 **)(_UNK_01a40658 + 0x1a40278);
    func_0x0328e950(uVar5,*puVar8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *puVar6;
    *(undefined4 *)(iVar1 + 0x10) = uVar5;
    uVar5 = func_0x01384be4(uVar2);
    func_0x0328e950(uVar5,*puVar8);
    *(undefined4 *)(iVar1 + 0x14) = uVar5;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(param_1 + 100);
    iVar4 = *(int *)(iVar4 + 0x50);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0x20);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    puVar6 = *(undefined4 **)(_UNK_01a4065c + 0x1a402f8);
    uVar5 = func_0x0364c9b8(iVar7,0,*puVar6);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x01db1884(iVar4,uVar5,0);
    *(undefined4 *)(iVar1 + 8) = uVar5;
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(param_1 + 100);
    iVar4 = *(int *)(iVar4 + 0x50);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *(int *)(iVar7 + 0x20);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0364c9b8(iVar7,1,*puVar6);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x01db1884(iVar4,uVar5,0);
    iVar4 = *(int *)(param_1 + 0xd8);
    *(undefined4 *)(iVar1 + 0xc) = uVar5;
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02139cf4(iVar4,0);
    unaff_r8 = *(int **)(_UNK_01a40660 + 0x1a403bc);
    uVar5 = func_0x01384be4(*unaff_r8);
    func_0x02450194(uVar5,iVar1,**(undefined4 **)(_UNK_01a40664 + 0x1a403d8),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x020dba14(iVar4,uVar5,0);
    iVar4 = *(int *)(param_1 + 0xd8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    unaff_r6 = (int *)func_0x02141880(iVar4,0);
    unaff_r7 = func_0x01384be4(*unaff_r8);
    func_0x02450194(unaff_r7,iVar1,**(undefined4 **)(_UNK_01a40668 + 0x1a40440),0);
    if (unaff_r6 == (int *)0x0) {
      func_0x01384bf0();
    }
    func_0x021131f8(unaff_r6,unaff_r7,0);
    iVar4 = *(int *)(iVar1 + 0x18);
    *(undefined1 *)(param_1 + 0x49) = 0;
    if (0 < iVar4) {
      unaff_r6 = (int *)0x0;
      puVar6 = *(undefined4 **)(_UNK_01a4066c + 0x1a40488);
      piVar9 = *(int **)(_UNK_01a40670 + 0x1a40490);
      do {
        iVar4 = *(int *)(param_1 + 0x58);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        unaff_r7 = *(int *)(iVar4 + 0x1c);
        if (unaff_r7 == 0) {
          func_0x01384bf0();
        }
        unaff_r8 = &iStack_2c;
        if (*(int *)(unaff_r7 + 0xc) <= (int)unaff_r6) goto LAB_01a405d4;
        iVar4 = *(int *)(param_1 + 0x58);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar4 + 0x1c);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x03653d1c(iVar4,unaff_r6,*puVar6);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02566088(&iStack_2c,uVar5,0);
        unaff_r6 = (int *)((int)unaff_r6 + 1);
      } while (iStack_2c < *(int *)(iVar1 + 0x18));
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      unaff_r6 = *(int **)(_UNK_01a40674 + 0x1a40550);
      unaff_r7 = *(int *)(iVar1 + 0x40);
      iVar1 = *unaff_r6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *unaff_r6;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x304);
      if (unaff_r7 == 0) {
        func_0x01384bf0();
      }
      uStack_38 = **(undefined4 **)(_UNK_01a40678 + 0x1a40590);
      uStack_34 = **(undefined4 **)(_UNK_01a4067c + 0x1a4059c);
      uStack_3c = 0x151;
      uStack_30 = 0;
      uStack_48 = 0;
      iStack_44 = 0;
      uStack_40 = 0;
      uVar5 = func_0x01cdcbac(unaff_r7,piStack_28,uStack_24,iVar1);
      *(undefined4 *)(param_1 + 0xe0) = uVar5;
      *(undefined1 *)(param_1 + 0xd0) = 1;
      unaff_r8 = piStack_28;
    }
LAB_01a405d4:
    uVar5 = *(undefined4 *)(param_1 + 0xe0);
    unaff_lr = 0x1a405e8;
    unaff_r4 = param_1;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0xe0);
    iVar1 = unaff_r5;
    puVar10 = (undefined4 *)register0x00000054;
  }
  *(undefined4 *)((int)puVar10 + -4) = unaff_lr;
  *(int **)((int)puVar10 + -8) = unaff_r8;
  *(int *)((int)puVar10 + -0xc) = unaff_r7;
  *(int **)((int)puVar10 + -0x10) = unaff_r6;
  *(int *)((int)puVar10 + -0x14) = iVar1;
  *(int *)((int)puVar10 + -0x18) = unaff_r4;
  iVar1 = func_0x0229f06c(0x15e,0,uVar5,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xfc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01e7e874(iVar1,0);
    *(undefined4 *)((int)puVar10 + -0x20) = uVar5;
    func_0x02b64b60(param_1 + 0x9c,iVar1,uVar2,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x15e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)((int)puVar10 + -0x20) = 0;
    func_0x0217c17c(iVar1,param_1 + 0x9c,0,uVar5);
  }
  return;
}



// ===== FAT.ActivityIndepenBingo.<>c__DisplayClass106_0$$.ctor RVA 0x1a30680 =====

void FUN_01a40680(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityIndepenBingo$$get_NeedChooseGroup RVA 0x1a30688 =====

uint FUN_01a40688(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8048,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8048,0);
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
  return (uint)(*(int *)(param_1 + 0x40) == 0);
}



// ===== FAT.ActivityIndepenBingo$$WhenReset RVA 0x1a306e4 =====

/* WARNING: Possible PIC construction at 0x034a1150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x034a1154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a406e4(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_r4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_lr;
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
  int *apiStack_18 [2];
  
  pcVar5 = (char *)(_UNK_01a40810 + 0x1a406f8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a40814 + 0x1a4070c));
    func_0x01384978(*(undefined4 *)(_UNK_01a40818 + 0x1a40718));
    func_0x01384978(*(undefined4 *)(_UNK_01a4081c + 0x1a40724));
    func_0x01384978(*(undefined4 *)(_UNK_01a40820 + 0x1a40730));
    func_0x01384978(*(undefined4 *)(_UNK_01a40824 + 0x1a4073c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x804c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x804c,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01a40828 + 0x1a40794) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01a4082c + 0x1a407b0));
  iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01a40830 + 0x1a407c4));
  func_0x02450820(iVar6,param_1,**(undefined4 **)(_UNK_01a40834 + 0x1a407e0),0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = **(int **)(_UNK_01a40838 + 0x1a40804);
  if (iVar6 != 0) {
    iVar8 = 0;
    apiStack_18[0] = unaff_r4;
    piVar2 = (int *)func_0x0487929c(*(undefined4 *)(iVar1 + 8),iVar6,0);
    iVar6 = *(int *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 4);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = func_0x02457d84(iVar6);
    }
    if ((piVar2 == (int *)0x0) || (iVar8 = func_0x02457d4c(piVar2,iVar6), iVar8 != 0)) {
      iVar6 = *(int *)(iVar3 + 0x10);
      *(int *)(iVar1 + 8) = iVar8;
      iVar6 = *(int *)(*(int *)(iVar6 + 0x60) + 4);
      if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
        iVar6 = func_0x02457d84(iVar6);
      }
      if (piVar2 == (int *)0x0) {
        return;
      }
      iVar1 = func_0x02457d4c(piVar2,iVar6);
      if (iVar1 != 0) {
        return;
      }
    }
    else {
      unaff_lr = (int *)0x34a1154;
      apiStack_18[0] = piVar2;
      register0x00000054 = (BADSPACEBASE *)apiStack_18;
    }
    *(int **)((int)register0x00000054 + -4) = unaff_lr;
    *(int **)((int)register0x00000054 + -8) = apiStack_18[0];
    func_0x0142996c((int **)((int)register0x00000054 + -0x14),*(undefined4 *)(*piVar2 + 0x20),iVar6)
    ;
    piVar2 = *(int **)((int)register0x00000054 + -0xc);
    if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) == 0) {
      piVar2 = (int *)((uint)((int)register0x00000054 + -0x14) | 1);
    }
    iVar1 = func_0x01419d2c(piVar2);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    func_0x01418ff0(iVar1,0);
    if (((uint)*(int **)((int)register0x00000054 + -0x14) & 1) != 0) {
      func_0x0148d9d4(*(int **)((int)register0x00000054 + -0xc));
    }
    return;
  }
  return;
}



// ===== FAT.ActivityIndepenBingo$$LoadSetup RVA 0x1a3083c =====

void FUN_01a4083c(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  iVar2 = func_0x0229f06c(0x804d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x804d,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x01c23b88(0xffffffff,*(undefined4 *)(param_2 + 0x28),0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x50) = uVar1;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar5,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar1 = func_0x01c23b88(iVar2,uVar3,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x48) = uVar1;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar1 = func_0x01c23b88(iVar2,uVar5,0);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x49) = uVar1;
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  uVar5 = func_0x01c23c30(iVar2,uVar5,0);
  *(int *)(param_1 + 0xe8) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  return;
}



// ===== FAT.ActivityIndepenBingo$$SaveSetup RVA 0x1a30978 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a40978(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01a40d50 + 0x1a40994);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a40d54 + 0x1a409a8));
    func_0x01384978(*(undefined4 *)(_UNK_01a40d58 + 0x1a409b4));
    func_0x01384978(*(undefined4 *)(_UNK_01a40d5c + 0x1a409c0));
    func_0x01384978(*(undefined4 *)(_UNK_01a40d60 + 0x1a409cc));
    func_0x01384978(*(undefined4 *)(_UNK_01a40d64 + 0x1a409d8));
    func_0x01384978(*(undefined4 *)(_UNK_01a40d68 + 0x1a409e4));
    *pcVar3 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_38 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_34 = 0;
  uStack_30 = uStack_3c;
  iStack_2c = iStack_38;
  iVar1 = func_0x0229f06c(0x8050,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x28);
    uVar2 = func_0x01c23ac8(0xffffffff,*(undefined1 *)(param_1 + 0x50),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar6 = *(undefined4 **)(_UNK_01a40d6c + 0x1a40a8c);
    func_0x03652b00(iVar1,uVar2,*puVar6);
    iVar1 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(param_2 + 0x28);
    *(int *)(param_1 + 0xc) = iVar1 + 1;
    uVar2 = func_0x01c23578(iVar1,*(undefined4 *)(param_1 + 0x3c),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar4,uVar2,*puVar6);
    iVar1 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(param_2 + 0x28);
    *(int *)(param_1 + 0xc) = iVar1 + 1;
    uVar2 = func_0x01c23578(iVar1,*(undefined4 *)(param_1 + 0x40),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar4,uVar2,*puVar6);
    iVar1 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(param_2 + 0x28);
    *(int *)(param_1 + 0xc) = iVar1 + 1;
    uVar2 = func_0x01c23578(iVar1,*(undefined4 *)(param_1 + 0x44),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar4,uVar2,*puVar6);
    iVar1 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(param_2 + 0x28);
    *(int *)(param_1 + 0xc) = iVar1 + 1;
    uVar2 = func_0x01c23ac8(iVar1,*(undefined1 *)(param_1 + 0x48),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar4,uVar2,*puVar6);
    iVar1 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(param_2 + 0x28);
    *(int *)(param_1 + 0xc) = iVar1 + 1;
    uVar2 = func_0x01c23ac8(iVar1,*(undefined1 *)(param_1 + 0x49),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar4,uVar2,*puVar6);
    iVar1 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(param_2 + 0x28);
    *(int *)(param_1 + 0xc) = iVar1 + 1;
    uVar2 = func_0x01c23578(iVar1,*(undefined4 *)(param_1 + 0x4c),0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar4,uVar2,*puVar6);
    iVar1 = *(int *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0xc) = 1000;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450818(&uStack_40,iVar1,**(undefined4 **)(_UNK_01a40d70 + 0x1a40c34));
    puVar7 = *(undefined4 **)(_UNK_01a40d74 + 0x1a40c48);
    while (iVar4 = func_0x01473bf8(&uStack_40,*puVar7), iVar1 = iStack_2c, iVar4 != 0) {
      iVar4 = *(int *)(param_1 + 0xc);
      iVar5 = *(int *)(param_2 + 0x28);
      *(int *)(param_1 + 0xc) = iVar4 + 1;
      if (iStack_2c == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x01c23578(iVar4,*(undefined4 *)(iVar1 + 8),0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar5,uVar2,*puVar6);
    }
    func_0x0245081c(&uStack_40,**(undefined4 **)(_UNK_01a40d78 + 0x1a40cb8));
  }
  else {
    iVar1 = func_0x0229f13c(0x8050,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ActivityIndepenBingo$$TryPopup RVA 0x1a30d84 =====

void FUN_01a40d84(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x8054,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8054,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityIndepenBingo$$Open RVA 0x1a30dec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a40dec(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
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
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01a4115c + 0x1a40e00);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a41160 + 0x1a40e14));
    func_0x01384978(*(undefined4 *)(_UNK_01a41164 + 0x1a40e20));
    func_0x01384978(*(undefined4 *)(_UNK_01a41168 + 0x1a40e2c));
    func_0x01384978(*(undefined4 *)(_UNK_01a4116c + 0x1a40e38));
    func_0x01384978(*(undefined4 *)(_UNK_01a41170 + 0x1a40e44));
    func_0x01384978(*(undefined4 *)(_UNK_01a41174 + 0x1a40e50));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8055,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8055,0);
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
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a41178 + 0x1a40ea8));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(int *)(iVar1 + 0x10) = param_1;
  iVar5 = FUN_01a40688(param_1);
  if (iVar5 != 0) {
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01a4117c + 0x1a40ee4));
    iVar5 = *(int *)(param_1 + 0xa8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar6 = *(undefined4 *)(iVar5 + 0xc);
    piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01a41180 + 0x1a40f0c),1);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar2 + 0x20));
    if (iVar5 == 0) {
      uVar3 = func_0x01384c10();
      func_0x01384aa0(uVar3,0);
    }
    if (piVar2[3] == 0) {
      func_0x01384bf4();
    }
    piVar2[4] = param_1;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar5 = func_0x0229f06c(0xd,0,piVar2,0);
    if (iVar5 == 0) {
      func_0x01ee81d4(iVar1,uVar6,0,piVar2);
    }
    else {
      iVar5 = func_0x0229f13c(0xd,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x02174858(iVar5,iVar1,uVar6,piVar2);
    }
    return;
  }
  iVar5 = *(int *)(param_1 + 100);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x20);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_01a41184 + 0x1a40fb4);
  uVar6 = func_0x0364c9b8(iVar5,0,*puVar8);
  uVar6 = func_0x02c05738(uVar6,1,0);
  iVar5 = *(int *)(param_1 + 100);
  *(undefined4 *)(iVar1 + 0xc) = uVar6;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(iVar5 + 0x20);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0364c9b8(iVar5,1,*puVar8);
  uVar6 = func_0x02c05738(uVar6,1,0);
  *(undefined4 *)(iVar1 + 0x18) = uVar6;
  iVar5 = func_0x01c24918(0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_1 + 100);
  iVar5 = *(int *)(iVar5 + 0x50);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x20);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0364c9b8(iVar7,0,*puVar8);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x01db1884(iVar5,uVar6,0);
  *(undefined4 *)(iVar1 + 8) = uVar6;
  iVar5 = func_0x01c24918(0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_1 + 100);
  iVar5 = *(int *)(iVar5 + 0x50);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(iVar7 + 0x20);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0364c9b8(iVar7,1,*puVar8);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x01db1884(iVar5,uVar6,0);
  iVar5 = *(int *)(param_1 + 0xd8);
  *(undefined4 *)(iVar1 + 0x14) = uVar6;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02139cf4(iVar5,0);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01a41188 + 0x1a41114));
  func_0x02450194(uVar6,iVar1,**(undefined4 **)(_UNK_01a4118c + 0x1a41130),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020dba14(iVar5,uVar6,0);
  pcVar4 = (char *)(_UNK_01a4142c + 0x1a411ac);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a41430 + 0x1a411c0));
    func_0x01384978(*(undefined4 *)(_UNK_01a41434 + 0x1a411cc));
    func_0x01384978(*(undefined4 *)(_UNK_01a41438 + 0x1a411d8));
    func_0x01384978(*(undefined4 *)(_UNK_01a4143c + 0x1a411e4));
    func_0x01384978(*(undefined4 *)(_UNK_01a41440 + 0x1a411f0));
    func_0x01384978(*(undefined4 *)(_UNK_01a41444 + 0x1a411fc));
    func_0x01384978(*(undefined4 *)(_UNK_01a41448 + 0x1a41208));
    func_0x01384978(*(undefined4 *)(_UNK_01a4144c + 0x1a41214));
    *pcVar4 = '\x01';
  }
  uStack_1c = 0;
  iVar1 = func_0x0229f06c(0x8058,0);
  if (iVar1 == 0) {
    func_0x01a47228();
    iVar1 = func_0x01a47078(&uStack_1c);
    if ((iVar1 != 0) && (iVar1 = func_0x01a47180(), iVar1 != 0)) {
      uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01a41450 + 0x1a41290));
      func_0x020d7954(uVar6,0);
      if (*(int *)(**(int **)(_UNK_01a41454 + 0x1a412ac) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x021616a0(uVar6,0);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xfc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e8007c(iVar1,1,0,0);
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01a41458 + 0x1a41310));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01eeb900(iVar1,0,0);
      iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01a4145c + 0x1a41340));
      puVar8 = *(undefined4 **)(_UNK_01a41460 + 0x1a41354);
      uVar6 = func_0x01384be4(*puVar8);
      func_0x024500b4(uVar6,0,**(undefined4 **)(_UNK_01a41464 + 0x1a41370),0);
      piVar2 = *(int **)(_UNK_01a41468 + 0x1a41384);
      iVar5 = *piVar2;
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x01384ab4();
        iVar5 = *piVar2;
      }
      iVar7 = *(int *)(*(int *)(iVar5 + 0x5c) + 8);
      if (iVar7 == 0) {
        if (*(int *)(iVar5 + 0x74) == 0) {
          func_0x01384ab4();
          iVar5 = *piVar2;
        }
        uVar3 = **(undefined4 **)(iVar5 + 0x5c);
        iVar7 = func_0x01384be4(*puVar8);
        func_0x024500b4(iVar7,uVar3,**(undefined4 **)(_UNK_01a4146c + 0x1a413e4),0);
        *(int *)(*(int *)(*piVar2 + 0x5c) + 8) = iVar7;
      }
      uVar6 = func_0x01a473fc(uVar6,iVar7);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01c36290(iVar1,uVar6,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8058,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174a08(iVar1,0);
  }
  return;
}



// ===== FAT.ActivityIndepenBingo.<>c__DisplayClass112_0$$.ctor RVA 0x1a31190 =====

void FUN_01a41190(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityIndepenBingo$$SendJumpCDItem RVA 0x1a31470 =====

void FUN_01a41470(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x805f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x805f,0);
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
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0xd8);
  uVar4 = *(undefined4 *)(iVar1 + 0x24);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar3,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  iVar1 = func_0x020ddf40(iVar1,uVar4,0,1);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x0210e250(iVar1,0x12,0,0);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0xd8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02147034(iVar3,iVar1,0);
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  return;
}



// ===== FAT.ActivityIndepenBingo$$AfterLoad RVA 0x1a31584 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a41584(int param_1,int param_2)

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
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01a416b8 + 0x1a4159c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a416bc + 0x1a415b0));
    func_0x01384978(*(undefined4 *)(_UNK_01a416c0 + 0x1a415bc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x808a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x808a,0);
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
  func_0x01a416c8(param_1);
  func_0x01a41b88(param_1);
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x58);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (0 < *(int *)(iVar1 + 0x24)) {
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
    FUN_01a3bac8(param_1);
    iVar1 = func_0x01a41da4(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) == 1) {
      iVar1 = func_0x01a41da4(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x03259410(iVar1,0,**(undefined4 **)(_UNK_01a416c4 + 0x1a41698));
      func_0x01a42194(param_1,uVar5);
    }
  }
  iVar1 = func_0x0229f06c(0x8077,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x24) < 1) {
      param_1 = param_1 + 0x6c;
    }
    else {
      param_1 = param_1 + 0x80;
    }
    iVar1 = func_0x0229f06c(0x15e,0,0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xfc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x01e7e874(iVar1,0);
      uStack_20 = 0;
      func_0x02b64b60(param_1,iVar1,uVar5,0);
    }
    else {
      iVar1 = func_0x0229f13c(0x15e,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x0217c17c(iVar1,param_1,0,0);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8077,0);
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
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
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
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2);
  return;
}



// ===== FAT.ActivityIndepenBingo$$_InitConf RVA 0x1a316c8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a416c8(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_01a41b14 + 0x1a416e0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a41b18 + 0x1a416f4));
    func_0x01384978(*(undefined4 *)(_UNK_01a41b1c + 0x1a41700));
    func_0x01384978(*(undefined4 *)(_UNK_01a41b20 + 0x1a4170c));
    func_0x01384978(*(undefined4 *)(_UNK_01a41b24 + 0x1a41718));
    func_0x01384978(*(undefined4 *)(_UNK_01a41b28 + 0x1a41724));
    func_0x01384978(*(undefined4 *)(_UNK_01a41b2c + 0x1a41730));
    func_0x01384978(*(undefined4 *)(_UNK_01a41b30 + 0x1a4173c));
    func_0x01384978(*(undefined4 *)(_UNK_01a41b34 + 0x1a41748));
    func_0x01384978(*(undefined4 *)(_UNK_01a41b38 + 0x1a41754));
    func_0x01384978(*(undefined4 *)(_UNK_01a41b3c + 0x1a41760));
    func_0x01384978(*(undefined4 *)(_UNK_01a41b40 + 0x1a4176c));
    func_0x01384978(*(undefined4 *)(_UNK_01a41b44 + 0x1a41778));
    func_0x01384978(*(undefined4 *)(_UNK_01a41b48 + 0x1a41784));
    func_0x01384978(*(undefined4 *)(_UNK_01a41b4c + 0x1a41790));
    *pcVar2 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  iStack_38 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_34 = 0;
  uStack_30 = uStack_3c;
  iStack_2c = iStack_38;
  iVar1 = func_0x0229f06c(0x806b,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar6 = *(undefined4 **)(_UNK_01a41b50 + 0x1a41828);
    uVar3 = func_0x0364c9b8(iVar1,uVar3,*puVar6);
    if (*(int *)(**(int **)(_UNK_01a41b54 + 0x1a4183c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar3 = func_0x036a1750(uVar3,**(undefined4 **)(_UNK_01a41b58 + 0x1a41858));
    iVar1 = *(int *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = *(int *)(param_1 + 0x58);
      iVar1 = *(int *)(iVar1 + 0x2c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(iVar5 + 0x28);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01cf6408(iVar1,uVar3,0);
      *(int *)(param_1 + 0x3c) = iVar1;
    }
    if (*(int *)(**(int **)(_UNK_01a41b5c + 0x1a418d0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar3 = func_0x036a1750(iVar1,**(undefined4 **)(_UNK_01a41b60 + 0x1a418ec));
    uVar4 = *(undefined4 *)(param_1 + 0x40);
    iVar1 = *(int *)(**(int **)(_UNK_01a41b64 + 0x1a41904) + 0x74);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    if (iVar1 == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x036a1750(uVar4,**(undefined4 **)(_UNK_01a41b68 + 0x1a41928));
    *(int *)(param_1 + 0x60) = iVar1;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x14);
      uVar3 = *(undefined4 *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0364c9b8(iVar1,uVar3,*puVar6);
    }
    if (*(int *)(**(int **)(_UNK_01a41b6c + 0x1a41978) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x036a1750(uVar3,**(undefined4 **)(_UNK_01a41b70 + 0x1a41994));
    *(int *)(param_1 + 100) = iVar1;
    if (iVar1 != 0) {
      iVar5 = *(int *)(param_1 + 0x68);
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      func_0x01a423b0(iVar5,uVar3);
      iVar1 = *(int *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0xc) = 1000;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02450818(&uStack_40,iVar1,**(undefined4 **)(_UNK_01a41b74 + 0x1a41a04));
      puVar6 = *(undefined4 **)(_UNK_01a41b78 + 0x1a41a18);
      while (iVar5 = func_0x01473bf8(&uStack_40,*puVar6), iVar1 = iStack_2c, iVar5 != 0) {
        iVar5 = *(int *)(param_1 + 0xc);
        iVar7 = *(int *)(param_1 + 0xe8);
        *(int *)(param_1 + 0xc) = iVar5 + 1;
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x01c23c30(iVar5,*(undefined4 *)(iVar7 + 0x28),0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar1 + 8) = uVar3;
      }
      func_0x0245081c(&uStack_40,**(undefined4 **)(_UNK_01a41b7c + 0x1a41a7c));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x806b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.ActivityIndepenBingo$$_InitTheme RVA 0x1a31b88 =====

/* WARNING: Possible PIC construction at 0x01a41c38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a41c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a41cb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a41d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a41d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a41d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01a41d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02b61be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x028c2820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01a41d78) */
/* WARNING: Removing unreachable block (ram,0x01a41d88) */
/* WARNING: Removing unreachable block (ram,0x01a41d8c) */
/* WARNING: Removing unreachable block (ram,0x01a41d54) */
/* WARNING: Removing unreachable block (ram,0x01a41d64) */
/* WARNING: Removing unreachable block (ram,0x01a41d68) */
/* WARNING: Removing unreachable block (ram,0x01a41d30) */
/* WARNING: Removing unreachable block (ram,0x01a41d40) */
/* WARNING: Removing unreachable block (ram,0x01a41d44) */
/* WARNING: Removing unreachable block (ram,0x01a41d0c) */
/* WARNING: Removing unreachable block (ram,0x01a41d1c) */
/* WARNING: Removing unreachable block (ram,0x01a41d20) */
/* WARNING: Removing unreachable block (ram,0x01a41cb8) */
/* WARNING: Removing unreachable block (ram,0x01a41cc8) */
/* WARNING: Removing unreachable block (ram,0x01a41ccc) */
/* WARNING: Removing unreachable block (ram,0x01a41cf8) */
/* WARNING: Removing unreachable block (ram,0x01a41cfc) */
/* WARNING: Removing unreachable block (ram,0x01a41c90) */
/* WARNING: Removing unreachable block (ram,0x01a41ca0) */
/* WARNING: Removing unreachable block (ram,0x01a41ca4) */
/* WARNING: Removing unreachable block (ram,0x01a41c3c) */
/* WARNING: Removing unreachable block (ram,0x01a41c4c) */
/* WARNING: Removing unreachable block (ram,0x01a41c50) */
/* WARNING: Removing unreachable block (ram,0x01a41c7c) */
/* WARNING: Removing unreachable block (ram,0x01a41c80) */
/* WARNING: Removing unreachable block (ram,0x028c2824) */
/* WARNING: Removing unreachable block (ram,0x028c31dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a41b88(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r4;
  int iVar7;
  undefined4 unaff_r5;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *unaff_r6;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  undefined4 unaff_r7;
  int unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  int iVar14;
  int aiStackY_b8 [16];
  int aiStack_70 [6];
  int aiStack_58 [6];
  int iStack_40;
  int *piStack_3c;
  int *piStack_38;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = func_0x0229f06c(0x806f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x806f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
SUB_02173f80:
    *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
    *(int *)((int)register0x00000054 + -8) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
    *(int **)((int)register0x00000054 + -0x10) = unaff_r6;
    *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r5;
    *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
    func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
    iVar5 = *(int *)(iVar1 + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x30) =
         *(undefined4 *)((int)register0x00000054 + -0x48);
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((int)register0x00000054 + -0x44);
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((int)register0x00000054 + -0x40);
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((int)register0x00000054 + -0x3c);
    *(undefined4 *)((int)register0x00000054 + -0x20) =
         *(undefined4 *)((int)register0x00000054 + -0x38);
    if (iVar5 != 0) {
      func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar5,0);
    }
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
    iVar1 = func_0x0245495c(iVar5,uVar11,(undefined1 *)((int)register0x00000054 + -0x30),uVar6);
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_1c = 0;
  uStack_20 = 1;
  func_0x02b64928(param_1 + 0x6c,*(undefined4 *)(iVar1 + 0x54),param_1,0);
  iVar1 = *(int *)(param_1 + 0x58);
  piVar8 = (int *)(param_1 + 0x78);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar4 = *(int **)(iVar1 + 0x44);
  uStack_24 = 0x1a41c3c;
  unaff_r6 = (int *)0x0;
  pcVar13 = (char *)(_UNK_02b64618 + 0x2b64558);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02b6461c + 0x2b6456c),piVar4,0);
    func_0x01384978(*(undefined4 *)(_UNK_02b64620 + 0x2b64578));
    *pcVar13 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1776,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1776,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar13 = (char *)(_UNK_021d6f90 + 0x21d6e50);
    iStack_40 = param_1;
    piStack_3c = piVar8;
    piStack_38 = unaff_r6;
    if (*pcVar13 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d6f94 + 0x21d6e64),piVar8,piVar4,0);
      func_0x01384978(*(undefined4 *)(_UNK_021d6f98 + 0x21d6e70));
      *pcVar13 = '\x01';
    }
    aiStack_58[1] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    aiStack_58[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    aiStack_58[3] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    aiStack_58[0] = 0;
    aiStack_58[4] = 0;
    func_0x0245494c(aiStack_70,0);
    aiStack_58[0] = aiStack_70[0];
    aiStack_58[1] = aiStack_70[1];
    aiStack_58[2] = aiStack_70[2];
    aiStack_58[3] = aiStack_70[3];
    aiStack_58[4] = aiStack_70[4];
    aiStack_70[0] = *piVar8;
    aiStack_70[1] = *(undefined4 *)(param_1 + 0x7c);
    uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_021d6f9c + 0x21d6ec0),aiStack_70);
    func_0x01485288(aiStack_58,uVar11,0);
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(aiStack_58,*(int *)(iVar1 + 0x10),0);
    }
    func_0x014852b8(aiStack_58,0,0);
    func_0x01485238(aiStack_58,piVar4,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar5,uVar11,aiStack_58,uVar6,1,0);
    func_0x02f5ecfc(aiStack_70,aiStack_58,0,**(undefined4 **)(_UNK_021d6fa0 + 0x21d6f74));
    *piVar8 = aiStack_70[0];
    *(int *)(param_1 + 0x7c) = aiStack_70[1];
    return aiStack_70[0];
  }
  piVar3 = *(int **)(param_1 + 0x7c);
  if (piVar3 == (int *)0x0) {
    if (*(int *)(**(int **)(_UNK_02b64624 + 0x2b645f0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = **(int **)(_UNK_02b64628 + 0x2b64610);
    register0x00000054 = (BADSPACEBASE *)&uStack_20;
  }
  else {
    iVar1 = *piVar8;
    pcVar13 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
    piStack_38 = (int *)param_1;
    if (*pcVar13 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84));
      func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
      func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
      func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
      *pcVar13 = '\x01';
    }
    iVar5 = func_0x0229f06c(0x305,0);
    if (iVar5 != 0) {
      iVar5 = func_0x0229f13c(0x305,0);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iStack_40 = 0;
      iVar1 = func_0x021846e8(iVar5,piVar3,piVar4,iVar1);
      return iVar1;
    }
    iVar5 = func_0x01822f2c(piVar4,0);
    piVar3[2] = iVar5;
    if (iVar5 != 0) {
      iVar5 = func_0x017d2c28(*(undefined4 *)(iVar5 + 0x1c),0);
      piVar3[3] = iVar5;
      if (iVar1 == 0) {
        return 1;
      }
      iVar5 = piVar3[2];
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x01875b98(*(undefined4 *)(iVar5 + 0x24),0);
      piVar3[4] = iVar5;
      uVar11 = func_0x02b61610(piVar3);
      func_0x02b61c14(iVar1,uVar11);
      return 1;
    }
    if ((int)piVar4 < 1) {
      return 0;
    }
    piStack_3c = piVar4;
    uVar11 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),&piStack_3c);
    unaff_r7 = 0;
    iVar5 = func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                            **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar11,0);
    if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uStack_24 = 0x2b61be4;
    param_1 = iVar5;
    piVar8 = piVar3;
    unaff_r6 = piVar4;
    register0x00000054 = (BADSPACEBASE *)&iStack_40;
  }
  *(undefined4 *)((int)register0x00000054 + -4) = uStack_24;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r11;
  *(int **)((int)register0x00000054 + -0xc) = piVar8;
  piVar8 = (int *)((int)register0x00000054 + -0x10);
  *piVar8 = param_1;
  pcVar13 = (char *)(_UNK_028c29e4 + 0x28c2958);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c29e8 + 0x28c296c),0);
    *pcVar13 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x46,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x46,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_r4 = *piVar8;
    unaff_r5 = *(undefined4 *)((int)register0x00000054 + -0xc);
    unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
    param_1 = iVar5;
    goto SUB_02173f80;
  }
  if (*(int *)(**(int **)(_UNK_028c29ec + 0x28c29c4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = *piVar8;
  uVar11 = *(undefined4 *)((int)register0x00000054 + -0xc);
  *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -4);
  *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)((int)register0x00000054 + -8);
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *piVar8 = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int **)((int)register0x00000054 + -0x18) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar11;
  piVar4 = (int *)((int)register0x00000054 + -0x20);
  *piVar4 = iVar1;
  iVar1 = 4;
  pcVar13 = (char *)(_UNK_028c2868 + 0x28c26ec);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c286c + 0x28c2700));
    *pcVar13 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x14,0);
  iVar9 = iVar5;
  if (iVar2 != 0) {
    iVar5 = func_0x0229f13c(0x14,0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar7 = *piVar4;
    iVar10 = *(int *)((int)register0x00000054 + -0x1c);
    iVar12 = *(int *)((int)register0x00000054 + -0x18);
    iVar2 = *(int *)((int)register0x00000054 + -0x14);
    iVar1 = *piVar8;
    piVar3 = *(int **)((int)register0x00000054 + -0xc);
    iVar14 = *(int *)((int)register0x00000054 + -4);
    goto LAB_02174038;
  }
  piVar3 = *(int **)(_UNK_028c2870 + 0x28c275c);
  iVar2 = *piVar3;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar3;
  }
  if (**(int **)(iVar2 + 0x5c) < 1) {
LAB_028c2848:
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar5 = *piVar4;
    iVar10 = *(int *)((int)register0x00000054 + -0x1c);
    iVar7 = *(int *)((int)register0x00000054 + -0x18);
    iVar2 = *(int *)((int)register0x00000054 + -0x14);
    iVar1 = *piVar8;
    piVar3 = *(int **)((int)register0x00000054 + -0xc);
    iVar12 = *(int *)((int)register0x00000054 + -4);
  }
  else {
    if (iVar5 == 0) {
      func_0x01384bf0();
      iVar2 = *piVar3;
    }
    iVar7 = *(int *)(iVar5 + 8);
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar3;
    }
    iVar10 = **(int **)(iVar2 + 0x5c);
    if (iVar7 <= iVar10) goto LAB_028c2848;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar10 = **(int **)(*piVar3 + 0x5c);
    }
    iVar9 = *(int *)(iVar5 + 8);
    if (iVar9 < 1) {
      return iVar9;
    }
    iVar7 = 0;
    if (iVar9 < iVar10) {
      iVar10 = iVar9;
    }
    iVar2 = func_0x04673af4(iVar5,0,iVar10,0);
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar12 = 0x28c2824;
    iVar9 = iVar2;
    register0x00000054 = (BADSPACEBASE *)piVar4;
  }
  *(int *)((int)register0x00000054 + -4) = iVar12;
  *(int *)((int)register0x00000054 + -8) = iVar7;
  *(int *)((int)register0x00000054 + -0xc) = iVar10;
  *(int *)((int)register0x00000054 + -0x10) = iVar5;
  pcVar13 = (char *)(_UNK_028c3238 + 0x28c3124);
  if (*pcVar13 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_028c323c + 0x28c3138));
    *pcVar13 = '\x01';
  }
  iVar5 = func_0x0229f06c(0x15,0);
  if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x028c319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(&UNK_028c31a0 + _UNK_028c31ac))();
    return iVar1;
  }
  iVar5 = func_0x0229f13c(0x15,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)((int)register0x00000054 + -0x10);
  iVar10 = *(int *)((int)register0x00000054 + -0xc);
  iVar12 = *(int *)((int)register0x00000054 + -8);
  iVar14 = *(int *)((int)register0x00000054 + -4);
LAB_02174038:
  *(int *)((int)register0x00000054 + -4) = iVar14;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(int **)((int)register0x00000054 + -0xc) = piVar3;
  *(int *)((int)register0x00000054 + -0x10) = iVar1;
  *(int *)((int)register0x00000054 + -0x14) = iVar2;
  *(int *)((int)register0x00000054 + -0x18) = iVar12;
  *(int *)((int)register0x00000054 + -0x1c) = iVar10;
  *(int *)((int)register0x00000054 + -0x20) = iVar7;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,iVar9,0);
  iVar1 = *(int *)(iVar5 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar1 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar1,0);
  }
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),4,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar9,0);
  iVar9 = *(int *)(iVar5 + 8);
  uVar11 = *(undefined4 *)(iVar5 + 0xc);
  iVar1 = *(int *)(iVar5 + 0x10);
  if (iVar9 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 3;
  if (iVar1 == 0) {
    uVar6 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  iVar1 = func_0x0245495c(iVar9,uVar11,(undefined1 *)((int)register0x00000054 + -0x38),uVar6);
  return iVar1;
}



// ===== FAT.ActivityIndepenBingo$$_GetCanChooseGroupDetailID RVA 0x1a31da4 =====

/* WARNING: Removing unreachable block (ram,0x01a42074) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01a41da4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_01a42154 + 0x1a41db8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a42158 + 0x1a41dcc));
    func_0x01384978(*(undefined4 *)(_UNK_01a4215c + 0x1a41dd8));
    func_0x01384978(*(undefined4 *)(_UNK_01a42160 + 0x1a41de4));
    func_0x01384978(*(undefined4 *)(_UNK_01a42164 + 0x1a41df0));
    func_0x01384978(*(undefined4 *)(_UNK_01a42168 + 0x1a41dfc));
    func_0x01384978(*(undefined4 *)(_UNK_01a4216c + 0x1a41e08));
    func_0x01384978(*(undefined4 *)(_UNK_01a42170 + 0x1a41e14));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8070,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8070,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar7 = (char *)(_UNK_021a9f78 + 0x21a9e98);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021a9f7c + 0x21a9eac),param_1,0);
      *pcVar7 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021a9f80 + 0x21a9f68));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a42174 + 0x1a41e6c));
  func_0x03258eb8(iVar1,**(undefined4 **)(_UNK_01a42178 + 0x1a41e80));
  iVar8 = *(int *)(param_1 + 0x5c);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x18);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x0364c2b4(iVar8,**(undefined4 **)(_UNK_01a4217c + 0x1a41eb4));
  piVar10 = *(int **)(_UNK_01a42180 + 0x1a41ecc);
  piVar11 = *(int **)(_UNK_01a42184 + 0x1a41ed4);
  do {
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar10) {
          puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
          goto LAB_01a41f2c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar10,0);
LAB_01a41f2c:
    iVar8 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    if (iVar8 == 0) goto LAB_01a41ffc;
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
          goto LAB_01a41fa4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01a41fa4:
    uVar9 = (*(code *)*puVar3)(piVar2,puVar3[1]);
    iVar8 = func_0x01a43cdc(param_1,uVar9);
  } while (iVar8 == 0);
  func_0x01a43e4c(param_1,iVar1,uVar9);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0325b328(iVar1,**(undefined4 **)(_UNK_01a42188 + 0x1a41ff4));
LAB_01a41ffc:
  if (piVar2 != (int *)0x0) {
    iVar8 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar10[-1] == **(int **)(_UNK_01a4218c + 0x1a42014)) {
          puVar3 = (undefined4 *)(iVar8 + *piVar10 * 8 + 0xc0);
          goto LAB_01a4205c;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a4218c + 0x1a42014),0);
LAB_01a4205c:
    (*(code *)*puVar3)(piVar2,puVar3[1]);
  }
  return iVar1;
}



// ===== FAT.ActivityIndepenBingo$$ChooseGroup RVA 0x1a32194 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a42194(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
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
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01a42314 + 0x1a421ac);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a42318 + 0x1a421c0));
    func_0x01384978(*(undefined4 *)(_UNK_01a4231c + 0x1a421cc));
    func_0x01384978(*(undefined4 *)(_UNK_01a42320 + 0x1a421d8));
    func_0x01384978(*(undefined4 *)(_UNK_01a42324 + 0x1a421e4));
    func_0x01384978(*(undefined4 *)(_UNK_01a42328 + 0x1a421f0));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8074,0);
  if (iVar1 == 0) {
    piVar2 = *(int **)(_UNK_01a4232c + 0x1a4224c);
    *(int *)(param_1 + 0x40) = param_2;
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar6 = func_0x036a1750(param_2,**(undefined4 **)(_UNK_01a42330 + 0x1a4226c));
    *(undefined4 *)(param_1 + 0x60) = uVar6;
    func_0x01a42c0c(param_1);
    func_0x01a42c64(param_1);
    if (*(int *)(**(int **)(_UNK_01a42334 + 0x1a42294) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01a42338 + 0x1a422b0));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3fd8(iVar1,0);
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01a4233c + 0x1a422dc));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x028c3fd8(iVar1,0);
    param_2 = *(int *)(param_1 + 0x24) + 1;
    pcVar5 = (char *)(_UNK_019ba468 + 0x19ba36c);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_019ba46c + 0x19ba380),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_019ba470 + 0x19ba38c));
      *pcVar5 = '\x01';
    }
    iVar1 = func_0x0229f06c(0xa05,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_019ba474 + 0x19ba3ec) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x02f74dec(**(undefined4 **)(_UNK_019ba478 + 0x19ba408));
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b489c0(&uStack_24,param_1,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(iVar1 + 0x48) = uStack_24;
      *(undefined4 *)(iVar1 + 0x4c) = uStack_20;
      *(undefined4 *)(iVar1 + 0x50) = uStack_1c;
      *(int *)(iVar1 + 0x54) = param_2;
      func_0x019930d8(iVar1,0,0);
      return;
    }
    iVar1 = func_0x0229f13c(0xa05,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8074,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
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



// ===== FAT.ActivityIndepenBingo$$_PopupStart RVA 0x1a32340 =====

void FUN_01a42340(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8077,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x24) < 1) {
      param_1 = param_1 + 0x6c;
    }
    else {
      param_1 = param_1 + 0x80;
    }
    iVar1 = func_0x0229f06c(0x15e,0,0,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xfc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x01e7e874(iVar1,0);
      uStack_20 = 0;
      func_0x02b64b60(param_1,iVar1,uVar4,0);
    }
    else {
      iVar1 = func_0x0229f13c(0x15e,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_20 = 0;
      func_0x0217c17c(iVar1,param_1,0,0);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8077,0);
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



// ===== FAT.ActivityIndepenBingo$$GetGroupInfo RVA 0x1a32924 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a42924(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_01a42bbc + 0x1a42940);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a42bc0 + 0x1a42954));
    func_0x01384978(*(undefined4 *)(_UNK_01a42bc4 + 0x1a42960));
    func_0x01384978(*(undefined4 *)(_UNK_01a42bc8 + 0x1a4296c));
    func_0x01384978(*(undefined4 *)(_UNK_01a42bcc + 0x1a42978));
    func_0x01384978(*(undefined4 *)(_UNK_01a42bd0 + 0x1a42984));
    func_0x01384978(*(undefined4 *)(_UNK_01a42bd4 + 0x1a42990));
    func_0x01384978(*(undefined4 *)(_UNK_01a42bd8 + 0x1a4299c));
    func_0x01384978(*(undefined4 *)(_UNK_01a42bdc + 0x1a429a8));
    func_0x01384978(*(undefined4 *)(_UNK_01a42be0 + 0x1a429b4));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x808b,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0245058c(param_2,**(undefined4 **)(_UNK_01a42be4 + 0x1a42a28));
    iVar2 = FUN_01a41da4(param_1);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0325a3b4(&uStack_48,iVar2,**(undefined4 **)(_UNK_01a42be8 + 0x1a42a5c));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    puVar5 = *(undefined4 **)(_UNK_01a42bec + 0x1a42a7c);
    piVar7 = *(int **)(_UNK_01a42bf0 + 0x1a42a84);
    puVar8 = *(undefined4 **)(_UNK_01a42bf4 + 0x1a42a8c);
    puVar9 = *(undefined4 **)(_UNK_01a42bf8 + 0x1a42a94);
    puVar6 = *(undefined4 **)(_UNK_01a42bfc + 0x1a42a9c);
    while (iVar2 = func_0x01470118(&uStack_38,*puVar5), uVar1 = uStack_2c, iVar2 != 0) {
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = func_0x036a1750(uVar1,*puVar8);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x02fb6260(*(undefined4 *)(iVar2 + 0x18),*puVar9);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      func_0x02450824(param_2,uVar1,uVar3,*puVar6);
    }
    func_0x02450828(&uStack_38,**(undefined4 **)(_UNK_01a42c00 + 0x1a42b20));
  }
  else {
    iVar2 = func_0x0229f13c(0x808b,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.ActivityIndepenBingo$$_ResetBoardIndex RVA 0x1a32c0c =====

void FUN_01a42c0c(int param_1)

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
  
  iVar1 = func_0x0229f06c(0x8075,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8075,0);
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
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



// ===== FAT.ActivityIndepenBingo$$_RefreshBoard RVA 0x1a32c64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a42c64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int aiStack_20 [2];
  
  pcVar3 = (char *)(_UNK_01a42f04 + 0x1a42c7c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a42f08 + 0x1a42c90));
    func_0x01384978(*(undefined4 *)(_UNK_01a42f0c + 0x1a42c9c));
    func_0x01384978(*(undefined4 *)(_UNK_01a42f10 + 0x1a42ca8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8076,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8076,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    aiStack_20[0] = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    aiStack_20[0] = iStack_38;
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
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01a42f14 + 0x1a42d30);
  uVar5 = func_0x0364c9b8(iVar1,uVar5,*puVar6);
  if (*(int *)(**(int **)(_UNK_01a42f18 + 0x1a42d44) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x036a1750(uVar5,**(undefined4 **)(_UNK_01a42f1c + 0x1a42d60));
  *(int *)(param_1 + 100) = iVar1;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar5 = func_0x0364c9b8(iVar1,0,*puVar6);
  uVar5 = func_0x02c05738(uVar5,1,0);
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364c9b8(iVar1,1,*puVar6);
  uVar2 = func_0x02c05738(uVar2,1,0);
  iVar1 = *(int *)(param_1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  func_0x020ddf40(iVar1,uVar5,0,0);
  iVar1 = *(int *)(param_1 + 0xd8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02139cf4(iVar1,0);
  iVar4 = *(int *)(param_1 + 0xd8);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x02139cf4(iVar4,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x020da680(aiStack_20,iVar4,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  func_0x020ddf40(iVar1,uVar2,0,aiStack_20[0] + -1);
  iVar4 = *(int *)(param_1 + 100);
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar5 = *(undefined4 *)(iVar4 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  FUN_01a423b0(iVar1,uVar5);
  return;
}



// ===== FAT.ActivityIndepenBingo$$EnterNextBoard RVA 0x1a32f20 =====

/* WARNING: Removing unreachable block (ram,0x01a427cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a42f20(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
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
  
  pcVar7 = (char *)(_UNK_01a43274 + 0x1a42f34);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a43278 + 0x1a42f48));
    func_0x01384978(*(undefined4 *)(_UNK_01a4327c + 0x1a42f54));
    func_0x01384978(*(undefined4 *)(_UNK_01a43280 + 0x1a42f60));
    func_0x01384978(*(undefined4 *)(_UNK_01a43284 + 0x1a42f6c));
    func_0x01384978(*(undefined4 *)(_UNK_01a43288 + 0x1a42f78));
    func_0x01384978(*(undefined4 *)(_UNK_01a4328c + 0x1a42f84));
    func_0x01384978(*(undefined4 *)(_UNK_01a43290 + 0x1a42f90));
    func_0x01384978(*(undefined4 *)(_UNK_01a43294 + 0x1a42f9c));
    func_0x01384978(*(undefined4 *)(_UNK_01a43298 + 0x1a42fa8));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x152c,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01a4329c + 0x1a43000));
    func_0x0244f5a0(iVar2,0);
    iVar10 = *(int *)(param_1 + 0x60);
    iVar8 = *(int *)(param_1 + 0x44);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0x14);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar10 + 0xc) <= iVar8 + 1) {
      return;
    }
    puVar3 = *(undefined4 **)(_UNK_01a432a0 + 0x1a43054);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    uVar9 = func_0x01384be4(*puVar3);
    func_0x0328e950(uVar9,**(undefined4 **)(_UNK_01a432a4 + 0x1a4306c));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar2 + 0x10) = uVar9;
    iVar8 = func_0x01c24918(0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(param_1 + 100);
    iVar8 = *(int *)(iVar8 + 0x50);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0x20);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    puVar3 = *(undefined4 **)(_UNK_01a432a8 + 0x1a430d4);
    uVar9 = func_0x0364c9b8(iVar10,0,*puVar3);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x01db1884(iVar8,uVar9,0);
    *(undefined4 *)(iVar2 + 8) = uVar9;
    iVar8 = func_0x01c24918(0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(param_1 + 100);
    iVar8 = *(int *)(iVar8 + 0x50);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar10 + 0x20);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x0364c9b8(iVar10,1,*puVar3);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x01db1884(iVar8,uVar9,0);
    iVar8 = *(int *)(param_1 + 0xd8);
    *(undefined4 *)(iVar2 + 0xc) = uVar9;
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x02139cf4(iVar8,0);
    uVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01a432ac + 0x1a43198));
    func_0x02450194(uVar9,iVar2,**(undefined4 **)(_UNK_01a432b0 + 0x1a431b4),0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x020dba14(iVar8,uVar9,0);
    iVar10 = *(int *)(param_1 + 0x60);
    iVar8 = *(int *)(param_1 + 0x44) + 1;
    *(int *)(param_1 + 0x44) = iVar8;
    if (iVar10 == 0) {
      func_0x01384bf0();
      iVar8 = *(int *)(param_1 + 0x44);
    }
    iVar10 = *(int *)(iVar10 + 0x14);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar9 = func_0x0364c9b8(iVar10,iVar8,*puVar3);
    if (*(int *)(**(int **)(_UNK_01a432b4 + 0x1a43228) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar9 = func_0x036a1750(uVar9,**(undefined4 **)(_UNK_01a432b8 + 0x1a43244));
    uVar6 = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(param_1 + 100) = uVar9;
    *(undefined1 *)(param_1 + 0x48) = 0;
    func_0x01a432c4(param_1,uVar6);
    iVar2 = func_0x0229f06c(0x153c,0);
    if (iVar2 == 0) {
      iVar8 = *(int *)(param_1 + 100);
      iVar2 = *(int *)(param_1 + 0x68);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar9 = *(undefined4 *)(iVar8 + 0xc);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      pcVar7 = (char *)(_UNK_01a428c4 + 0x1a423cc);
      uStack_24 = unaff_r4;
      uStack_20 = unaff_r5;
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01a428c8 + 0x1a423e0));
        func_0x01384978(*(undefined4 *)(_UNK_01a428cc + 0x1a423ec));
        func_0x01384978(*(undefined4 *)(_UNK_01a428d0 + 0x1a423f8));
        func_0x01384978(*(undefined4 *)(_UNK_01a428d4 + 0x1a42404));
        func_0x01384978(*(undefined4 *)(_UNK_01a428d8 + 0x1a42410));
        func_0x01384978(*(undefined4 *)(_UNK_01a428dc + 0x1a4241c));
        func_0x01384978(*(undefined4 *)(_UNK_01a428e0 + 0x1a42428));
        func_0x01384978(*(undefined4 *)(_UNK_01a428e4 + 0x1a42434));
        func_0x01384978(*(undefined4 *)(_UNK_01a428e8 + 0x1a42440));
        func_0x01384978(*(undefined4 *)(_UNK_01a428ec + 0x1a4244c));
        func_0x01384978(*(undefined4 *)(_UNK_01a428f0 + 0x1a42458));
        *pcVar7 = '\x01';
      }
      iVar8 = func_0x0229f06c(0x153d,0);
      if (iVar8 != 0) {
        iVar8 = func_0x0229f13c(0x153d,0);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uStack_1c = uStack_20;
        uStack_20 = uStack_24;
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,uVar9,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar8 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar2,0);
        func_0x01485238(&uStack_38,uVar9,0);
        iVar10 = *(int *)(iVar8 + 8);
        uVar9 = *(undefined4 *)(iVar8 + 0xc);
        iVar2 = *(int *)(iVar8 + 0x10);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uVar6 = 3;
        if (iVar2 == 0) {
          uVar6 = 2;
        }
        func_0x0245495c(iVar10,uVar9,&uStack_38,uVar6,0,0);
        return;
      }
      if (*(int *)(**(int **)(_UNK_01a428f4 + 0x1a424b8) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar8 = func_0x036a1750(uVar9,**(undefined4 **)(_UNK_01a428f8 + 0x1a424d4));
      *(int *)(iVar2 + 0xc) = iVar8;
      if (iVar8 == 0) {
        return;
      }
      iVar8 = *(int *)(iVar2 + 8);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      func_0x024505d4(iVar8,**(undefined4 **)(_UNK_01a428fc + 0x1a42504));
      iVar8 = *(int *)(iVar2 + 0xc);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x10);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      piVar1 = (int *)func_0x03653608(iVar8,**(undefined4 **)(_UNK_01a42900 + 0x1a42538));
      piVar11 = *(int **)(_UNK_01a42904 + 0x1a42554);
      do {
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar8 = *piVar1;
        uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar5[-1] == *piVar11) {
              puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
              goto LAB_01a425ac;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar1,*piVar11,0);
LAB_01a425ac:
        iVar8 = (*(code *)*puVar3)(piVar1,puVar3[1]);
        if (iVar8 == 0) goto LAB_01a42750;
        if (piVar1 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar8 = *piVar1;
        uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_01a42908 + 0x1a425e0)) {
              puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
              goto LAB_01a42628;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01a42908 + 0x1a425e0),0);
LAB_01a42628:
        iVar8 = (*(code *)*puVar3)(piVar1,puVar3[1]);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        iVar8 = func_0x0244f8e4(iVar8,0x3a,0,0);
        iVar10 = *(int *)(iVar2 + 8);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar8 + 0xc) == 0) {
          func_0x01384bf4();
        }
        uVar9 = *(undefined4 *)(iVar8 + 0x10);
        if (*(int *)(**(int **)(_UNK_01a4290c + 0x1a4268c) + 0x74) == 0) {
          func_0x01384ab4();
        }
        uVar9 = func_0x02566298(uVar9,0);
        if (*(uint *)(iVar8 + 0xc) < 2) {
          func_0x01384bf4();
        }
        uVar6 = func_0x02566298(*(undefined4 *)(iVar8 + 0x14),0);
        uStack_2c = 0;
        uStack_30 = 0;
        func_0x038fd264(&uStack_30,uVar9,uVar6,**(undefined4 **)(_UNK_01a42910 + 0x1a426dc));
        uVar9 = func_0x01a46ecc(iVar2);
        uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01a42914 + 0x1a42708));
        func_0x01a46c90(uVar6,iVar8,uVar9);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        uStack_38 = **(undefined4 **)(_UNK_01a42918 + 0x1a4273c);
        func_0x024505ac(iVar10,uStack_30,uStack_2c,uVar6);
      } while( true );
    }
    iVar2 = func_0x0229f13c(0x153c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x152c,0);
    if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar8 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar6 = 2;
  if (iVar2 == 0) {
    uVar6 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6);
  return;
LAB_01a42750:
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_01a4291c + 0x1a4276c)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0xc0);
          goto LAB_01a427b4;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01a4291c + 0x1a4276c),0);
LAB_01a427b4:
    (*(code *)*puVar3)(piVar1,puVar3[1]);
  }
  return;
}



// ===== FAT.ActivityIndepenBingo.<>c__DisplayClass122_0$$.ctor RVA 0x1a332bc =====

void FUN_01a432bc(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityIndepenBingo$$_RefreshNextBoardItem RVA 0x1a332c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a432c4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
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
  
  pcVar3 = (char *)(_UNK_01a43474 + 0x1a432e0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a43478 + 0x1a432f4));
    func_0x01384978(*(undefined4 *)(_UNK_01a4347c + 0x1a43300));
    func_0x01384978(*(undefined4 *)(_UNK_01a43480 + 0x1a4330c));
    func_0x01384978(*(undefined4 *)(_UNK_01a43484 + 0x1a43318));
    func_0x01384978(*(undefined4 *)(_UNK_01a43488 + 0x1a43324));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1536,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1536,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a4348c + 0x1a43384));
  func_0x03258eb8(iVar1,**(undefined4 **)(_UNK_01a43490 + 0x1a43398));
  iVar4 = *(int *)(param_1 + 100);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar6 = 0;
  func_0x02c052d8(*(undefined4 *)(iVar4 + 0x20),iVar1,1,0);
  puVar7 = *(undefined4 **)(_UNK_01a43494 + 0x1a433d4);
  while( true ) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(param_2 + 0xc) <= iVar6) break;
    iVar4 = *(int *)(param_1 + 0xd8);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x02139cf4(iVar4,0);
    uVar5 = func_0x0328eea8(param_2,iVar6,**(undefined4 **)(_UNK_01a43498 + 0x1a43418));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x03259410(iVar1,iVar6,*puVar7);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    func_0x020e7c44(iVar4,uVar5,uVar2,0);
    iVar6 = iVar6 + 1;
  }
  return;
}



// ===== FAT.ActivityIndepenBingo$$_RefreshBingoMap RVA 0x1a3349c =====

/* WARNING: Removing unreachable block (ram,0x01a427cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a4349c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
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
  
  iVar3 = func_0x0229f06c(0x153c,0);
  if (iVar3 != 0) {
    iVar3 = func_0x0229f13c(0x153c,0);
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
    iVar8 = *(int *)(iVar3 + 8);
    uVar10 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar6);
    return;
  }
  iVar8 = *(int *)(param_1 + 100);
  iVar3 = *(int *)(param_1 + 0x68);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar10 = *(undefined4 *)(iVar8 + 0xc);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_01a428c4 + 0x1a423cc);
  uStack_24 = unaff_r4;
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a428c8 + 0x1a423e0));
    func_0x01384978(*(undefined4 *)(_UNK_01a428cc + 0x1a423ec));
    func_0x01384978(*(undefined4 *)(_UNK_01a428d0 + 0x1a423f8));
    func_0x01384978(*(undefined4 *)(_UNK_01a428d4 + 0x1a42404));
    func_0x01384978(*(undefined4 *)(_UNK_01a428d8 + 0x1a42410));
    func_0x01384978(*(undefined4 *)(_UNK_01a428dc + 0x1a4241c));
    func_0x01384978(*(undefined4 *)(_UNK_01a428e0 + 0x1a42428));
    func_0x01384978(*(undefined4 *)(_UNK_01a428e4 + 0x1a42434));
    func_0x01384978(*(undefined4 *)(_UNK_01a428e8 + 0x1a42440));
    func_0x01384978(*(undefined4 *)(_UNK_01a428ec + 0x1a4244c));
    func_0x01384978(*(undefined4 *)(_UNK_01a428f0 + 0x1a42458));
    *pcVar7 = '\x01';
  }
  iVar8 = func_0x0229f06c(0x153d,0);
  if (iVar8 != 0) {
    iVar8 = func_0x0229f13c(0x153d,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = uStack_24;
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar10,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar8 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar3,0);
    func_0x01485238(&uStack_38,uVar10,0);
    iVar9 = *(int *)(iVar8 + 8);
    uVar10 = *(undefined4 *)(iVar8 + 0xc);
    iVar3 = *(int *)(iVar8 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar3 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar6,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_01a428f4 + 0x1a424b8) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar8 = func_0x036a1750(uVar10,**(undefined4 **)(_UNK_01a428f8 + 0x1a424d4));
  *(int *)(iVar3 + 0xc) = iVar8;
  if (iVar8 == 0) {
    return;
  }
  iVar8 = *(int *)(iVar3 + 8);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  func_0x024505d4(iVar8,**(undefined4 **)(_UNK_01a428fc + 0x1a42504));
  iVar8 = *(int *)(iVar3 + 0xc);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x10);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  piVar1 = (int *)func_0x03653608(iVar8,**(undefined4 **)(_UNK_01a42900 + 0x1a42538));
  piVar11 = *(int **)(_UNK_01a42904 + 0x1a42554);
  do {
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
          goto LAB_01a425ac;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar1,*piVar11,0);
LAB_01a425ac:
    iVar8 = (*(code *)*puVar2)(piVar1,puVar2[1]);
    if (iVar8 == 0) break;
    if (piVar1 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar8 = *piVar1;
    uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01a42908 + 0x1a425e0)) {
          puVar2 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
          goto LAB_01a42628;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01a42908 + 0x1a425e0),0);
LAB_01a42628:
    iVar8 = (*(code *)*puVar2)(piVar1,puVar2[1]);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    iVar8 = func_0x0244f8e4(iVar8,0x3a,0,0);
    iVar9 = *(int *)(iVar3 + 8);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar8 + 0xc) == 0) {
      func_0x01384bf4();
    }
    uVar10 = *(undefined4 *)(iVar8 + 0x10);
    if (*(int *)(**(int **)(_UNK_01a4290c + 0x1a4268c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar10 = func_0x02566298(uVar10,0);
    if (*(uint *)(iVar8 + 0xc) < 2) {
      func_0x01384bf4();
    }
    uVar6 = func_0x02566298(*(undefined4 *)(iVar8 + 0x14),0);
    uStack_2c = 0;
    uStack_30 = 0;
    func_0x038fd264(&uStack_30,uVar10,uVar6,**(undefined4 **)(_UNK_01a42910 + 0x1a426dc));
    uVar10 = func_0x01a46ecc(iVar3);
    uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01a42914 + 0x1a42708));
    func_0x01a46c90(uVar6,iVar8,uVar10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = **(undefined4 **)(_UNK_01a42918 + 0x1a4273c);
    func_0x024505ac(iVar9,uStack_30,uStack_2c,uVar6);
  } while( true );
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_01a4291c + 0x1a4276c)) {
          puVar2 = (undefined4 *)(iVar3 + *piVar11 * 8 + 0xc0);
          goto LAB_01a427b4;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar1,**(int **)(_UNK_01a4291c + 0x1a4276c),0);
LAB_01a427b4:
    (*(code *)*puVar2)(piVar1,puVar2[1]);
  }
  return;
}



// ===== FAT.ActivityIndepenBingo$$FinishRound RVA 0x1a3351c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a4351c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01a43a8c + 0x1a43534);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a43a90 + 0x1a43548));
    func_0x01384978(*(undefined4 *)(_UNK_01a43a94 + 0x1a43554));
    func_0x01384978(*(undefined4 *)(_UNK_01a43a98 + 0x1a43560));
    func_0x01384978(*(undefined4 *)(_UNK_01a43a9c + 0x1a4356c));
    func_0x01384978(*(undefined4 *)(_UNK_01a43aa0 + 0x1a43578));
    func_0x01384978(*(undefined4 *)(_UNK_01a43aa4 + 0x1a43584));
    func_0x01384978(*(undefined4 *)(_UNK_01a43aa8 + 0x1a43590));
    func_0x01384978(*(undefined4 *)(_UNK_01a43aac + 0x1a4359c));
    func_0x01384978(*(undefined4 *)(_UNK_01a43ab0 + 0x1a435a8));
    func_0x01384978(*(undefined4 *)(_UNK_01a43ab4 + 0x1a435b4));
    func_0x01384978(*(undefined4 *)(_UNK_01a43ab8 + 0x1a435c0));
    func_0x01384978(*(undefined4 *)(_UNK_01a43abc + 0x1a435cc));
    func_0x01384978(*(undefined4 *)(_UNK_01a43ac0 + 0x1a435d8));
    func_0x01384978(*(undefined4 *)(_UNK_01a43ac4 + 0x1a435e4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8065,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8065,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_0224fab4 + 0x224f9d4);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0224fab8 + 0x224f9e8),param_1,0);
      *pcVar3 = '\x01';
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    iStack_2c = iStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0224fabc + 0x224faa4));
    return uVar6;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a43ac8 + 0x1a43644));
  func_0x0244f5a0(iVar1,0);
  puVar4 = *(undefined4 **)(_UNK_01a43acc + 0x1a43660);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  uVar6 = func_0x01384be4(*puVar4);
  puVar7 = *(undefined4 **)(_UNK_01a43ad0 + 0x1a43678);
  func_0x0328e950(uVar6,*puVar7);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *puVar4;
  *(undefined4 *)(iVar1 + 0x10) = uVar6;
  uVar6 = func_0x01384be4(uVar2);
  func_0x0328e950(uVar6,*puVar7);
  *(undefined4 *)(iVar1 + 0x14) = uVar6;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  iVar5 = func_0x01c24918(0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(param_1 + 100);
  iVar5 = *(int *)(iVar5 + 0x50);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x20);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  puVar4 = *(undefined4 **)(_UNK_01a43ad4 + 0x1a436fc);
  uVar6 = func_0x0364c9b8(iVar8,0,*puVar4);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x01db1884(iVar5,uVar6,0);
  *(undefined4 *)(iVar1 + 8) = uVar6;
  iVar5 = func_0x01c24918(0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(param_1 + 100);
  iVar5 = *(int *)(iVar5 + 0x50);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x20);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x0364c9b8(iVar8,1,*puVar4);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar6 = func_0x01db1884(iVar5,uVar6,0);
  iVar5 = *(int *)(param_1 + 0xd8);
  *(undefined4 *)(iVar1 + 0xc) = uVar6;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02139cf4(iVar5,0);
  puVar4 = *(undefined4 **)(_UNK_01a43ad8 + 0x1a437c0);
  uVar6 = func_0x01384be4(*puVar4);
  func_0x02450194(uVar6,iVar1,**(undefined4 **)(_UNK_01a43adc + 0x1a437dc),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x020dba14(iVar5,uVar6,0);
  iVar5 = *(int *)(param_1 + 0xd8);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02141880(iVar5,0);
  uVar6 = func_0x01384be4(*puVar4);
  func_0x02450194(uVar6,iVar1,**(undefined4 **)(_UNK_01a43ae0 + 0x1a43844),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x021131f8(iVar5,uVar6,0);
  iVar5 = *(int *)(iVar1 + 0x18);
  *(undefined1 *)(param_1 + 0x49) = 0;
  if (0 < iVar5) {
    iVar5 = 0;
    puVar4 = *(undefined4 **)(_UNK_01a43ae4 + 0x1a4388c);
    piVar9 = *(int **)(_UNK_01a43ae8 + 0x1a43894);
    do {
      iVar8 = *(int *)(param_1 + 0x58);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x1c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar8 + 0xc) <= iVar5) goto LAB_01a439d8;
      iVar8 = *(int *)(param_1 + 0x58);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      iVar8 = *(int *)(iVar8 + 0x1c);
      if (iVar8 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x03653d1c(iVar8,iVar5,*puVar4);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x02566088(&iStack_2c,uVar6,0);
      iVar5 = iVar5 + 1;
    } while (iStack_2c < *(int *)(iVar1 + 0x18));
    iVar5 = func_0x01c24918(0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    piVar9 = *(int **)(_UNK_01a43aec + 0x1a43954);
    iVar8 = *(int *)(iVar5 + 0x40);
    iVar5 = *piVar9;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x01384ab4();
      iVar5 = *piVar9;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x304);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = **(undefined4 **)(_UNK_01a43af0 + 0x1a43994);
    uStack_34 = **(undefined4 **)(_UNK_01a43af4 + 0x1a439a0);
    uStack_3c = 0x250;
    uStack_30 = 0;
    uStack_48 = 0;
    iStack_44 = 0;
    uStack_40 = 0;
    uVar6 = func_0x01cdcbac(iVar8,uStack_28,uStack_24,uVar6);
    *(undefined4 *)(param_1 + 0xe0) = uVar6;
    *(undefined1 *)(param_1 + 0xd0) = 1;
  }
LAB_01a439d8:
  iVar8 = *(int *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0x24) + 1;
  *(int *)(param_1 + 0x24) = iVar5;
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  iVar8 = *(int *)(iVar8 + 0x14);
  if (iVar8 == 0) {
    func_0x01384bf0();
  }
  if (iVar5 < *(int *)(iVar8 + 0xc)) {
    *(undefined1 *)(param_1 + 0xd1) = 1;
    func_0x01a43b00(param_1);
  }
  else {
    func_0x019ba484(param_1,*(int *)(param_1 + 0x24),
                    *(int *)(param_1 + 0x24) * 3 + *(int *)(param_1 + 0x44) + -2,0);
    iVar5 = func_0x01c24918(0);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0xd8);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x02b49350(iVar5,param_1,0,0);
  }
  return *(undefined4 *)(iVar1 + 0x10);
}



// ===== FAT.ActivityIndepenBingo.<>c__DisplayClass123_0$$.ctor RVA 0x1a33af8 =====

void FUN_01a43af8(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityIndepenBingo$$_EnterNextRound RVA 0x1a33b00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a43b00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
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
  
  pcVar3 = (char *)(_UNK_01a43c70 + 0x1a43b14);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a43c74 + 0x1a43b28));
    func_0x01384978(*(undefined4 *)(_UNK_01a43c78 + 0x1a43b34));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x806a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar5 = *(undefined4 *)(param_1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 0;
    func_0x01dbc0ec(iVar1,uVar5,0);
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x48) = 0;
    FUN_01a416c8(param_1);
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (uVar6 = 0, 0 < *(int *)(*(int *)(param_1 + 0x58) + 0x24))) {
      uVar6 = 1;
    }
    *(undefined1 *)(param_1 + 0x50) = uVar6;
    FUN_01a41b88(param_1);
    FUN_01a3bac8(param_1);
    iVar1 = FUN_01a41da4(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) == 1) {
      iVar1 = FUN_01a41da4(param_1);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x03259410(iVar1,0,**(undefined4 **)(_UNK_01a43c7c + 0x1a43c50));
      FUN_01a42194(param_1,uVar5);
    }
    iVar1 = func_0x0229f06c(0x8077,0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x24) < 1) {
        param_1 = param_1 + 0x6c;
      }
      else {
        param_1 = param_1 + 0x80;
      }
      iVar1 = func_0x0229f06c(0x15e,0,0,0);
      if (iVar1 == 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0xfc);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x01e7e874(iVar1,0);
        uStack_20 = 0;
        func_0x02b64b60(param_1,iVar1,uVar5,0);
      }
      else {
        iVar1 = func_0x0229f13c(0x15e,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_20 = 0;
        func_0x0217c17c(iVar1,param_1,0,0);
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x8077,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x806a,0);
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



// ===== FAT.ActivityIndepenBingo$$GetRecycleReward RVA 0x1a33c80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a43c80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
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
  
  iVar1 = func_0x0229f06c(0x808c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x808c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0217a1dc + 0x217a0fc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0217a1e0 + 0x217a110),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
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
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0217a1e4 + 0x217a1cc));
    return uVar5;
  }
  uVar5 = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return uVar5;
}



// ===== FAT.ActivityIndepenBingo$$_CheckGroupLevelRequire RVA 0x1a33cdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a43cdc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  pcVar5 = (char *)(_UNK_01a43e38 + 0x1a43cf4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a43e3c + 0x1a43d08));
    func_0x01384978(*(undefined4 *)(_UNK_01a43e40 + 0x1a43d14));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8072,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8072,0);
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
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  if (*(int *)(**(int **)(_UNK_01a43e44 + 0x1a43d70) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x036a1750(param_2,**(undefined4 **)(_UNK_01a43e48 + 0x1a43d8c));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar7 = *(int *)(iVar1 + 0x18);
    iVar4 = func_0x01c24918(0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = *(int *)(iVar4 + 0x48);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar4 = func_0x01dd2c04(iVar4,0);
    if (iVar7 <= iVar4) {
      iVar4 = *(int *)(iVar1 + 0x14);
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x48);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01dd2c04(iVar1,0);
      uVar2 = (uint)(iVar1 <= iVar4);
    }
  }
  return uVar2;
}



// ===== FAT.ActivityIndepenBingo$$_FillGroupDetailID RVA 0x1a33e4c =====

/* WARNING: Removing unreachable block (ram,0x0325ad8c) */
/* WARNING: Removing unreachable block (ram,0x0325ad9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a43e4c(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  
  pcVar12 = (char *)(_UNK_01a440ac + 0x1a43e6c);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a440b0 + 0x1a43e80));
    func_0x01384978(*(undefined4 *)(_UNK_01a440b4 + 0x1a43e8c));
    func_0x01384978(*(undefined4 *)(_UNK_01a440b8 + 0x1a43e98));
    func_0x01384978(*(undefined4 *)(_UNK_01a440bc + 0x1a43ea4));
    func_0x01384978(*(undefined4 *)(_UNK_01a440c0 + 0x1a43eb0));
    func_0x01384978(*(undefined4 *)(_UNK_01a440c4 + 0x1a43ebc));
    func_0x01384978(*(undefined4 *)(_UNK_01a440c8 + 0x1a43ec8));
    func_0x01384978(*(undefined4 *)(_UNK_01a440cc + 0x1a43ed4));
    func_0x01384978(*(undefined4 *)(_UNK_01a440d0 + 0x1a43ee0));
    func_0x01384978(*(undefined4 *)(_UNK_01a440d4 + 0x1a43eec));
    *pcVar12 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8073,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8073,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217b868(iVar1,param_1,param_2,param_3,0);
    return;
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  piVar2 = *(int **)(_UNK_01a440d8 + 0x1a43f64);
  param_2[3] = 0;
  iVar1 = *piVar2;
  param_2[4] = param_2[4] + 1;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x036a1750(param_3,**(undefined4 **)(_UNK_01a440dc + 0x1a43f90));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar1 + 0x1c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar11 + 0xc) < 4) {
    piVar3 = *(int **)(_UNK_01a440e0 + 0x1a44098);
    piVar2 = *(int **)(iVar1 + 0x1c);
  }
  else {
    piVar2 = *(int **)(_UNK_01a440e4 + 0x1a43fd0);
    uVar10 = *(undefined4 *)(iVar1 + 0x1c);
    iVar1 = *piVar2;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar2;
    }
    iVar11 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x14);
    if (iVar11 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar2;
      }
      uVar13 = **(undefined4 **)(iVar1 + 0x5c);
      iVar11 = func_0x01384be4(**(undefined4 **)(_UNK_01a440e8 + 0x1a4401c));
      func_0x0245082c(iVar11,uVar13,**(undefined4 **)(_UNK_01a440ec + 0x1a4403c),0);
      *(int *)(*(int *)(*piVar2 + 0x5c) + 0x14) = iVar11;
    }
    uVar10 = func_0x02f9fd10(uVar10,iVar11,**(undefined4 **)(_UNK_01a440f0 + 0x1a44060));
    piVar2 = (int *)func_0x02fb1e30(uVar10,3,**(undefined4 **)(_UNK_01a440f4 + 0x1a44074));
    piVar3 = *(int **)(_UNK_01a440f8 + 0x1a4408c);
  }
  uVar7 = param_2[3];
  iVar1 = *(int *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x48);
  pcVar12 = (char *)(_UNK_0325ae98 + 0x325a8f8);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0325ae9c + 0x325a910));
    func_0x01384978(*(undefined4 *)(_UNK_0325aea0 + 0x325a91c));
    *pcVar12 = '\x01';
  }
  if (piVar2 == (int *)0x0) {
    func_0x04839ccc(6,0);
  }
  if ((uint)param_2[3] < uVar7) {
    func_0x0484c9cc(0);
  }
  iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
  if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
    iVar11 = func_0x014001f0(iVar11);
  }
  piVar3 = (int *)func_0x01384ab8(piVar2,iVar11);
  if (piVar3 == (int *)0x0) {
    if ((int)uVar7 < param_2[3]) {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x10);
      if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
        iVar11 = func_0x014001f0(iVar11);
      }
      iVar4 = *piVar2;
      uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar8 != 0) {
        piVar3 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar3[-1] == iVar11) {
            puVar5 = (undefined4 *)(iVar4 + *piVar3 * 8 + 0xc0);
            goto LAB_0325abc8;
          }
          uVar8 = uVar8 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar2,iVar11,0);
LAB_0325abc8:
      piVar2 = (int *)(*(code *)*puVar5)(piVar2,puVar5[1]);
      piVar3 = *(int **)(_UNK_0325aea4 + 0x325abe8);
      do {
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *piVar2;
        uVar8 = (uint)*(ushort *)(iVar11 + 0xb6);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
          do {
            if (piVar9[-1] == *piVar3) {
              puVar5 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
              goto LAB_0325ac40;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar2,*piVar3,0);
LAB_0325ac40:
        iVar11 = (*(code *)*puVar5)(piVar2,puVar5[1]);
        if (iVar11 == 0) goto LAB_0325ad0c;
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x98);
        if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
          iVar11 = func_0x014001f0(iVar11);
        }
        iVar4 = *piVar2;
        uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar9[-1] == iVar11) {
              puVar5 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
              goto LAB_0325acd4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar2,iVar11,0);
LAB_0325acd4:
        uVar10 = (*(code *)*puVar5)(piVar2,puVar5[1]);
        func_0x0325a680(param_2,uVar7,uVar10,
                        *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xa4));
        uVar7 = uVar7 + 1;
      } while( true );
    }
    func_0x0325b5f8(param_2,piVar2,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x20));
  }
  else {
    iVar11 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
    if ((*(ushort *)(iVar11 + 0xbd) & 1) == 0) {
      iVar11 = func_0x014001f0(iVar11);
    }
    iVar4 = *piVar3;
    uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar8 != 0) {
      piVar2 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar2[-1] == iVar11) {
          puVar5 = (undefined4 *)(iVar4 + *piVar2 * 8 + 0xc0);
          goto LAB_0325aa70;
        }
        uVar8 = uVar8 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar3,iVar11,0);
LAB_0325aa70:
    iVar11 = (*(code *)*puVar5)(piVar3,puVar5[1]);
    if (0 < iVar11) {
      func_0x03259cec(param_2,param_2[3] + iVar11,
                      *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x3c));
      if ((int)uVar7 < param_2[3]) {
        func_0x0484e904(param_2[2],uVar7,param_2[2],iVar11 + uVar7,param_2[3] - uVar7,0);
      }
      if (param_2 == piVar3) {
        func_0x0484e904(param_2[2],0,param_2[2],uVar7,uVar7,0);
        func_0x0484e904(param_2[2],iVar11 + uVar7,param_2[2],uVar7 << 1,param_2[3] - uVar7,0);
      }
      else {
        iVar4 = param_2[2];
        iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = func_0x014001f0(iVar1);
        }
        iVar6 = *piVar3;
        uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar8 != 0) {
          piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar2[-1] == iVar1) {
              puVar5 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xe8);
              goto LAB_0325ab94;
            }
            uVar8 = uVar8 - 1;
            piVar2 = piVar2 + 2;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined4 *)func_0x014002dc(piVar3,iVar1,5);
LAB_0325ab94:
        (*(code *)*puVar5)(piVar3,iVar4,uVar7,puVar5[1]);
      }
      param_2[3] = param_2[3] + iVar11;
    }
  }
LAB_0325adbc:
  param_2[4] = param_2[4] + 1;
  return;
LAB_0325ad0c:
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar3 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_0325aea8 + 0x325ad2c)) {
          puVar5 = (undefined4 *)(iVar1 + *piVar3 * 8 + 0xc0);
          goto LAB_0325ad74;
        }
        uVar7 = uVar7 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_0325aea8 + 0x325ad2c),0);
LAB_0325ad74:
    (*(code *)*puVar5)(piVar2,puVar5[1]);
  }
  goto LAB_0325adbc;
}



// ===== FAT.ActivityIndepenBingo$$PutItem RVA 0x1a340fc =====

/* WARNING: Removing unreachable block (ram,0x01a44558) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a440fc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_01a4474c + 0x1a44118);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a44750 + 0x1a4412c));
    func_0x01384978(*(undefined4 *)(_UNK_01a44754 + 0x1a44138));
    func_0x01384978(*(undefined4 *)(_UNK_01a44758 + 0x1a44144));
    func_0x01384978(*(undefined4 *)(_UNK_01a4475c + 0x1a44150));
    func_0x01384978(*(undefined4 *)(_UNK_01a44760 + 0x1a4415c));
    func_0x01384978(*(undefined4 *)(_UNK_01a44764 + 0x1a44168));
    *pcVar10 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x808d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x808d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021734d8(iVar1,param_1,param_2,0);
    return uVar2;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = func_0x02feb690(param_2,&iStack_28,0,**(undefined4 **)(_UNK_01a44768 + 0x1a441e4));
  iVar1 = iStack_28;
  if (iVar3 != 0) {
    if (iStack_28 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0211d880(iVar1,0);
    iVar1 = iStack_28;
    if (iVar3 != 0) {
      if (iStack_28 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x0211dc48(iVar1,0);
      if (iVar1 != 0) {
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        iVar1 = func_0x0210cd28(param_2,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x020e6d84(iVar1,param_2,0);
        return 1;
      }
    }
  }
  iVar1 = func_0x021697d8(param_2,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0x10);
    iVar11 = **(int **)(_UNK_01a4476c + 0x1a44460);
    iVar1 = *(int *)(iVar11 + 0x1c);
    if (iVar1 == 0) {
      func_0x0140024c(iVar11);
      iVar1 = *(int *)(iVar11 + 0x1c);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    uVar2 = **(undefined4 **)(iVar1 + 0x5c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 0x18;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar4 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01a44770 + 0x1a442c0));
    piVar12 = *(int **)(_UNK_01a44774 + 0x1a442dc);
    piVar13 = *(int **)(_UNK_01a44778 + 0x1a442e4);
    do {
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar4;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == *piVar12) {
            puVar5 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_01a4433c;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar12,0);
LAB_01a4433c:
      iVar1 = (*(code *)*puVar5)(piVar4,puVar5[1]);
      if (iVar1 == 0) {
        uVar7 = 8;
        goto LAB_01a444e0;
      }
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar4;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == *piVar13) {
            puVar5 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_01a443b0;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,*piVar13,0);
LAB_01a443b0:
      iVar1 = (*(code *)*puVar5)(piVar4,puVar5[1]);
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x50);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar2 = func_0x0210e2d4(param_2,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = func_0x01dd0230(iVar3,uVar2,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
    } while (*(int *)(iVar3 + 0x10) != iVar1);
    uVar7 = 7;
LAB_01a444e0:
    if (piVar4 != (int *)0x0) {
      iVar1 = *piVar4;
      uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar8 != 0) {
        piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar12[-1] == **(int **)(_UNK_01a4477c + 0x1a444f8)) {
            puVar5 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
            goto LAB_01a44540;
          }
          uVar8 = uVar8 - 1;
          piVar12 = piVar12 + 2;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined4 *)func_0x014002dc(piVar4,**(int **)(_UNK_01a4477c + 0x1a444f8),0);
LAB_01a44540:
      (*(code *)*puVar5)(piVar4,puVar5[1]);
    }
    if ((uVar7 | 8) != 8) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0xd8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x020e82b4(iVar1,param_2,0);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0x10);
    iVar11 = **(int **)(_UNK_01a44780 + 0x1a445dc);
    iVar1 = *(int *)(iVar11 + 0x1c);
    if (iVar1 == 0) {
      func_0x0140024c(iVar11);
      iVar1 = *(int *)(iVar11 + 0x1c);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x014001f0();
    }
    uVar2 = **(undefined4 **)(iVar1 + 0x5c);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 0x17;
  }
  func_0x01ca1c50(iVar3,uVar6,uVar2,0);
  return 0;
}



// ===== FAT.ActivityIndepenBingo$$PeekItem RVA 0x1a34788 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a44788(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uStack_30;
  int iStack_2c;
  int aiStack_28 [2];
  undefined4 uStack_20;
  
  iVar2 = func_0x0229f06c(0x808e,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x808e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_20 = 0;
    uVar3 = func_0x0217a5ac(iVar2,param_1,param_2,param_3);
    return uVar3;
  }
  iVar2 = *(int *)(param_1 + 0xd8);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02139cf4(iVar2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar9 = (char *)(_UNK_020e8a8c + 0x20e8744);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_020e8a90 + 0x20e8758),param_2,param_3,0);
    func_0x01384978(*(undefined4 *)(_UNK_020e8a94 + 0x20e8764));
    func_0x01384978(*(undefined4 *)(_UNK_020e8a98 + 0x20e8770));
    func_0x01384978(*(undefined4 *)(_UNK_020e8a9c + 0x20e877c));
    *pcVar9 = '\x01';
  }
  aiStack_28[0] = 0;
  iStack_2c = 0;
  iVar4 = func_0x0229f06c(0x1496,0);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar2 + 0x98);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x02141880(iVar4,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x021138b0(iVar6,param_2,param_3,0);
    uStack_30 = param_2;
    if (iVar6 == 0) {
      uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_020e8aa0 + 0x20e8a08),&uStack_30);
      puVar8 = *(undefined4 **)(_UNK_020e8aa4 + 0x20e8a20);
    }
    else {
      iVar10 = *(int *)(iVar2 + 0x90) / 2;
      iVar1 = *(int *)(iVar2 + 0x8c) / 2;
      iStack_2c = iVar1;
      aiStack_28[0] = iVar10;
      uVar3 = func_0x0210e2d4(iVar6,0);
      uVar7 = func_0x020defc4(iVar2,iVar1,iVar10,uVar3,0,0,0,0);
      func_0x020df144(iVar2,uVar7,&iStack_2c,aiStack_28);
      if (-1 < (int)uVar7) {
        iVar10 = *(int *)(iVar2 + 0x80);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar10 + 0xc) <= uVar7) {
          func_0x01384bf4();
        }
        func_0x02117440(iVar6,iVar2,*(undefined4 *)(iVar10 + uVar7 * 4 + 0x10),0);
        func_0x020e8ab4(iVar2,iVar6,0xffffffff,uVar7,iStack_2c,aiStack_28[0],0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar10 = func_0x02141880(iVar4,0);
        if (iVar10 == 0) {
          func_0x01384bf0();
        }
        func_0x02114c08(iVar10,param_2,param_3,0);
        iVar10 = *(int *)(iVar2 + 0x38);
        if (iVar10 != 0) {
          (**(code **)(iVar10 + 0xc))
                    (*(undefined4 *)(iVar10 + 0x20),iVar6,*(undefined4 *)(iVar10 + 0x14));
        }
        iVar2 = *(int *)(iVar2 + 0x68);
        if (iVar2 != 0) {
          (**(code **)(iVar2 + 0xc))
                    (*(undefined4 *)(iVar2 + 0x20),iVar6,*(undefined4 *)(iVar2 + 0x14));
        }
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        func_0x02148ef8(iVar4,iVar6,3,0);
        uVar3 = func_0x0210e2d4(iVar6,0);
        func_0x019a617c(param_3,uVar3,0,0);
        iVar2 = func_0x01c24918(0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar2 + 0x74);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x01c8f2dc(iVar2,0);
        return 1;
      }
      uVar3 = func_0x01384abc(**(undefined4 **)(_UNK_020e8aac + 0x20e8a30),&uStack_30);
      puVar8 = *(undefined4 **)(_UNK_020e8ab0 + 0x20e8a48);
    }
    uVar5 = 0;
    uVar3 = func_0x0244f6a0(*puVar8,uVar3,0);
    if (*(int *)(**(int **)(_UNK_020e8aa8 + 0x20e8a64) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x028c2874(uVar3,0);
  }
  else {
    iVar4 = func_0x0229f13c(0x1496,0);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0217a5ac(iVar4,iVar2,param_2,param_3,0);
  }
  return uVar5;
}



// ===== FAT.ActivityIndepenBingo$$get_ActivityBoardId RVA 0x1a34838 =====

undefined4 FUN_01a44838(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
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
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x808f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x808f,0);
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
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x18);
  }
  return uVar3;
}



// ===== FAT.ActivityIndepenBingo$$IsItemNeeded RVA 0x1a3489c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a4489c(int param_1,undefined4 param_2)

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
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01a44ab0 + 0x1a448b4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a44ab4 + 0x1a448c8));
    func_0x01384978(*(undefined4 *)(_UNK_01a44ab8 + 0x1a448d4));
    func_0x01384978(*(undefined4 *)(_UNK_01a44abc + 0x1a448e0));
    func_0x01384978(*(undefined4 *)(_UNK_01a44ac0 + 0x1a448ec));
    func_0x01384978(*(undefined4 *)(_UNK_01a44ac4 + 0x1a448f8));
    func_0x01384978(*(undefined4 *)(_UNK_01a44ac8 + 0x1a44904));
    func_0x01384978(*(undefined4 *)(_UNK_01a44acc + 0x1a44910));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8090,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8090,0);
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
    func_0x0245495c(iVar5,uVar6,&uStack_38,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01a44ad0 + 0x1a4496c));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_1 + 0x68);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(iVar5 + 8);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01a44ad4 + 0x1a449a8));
  func_0x02450808(uVar6,iVar1,**(undefined4 **)(_UNK_01a44ad8 + 0x1a449c8),0);
  uVar6 = func_0x02f91df8(uVar3,uVar6,**(undefined4 **)(_UNK_01a44adc + 0x1a449e0));
  iVar5 = *(int *)(param_1 + 0xd8);
  *(undefined4 *)(iVar1 + 0xc) = uVar6;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02141880(iVar5,0);
  uVar6 = func_0x01384be4(**(undefined4 **)(_UNK_01a44ae0 + 0x1a44a18));
  func_0x02450194(uVar6,iVar1,**(undefined4 **)(_UNK_01a44ae4 + 0x1a44a34),0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  func_0x021131f8(iVar5,uVar6,0);
  iVar5 = func_0x03668dfc(**(undefined4 **)(_UNK_01a44ae8 + 0x1a44a68));
  uVar6 = *(undefined4 *)(iVar1 + 8);
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x01de5d8c(iVar5,uVar6,uVar3,0);
  return (uint)(0 < *(int *)(iVar1 + 0xc)) & (uVar2 ^ 1);
}



// ===== FAT.ActivityIndepenBingo.<>c__DisplayClass137_0$$.ctor RVA 0x1a34aec =====

void FUN_01a44aec(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityIndepenBingo$$JumpTask RVA 0x1a34af4 =====

void FUN_01a44af4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x8094,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8094,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
    return;
  }
  func_0x02b64d7c(param_1 + 0x1b,0);
                    /* WARNING: Could not recover jumptable at 0x01a44b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined4 *)(*param_1 + 0x1fc));
  return;
}



// ===== FAT.ActivityIndepenBingo$$<DequeueItemFly>b__96_0 RVA 0x1a34b84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a44b84(undefined8 *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  pcVar2 = (char *)(_UNK_01a44bfc + 0x1a44ba0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a44c00 + 0x1a44bb4));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(param_2 + 0xe4);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x035d17d4(&uStack_20,iVar1,**(undefined4 **)(_UNK_01a44c04 + 0x1a44bdc));
  *(undefined4 *)(param_1 + 1) = uStack_18;
  *param_1 = uStack_20;
  return;
}



// ===== FAT.ActivityIndepenBingo$$<>iFixBaseProxy_get_GuideRes RVA 0x1a34c08 =====

void FUN_01a44c08(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  *param_1 = *(undefined4 *)(param_2 + 0x1c);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.ActivityIndepenBingo$$<>iFixBaseProxy_get_Visual RVA 0x1a34c1c =====

undefined4 FUN_01a44c1c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.ActivityIndepenBingo$$<>iFixBaseProxy_WhenEnd RVA 0x1a34c24 =====

void FUN_01a44c24(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x1a2,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1a2,0);
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



// ===== FAT.ActivityIndepenBingo$$<>iFixBaseProxy_WhenReset RVA 0x1a34c2c =====

void FUN_01a44c2c(undefined4 param_1)

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
  
  iVar1 = func_0x0229f06c(0x13ac,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x13ac,0);
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



// ===== FAT.ActivityIndepenBingo$$<>iFixBaseProxy_TryPopup RVA 0x1a34c34 =====

void FUN_01a44c34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_0x0229f06c(0x1aa2,0,param_3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1aa2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021c7f50(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.ActivityIndepenBingo$$<>iFixBaseProxy_AfterLoad RVA 0x1a34c3c =====

void FUN_01a44c3c(undefined4 param_1,undefined4 param_2)

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
  
  iVar1 = func_0x0229f06c(0x1f1,0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1f1,0);
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



// ===== FAT.ActivityIndepenBingo.<>c$$.cctor RVA 0x1a34c44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a44c44(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01a44c9c + 0x1a44c54);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a44ca0 + 0x1a44c68));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01a44ca4 + 0x1a44c7c);
  uVar1 = func_0x01384be4(*piVar3);
  func_0x0244f5a0(uVar1,0);
  **(undefined4 **)(*piVar3 + 0x5c) = uVar1;
  return;
}



// ===== FAT.ActivityIndepenBingo.<>c$$.ctor RVA 0x1a34ca8 =====

void FUN_01a44ca8(undefined4 param_1)

{
  (*(code *)&SUB_04874ed4)(param_1,0);
  return;
}



// ===== FAT.ActivityIndepenBingo.<>c$$<CheckBingoComplete>b__92_0 RVA 0x1a34cb0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01a44cb0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int in_r3;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
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
  
  pcVar7 = (char *)(_UNK_01a44cf8 + 0x1a44cc4);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a44cfc + 0x1a44cd8));
    *pcVar7 = '\x01';
  }
  if (in_r3 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0x8025,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8025,0);
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
    func_0x01485278(&uStack_30,in_r3,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_30,uVar6,0,0);
    uVar9 = func_0x0245496c(&uStack_30,0,0);
    return uVar9;
  }
  iVar1 = func_0x01a44dc0(in_r3);
  if (iVar1 != 0) {
    return 0;
  }
  uVar9 = *(undefined4 *)(in_r3 + 0xc);
  pcVar7 = (char *)(_UNK_01a46b4c + 0x1a469fc);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a46b50 + 0x1a46a10));
    func_0x01384978(*(undefined4 *)(_UNK_01a46b54 + 0x1a46a1c));
    *pcVar7 = '\x01';
  }
  uVar6 = 0;
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x8029,0);
  if (iVar1 == 0) {
    func_0x01a47228();
    iVar1 = func_0x01a47078(&uStack_14);
    if (iVar1 != 0) {
      iVar1 = *(int *)(*(int *)(**(int **)(_UNK_01a46b58 + 0x1a46a90) + 0x5c) + 4);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0xdc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar2 = (int *)func_0x0214da98(iVar1,0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01a46b5c + 0x1a46ae0)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe0);
            goto LAB_01a46b28;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01a46b5c + 0x1a46ae0),4);
LAB_01a46b28:
      uVar6 = (*(code *)*puVar3)(piVar2,uVar9,puVar3[1]);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8029,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x021856f4(iVar1,uVar9,0);
  }
  return uVar6;
}



// ===== FAT.ActivityIndepenBingo.<>c$$<GetBingoCount>b__94_0 RVA 0x1a34d70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a44d70(void)

{
  int iVar1;
  uint uVar2;
  int in_r3;
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
  
  pcVar4 = (char *)(_UNK_01a44db8 + 0x1a44d84);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a44dbc + 0x1a44d98));
    *pcVar4 = '\x01';
  }
  if (in_r3 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0229f06c(0x8026,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01a46b60(in_r3);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = func_0x0229f06c(0x8028,0);
    if (iVar1 == 0) {
      return (uint)(*(int *)(in_r3 + 8) == 3);
    }
    iVar1 = func_0x0229f13c(0x8028,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8026,0);
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
  func_0x01485278(&uStack_30,in_r3,0);
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



// ===== FAT.ActivityIndepenBingo.<>c$$<CompleteBingo>b__95_0 RVA 0x1a34e30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a44e30(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01a44ed4 + 0x1a44e48);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a44ed8 + 0x1a44e5c));
    func_0x01384978(*(undefined4 *)(_UNK_01a44edc + 0x1a44e68));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uStack_14 = *(undefined4 *)(param_2 + 8);
  puVar4 = *(undefined4 **)(_UNK_01a44ee0 + 0x1a44e8c);
  uVar1 = func_0x01384abc(*puVar4,&uStack_14);
  uStack_18 = *(undefined4 *)(param_2 + 0x10);
  uVar2 = func_0x01384abc(*puVar4,&uStack_18);
  func_0x0244f690(**(undefined4 **)(_UNK_01a44ee4 + 0x1a44ec8),uVar1,uVar2,0);
  return;
}



// ===== FAT.ActivityIndepenBingo.<>c$$<CompleteBingo>b__95_1 RVA 0x1a34ee8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01a44ee8(void)

{
  int in_r3;
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01a44f3c + 0x1a44efc);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a44f40 + 0x1a44f10));
    *pcVar1 = '\x01';
  }
  if (in_r3 == 0) {
    func_0x01384bf0();
  }
  return (*(uint *)(in_r3 + 8) & 0xfffffffe) == 2;
}



// ===== FAT.ActivityIndepenBingo.<>c$$<_FillGroupDetailID>b__127_0 RVA 0x1a34f44 =====

void FUN_01a44f44(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x02450830(&uStack_20,0);
  *param_1 = uStack_20;
  param_1[1] = uStack_18;
  return;
}



// ===== FAT.ActivityIndepenBingo.<>c__DisplayClass106_0$$<WhenEnd>b__0 RVA 0x1a34f70 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a44f70(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int aiStack_28 [2];
  
  pcVar2 = (char *)(_UNK_01a451c8 + 0x1a44f8c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a451cc + 0x1a44fa0));
    func_0x01384978(*(undefined4 *)(_UNK_01a451d0 + 0x1a44fac));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  aiStack_28[1] = 0;
  aiStack_28[0] = 0;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0210e2d4(param_2,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  puVar4 = *(undefined4 **)(_UNK_01a451d4 + 0x1a45010);
  iVar3 = func_0x0364bc1c(iVar3,uVar1,*puVar4);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar1 = func_0x0210e2d4(param_2,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0364bc1c(iVar3,uVar1,*puVar4);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar3 + 8);
      uVar5 = *(uint *)(iVar3 + 0xc);
      piVar7 = *(int **)(_UNK_01a451d8 + 0x1a450a0);
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      iVar8 = *piVar7;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if (uVar5 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar5 + 1;
        *(int *)(iVar6 + uVar5 * 4 + 0x10) = param_2;
      }
      else {
        func_0x0328f170(iVar3,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
      }
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar3 + 8);
      uVar5 = *(uint *)(iVar3 + 0xc);
      iVar8 = *piVar7;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if (uVar5 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar5 + 1;
        *(int *)(iVar6 + uVar5 * 4 + 0x10) = param_2;
      }
      else {
        func_0x0328f170(iVar3,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
      }
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x58);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar1 = func_0x0210e2d4(param_2,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01dc688c(iVar3,uVar1,aiStack_28 + 1,aiStack_28,0);
      *(int *)(param_1 + 0x18) = aiStack_28[0] + *(int *)(param_1 + 0x18);
    }
  }
  return;
}



// ===== FAT.ActivityIndepenBingo.<>c__DisplayClass106_0$$<WhenEnd>b__1 RVA 0x1a351dc =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a451dc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int aiStack_28 [2];
  
  pcVar4 = (char *)(_UNK_01a4530c + 0x1a451f8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a45310 + 0x1a4520c));
    *pcVar4 = '\x01';
  }
  aiStack_28[1] = 0;
  aiStack_28[0] = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x58);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0210e2d4(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dc688c(iVar1,uVar2,aiStack_28 + 1,aiStack_28,0);
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x18) = aiStack_28[0] + *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(uint *)(iVar1 + 0xc);
  piVar3 = *(int **)(_UNK_01a45314 + 0x1a452c0);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar5 = *piVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  if (uVar7 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar7 + 1;
    *(int *)(iVar6 + uVar7 * 4 + 0x10) = param_2;
  }
  else {
    func_0x0328f170(iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
  }
  return;
}



// ===== FAT.ActivityIndepenBingo.<>c__DisplayClass112_0$$<Open>b__0 RVA 0x1a35318 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a45318(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_01a455d8 + 0x1a45334);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a455dc + 0x1a45348));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0210e2d4(param_2,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  puVar4 = *(undefined4 **)(_UNK_01a455e0 + 0x1a453a0);
  iVar3 = func_0x0364bc1c(iVar3,uVar1,*puVar4);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar1 = func_0x0210e2d4(param_2,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0364bc1c(iVar3,uVar1,*puVar4);
    if (iVar3 == 0) {
      return;
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0210e2d4(param_2,0);
    if (iVar3 == *(int *)(param_1 + 0x18)) {
      return;
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_28,param_2,0);
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0xd8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02139cf4(iVar3,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x020dd560(iVar3,param_2,4,0);
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0xd8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02139cf4(iVar3,0);
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0210e2d4(param_2,0);
    if (iVar3 == *(int *)(param_1 + 0xc)) {
      return;
    }
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    func_0x0210cd7c(&uStack_28,param_2,0);
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0xd8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02139cf4(iVar3,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x020dd560(iVar3,param_2,4,0);
    iVar3 = *(int *)(param_1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0xd8);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x02139cf4(iVar3,0);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  func_0x020ddf40(iVar3,uVar1,uStack_28,uStack_24,0,0,0);
  return;
}



// ===== FAT.ActivityIndepenBingo.<>c__DisplayClass122_0$$<EnterNextBoard>b__0 RVA 0x1a355e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a455e4(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 unaff_r4;
  int iVar3;
  int iVar4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_r7;
  uint uVar7;
  undefined4 unaff_r8;
  undefined4 *puVar8;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_01a4574c + 0x1a455fc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a45750 + 0x1a45610));
    func_0x01384978(*(undefined4 *)(_UNK_01a45754 + 0x1a4561c));
    *pcVar5 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0210e2d4(param_2,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  puVar8 = *(undefined4 **)(_UNK_01a45758 + 0x1a45674);
  iVar3 = func_0x0364bc1c(iVar3,uVar1,*puVar8);
  uVar1 = extraout_r3;
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar1 = func_0x0210e2d4(param_2,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0364bc1c(iVar3,uVar1,*puVar8);
    uVar1 = extraout_r3_00;
    if (iVar3 == 0) {
      return;
    }
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
    uVar1 = extraout_r3_01;
  }
  iVar6 = *(int *)(iVar3 + 8);
  uVar7 = *(uint *)(iVar3 + 0xc);
  piVar2 = *(int **)(_UNK_01a4575c + 0x1a45704);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  iVar4 = *piVar2;
  if (iVar6 == 0) {
    func_0x01384bf0();
    uVar1 = extraout_r3_02;
  }
  if (uVar7 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar7 + 1;
    *(int *)(iVar6 + uVar7 * 4 + 0x10) = param_2;
    return;
  }
  uVar7 = *(uint *)(iVar3 + 0xc);
  func_0x0328f754(iVar3,uVar7 + 1,
                  *(undefined4 *)
                   (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38) +
                                     0x10) + 0x60) + 0x3c),uVar1,unaff_r4,unaff_r5,unaff_r6,unaff_r7
                  ,unaff_r8,unaff_lr);
  iVar4 = *(int *)(iVar3 + 8);
  *(uint *)(iVar3 + 0xc) = uVar7 + 1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar4 + 0xc) <= uVar7) {
    func_0x01384bf4();
  }
  *(int *)(iVar4 + uVar7 * 4 + 0x10) = param_2;
  return;
}



// ===== FAT.ActivityIndepenBingo.<>c__DisplayClass123_0$$<FinishRound>b__0 RVA 0x1a35760 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a45760(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int aiStack_28 [2];
  
  pcVar2 = (char *)(_UNK_01a459b8 + 0x1a4577c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a459bc + 0x1a45790));
    func_0x01384978(*(undefined4 *)(_UNK_01a459c0 + 0x1a4579c));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  aiStack_28[1] = 0;
  aiStack_28[0] = 0;
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0210e2d4(param_2,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  puVar4 = *(undefined4 **)(_UNK_01a459c4 + 0x1a45800);
  iVar3 = func_0x0364bc1c(iVar3,uVar1,*puVar4);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar1 = func_0x0210e2d4(param_2,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x0364bc1c(iVar3,uVar1,*puVar4);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar3 + 8);
      uVar5 = *(uint *)(iVar3 + 0xc);
      piVar7 = *(int **)(_UNK_01a459c8 + 0x1a45890);
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      iVar8 = *piVar7;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if (uVar5 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar5 + 1;
        *(int *)(iVar6 + uVar5 * 4 + 0x10) = param_2;
      }
      else {
        func_0x0328f170(iVar3,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
      }
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar3 + 8);
      uVar5 = *(uint *)(iVar3 + 0xc);
      iVar8 = *piVar7;
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      if (uVar5 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar3 + 0xc) = uVar5 + 1;
        *(int *)(iVar6 + uVar5 * 4 + 0x10) = param_2;
      }
      else {
        func_0x0328f170(iVar3,param_2,
                        *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
      }
      iVar3 = func_0x01c24918(0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar3 = *(int *)(iVar3 + 0x58);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar1 = func_0x0210e2d4(param_2,0);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x01dc688c(iVar3,uVar1,aiStack_28 + 1,aiStack_28,0);
      *(int *)(param_1 + 0x18) = aiStack_28[0] + *(int *)(param_1 + 0x18);
    }
  }
  return;
}



// ===== FAT.ActivityIndepenBingo.<>c__DisplayClass123_0$$<FinishRound>b__1 RVA 0x1a359cc =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a459cc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int aiStack_28 [2];
  
  pcVar4 = (char *)(_UNK_01a45afc + 0x1a459e8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a45b00 + 0x1a459fc));
    *pcVar4 = '\x01';
  }
  aiStack_28[1] = 0;
  aiStack_28[0] = 0;
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x58);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0210e2d4(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dc688c(iVar1,uVar2,aiStack_28 + 1,aiStack_28,0);
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x18) = aiStack_28[0] + *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(uint *)(iVar1 + 0xc);
  piVar3 = *(int **)(_UNK_01a45b04 + 0x1a45ab0);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar5 = *piVar3;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  if (uVar7 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar7 + 1;
    *(int *)(iVar6 + uVar7 * 4 + 0x10) = param_2;
  }
  else {
    func_0x0328f170(iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
  }
  return;
}



// ===== FAT.ActivityIndepenBingo.<>c__DisplayClass137_0$$<IsItemNeeded>b__0 RVA 0x1a35b08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01a45b08(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01a45b74 + 0x1a45b20);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a45b78 + 0x1a45b34));
    *pcVar1 = '\x01';
  }
  if (param_4 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_4 + 0xc) == *(int *)(param_1 + 8)) {
    return *(uint *)(param_4 + 8) < 2;
  }
  return false;
}



// ===== FAT.ActivityIndepenBingo.<>c__DisplayClass137_0$$<IsItemNeeded>b__1 RVA 0x1a35b7c =====

void FUN_01a45b7c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0210e2d4(param_2,0);
  if (iVar1 == *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return;
}



// ===== FAT.ActivityIndepenBingo.<>c__DisplayClass91_0$$<CheckIndicator>b__0 RVA 0x1a35bb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01a45bb8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01a45c18 + 0x1a45bd0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01a45c1c + 0x1a45be4));
    *pcVar2 = '\x01';
  }
  if (param_4 == 0) {
    func_0x01384bf0();
  }
  bVar1 = false;
  if (*(int *)(param_4 + 0xc) == *(int *)(param_1 + 8)) {
    bVar1 = *(int *)(param_4 + 8) == 0;
  }
  return bVar1;
}


