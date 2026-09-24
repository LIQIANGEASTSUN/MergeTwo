
/* WARNING: Possible PIC construction at 0x02c5a118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c5a184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c5a1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c5a25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c5a280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c5a2c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x02c5a3b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c5a2c8) */
/* WARNING: Removing unreachable block (ram,0x02c5a2e0) */
/* WARNING: Removing unreachable block (ram,0x02c5a2e4) */
/* WARNING: Removing unreachable block (ram,0x02c5a310) */
/* WARNING: Removing unreachable block (ram,0x02c5a318) */
/* WARNING: Removing unreachable block (ram,0x02c5a358) */
/* WARNING: Removing unreachable block (ram,0x02c5a35c) */
/* WARNING: Removing unreachable block (ram,0x02c5a388) */
/* WARNING: Removing unreachable block (ram,0x02c5a38c) */
/* WARNING: Removing unreachable block (ram,0x02c5a284) */
/* WARNING: Removing unreachable block (ram,0x02c5a29c) */
/* WARNING: Removing unreachable block (ram,0x02c5a2a0) */
/* WARNING: Removing unreachable block (ram,0x02c5a260) */
/* WARNING: Removing unreachable block (ram,0x02c5a1f4) */
/* WARNING: Removing unreachable block (ram,0x02c5a20c) */
/* WARNING: Removing unreachable block (ram,0x02c5a210) */
/* WARNING: Removing unreachable block (ram,0x02c5a234) */
/* WARNING: Removing unreachable block (ram,0x02c5a238) */
/* WARNING: Removing unreachable block (ram,0x02c5a188) */
/* WARNING: Removing unreachable block (ram,0x02c5a1a0) */
/* WARNING: Removing unreachable block (ram,0x02c5a1a4) */
/* WARNING: Removing unreachable block (ram,0x02c5a1c8) */
/* WARNING: Removing unreachable block (ram,0x02c5a1cc) */
/* WARNING: Removing unreachable block (ram,0x02c5a11c) */
/* WARNING: Removing unreachable block (ram,0x02c5a134) */
/* WARNING: Removing unreachable block (ram,0x02c5a138) */
/* WARNING: Removing unreachable block (ram,0x02c5a15c) */
/* WARNING: Removing unreachable block (ram,0x02c5a160) */
/* WARNING: Removing unreachable block (ram,0x02c5a3b4) */
/* WARNING: Removing unreachable block (ram,0x02c5a3cc) */
/* WARNING: Removing unreachable block (ram,0x02c5a3d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c59f98(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
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
  
  pcVar7 = (char *)(_UNK_02c5a3fc + 0x2c59fac);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c5a400 + 0x2c59fc0));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a404 + 0x2c59fcc));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a408 + 0x2c59fd8));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a40c + 0x2c59fe4));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a410 + 0x2c59ff0));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a414 + 0x2c59ffc));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a418 + 0x2c5a008));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a41c + 0x2c5a014));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a420 + 0x2c5a020));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a424 + 0x2c5a02c));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a428 + 0x2c5a038));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a42c + 0x2c5a044));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a430 + 0x2c5a050));
    func_0x01438628(*(undefined4 *)(_UNK_02c5a434 + 0x2c5a05c));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x5f71,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5f71,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_30,uVar5,0,0);
    return;
  }
  iVar3 = func_0x024eecb8(param_1,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x024f0e6c(iVar3,**(undefined4 **)(_UNK_02c5a438 + 0x2c5a0d4),0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x014e94d8(iVar3,0);
  uVar8 = func_0x03633c3c(uVar8,0,**(undefined4 **)(_UNK_02c5a43c + 0x2c5a108));
  puVar4 = (undefined4 *)(param_1 + 0x18);
  *puVar4 = uVar8;
  if (*(int *)(_UNK_01408518 + 0x14084d8) != 0) {
    puVar2 = (uint *)(&UNK_0142c764 + _UNK_0140851c + ((uint)puVar4 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

