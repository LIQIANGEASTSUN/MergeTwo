/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.BoardUtility$$get_debugShow RVA 0x1dc6ac0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_01dd6ac0(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd6b18 + 0x1dd6ad0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd6b1c + 0x1dd6ae4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd6b20 + 0x1dd6af8);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return **(undefined1 **)(iVar1 + 0x5c);
}



// ===== FAT.BoardUtility$$set_debugShow RVA 0x1dc6b24 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd6b24(undefined1 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd6b80 + 0x1dd6b38);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd6b84 + 0x1dd6b4c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd6b88 + 0x1dd6b60);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  **(undefined1 **)(iVar1 + 0x5c) = param_1;
  return;
}



// ===== FAT.BoardUtility$$get_botPlaying RVA 0x1dc6b8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_01dd6b8c(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd6be4 + 0x1dd6b9c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd6be8 + 0x1dd6bb0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd6bec + 0x1dd6bc4);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 1);
}



// ===== FAT.BoardUtility$$set_botPlaying RVA 0x1dc6bf0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd6bf0(undefined1 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd6c4c + 0x1dd6c04);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd6c50 + 0x1dd6c18));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd6c54 + 0x1dd6c2c);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 1) = param_1;
  return;
}



// ===== FAT.BoardUtility$$get_cellSize RVA 0x1dc6c58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd6c58(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd6cb0 + 0x1dd6c68);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd6cb4 + 0x1dd6c7c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd6cb8 + 0x1dd6c90);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4);
}



// ===== FAT.BoardUtility$$set_cellSize RVA 0x1dc6cbc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd6cbc(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01dd6d24 + 0x1dd6cd4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd6d28 + 0x1dd6ce8));
    *pcVar3 = '\x01';
  }
  piVar2 = *(int **)(_UNK_01dd6d2c + 0x1dd6d00);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar2;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4) = param_1;
  return;
}



// ===== FAT.BoardUtility$$get_screenCellSize RVA 0x1dc6d30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd6d30(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd6d88 + 0x1dd6d40);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd6d8c + 0x1dd6d54));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd6d90 + 0x1dd6d68);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
}



// ===== FAT.BoardUtility$$set_screenCellSize RVA 0x1dc6d94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd6d94(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01dd6dfc + 0x1dd6dac);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd6e00 + 0x1dd6dc0));
    *pcVar3 = '\x01';
  }
  piVar2 = *(int **)(_UNK_01dd6e04 + 0x1dd6dd8);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar2;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8) = param_1;
  return;
}



// ===== FAT.BoardUtility$$get_canvasToScreenCoe RVA 0x1dc6e08 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd6e08(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd6e60 + 0x1dd6e18);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd6e64 + 0x1dd6e2c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd6e68 + 0x1dd6e40);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xc);
}



// ===== FAT.BoardUtility$$set_canvasToScreenCoe RVA 0x1dc6e6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd6e6c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01dd6ed4 + 0x1dd6e84);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd6ed8 + 0x1dd6e98));
    *pcVar3 = '\x01';
  }
  piVar2 = *(int **)(_UNK_01dd6edc + 0x1dd6eb0);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar2;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xc) = param_1;
  return;
}



// ===== FAT.BoardUtility$$get_screenToCanvasCoe RVA 0x1dc6ee0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd6ee0(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd6f38 + 0x1dd6ef0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd6f3c + 0x1dd6f04));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd6f40 + 0x1dd6f18);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x10);
}



// ===== FAT.BoardUtility$$set_screenToCanvasCoe RVA 0x1dc6f44 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd6f44(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01dd6fac + 0x1dd6f5c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd6fb0 + 0x1dd6f70));
    *pcVar3 = '\x01';
  }
  piVar2 = *(int **)(_UNK_01dd6fb4 + 0x1dd6f88);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar2;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x10) = param_1;
  return;
}



// ===== FAT.BoardUtility$$get_originPosInScreenSpace RVA 0x1dc6fb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd6fb8(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_01dd7020 + 0x1dd6fcc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7024 + 0x1dd6fe0));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_01dd7028 + 0x1dd6ff4);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x18);
  *param_1 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x14);
  param_1[1] = uVar2;
  return;
}



// ===== FAT.BoardUtility$$set_originPosInScreenSpace RVA 0x1dc702c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd702c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd7090 + 0x1dd7044);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7094 + 0x1dd7058));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd7098 + 0x1dd706c);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  return;
}



// ===== FAT.BoardUtility$$get_originPosInScreenSpaceGuideTalk RVA 0x1dc709c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd709c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_01dd7104 + 0x1dd70b0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7108 + 0x1dd70c4));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_01dd710c + 0x1dd70d8);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x20);
  *param_1 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x1c);
  param_1[1] = uVar2;
  return;
}



// ===== FAT.BoardUtility$$set_originPosInScreenSpaceGuideTalk RVA 0x1dc7110 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd7110(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd7174 + 0x1dd7128);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7178 + 0x1dd713c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd717c + 0x1dd7150);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  *(undefined4 *)(iVar1 + 0x1c) = param_1;
  *(undefined4 *)(iVar1 + 0x20) = param_2;
  return;
}



// ===== FAT.BoardUtility$$get_isBoardCheckerPaused RVA 0x1dc7180 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_01dd7180(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd71d8 + 0x1dd7190);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd71dc + 0x1dd71a4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd71e0 + 0x1dd71b8);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 0x24);
}



// ===== FAT.BoardUtility$$set_isBoardCheckerPaused RVA 0x1dc71e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd71e4(undefined1 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd7240 + 0x1dd71f8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7244 + 0x1dd720c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd7248 + 0x1dd7220);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 0x24) = param_1;
  return;
}



// ===== FAT.BoardUtility$$get_bubbleCoverSprite RVA 0x1dc724c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd724c(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd72a4 + 0x1dd725c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd72a8 + 0x1dd7270));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd72ac + 0x1dd7284);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x38);
}



// ===== FAT.BoardUtility$$set_bubbleCoverSprite RVA 0x1dc72b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd72b0(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd730c + 0x1dd72c4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7310 + 0x1dd72d8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd7314 + 0x1dd72ec);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x38) = param_1;
  return;
}



// ===== FAT.BoardUtility$$get_bubbleFrozenCoverSprite RVA 0x1dc7318 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd7318(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd7370 + 0x1dd7328);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7374 + 0x1dd733c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd7378 + 0x1dd7350);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x3c);
}



// ===== FAT.BoardUtility$$set_bubbleFrozenCoverSprite RVA 0x1dc737c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd737c(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd73d8 + 0x1dd7390);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd73dc + 0x1dd73a4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd73e0 + 0x1dd73b8);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x3c) = param_1;
  return;
}



// ===== FAT.BoardUtility$$get_frozenCoverSprite RVA 0x1dc73e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd73e4(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd743c + 0x1dd73f4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7440 + 0x1dd7408));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd7444 + 0x1dd741c);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x40);
}



// ===== FAT.BoardUtility$$set_frozenCoverSprite RVA 0x1dc7448 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd7448(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd74a4 + 0x1dd745c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd74a8 + 0x1dd7470));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd74ac + 0x1dd7484);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x40) = param_1;
  return;
}



// ===== FAT.BoardUtility$$get_BottomSprite RVA 0x1dc74b0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd74b0(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd7508 + 0x1dd74c0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd750c + 0x1dd74d4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd7510 + 0x1dd74e8);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x44);
}



// ===== FAT.BoardUtility$$set_BottomSprite RVA 0x1dc7514 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd7514(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd7570 + 0x1dd7528);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7574 + 0x1dd753c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd7578 + 0x1dd7550);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x44) = param_1;
  return;
}



// ===== FAT.BoardUtility$$get_spawnPopParam RVA 0x1dc757c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd757c(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar2 = (char *)(_UNK_01dd7660 + 0x1dd758c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7664 + 0x1dd75a0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9dc7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9dc7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar2 = (char *)(_UNK_022850c0 + 0x2284ff0);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022850c4 + 0x2285004),0);
      *pcVar2 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
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
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar6,uVar4,&uStack_30,uVar5,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022850c8 + 0x22850b0));
    return uVar5;
  }
  piVar3 = *(int **)(_UNK_01dd7668 + 0x1dd75f4);
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar2 = (char *)(_UNK_01dd766c + 0x1dd7610);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7670 + 0x1dd7624));
    *pcVar2 = '\x01';
  }
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x2c);
}



// ===== FAT.BoardUtility$$get_boardRes RVA 0x1dc7674 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd7674(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd76cc + 0x1dd7684);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd76d0 + 0x1dd7698));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd76d4 + 0x1dd76ac);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x54);
}



// ===== FAT.BoardUtility$$set_boardRes RVA 0x1dc76d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd76d8(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01dd7734 + 0x1dd76ec);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7738 + 0x1dd7700));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01dd773c + 0x1dd7714);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x54) = param_1;
  return;
}



// ===== FAT.BoardUtility$$get_overallCoveringMat RVA 0x1dc7740 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd7740(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar2 = (char *)(_UNK_01dd7824 + 0x1dd7750);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7828 + 0x1dd7764));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1607,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1607,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar2 = (char *)(_UNK_021d0170 + 0x21d00a0);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d0174 + 0x21d00b4),0);
      *pcVar2 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
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
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar6,uVar4,&uStack_30,uVar5,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021d0178 + 0x21d0160));
    return uVar5;
  }
  piVar3 = *(int **)(_UNK_01dd782c + 0x1dd77b8);
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar2 = (char *)(_UNK_01dd7830 + 0x1dd77d4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7834 + 0x1dd77e8));
    *pcVar2 = '\x01';
  }
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x54);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return *(undefined4 *)(iVar1 + 0x3c);
}



// ===== FAT.BoardUtility$$RegisterSpawnRequest RVA 0x1dc7838 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd7838(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  pcVar7 = (char *)(_UNK_01dd7a20 + 0x1dd7860);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7a24 + 0x1dd7878));
    func_0x01384978(*(undefined4 *)(_UNK_01dd7a28 + 0x1dd7884));
    func_0x01384978(*(undefined4 *)(_UNK_01dd7a2c + 0x1dd7890));
    *pcVar7 = '\x01';
  }
  iVar6 = func_0x0229f06c(0x1495,0);
  if (iVar6 == 0) {
    piVar8 = *(int **)(_UNK_01dd7a30 + 0x1dd7900);
    iVar6 = *piVar8;
    if (*(int *)(iVar6 + 0x74) == 0) {
      func_0x01384ab4();
      iVar6 = *piVar8;
    }
    uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    iVar6 = *(int *)(*(int *)(iVar6 + 0x5c) + 0x60);
    uStack_48 = 0;
    uStack_38 = 0;
    func_0x0392a28c(&uStack_48,param_1,param_2,param_3,param_4,param_5,
                    **(undefined4 **)(_UNK_01dd7a34 + 0x1dd792c));
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = uStack_38;
    uVar4 = uStack_3c;
    uVar3 = uStack_40;
    uVar2 = uStack_44;
    uVar1 = uStack_48;
    iVar9 = *(int *)(iVar6 + 8);
    uVar10 = *(uint *)(iVar6 + 0xc);
    iVar11 = **(int **)(_UNK_01dd7a38 + 0x1dd7988);
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    if (uVar10 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar6 + 0xc) = uVar10 + 1;
      iVar9 = iVar9 + uVar10 * 0x14;
      *(undefined4 *)(iVar9 + 0x10) = uVar1;
      *(undefined4 *)(iVar9 + 0x14) = uVar2;
      *(undefined4 *)(iVar9 + 0x18) = uVar3;
      *(undefined4 *)(iVar9 + 0x1c) = uVar4;
      *(undefined4 *)(iVar9 + 0x20) = uVar5;
    }
    else {
      func_0x024523fc(iVar6,uVar1,uVar2,uVar3,uVar4,uVar5,
                      *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
    }
  }
  else {
    iVar6 = func_0x0229f13c(0x1495,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x02197fb0(iVar6,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}



// ===== FAT.BoardUtility$$ResolveSpawnRequest RVA 0x1dc7a3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dd7a3c(undefined4 param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  pcVar6 = (char *)(_UNK_01dd7cd8 + 0x1dd7a5c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7cdc + 0x1dd7a70));
    func_0x01384978(*(undefined4 *)(_UNK_01dd7ce0 + 0x1dd7a7c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd7ce4 + 0x1dd7a88));
    func_0x01384978(*(undefined4 *)(_UNK_01dd7ce8 + 0x1dd7a94));
    func_0x01384978(*(undefined4 *)(_UNK_01dd7cec + 0x1dd7aa0));
    func_0x01384978(*(undefined4 *)(_UNK_01dd7cf0 + 0x1dd7aac));
    func_0x01384978(*(undefined4 *)(_UNK_01dd7cf4 + 0x1dd7ab8));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9dc8,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01dd7cf8 + 0x1dd7b1c));
    func_0x0244f5a0(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar7 = *(int **)(_UNK_01dd7cfc + 0x1dd7b44);
    iVar3 = *piVar7;
    iVar5 = *(int *)(iVar3 + 0x74);
    *(undefined4 *)(iVar1 + 8) = param_1;
    if (iVar5 == 0) {
      func_0x01384ab4();
      iVar3 = *piVar7;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x60);
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01dd7d00 + 0x1dd7b6c));
    func_0x035ac238(uVar2,iVar1,**(undefined4 **)(_UNK_01dd7d04 + 0x1dd7b8c),0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02452400(iVar3,uVar2,**(undefined4 **)(_UNK_01dd7d08 + 0x1dd7bb0));
    if (iVar1 < 0) {
      pcVar6 = (char *)(_UNK_01dd7d14 + 0x1dd7c84);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01dd7d18 + 0x1dd7c98));
        *pcVar6 = '\x01';
      }
      puVar4 = *(undefined8 **)(**(int **)(_UNK_01dd7d1c + 0x1dd7cac) + 0x5c);
      uVar8 = *puVar4;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar4 + 1);
      *param_2 = uVar8;
      *param_3 = 0xbf800000;
      uVar2 = 0;
    }
    else {
      iVar3 = *piVar7;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x01384ab4();
        iVar3 = *piVar7;
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x60);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02452404(auStack_48,iVar3,iVar1,**(undefined4 **)(_UNK_01dd7d0c + 0x1dd7c08));
      *(undefined4 *)(param_2 + 1) = uStack_3c;
      *param_2 = CONCAT44(uStack_40,uStack_44);
      iVar3 = *(int *)(*(int *)(*piVar7 + 0x5c) + 0x60);
      *param_3 = uStack_38;
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x02452408(iVar3,iVar1,**(undefined4 **)(_UNK_01dd7d10 + 0x1dd7c68));
      uVar2 = 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x9dc8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02285204(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.BoardUtility.<>c__DisplayClass69_0$$.ctor RVA 0x1dc7d20 =====

void FUN_01dd7d20(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.BoardUtility$$ClearSpawnRequest RVA 0x1dc7d28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd7d28(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar2 = (char *)(_UNK_01dd7dec + 0x1dd7d38);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7df0 + 0x1dd7d4c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd7df4 + 0x1dd7d58));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5c8d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5c8d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar4 = 0;
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
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar4 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar6,uVar5,&uStack_30,uVar4,0,0);
    return;
  }
  piVar3 = *(int **)(_UNK_01dd7df8 + 0x1dd7dac);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  return;
}



// ===== FAT.BoardUtility$$PopSpawnRequest RVA 0x1dc7dfc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd7dfc(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
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
  int iStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_01dd7f10 + 0x1dd7e0c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd7f14 + 0x1dd7e20));
    func_0x01384978(*(undefined4 *)(_UNK_01dd7f18 + 0x1dd7e2c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd7f1c + 0x1dd7e38));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3859,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3859,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar6 = 0;
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
      uVar6 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar6 = 1;
      }
    }
    iVar8 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar8,uVar7,&uStack_30,uVar6,0,0);
    return;
  }
  piVar5 = *(int **)(_UNK_01dd7f20 + 0x1dd7e8c);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar5;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x60);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (0 < *(int *)(iVar1 + 0xc)) {
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x60);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar8 = *(int *)(iVar1 + 0xc);
    uVar3 = iVar8 - 1;
    uVar2 = *(uint *)(iVar1 + 0xc);
    if (uVar2 <= uVar3) {
      func_0x0484c9cc(0,uVar3,**(undefined4 **)(_UNK_01dd7f24 + 0x1dd7efc));
      uVar2 = *(uint *)(iVar1 + 0xc);
    }
    iStack_18 = uVar2 - 1;
    *(int *)(iVar1 + 0xc) = iStack_18;
    if ((int)uVar3 < iStack_18) {
      iStack_18 = iStack_18 - uVar3;
      uStack_14 = 0;
      func_0x0484e904(*(undefined4 *)(iVar1 + 8),iVar8,*(undefined4 *)(iVar1 + 8),uVar3);
    }
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    return;
  }
  return;
}



// ===== FAT.BoardUtility$$SpawnItemOrReward RVA 0x1dc7f28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd7f28(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_01dd817c + 0x1dd7f48);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd8180 + 0x1dd7f60));
    func_0x01384978(*(undefined4 *)(_UNK_01dd8184 + 0x1dd7f6c));
    func_0x01384978(*(undefined4 *)(_UNK_01dd8188 + 0x1dd7f78));
    func_0x01384978(*(undefined4 *)(_UNK_01dd818c + 0x1dd7f84));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x6e4f,0);
  if (iVar1 == 0) {
    if (param_1 != 0) {
      iVar1 = param_2;
      if (0 < param_2) {
        iVar1 = param_3;
      }
      if (0 < iVar1) {
        piVar4 = *(int **)(_UNK_01dd8190 + 0x1dd8034);
        do {
          if (*(int *)(*piVar4 + 0x74) == 0) {
            func_0x01384ab4();
          }
          FUN_01dd7838(param_2,param_4,param_5,param_6,0xbf800000);
          uVar2 = func_0x020d8024(0,param_10,0);
          iVar1 = func_0x020ded9c(param_1,param_2,uVar2,param_7,param_8,0,0,0);
          if (iVar1 == 0) {
            if (*(int *)(*piVar4 + 0x74) == 0) {
              func_0x01384ab4();
            }
            FUN_01dd7d28();
            iVar1 = func_0x01c24918(0);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = *(int *)(iVar1 + 0x40);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            uVar2 = func_0x01cdcbac(iVar1,param_2,1,param_9,0,0,0,0x67,
                                    **(undefined4 **)(_UNK_01dd8194 + 0x1dd80f0),
                                    **(undefined4 **)(_UNK_01dd8198 + 0x1dd80fc),0);
            if (*(int *)(**(int **)(_UNK_01dd819c + 0x1dd8134) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x0206de24(uVar2,param_4,param_5,param_6,0,0,0,0);
          }
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x6e4f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02249c30(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    param_10,0);
  }
  return;
}



// ===== FAT.BoardUtility$$SetCellSize RVA 0x1dc81a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd81a0(float param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01dd8318 + 0x1dd81b8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd831c + 0x1dd81cc));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5ebd,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5ebd,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485258(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_01dd8320 + 0x1dd822c);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar5 = (char *)(_UNK_01dd8324 + 0x1dd8248);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd8328 + 0x1dd825c));
    *pcVar5 = '\x01';
  }
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar4;
  }
  pcVar5 = (char *)(_UNK_01dd832c + 0x1dd828c);
  cVar1 = *pcVar5;
  *(float *)(*(int *)(iVar2 + 0x5c) + 4) = param_1;
  if (cVar1 == '\0') {
    func_0x01384978(piVar4);
    iVar2 = *piVar4;
    *pcVar5 = '\x01';
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar4;
  }
  fVar8 = *(float *)(*(int *)(iVar2 + 0x5c) + 0xc);
  pcVar5 = (char *)(_UNK_01dd8330 + 0x1dd82d4);
  if (*pcVar5 == '\0') {
    func_0x01384978(piVar4);
    iVar2 = *piVar4;
    *pcVar5 = '\x01';
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar4;
  }
  *(float *)(*(int *)(iVar2 + 0x5c) + 8) = fVar8 * param_1;
  return;
}



// ===== FAT.BoardUtility$$SetOriginPos RVA 0x1dc8334 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd8334(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
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
  
  pcVar5 = (char *)(_UNK_01dd841c + 0x1dd834c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd8420 + 0x1dd8360));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ec3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ec3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021ddac4 + 0x21dd9e4);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021ddac8 + 0x21dd9f8),param_1,param_2,0);
      *pcVar5 = '\x01';
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
    uStack_50 = param_1;
    uStack_4c = param_2;
    uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_021ddacc + 0x21dda60),&uStack_50);
    func_0x01485288(&uStack_38,uVar2,0);
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
    func_0x0245495c(iVar4,uVar2,&uStack_38,uVar3,0,0);
    return;
  }
  piVar6 = *(int **)(_UNK_01dd8424 + 0x1dd83bc);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar5 = (char *)(_UNK_01dd8428 + 0x1dd83d8);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd842c + 0x1dd83ec));
    *pcVar5 = '\x01';
  }
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  return;
}



// ===== FAT.BoardUtility$$SetOriginPosGuide RVA 0x1dc8430 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd8430(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
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
  
  pcVar5 = (char *)(_UNK_01dd8518 + 0x1dd8448);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd851c + 0x1dd845c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ec6,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ec6,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_021ddac4 + 0x21dd9e4);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021ddac8 + 0x21dd9f8),param_1,param_2,0);
      *pcVar5 = '\x01';
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
    uStack_50 = param_1;
    uStack_4c = param_2;
    uVar2 = func_0x01384abc(**(undefined4 **)(_UNK_021ddacc + 0x21dda60),&uStack_50);
    func_0x01485288(&uStack_38,uVar2,0);
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
    func_0x0245495c(iVar4,uVar2,&uStack_38,uVar3,0,0);
    return;
  }
  piVar6 = *(int **)(_UNK_01dd8520 + 0x1dd84b8);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar5 = (char *)(_UNK_01dd8524 + 0x1dd84d4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd8528 + 0x1dd84e8));
    *pcVar5 = '\x01';
  }
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar6;
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  *(undefined4 *)(iVar1 + 0x1c) = param_1;
  *(undefined4 *)(iVar1 + 0x20) = param_2;
  return;
}



// ===== FAT.BoardUtility$$SetCanvasToScreenCoe RVA 0x1dc852c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd852c(float param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01dd8664 + 0x1dd8544);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd8668 + 0x1dd8558));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5eb8,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5eb8,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485258(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_01dd866c + 0x1dd85b8);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar5 = (char *)(_UNK_01dd8670 + 0x1dd85d4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd8674 + 0x1dd85e8));
    *pcVar5 = '\x01';
  }
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar4;
  }
  pcVar5 = (char *)(_UNK_01dd8678 + 0x1dd861c);
  cVar1 = *pcVar5;
  *(float *)(*(int *)(iVar2 + 0x5c) + 0xc) = param_1;
  if (cVar1 == '\0') {
    func_0x01384978(piVar4);
    iVar2 = *piVar4;
    *pcVar5 = '\x01';
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar4;
  }
  *(float *)(*(int *)(iVar2 + 0x5c) + 0x10) = 1.0 / param_1;
  return;
}



// ===== FAT.BoardUtility$$BoardCheckerPause RVA 0x1dc867c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd867c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  
  pcVar3 = (char *)(_UNK_01dd8758 + 0x1dd8690);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd875c + 0x1dd86a4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9dcb,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9dcb,0);
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
    func_0x01485228(&uStack_30,param_1,0);
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
    return;
  }
  piVar4 = *(int **)(_UNK_01dd8760 + 0x1dd86fc);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar3 = (char *)(_UNK_01dd8764 + 0x1dd8718);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd8768 + 0x1dd872c));
    *pcVar3 = '\x01';
  }
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  *(char *)(*(int *)(iVar1 + 0x5c) + 0x24) = (char)param_1;
  return;
}



// ===== FAT.BoardUtility$$GetWorldPosByCoord RVA 0x1dc876c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd876c(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar2 = (char *)(_UNK_01dd88e8 + 0x1dd878c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd88ec + 0x1dd87a0));
    func_0x01384978(*(undefined4 *)(_UNK_01dd88f0 + 0x1dd87ac));
    func_0x01384978(*(undefined4 *)(_UNK_01dd88f4 + 0x1dd87b8));
    *pcVar2 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x1a92,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01dd88f8 + 0x1dd8834) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar3 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    uVar4 = VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    func_0x01dd8904(&uStack_38,uVar3,uVar4);
    iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01dd88fc + 0x1dd8878));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = *(undefined4 *)(iVar1 + 0x10);
    if (*(int *)(**(int **)(_UNK_01dd8900 + 0x1dd8898) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x02451750(uVar3,uStack_38,uStack_34,0,&uStack_28,0);
    uVar5 = CONCAT44(uStack_24,uStack_28);
    uStack_30 = uStack_20;
  }
  else {
    iVar1 = func_0x0229f13c(0x1a92,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021de9a0(&uStack_38,iVar1,param_2,param_3,0);
    uVar5 = CONCAT44(uStack_34,uStack_38);
  }
  *(undefined4 *)(param_1 + 1) = uStack_30;
  *param_1 = uVar5;
  return;
}



// ===== FAT.BoardUtility$$GetScreenPosByCoord RVA 0x1dc8904 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd8904(float *param_1,float param_2,float param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_50;
  float fStack_4c;
  
  pcVar2 = (char *)(_UNK_01dd8b64 + 0x1dd8928);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd8b68 + 0x1dd893c));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1a93,0);
  if (iVar1 == 0) {
    piVar3 = *(int **)(_UNK_01dd8b6c + 0x1dd89b4);
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar2 = (char *)(_UNK_01dd8b70 + 0x1dd89d0);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd8b74 + 0x1dd89e4));
      *pcVar2 = '\x01';
    }
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    pcVar2 = (char *)(_UNK_01dd8b78 + 0x1dd8a14);
    fVar5 = *(float *)(*(int *)(iVar1 + 0x5c) + 0x14);
    fVar4 = *(float *)(*(int *)(iVar1 + 0x5c) + 0x18);
    if (*pcVar2 == '\0') {
      func_0x01384978(piVar3);
      iVar1 = *piVar3;
      *pcVar2 = '\x01';
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
      fVar6 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
      if (*pcVar2 == '\0') {
        func_0x01384978(piVar3);
        iVar1 = *piVar3;
        *pcVar2 = '\x01';
      }
    }
    else {
      fVar6 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
      fVar7 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
      if (*pcVar2 == '\0') {
        func_0x01384978(piVar3);
        iVar1 = *piVar3;
        *pcVar2 = '\x01';
      }
    }
    else {
      fVar7 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
      fVar8 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
      if (*pcVar2 == '\0') {
        func_0x01384978(piVar3);
        iVar1 = *piVar3;
        *pcVar2 = '\x01';
      }
    }
    else {
      fVar8 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    param_1[1] = (-(fVar8 * param_3) - *(float *)(*(int *)(iVar1 + 0x5c) + 8) * 0.5) + fVar4;
    *param_1 = fVar7 * 0.5 + fVar6 * param_2 + fVar5;
  }
  else {
    iVar1 = func_0x0229f13c(0x1a93,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021de86c(&fStack_50,iVar1,param_2,param_3,0);
    *param_1 = fStack_50;
    param_1[1] = fStack_4c;
  }
  return;
}



// ===== FAT.BoardUtility$$GetRealCoordByScreenPos RVA 0x1dc8b7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd8b7c(float *param_1,float param_2,float param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_50;
  float fStack_4c;
  
  pcVar2 = (char *)(_UNK_01dd8d68 + 0x1dd8ba0);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd8d6c + 0x1dd8bb4));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9347,0);
  if (iVar1 == 0) {
    piVar3 = *(int **)(_UNK_01dd8d70 + 0x1dd8c24);
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar2 = (char *)(_UNK_01dd8d74 + 0x1dd8c40);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd8d78 + 0x1dd8c54));
      *pcVar2 = '\x01';
    }
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    pcVar4 = (char *)(_UNK_01dd8d7c + 0x1dd8c84);
    fVar6 = *(float *)(*(int *)(iVar1 + 0x5c) + 0x14);
    if (*pcVar4 == '\0') {
      func_0x01384978(piVar3);
      iVar1 = *piVar3;
      *pcVar4 = '\x01';
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    fVar7 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
    if (*pcVar2 == '\0') {
      func_0x01384978(piVar3);
      iVar1 = *piVar3;
      *pcVar2 = '\x01';
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    fVar8 = *(float *)(*(int *)(iVar1 + 0x5c) + 0x18);
    if (*pcVar4 == '\0') {
      func_0x01384978(piVar3);
      iVar1 = *piVar3;
      *pcVar4 = '\x01';
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    fVar5 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
    *param_1 = (param_2 - fVar6) / fVar7;
    param_1[1] = -(param_3 - fVar8) / fVar5;
  }
  else {
    iVar1 = func_0x0229f13c(0x9347,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0223934c(&fStack_50,iVar1,param_2,param_3,0);
    *param_1 = fStack_50;
    param_1[1] = fStack_4c;
  }
  return;
}



// ===== FAT.BoardUtility$$GetRealCoordByBoardPos RVA 0x1dc8d80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd8d80(float *param_1,float param_2,float param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  float fVar5;
  float fStack_38;
  float fStack_34;
  
  pcVar3 = (char *)(_UNK_01dd8ef8 + 0x1dd8da4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd8efc + 0x1dd8db8));
    *pcVar3 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x9dcd,0);
  if (iVar2 == 0) {
    piVar4 = *(int **)(_UNK_01dd8f00 + 0x1dd8e28);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar3 = (char *)(_UNK_01dd8f04 + 0x1dd8e44);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd8f08 + 0x1dd8e58));
      *pcVar3 = '\x01';
    }
    iVar2 = *piVar4;
    bVar1 = false;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar4;
      bVar1 = *pcVar3 == '\0';
    }
    fVar5 = *(float *)(*(int *)(iVar2 + 0x5c) + 4);
    if (bVar1) {
      func_0x01384978(piVar4);
      iVar2 = *piVar4;
      *pcVar3 = '\x01';
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar4;
    }
    iVar2 = *(int *)(iVar2 + 0x5c);
    *param_1 = param_2 / fVar5 + -0.5;
    param_1[1] = -0.5 - param_3 / *(float *)(iVar2 + 4);
  }
  else {
    iVar2 = func_0x0229f13c(0x9dcd,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0223934c(&fStack_38,iVar2,param_2,param_3,0);
    *param_1 = fStack_38;
    param_1[1] = fStack_34;
  }
  return;
}



// ===== FAT.BoardUtility$$GetCoordByScreenPos RVA 0x1dc8f0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd8f0c(int *param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iStack_48;
  int iStack_44;
  
  pcVar3 = (char *)(_UNK_01dd91cc + 0x1dd8f34);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd91d0 + 0x1dd8f48));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9dce,0);
  if (iVar1 == 0) {
    piVar5 = *(int **)(_UNK_01dd91d4 + 0x1dd8fb8);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar3 = (char *)(_UNK_01dd91d8 + 0x1dd8fd4);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd91dc + 0x1dd8fe8));
      *pcVar3 = '\x01';
    }
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    pcVar6 = (char *)(_UNK_01dd91e0 + 0x1dd9018);
    fVar8 = *(float *)(*(int *)(iVar1 + 0x5c) + 0x14);
    if (*pcVar6 == '\0') {
      func_0x01384978(piVar5);
      iVar1 = *piVar5;
      *pcVar6 = '\x01';
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar5;
    }
    fVar9 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
    pcVar4 = (char *)(_UNK_01dd91e4 + 0x1dd9068);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd91e8 + 0x1dd907c));
      *pcVar4 = '\x01';
    }
    piVar7 = *(int **)(_UNK_01dd91ec + 0x1dd9094);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    fVar9 = (float)func_0x02450364((param_2 - fVar8) / fVar9);
    fVar8 = _UNK_01dd91c8;
    iVar1 = (int)fVar9;
    if (fVar9 == _UNK_01dd91c8) {
      iVar1 = -0x80000000;
    }
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd91f0 + 0x1dd90e0));
      *pcVar3 = '\x01';
    }
    iVar2 = *piVar5;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar5;
    }
    fVar9 = *(float *)(*(int *)(iVar2 + 0x5c) + 0x18);
    if (*pcVar6 == '\0') {
      func_0x01384978(piVar5);
      iVar2 = *piVar5;
      *pcVar6 = '\x01';
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar5;
    }
    fVar10 = *(float *)(*(int *)(iVar2 + 0x5c) + 8);
    pcVar3 = (char *)(_UNK_01dd91f4 + 0x1dd9158);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd91f8 + 0x1dd916c));
      *pcVar3 = '\x01';
    }
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    fVar9 = (float)func_0x02450728((param_3 - fVar9) / fVar10);
    *param_1 = iVar1;
    iVar1 = (int)fVar9;
    if (fVar9 == fVar8) {
      iVar1 = -0x80000000;
    }
    param_1[1] = -iVar1;
  }
  else {
    iVar1 = func_0x0229f13c(0x9dce,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02285398(&iStack_48,iVar1,param_2,param_3,0);
    *param_1 = iStack_48;
    param_1[1] = iStack_44;
  }
  return;
}



// ===== FAT.BoardUtility$$GetPosByCoord RVA 0x1dc91fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd91fc(float *param_1,float param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_48;
  float fStack_44;
  
  pcVar3 = (char *)(_UNK_01dd9404 + 0x1dd9220);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd9408 + 0x1dd9234));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5d8d,0);
  if (iVar1 == 0) {
    piVar2 = *(int **)(_UNK_01dd940c + 0x1dd92ac);
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar3 = (char *)(_UNK_01dd9410 + 0x1dd92c8);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd9414 + 0x1dd92dc));
      *pcVar3 = '\x01';
    }
    iVar1 = *piVar2;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar2;
      fVar4 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
      if (*pcVar3 == '\0') {
        func_0x01384978(piVar2);
        iVar1 = *piVar2;
        *pcVar3 = '\x01';
      }
    }
    else {
      fVar4 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar2;
      fVar5 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
      if (*pcVar3 == '\0') {
        func_0x01384978(piVar2);
        iVar1 = *piVar2;
        *pcVar3 = '\x01';
      }
    }
    else {
      fVar5 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar2;
      fVar6 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
      if (*pcVar3 == '\0') {
        func_0x01384978(piVar2);
        iVar1 = *piVar2;
        *pcVar3 = '\x01';
      }
    }
    else {
      fVar6 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar2;
    }
    param_1[1] = -(fVar6 * param_3) - *(float *)(*(int *)(iVar1 + 0x5c) + 4) * 0.5;
    *param_1 = fVar5 * 0.5 + fVar4 * param_2;
  }
  else {
    iVar1 = func_0x0229f13c(0x5d8d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021de86c(&fStack_48,iVar1,param_2,param_3,0);
    *param_1 = fStack_48;
    param_1[1] = fStack_44;
  }
  return;
}



// ===== FAT.BoardUtility$$GetScreenPosByCoordGuideTalk RVA 0x1dc9418 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd9418(float *param_1,float param_2,float param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_50;
  float fStack_4c;
  
  pcVar2 = (char *)(_UNK_01dd9678 + 0x1dd943c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd967c + 0x1dd9450));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9397,0);
  if (iVar1 == 0) {
    piVar3 = *(int **)(_UNK_01dd9680 + 0x1dd94c8);
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar2 = (char *)(_UNK_01dd9684 + 0x1dd94e4);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd9688 + 0x1dd94f8));
      *pcVar2 = '\x01';
    }
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    pcVar2 = (char *)(_UNK_01dd968c + 0x1dd9528);
    fVar5 = *(float *)(*(int *)(iVar1 + 0x5c) + 0x1c);
    fVar4 = *(float *)(*(int *)(iVar1 + 0x5c) + 0x20);
    if (*pcVar2 == '\0') {
      func_0x01384978(piVar3);
      iVar1 = *piVar3;
      *pcVar2 = '\x01';
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
      fVar6 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
      if (*pcVar2 == '\0') {
        func_0x01384978(piVar3);
        iVar1 = *piVar3;
        *pcVar2 = '\x01';
      }
    }
    else {
      fVar6 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
      fVar7 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
      if (*pcVar2 == '\0') {
        func_0x01384978(piVar3);
        iVar1 = *piVar3;
        *pcVar2 = '\x01';
      }
    }
    else {
      fVar7 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
      fVar8 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
      if (*pcVar2 == '\0') {
        func_0x01384978(piVar3);
        iVar1 = *piVar3;
        *pcVar2 = '\x01';
      }
    }
    else {
      fVar8 = *(float *)(*(int *)(iVar1 + 0x5c) + 8);
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    param_1[1] = (-(fVar8 * param_3) - *(float *)(*(int *)(iVar1 + 0x5c) + 8) * 0.5) + fVar4;
    *param_1 = fVar7 * 0.5 + fVar6 * param_2 + fVar5;
  }
  else {
    iVar1 = func_0x0229f13c(0x9397,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021de86c(&fStack_50,iVar1,param_2,param_3,0);
    *param_1 = fStack_50;
    param_1[1] = fStack_4c;
  }
  return;
}



// ===== FAT.BoardUtility$$GetScreenPosByBoardPos RVA 0x1dc9690 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd9690(float *param_1,float param_2,float param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fStack_40;
  float fStack_3c;
  
  pcVar2 = (char *)(_UNK_01dd9804 + 0x1dd96b4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd9808 + 0x1dd96c8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9dcf,0);
  if (iVar1 == 0) {
    piVar3 = *(int **)(_UNK_01dd980c + 0x1dd9738);
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar2 = (char *)(_UNK_01dd9810 + 0x1dd9754);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd9814 + 0x1dd9768));
      *pcVar2 = '\x01';
    }
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    fVar5 = *(float *)(*(int *)(iVar1 + 0x5c) + 0x10);
    pcVar2 = (char *)(_UNK_01dd9818 + 0x1dd97a4);
    if (*pcVar2 == '\0') {
      func_0x01384978(piVar3);
      iVar1 = *piVar3;
      *pcVar2 = '\x01';
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    fVar4 = *(float *)(*(int *)(iVar1 + 0x5c) + 0x18);
    *param_1 = param_2 / fVar5 + *(float *)(*(int *)(iVar1 + 0x5c) + 0x14);
    param_1[1] = param_3 / fVar5 + fVar4;
  }
  else {
    iVar1 = func_0x0229f13c(0x9dcf,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0223934c(&fStack_40,iVar1,param_2,param_3,0);
    *param_1 = fStack_40;
    param_1[1] = fStack_3c;
  }
  return;
}



// ===== FAT.BoardUtility$$GetBoardPosByScreenPos RVA 0x1dc981c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd981c(float *param_1,float param_2,float param_3)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fStack_28;
  float fStack_24;
  
  pcVar2 = (char *)(_UNK_01dd9990 + 0x1dd9840);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd9994 + 0x1dd9854));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9dd1,0);
  if (iVar1 == 0) {
    piVar3 = *(int **)(_UNK_01dd9998 + 0x1dd98c4);
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar2 = (char *)(_UNK_01dd999c + 0x1dd98e0);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd99a0 + 0x1dd98f4));
      *pcVar2 = '\x01';
    }
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    pcVar2 = (char *)(_UNK_01dd99a4 + 0x1dd9924);
    fVar5 = *(float *)(*(int *)(iVar1 + 0x5c) + 0x10);
    if (*pcVar2 == '\0') {
      func_0x01384978(piVar3);
      iVar1 = *piVar3;
      *pcVar2 = '\x01';
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar3;
    }
    fVar4 = *(float *)(*(int *)(iVar1 + 0x5c) + 0x18);
    *param_1 = fVar5 * (param_2 - *(float *)(*(int *)(iVar1 + 0x5c) + 0x14));
    param_1[1] = fVar5 * (param_3 - fVar4);
  }
  else {
    iVar1 = func_0x0229f13c(0x9dd1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0223934c(&fStack_28,iVar1,param_2,param_3,0);
    *param_1 = fStack_28;
    param_1[1] = fStack_24;
  }
  return;
}



// ===== FAT.BoardUtility$$CalcItemLocalPosInMoveRootByCoord RVA 0x1dc99a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd99a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01dd9b18 + 0x1dd99c8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd9b1c + 0x1dd99dc));
    func_0x01384978(*(undefined4 *)(_UNK_01dd9b20 + 0x1dd99e8));
    func_0x01384978(*(undefined4 *)(_UNK_01dd9b24 + 0x1dd99f4));
    *pcVar3 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x5f58,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01dd9b28 + 0x1dd9a6c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    FUN_01dd8904(&uStack_28,param_2,param_3);
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01dd9b2c + 0x1dd9aa0));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x01dd9b34(iVar1);
    if (*(int *)(**(int **)(_UNK_01dd9b30 + 0x1dd9acc) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0244fd5c(uVar2,uStack_28,uStack_24,0,&uStack_20,0);
    uStack_28 = uStack_20;
    uStack_24 = uStack_1c;
  }
  else {
    iVar1 = func_0x0229f13c(0x5f58,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0223934c(&uStack_28,iVar1,param_2,param_3,0);
  }
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  return;
}



// ===== FAT.BoardUtility$$CalcItemLocalPosInMoveRoot RVA 0x1dc9c14 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd9c14(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01dd9d84 + 0x1dd9c34);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd9d88 + 0x1dd9c48));
    func_0x01384978(*(undefined4 *)(_UNK_01dd9d8c + 0x1dd9c54));
    func_0x01384978(*(undefined4 *)(_UNK_01dd9d90 + 0x1dd9c60));
    *pcVar3 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iVar1 = func_0x0229f06c(0x9dd2,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01dd9d94 + 0x1dd9cd8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    FUN_01dd9690(&uStack_28,param_2,param_3);
    iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01dd9d98 + 0x1dd9d0c));
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = FUN_01dd9b34(iVar1);
    if (*(int *)(**(int **)(_UNK_01dd9d9c + 0x1dd9d38) + 0x74) == 0) {
      func_0x01384ab4();
    }
    func_0x0244fd5c(uVar2,uStack_28,uStack_24,0,&uStack_20,0);
    uStack_28 = uStack_20;
    uStack_24 = uStack_1c;
  }
  else {
    iVar1 = func_0x0229f13c(0x9dd2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0223934c(&uStack_28,iVar1,param_2,param_3,0);
  }
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  return;
}



// ===== FAT.BoardUtility$$PlaceItemToBoardCoord RVA 0x1dc9da0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd9da0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pcVar3 = (char *)(_UNK_01dd9f98 + 0x1dd9dc4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dd9f9c + 0x1dd9dd8));
    func_0x01384978(*(undefined4 *)(_UNK_01dd9fa0 + 0x1dd9de4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x387f,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    piVar2 = (int *)func_0x024504c0(param_1,0);
    piVar4 = *(int **)(_UNK_01dd9fa4 + 0x1dd9e6c);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar3 = (char *)(_UNK_01dd9fa8 + 0x1dd9e88);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01dd9fac + 0x1dd9e9c));
      *pcVar3 = '\x01';
    }
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
      fVar8 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
      if (*pcVar3 == '\0') {
        func_0x01384978(piVar4);
        iVar1 = *piVar4;
        *pcVar3 = '\x01';
      }
    }
    else {
      fVar8 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
      iVar1 = *piVar4;
    }
    fVar5 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = *(float *)(*(int *)(iVar1 + 0x5c) + 4);
    if (piVar2 == (int *)0x0) {
      func_0x01384bf0();
      piVar2 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(_UNK_01dd9fb0 + 0x1dd9f4c);
      if (*piVar2 != *piVar4) {
        func_0x01384bf0();
      }
      if (*piVar2 != *piVar4) {
        piVar2 = (int *)0x0;
      }
    }
    (*(code *)&UNK_05194df4)(piVar2,(fVar6 + 0.5) * fVar8,-((fVar5 + 0.5) * fVar7),0);
    return;
  }
  iVar1 = func_0x0229f13c(0x387f,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0220cf98(iVar1,param_1,param_2,param_3,0);
  return;
}



// ===== FAT.BoardUtility$$CalculateBezierPoint RVA 0x1dc9fb4 =====

void FUN_01dd9fb4(float *param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fStack_30;
  float fStack_2c;
  
  iVar1 = func_0x0229f06c(0x9dd3,0);
  if (iVar1 == 0) {
    fVar2 = 1.0 - param_2;
    fVar3 = (fVar2 + fVar2) * param_2;
    param_1[1] = fVar3 * param_6 + fVar2 * fVar2 * param_4 + param_2 * param_2 * param_8;
    *param_1 = fVar3 * param_5 + fVar2 * fVar2 * param_3 + param_2 * param_2 * param_7;
  }
  else {
    iVar1 = func_0x0229f13c(0x9dd3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x022854e8(&fStack_30,iVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
    *param_1 = fStack_30;
    param_1[1] = fStack_2c;
  }
  return;
}



// ===== FAT.BoardUtility$$FiilMatchItemList RVA 0x1dca0a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dda0a4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_01dda1c0 + 0x1dda0c4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dda1c4 + 0x1dda0d8));
    *pcVar4 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x764a,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x764a,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x022509e0(iVar2,param_1,param_2,param_3,0);
    return uVar3;
  }
  iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01dda1c8 + 0x1dda140));
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x7c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x020dbcf8(iVar2,param_1,param_2,0);
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x50);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar4 = (char *)(_UNK_01dcf884 + 0x1dcf780);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dcf888 + 0x1dcf794),uVar3,param_3,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dcf88c + 0x1dcf7a0));
    func_0x01384978(*(undefined4 *)(_UNK_01dcf890 + 0x1dcf7ac));
    *pcVar4 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x764b,0);
  if (iVar1 == 0) {
    iVar2 = *(int *)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x03d66780(iVar2,uVar3,&iStack_1c,**(undefined4 **)(_UNK_01dcf894 + 0x1dcf830));
    uVar3 = 0;
    if (iVar2 != 0) {
      if (param_3 != 0) {
        uVar3 = func_0x0325992c(param_3,iStack_1c,**(undefined4 **)(_UNK_01dcf898 + 0x1dcf85c));
      }
      iVar2 = iStack_1c;
      if (iStack_1c == 0) {
        func_0x01384bf0(uVar3);
      }
      uVar3 = *(undefined4 *)(iVar2 + 0xc);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x764b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021c279c(iVar1,iVar2,uVar3,param_3,0);
  }
  return uVar3;
}



// ===== FAT.BoardUtility$$TryUnlockGallery RVA 0x1dca1cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_01dda1cc(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined2 uStack_1a;
  
  pcVar11 = (char *)(_UNK_01dda4b0 + 0x1dda1e4);
  if (*pcVar11 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dda4b4 + 0x1dda1f8));
    func_0x01384978(*(undefined4 *)(_UNK_01dda4b8 + 0x1dda204));
    *pcVar11 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x1624,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x1624,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar1 = func_0x021d045c(iVar2,param_1,0);
    return uVar1;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x02116ae0(param_1,0);
  if (iVar2 == 0) {
LAB_01dda3dc:
    uVar4 = 0;
    puVar5 = *(undefined4 **)(_UNK_01dda4c8 + 0x1dda3ec);
  }
  else {
    piVar3 = (int *)func_0x021566f4(0);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0210e2d4(param_1,0);
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar7 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_01dda4bc + 0x1dda2bc)) {
          puVar5 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0x118);
          goto LAB_01dda304;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01dda4bc + 0x1dda2bc),0xb);
LAB_01dda304:
    iVar2 = (*(code *)*puVar5)(piVar3,uVar4,puVar5[1]);
    if (iVar2 == 0) goto LAB_01dda3dc;
    iVar6 = func_0x01c24918(0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0x3c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0210e2d4(param_1,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x01cc44e8(iVar6,uVar4,0);
    if (iVar6 != 0) goto LAB_01dda3dc;
    iVar6 = func_0x01c24918(0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0x3c);
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0210e2d4(param_1,0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = func_0x01cc45d4(iVar6,uVar4,0);
    if (iVar6 != 0) goto LAB_01dda3dc;
    if (param_1 == 0) {
      func_0x01384bf0();
    }
    uVar4 = func_0x0210e2d4(param_1,0);
    func_0x02165638(uVar4,0);
    if (*(int *)(iVar2 + 0x3c) == 0) {
      iVar2 = func_0x01c24918(0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(iVar2 + 0x60);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01cc0100(iVar2,0x10,0);
      if (iVar2 != 0) {
        uVar4 = 1;
        uVar8 = 1;
        uVar10 = **(undefined4 **)(_UNK_01dda4c0 + 0x1dda490);
        goto LAB_01dda3f8;
      }
    }
    uVar4 = 1;
    puVar5 = *(undefined4 **)(_UNK_01dda4c4 + 0x1dda4ac);
  }
  uVar10 = *puVar5;
  uVar8 = 0;
LAB_01dda3f8:
  uStack_1a = 0;
  func_0x038ee404(&uStack_1a,uVar4,uVar8,uVar10);
  return uStack_1a;
}



// ===== FAT.BoardUtility$$LoadAndPreparePoolItem RVA 0x1dca4cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dda4cc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
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
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar6 = (char *)(_UNK_01dda6fc + 0x1dda4e4);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dda700 + 0x1dda4f8));
    func_0x01384978(*(undefined4 *)(_UNK_01dda704 + 0x1dda504));
    func_0x01384978(*(undefined4 *)(_UNK_01dda708 + 0x1dda510));
    func_0x01384978(*(undefined4 *)(_UNK_01dda70c + 0x1dda51c));
    func_0x01384978(*(undefined4 *)(_UNK_01dda710 + 0x1dda528));
    func_0x01384978(*(undefined4 *)(_UNK_01dda714 + 0x1dda534));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f4e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5f4e,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  puVar8 = *(undefined4 **)(_UNK_01dda718 + 0x1dda590);
  iVar1 = func_0x034aaa34(*puVar8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x0244a3f8(iVar1,param_2,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01dda71c + 0x1dda5c8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x025550ec(param_1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    if (*(int *)(**(int **)(_UNK_01dda720 + 0x1dda600) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0303a104(uVar7,uVar3,**(undefined4 **)(_UNK_01dda724 + 0x1dda628));
    if ((iVar1 != 0) && (iVar5 = func_0x028bc4d8(iVar1,0), iVar5 != 0)) {
      uVar7 = func_0x029dd460(iVar1,0);
      if (*(int *)(**(int **)(_UNK_01dda728 + 0x1dda668) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar5 = func_0x0145b1cc(uVar7,0,0);
      if (iVar5 != 0) {
        iVar5 = func_0x034aaa34(*puVar8);
        piVar2 = (int *)func_0x029dd460(iVar1,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        piVar4 = (int *)0x0;
        if ((piVar2 != (int *)0x0) &&
           (piVar4 = piVar2, *piVar2 != **(int **)(_UNK_01dda72c + 0x1dda6d0))) {
          piVar4 = (int *)0x0;
        }
        iVar1 = func_0x0229f06c(0x3fa,0,piVar4,0);
        if (iVar1 == 0) {
          func_0x024487c8(&uStack_20);
          uStack_30 = uStack_1c;
          uStack_2c = 0;
          func_0x0244af00(iVar5,param_2,piVar4,uStack_20);
        }
        else {
          iVar1 = func_0x0229f13c(0x3fa,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uStack_30 = 0;
          func_0x02174858(iVar1,iVar5,param_2,piVar4);
        }
        return;
      }
    }
  }
  return;
}



// ===== FAT.BoardUtility$$EffTypeToPoolType RVA 0x1dca730 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01dda730(uint param_1)

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
  
  iVar1 = func_0x0229f06c(0x1638,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1638,0);
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
    func_0x01485238(&uStack_30,param_1,0);
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
  if (param_1 < 0x29) {
    return *(undefined4 *)(_UNK_01dda79c + 0x1dda790 + param_1 * 4);
  }
  return 0;
}



// ===== FAT.BoardUtility$$AddAutoReleaseComponent RVA 0x1dca7a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dda7a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01dda870 + 0x1dda7c0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dda874 + 0x1dda7d4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x3880,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3880,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021a82bc(iVar1,param_1,param_2,param_3,0);
    return;
  }
  iVar1 = func_0x02fd6f60(param_1,**(undefined4 **)(_UNK_01dda878 + 0x1dda83c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = func_0x0229f06c(0x1024,0,param_2,0);
  if (iVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    *(undefined1 *)(iVar1 + 0x18) = 1;
    *(undefined4 *)(iVar1 + 0x10) = param_3;
  }
  else {
    iVar2 = func_0x0229f13c(0x1024,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0218b1ec(iVar2,iVar1,param_3,param_2,0);
  }
  return;
}



// ===== FAT.BoardUtility$$AddAutoReleaseComponent RVA 0x1dca87c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dda87c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01dda970 + 0x1dda89c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dda974 + 0x1dda8b0));
    func_0x01384978(*(undefined4 *)(_UNK_01dda978 + 0x1dda8bc));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5f34,0);
  if (iVar1 == 0) {
    uStack_24 = **(undefined4 **)(_UNK_01dda97c + 0x1dda924);
    uStack_20 = 0xffffffff;
    uStack_1c = param_3;
    uVar2 = func_0x0244f5f4(&uStack_24,0);
    if (*(int *)(**(int **)(_UNK_01dda980 + 0x1dda948) + 0x74) == 0) {
      func_0x01384ab4();
    }
    FUN_01dda7a0(param_1,param_2,uVar2);
  }
  else {
    iVar1 = func_0x0229f13c(0x5f34,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02238c78(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.BoardUtility$$ReleaseAutoPoolItemFromChildren RVA 0x1dca984 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dda984(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
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
  
  pcVar3 = (char *)(_UNK_01ddaac4 + 0x1dda998);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddaac8 + 0x1dda9ac));
    func_0x01384978(*(undefined4 *)(_UNK_01ddaacc + 0x1dda9b8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1548,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1548,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  if (param_1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450148(param_1,0);
  uVar4 = iVar1 - 1;
  if (-1 < (int)uVar4) {
    puVar8 = *(undefined4 **)(_UNK_01ddaad0 + 0x1ddaa30);
    piVar7 = *(int **)(_UNK_01ddaad4 + 0x1ddaa38);
    do {
      if (param_1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02450158(param_1,uVar4,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x02f67194(iVar1,*puVar8);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar5 = func_0x0145b1cc(iVar1,0,0);
      if (iVar5 != 0) {
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0267004c(iVar1,0);
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 < 0x80000000);
  }
  return;
}



// ===== FAT.BoardUtility$$BindBoardRes RVA 0x1dcaad8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddaad8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  
  pcVar3 = (char *)(_UNK_01ddabb4 + 0x1ddaaec);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddabb8 + 0x1ddab00));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ead,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ead,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_01ddabbc + 0x1ddab58);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar3 = (char *)(_UNK_01ddabc0 + 0x1ddab74);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddabc4 + 0x1ddab88));
    *pcVar3 = '\x01';
  }
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x54) = param_1;
  return;
}



// ===== FAT.BoardUtility$$SetBoxAssets RVA 0x1dcabc8 =====

/* WARNING: Removing unreachable block (ram,0x01ddafa8) */
/* WARNING: Removing unreachable block (ram,0x01ddafb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddabc8(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_01ddb12c + 0x1ddabe0);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddb130 + 0x1ddabf4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddb134 + 0x1ddac00));
    func_0x01384978(*(undefined4 *)(_UNK_01ddb138 + 0x1ddac0c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddb13c + 0x1ddac18));
    func_0x01384978(*(undefined4 *)(_UNK_01ddb140 + 0x1ddac24));
    func_0x01384978(*(undefined4 *)(_UNK_01ddb144 + 0x1ddac30));
    func_0x01384978(*(undefined4 *)(_UNK_01ddb148 + 0x1ddac3c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddb14c + 0x1ddac48));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x5eb0,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5eb0,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485238(&uStack_30,param_1,0);
    iVar10 = *(int *)(iVar2 + 8);
    uVar11 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar2 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_30,uVar7,0,0);
    return;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x4c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iStack_28 = FUN_01dbd5a4(iVar2,param_1,0);
  piVar12 = *(int **)(_UNK_01ddb150 + 0x1ddace0);
  iVar2 = *piVar12;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x01384ab4();
    iVar2 = *piVar12;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x48);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar10 = *(int *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  if (0 < iVar10) {
    func_0x0145b1dc(*(undefined4 *)(iVar2 + 8),0,iVar10,0);
  }
  iVar2 = iStack_28;
  if (iStack_28 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x3c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x03653608(iVar2,**(undefined4 **)(_UNK_01ddb154 + 0x1ddad64));
  piVar8 = *(int **)(_UNK_01ddb158 + 0x1ddad7c);
LAB_01ddad78:
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar2 = *piVar3;
  uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar6[-1] == *piVar8) {
        puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
        goto LAB_01ddadd4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar8,0);
LAB_01ddadd4:
  iVar2 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  if (iVar2 != 0) {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01ddb15c + 0x1ddae08)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
          goto LAB_01ddae50;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ddb15c + 0x1ddae08),0);
LAB_01ddae50:
    uVar11 = (*(code *)*puVar4)(piVar3,puVar4[1]);
    iVar2 = *piVar12;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x01384ab4();
      iVar2 = *piVar12;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x48);
    if (*(int *)(**(int **)(_UNK_01ddb160 + 0x1ddae88) + 0x74) == 0) {
      func_0x01384ab4(**(int **)(_UNK_01ddb160 + 0x1ddae88));
    }
    uVar11 = func_0x025550ec(uVar11,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    iVar10 = *(int *)(iVar2 + 8);
    uVar5 = *(uint *)(iVar2 + 0xc);
    piVar6 = *(int **)(_UNK_01ddb164 + 0x1ddaee0);
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    iVar13 = *piVar6;
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    if (uVar5 < *(uint *)(iVar10 + 0xc)) {
      *(uint *)(iVar2 + 0xc) = uVar5 + 1;
      *(undefined4 *)(iVar10 + uVar5 * 4 + 0x10) = uVar11;
    }
    else {
      func_0x0328f170(iVar2,uVar11,*(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38))
      ;
    }
    goto LAB_01ddad78;
  }
  if (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_01ddb168 + 0x1ddaf48)) {
          puVar4 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_01ddaf90;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_01ddb168 + 0x1ddaf48),0);
LAB_01ddaf90:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  iVar2 = iStack_28;
  if (iStack_28 == 0) {
    func_0x01384bf0();
  }
  uVar11 = 0;
  iVar10 = func_0x01489db8(*(undefined4 *)(iVar2 + 0x54),0);
  if (iVar10 == 0) {
    uVar11 = *(undefined4 *)(iVar2 + 0x54);
    if (*(int *)(**(int **)(_UNK_01ddb16c + 0x1ddaff0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar11 = func_0x025550ec(uVar11,0);
  }
  iVar10 = *piVar12;
  if (*(int *)(iVar10 + 0x74) == 0) {
    func_0x01384ab4();
    iVar10 = *piVar12;
  }
  iVar13 = *(int *)(iVar10 + 0x74);
  uVar1 = *(undefined1 *)(iVar2 + 0x48);
  *(undefined4 *)(*(int *)(iVar10 + 0x5c) + 0x4c) = uVar11;
  if (iVar13 == 0) {
    func_0x01384ab4();
    iVar10 = *piVar12;
  }
  *(undefined1 *)(*(int *)(iVar10 + 0x5c) + 0x50) = uVar1;
  return;
}



// ===== FAT.BoardUtility$$GetLevelLockBg RVA 0x1dcb174 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ddb174(void)

{
  int iVar1;
  uint extraout_r1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
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
  
  pcVar2 = (char *)(_UNK_01ddb208 + 0x1ddb184);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddb20c + 0x1ddb198));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x160b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x160b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar2 = (char *)(_UNK_021d036c + 0x21d029c);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d0370 + 0x21d02b0),0);
      *pcVar2 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
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
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar6,uVar3,&uStack_30,uVar5,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021d0374 + 0x21d035c));
    return uVar5;
  }
  if (*(int *)(**(int **)(_UNK_01ddb210 + 0x1ddb1ec) + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar2 = (char *)(_UNK_01ddb2f8 + 0x1ddb228);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddb2fc + 0x1ddb23c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddb300 + 0x1ddb248));
    func_0x01384978(*(undefined4 *)(_UNK_01ddb304 + 0x1ddb254));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x160c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x160c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar2 = (char *)(_UNK_021d0278 + 0x21d0198);
    if (*pcVar2 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d027c + 0x21d01ac),0,0);
      *pcVar2 = '\x01';
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
    func_0x01485238(&uStack_30,0,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar6,uVar5,&uStack_30,uVar3,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021d0280 + 0x21d0268));
    return uVar5;
  }
  piVar4 = *(int **)(_UNK_01ddb308 + 0x1ddb2ac);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01458344(0,*(undefined4 *)(iVar1 + 0xc));
  if (*(uint *)(iVar1 + 0xc) <= extraout_r1) {
    func_0x0484c9cc(0,extraout_r1,**(undefined4 **)(_UNK_01ddb30c + 0x1ddb2ec));
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar1 + 0xc) <= extraout_r1) {
    func_0x01384bf4();
  }
  return *(undefined4 *)(iVar1 + extraout_r1 * 4 + 0x10);
}



// ===== FAT.BoardUtility$$GetBoxAsset RVA 0x1dcb214 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01ddb214(undefined4 param_1)

{
  int iVar1;
  uint extraout_r1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  
  pcVar3 = (char *)(_UNK_01ddb2f8 + 0x1ddb228);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddb2fc + 0x1ddb23c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddb300 + 0x1ddb248));
    func_0x01384978(*(undefined4 *)(_UNK_01ddb304 + 0x1ddb254));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x160c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x160c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021d0278 + 0x21d0198);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021d027c + 0x21d01ac),param_1,0);
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
    func_0x01485238(&uStack_30,param_1,0);
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
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021d0280 + 0x21d0268));
    return uVar6;
  }
  piVar4 = *(int **)(_UNK_01ddb308 + 0x1ddb2ac);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x48);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01458344(param_1,*(undefined4 *)(iVar1 + 0xc));
  if (*(uint *)(iVar1 + 0xc) <= extraout_r1) {
    func_0x0484c9cc(0,extraout_r1,**(undefined4 **)(_UNK_01ddb30c + 0x1ddb2ec));
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(uint *)(iVar1 + 0xc) <= extraout_r1) {
    func_0x01384bf4();
  }
  return *(undefined4 *)(iVar1 + extraout_r1 * 4 + 0x10);
}



// ===== FAT.BoardUtility$$SetFrozenCoverSprite RVA 0x1dcb310 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddb310(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  
  pcVar3 = (char *)(_UNK_01ddb3ec + 0x1ddb324);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddb3f0 + 0x1ddb338));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ea5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ea5,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_01ddb3f4 + 0x1ddb390);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar3 = (char *)(_UNK_01ddb3f8 + 0x1ddb3ac);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddb3fc + 0x1ddb3c0));
    *pcVar3 = '\x01';
  }
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x40) = param_1;
  return;
}



// ===== FAT.BoardUtility$$SetBubbleCoverSprite RVA 0x1dcb400 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddb400(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  
  pcVar3 = (char *)(_UNK_01ddb4dc + 0x1ddb414);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddb4e0 + 0x1ddb428));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ea7,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ea7,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_01ddb4e4 + 0x1ddb480);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar3 = (char *)(_UNK_01ddb4e8 + 0x1ddb49c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddb4ec + 0x1ddb4b0));
    *pcVar3 = '\x01';
  }
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x38) = param_1;
  return;
}



// ===== FAT.BoardUtility$$SetBubbleFrozenCoverSprite RVA 0x1dcb4f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddb4f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  
  pcVar3 = (char *)(_UNK_01ddb5cc + 0x1ddb504);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddb5d0 + 0x1ddb518));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5ea9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5ea9,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_01ddb5d4 + 0x1ddb570);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar3 = (char *)(_UNK_01ddb5d8 + 0x1ddb58c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddb5dc + 0x1ddb5a0));
    *pcVar3 = '\x01';
  }
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x3c) = param_1;
  return;
}



// ===== FAT.BoardUtility$$SetBottomSprite RVA 0x1dcb5e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddb5e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
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
  
  pcVar3 = (char *)(_UNK_01ddb6bc + 0x1ddb5f4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddb6c0 + 0x1ddb608));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5eab,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5eab,0);
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
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar4 = *(int **)(_UNK_01ddb6c4 + 0x1ddb660);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x01384ab4();
  }
  pcVar3 = (char *)(_UNK_01ddb6c8 + 0x1ddb67c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddb6cc + 0x1ddb690));
    *pcVar3 = '\x01';
  }
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar4;
  }
  *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x44) = param_1;
  return;
}



// ===== FAT.BoardUtility$$CalcBezierControlPosForSpawnByCoord RVA 0x1dcb6d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddb6d0(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  
  pcVar7 = (char *)(_UNK_01ddb940 + 0x1ddb6f8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddb944 + 0x1ddb710));
    func_0x01384978(*(undefined4 *)(_UNK_01ddb948 + 0x1ddb71c));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x9dd4,0);
  if (iVar3 == 0) {
    if (*(int *)(**(int **)(_UNK_01ddb94c + 0x1ddb7b0) + 0x74) == 0) {
      func_0x01384ab4();
    }
    FUN_01dd91fc(&fStack_90,param_2,param_3);
    fVar2 = fStack_8c;
    fVar1 = fStack_90;
    FUN_01dd91fc(&fStack_90,param_4,param_5);
    pcVar7 = (char *)(_UNK_01ddb950 + 0x1ddb808);
    if (*pcVar7 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ddb954 + 0x1ddb820));
      *pcVar7 = '\x01';
    }
    fVar10 = fStack_8c - fVar2;
    fVar9 = fStack_90 - fVar1;
    if (*(int *)(**(int **)(_UNK_01ddb958 + 0x1ddb83c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    fVar8 = SQRT(fVar10 * fVar10 + fVar9 * fVar9);
    if (fVar8 <= _UNK_01ddb93c) {
      pcVar7 = (char *)(_UNK_01ddb95c + 0x1ddb880);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ddb960 + 0x1ddb894));
        *pcVar7 = '\x01';
      }
      pfVar4 = *(float **)(**(int **)(_UNK_01ddb964 + 0x1ddb8a8) + 0x5c);
      fVar9 = *pfVar4;
      fVar10 = pfVar4[1];
    }
    else {
      fVar10 = fVar10 / fVar8;
      fVar9 = fVar9 / fVar8;
    }
    fVar9 = fStack_90 - fVar9 * param_7;
    fVar10 = fStack_8c - fVar10 * param_7;
    puVar5 = *(undefined4 **)(_UNK_01ddb968 + 0x1ddb8d8);
    param_1[4] = 0.0;
    param_1[5] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_1[6] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_1[7] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *param_1 = 0.0;
    param_1[1] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_1[2] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_1[3] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar6 = *puVar5;
    param_1[8] = 0.0;
    func_0x0395313c(param_1,fVar1,fVar2,(fVar9 + fVar1) * 0.5,param_6 + (fVar10 + fVar2) * 0.5,fVar9
                    ,fVar10,fStack_90,fStack_8c,0,uVar6);
  }
  else {
    iVar3 = func_0x0229f13c(0x9dd4,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x022856a8(&fStack_90,iVar3,param_2,param_3,param_4,param_5,param_6,param_7,0);
    *param_1 = fStack_90;
    param_1[1] = fStack_8c;
    param_1[2] = fStack_88;
    param_1[3] = fStack_84;
    param_1[4] = fStack_80;
    param_1[5] = fStack_7c;
    param_1[6] = fStack_78;
    param_1[7] = fStack_74;
    param_1[8] = fStack_70;
  }
  return;
}



// ===== FAT.BoardUtility$$CalcBezierControlPos RVA 0x1dcb96c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddb96c(float *param_1,float param_2,float param_3,float param_4,float param_5,int param_6
                 )

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 uStack_58;
  
  pcVar6 = (char *)(_UNK_01ddbbb0 + 0x1ddb994);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddbbb4 + 0x1ddb9ac));
    func_0x01384978(*(undefined4 *)(_UNK_01ddbbb8 + 0x1ddb9b8));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x0229f06c(0x9dd5,0);
  if (iVar3 == 0) {
    piVar7 = *(int **)(_UNK_01ddbbbc + 0x1ddba38);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    pcVar6 = (char *)(_UNK_01ddbbc0 + 0x1ddba54);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01ddbbc4 + 0x1ddba68));
      *pcVar6 = '\x01';
    }
    iVar3 = *piVar7;
    if (*(int *)(iVar3 + 0x74) == 0) {
      func_0x01384ab4();
      iVar3 = *piVar7;
    }
    fVar9 = *(float *)(*(int *)(iVar3 + 0x5c) + 4);
    FUN_01dd91fc(&fStack_68,param_2,param_3);
    fVar2 = fStack_64;
    fVar1 = fStack_68;
    FUN_01dd91fc(&fStack_68,param_4,param_5);
    if (param_6 == 0) {
      fVar8 = fVar9 * 0.5;
      if (param_2 <= param_4) {
        if (param_2 < param_4) {
          fStack_68 = fStack_68 - fVar8;
        }
      }
      else {
        fStack_68 = fVar8 + fStack_68;
      }
      if (param_3 <= param_5) {
        if (param_3 < param_5) {
          fStack_64 = fVar8 + fStack_64;
        }
      }
      else {
        fStack_64 = fStack_64 - fVar8;
      }
    }
    puVar4 = *(undefined4 **)(_UNK_01ddbbc8 + 0x1ddbb58);
    *param_1 = 0.0;
    param_1[1] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    param_1[2] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    param_1[3] = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = *puVar4;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    func_0x0393bbdc(param_1,fVar1,fVar2,(fStack_68 + fVar1) * 0.5,
                    fVar9 + fVar9 + (fStack_64 + fVar2) * 0.5,fStack_68,fStack_64,uVar5);
  }
  else {
    iVar3 = func_0x0229f13c(0x9dd5,0);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    func_0x02285868(&fStack_68,iVar3,param_2,param_3,param_4,param_5,param_6,0);
    *param_1 = fStack_68;
    param_1[1] = fStack_64;
    param_1[2] = fStack_60;
    param_1[3] = fStack_5c;
    *(undefined8 *)(param_1 + 4) = uStack_58;
  }
  return;
}



// ===== FAT.BoardUtility$$GetRequestedSpawnPos RVA 0x1dcbbcc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddbbcc(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  uint in_fpscr;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_01ddbea8 + 0x1ddbbe8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddbeac + 0x1ddbbfc));
    func_0x01384978(*(undefined4 *)(_UNK_01ddbeb0 + 0x1ddbc08));
    func_0x01384978(*(undefined4 *)(_UNK_01ddbeb4 + 0x1ddbc14));
    func_0x01384978(*(undefined4 *)(_UNK_01ddbeb8 + 0x1ddbc20));
    *pcVar6 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_2c = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  iVar2 = func_0x0229f06c(0x9dd6,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = *(int *)(param_2 + 0x30);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0210e2d4(iVar2,0);
    piVar7 = *(int **)(_UNK_01ddbebc + 0x1ddbcd4);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = FUN_01dd7a3c(uVar3,&uStack_28,&uStack_2c);
    uVar1 = uStack_20;
    uVar5 = uStack_24;
    uVar3 = uStack_28;
    if (iVar2 == 0) {
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      FUN_01dd7d28();
      pcVar6 = (char *)(_UNK_01ddbecc + 0x1ddbdfc);
      if (*pcVar6 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01ddbed0 + 0x1ddbe10));
        *pcVar6 = '\x01';
      }
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar2 = *(int *)(param_2 + 0x30);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      func_0x0210cd7c(&uStack_48,iVar2,0);
      uVar3 = VectorSignedToFloat(uStack_48,(byte)(in_fpscr >> 0x16) & 3);
      uVar5 = VectorSignedToFloat(uStack_44,(byte)(in_fpscr >> 0x16) & 3);
      FUN_01dd91fc(&uStack_48,uVar3,uVar5);
      uVar3 = 0;
      puVar4 = *(undefined4 **)(_UNK_01ddbed4 + 0x1ddbe88);
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)((int)param_1 + 4) = 0;
      uVar5 = *puVar4;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else {
      if (*(int *)(**(int **)(_UNK_01ddbec0 + 0x1ddbd0c) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x0244fd4c(&uStack_48,0,uVar3,uVar5,uVar1,0);
      iVar2 = func_0x03668dfc(**(undefined4 **)(_UNK_01ddbec4 + 0x1ddbd54));
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x01ddbed8(iVar2);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x01f09284(iVar2,0);
      func_0x0244fd5c(uVar3,uStack_48,uStack_44,0,&uStack_38,0);
      puVar4 = *(undefined4 **)(_UNK_01ddbec8 + 0x1ddbdbc);
      *(undefined4 *)param_1 = 0;
      uVar5 = *puVar4;
      *(undefined4 *)((int)param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      uStack_48 = uStack_38;
      uStack_44 = uStack_34;
      uVar3 = uStack_2c;
    }
    func_0x0390f060(param_1,uStack_48,uStack_44,uVar3,uVar5);
  }
  else {
    iVar2 = func_0x0229f13c(0x9dd6,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02285a00(&uStack_48,iVar2,param_2,0);
    *(undefined4 *)(param_1 + 1) = uStack_40;
    *param_1 = CONCAT44(uStack_44,uStack_48);
  }
  return;
}



// ===== FAT.BoardUtility$$OnLackOfEnergy RVA 0x1dcbf2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddbf2c(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
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
  
  iVar2 = func_0x0229f06c(0x5f0d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x5f0d,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
      uVar5 = 0;
      if (*(int *)(iVar2 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar9 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x0245495c(iVar9,uVar7,&uStack_30,uVar5,0,0);
    return;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0x9c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = FUN_01c77708(iVar2,0x10,0);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = func_0x01c24918(0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar2 + 0xfc);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  iVar9 = func_0x0229f06c(0x5f0e,0);
  if (iVar9 != 0) {
    iVar9 = func_0x0229f13c(0x5f0e,0);
    if (iVar9 == 0) {
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
    if (*(int *)(iVar9 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar9 + 0x10),0);
    }
    func_0x01485278(&uStack_30,iVar2,0);
    iVar6 = *(int *)(iVar9 + 8);
    uVar5 = *(undefined4 *)(iVar9 + 0xc);
    iVar2 = *(int *)(iVar9 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar2 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar6,uVar5,&uStack_30,uVar7,0,0);
    return;
  }
  pcVar8 = (char *)(_UNK_01e84410 + 0x1e841e8);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01e84414 + 0x1e841fc));
    func_0x01384978(*(undefined4 *)(_UNK_01e84418 + 0x1e84208));
    func_0x01384978(*(undefined4 *)(_UNK_01e8441c + 0x1e84214));
    func_0x01384978(*(undefined4 *)(_UNK_01e84420 + 0x1e84220));
    func_0x01384978(*(undefined4 *)(_UNK_01e84424 + 0x1e8422c));
    func_0x01384978(*(undefined4 *)(_UNK_01e84428 + 0x1e84238));
    func_0x01384978(*(undefined4 *)(_UNK_01e8442c + 0x1e84244));
    *pcVar8 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iVar9 = func_0x0229f06c(0xf8e,0);
  if (iVar9 != 0) {
    iVar9 = func_0x0229f13c(0xf8e,0);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    func_0x0217bbe0(iVar9,iVar2,1,0);
    return;
  }
  if (*(int *)(iVar2 + 0x1c) != 1) {
    if (*(int *)(iVar2 + 0x14) == 0) {
      iVar9 = *(int *)(iVar2 + 8);
      if (iVar9 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar9 + 0xc) < 1) goto LAB_01e843fc;
    }
    iVar9 = func_0x01384be4(**(undefined4 **)(_UNK_01e84430 + 0x1e842e4));
    func_0x0328e950(iVar9,**(undefined4 **)(_UNK_01e84434 + 0x1e842f8));
    uVar5 = *(undefined4 *)(iVar2 + 0x14);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar9 + 8);
    uVar4 = *(uint *)(iVar9 + 0xc);
    piVar3 = *(int **)(_UNK_01e84438 + 0x1e84330);
    *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
    iVar10 = *piVar3;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    if (uVar4 < *(uint *)(iVar6 + 0xc)) {
      *(uint *)(iVar9 + 0xc) = uVar4 + 1;
      *(undefined4 *)(iVar6 + uVar4 * 4 + 0x10) = uVar5;
    }
    else {
      func_0x0328f170(iVar9,uVar5,*(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
    }
    func_0x0328f380(iVar9,*(undefined4 *)(iVar2 + 8),**(undefined4 **)(_UNK_01e8443c + 0x1e84380));
    uStack_38 = **(undefined4 **)(_UNK_01e84440 + 0x1e843a4);
    func_0x03934478(&uStack_30,iVar9,*(undefined4 *)(iVar2 + 0x1c),*(undefined4 *)(iVar2 + 0x3c));
    func_0x01e83de0(iVar2,0);
    uVar1 = uStack_28;
    uVar7 = uStack_2c;
    uVar5 = uStack_30;
    iVar9 = *(int *)(iVar2 + 0xc);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uStack_38 = **(undefined4 **)(_UNK_01e84444 + 0x1e843f0);
    func_0x03685b64(iVar9,uVar5,uVar7,uVar1);
  }
LAB_01e843fc:
  func_0x01e83ff8(iVar2,1);
  return;
}



// ===== FAT.BoardUtility$$OnLackOfEnergyAfterEnergyShopClosed RVA 0x1dcbfe8 =====

void FUN_01ddbfe8(void)

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
  
  iVar1 = func_0x0229f06c(0x9dd7,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x9dd7,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar2 = 0;
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
    uVar2 = 0;
    if (*(int *)(iVar1 + 0x10) != 0) {
      uVar2 = 1;
    }
  }
  iVar4 = *(int *)(iVar1 + 8);
  uVar3 = *(undefined4 *)(iVar1 + 0xc);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.BoardUtility$$CanWatchBubbleAds RVA 0x1dcc02c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ddc02c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
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
  
  iVar1 = func_0x0229f06c(0x9dd8,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9dd8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
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
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar6 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar4,&uStack_30,uVar3);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(iVar1 + 0xa0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar3 = *(undefined4 *)(iVar1 + 0x1a8);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 0;
  iVar1 = func_0x0229f06c(0x3575,0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x3575,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,uVar3,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar6,0);
    func_0x01485238(&uStack_38,uVar3,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar3,&uStack_38,uVar4,0,0);
    uVar2 = func_0x0245496c(&uStack_38,0,0);
    return uVar2;
  }
  iVar1 = func_0x02bb74a4(iVar6,uVar3);
  if ((iVar1 != 0) && (iVar1 = func_0x02bb7da0(), iVar1 != 0)) {
    iVar1 = func_0x02bb7e04(iVar6,uVar3);
    uVar2 = 1;
    if (iVar1 == 0) {
      iVar1 = func_0x02bb5f10(iVar6);
      uVar2 = 0;
      if (iVar1 != 0) {
        pcVar5 = (char *)(_UNK_02bb60d0 + 0x2bb6008);
        if (*pcVar5 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02bb60d4 + 0x2bb601c));
          *pcVar5 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x353b,0);
        if (iVar1 != 0) {
          iVar1 = func_0x0229f13c(0x353b,0);
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
          func_0x01485278(&uStack_30,iVar6,0);
          iVar6 = *(int *)(iVar1 + 8);
          uVar3 = *(undefined4 *)(iVar1 + 0xc);
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
          func_0x0245495c(iVar6,uVar3,&uStack_30,uVar4);
          uVar2 = func_0x0245496c(&uStack_30,0,0);
          return uVar2;
        }
        puVar7 = *(undefined4 **)(_UNK_02bb60d8 + 0x2bb6074);
        iVar1 = func_0x03668dfc(*puVar7);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar2 = 0;
        iVar1 = func_0x02bb42f0(iVar1,0);
        if (iVar1 != 0) {
          iVar1 = func_0x03668dfc(*puVar7);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar2 = func_0x02bb4344(iVar1,0);
          uVar2 = uVar2 ^ 1;
        }
        return uVar2;
      }
    }
  }
  return uVar2;
}



// ===== FAT.BoardUtility$$UseItemOnBoard RVA 0x1dcc0e8 =====

uint FUN_01ddc0e8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
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
  
  iVar1 = func_0x0229f06c(0x9dd9,0);
  if (iVar1 == 0) {
    iVar1 = func_0x0216d880(param_1,param_2,0);
    if (iVar1 != 0) {
      func_0x0216d2a8(param_1,iVar1,0);
    }
    return (uint)(iVar1 == 0);
  }
  iVar1 = func_0x0229f13c(0x9dd9,0);
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
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
  uVar2 = func_0x0245496c(&uStack_38,0,0);
  return uVar2;
}



// ===== FAT.BoardUtility$$.cctor RVA 0x1dcc178 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ddc178(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01ddc280 + 0x1ddc188);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01ddc284 + 0x1ddc19c));
    func_0x01384978(*(undefined4 *)(_UNK_01ddc288 + 0x1ddc1a8));
    func_0x01384978(*(undefined4 *)(_UNK_01ddc28c + 0x1ddc1b4));
    func_0x01384978(*(undefined4 *)(_UNK_01ddc290 + 0x1ddc1c0));
    func_0x01384978(*(undefined4 *)(_UNK_01ddc294 + 0x1ddc1cc));
    *pcVar5 = '\x01';
  }
  uVar1 = _UNK_01ddc278;
  piVar6 = *(int **)(_UNK_01ddc298 + 0x1ddc1e0);
  iVar4 = *(int *)(*piVar6 + 0x5c);
  uVar2 = **(undefined4 **)(_UNK_01ddc29c + 0x1ddc1ec);
  *(undefined8 *)(iVar4 + 0x28) = _UNK_01ddc270;
  *(undefined8 *)(iVar4 + 0x30) = uVar1;
  uVar2 = func_0x01384be4(uVar2);
  func_0x0328e950(uVar2,**(undefined4 **)(_UNK_01ddc2a0 + 0x1ddc214));
  iVar4 = *(int *)(*piVar6 + 0x5c);
  puVar3 = *(undefined4 **)(_UNK_01ddc2a4 + 0x1ddc234);
  *(undefined1 *)(iVar4 + 0x50) = 0;
  *(undefined4 *)(iVar4 + 0x48) = uVar2;
  uVar2 = *puVar3;
  *(undefined4 *)(iVar4 + 0x4c) = 0;
  uVar2 = func_0x01384be4(uVar2);
  func_0x0245240c(uVar2,**(undefined4 **)(_UNK_01ddc2a8 + 0x1ddc254));
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x60) = uVar2;
  return;
}



// ===== FAT.BoardUtility.<>c__DisplayClass69_0$$<ResolveSpawnRequest>b__0 RVA 0x1dcc2ac =====

bool FUN_01ddc2ac(int param_1,int param_2)

{
  return param_2 == *(int *)(param_1 + 8);
}


