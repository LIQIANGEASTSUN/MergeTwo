
/* WARNING: Possible PIC construction at 0x01c80bb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01c80d48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01c80bb8) */
/* WARNING: Removing unreachable block (ram,0x01c80bcc) */
/* WARNING: Removing unreachable block (ram,0x01c80bd0) */
/* WARNING: Removing unreachable block (ram,0x01c80bdc) */
/* WARNING: Removing unreachable block (ram,0x01c80bf4) */
/* WARNING: Removing unreachable block (ram,0x01c80bf8) */
/* WARNING: Removing unreachable block (ram,0x01c80c14) */
/* WARNING: Removing unreachable block (ram,0x01c80c18) */
/* WARNING: Removing unreachable block (ram,0x01c80c2c) */
/* WARNING: Removing unreachable block (ram,0x01c80c48) */
/* WARNING: Removing unreachable block (ram,0x01c80c4c) */
/* WARNING: Removing unreachable block (ram,0x01c80c5c) */
/* WARNING: Removing unreachable block (ram,0x01c80c70) */
/* WARNING: Removing unreachable block (ram,0x01c80c74) */
/* WARNING: Removing unreachable block (ram,0x01c80c84) */
/* WARNING: Removing unreachable block (ram,0x01c80c9c) */
/* WARNING: Removing unreachable block (ram,0x01c80ca0) */
/* WARNING: Removing unreachable block (ram,0x01c80cbc) */
/* WARNING: Removing unreachable block (ram,0x01c80cc0) */
/* WARNING: Removing unreachable block (ram,0x01c80cd8) */
/* WARNING: Removing unreachable block (ram,0x01c80cdc) */
/* WARNING: Removing unreachable block (ram,0x01c80d20) */
/* WARNING: Removing unreachable block (ram,0x01c80d24) */
/* WARNING: Removing unreachable block (ram,0x01c80d4c) */
/* WARNING: Removing unreachable block (ram,0x01c80d5c) */
/* WARNING: Removing unreachable block (ram,0x01c80d8c) */
/* WARNING: Removing unreachable block (ram,0x01c80d90) */
/* WARNING: Removing unreachable block (ram,0x01c80d58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c80aac(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_01c80db4 + 0x1c80ac0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c80db8 + 0x1c80ad4));
    func_0x01438628(*(undefined4 *)(_UNK_01c80dbc + 0x1c80ae0));
    func_0x01438628(*(undefined4 *)(_UNK_01c80dc0 + 0x1c80aec));
    func_0x01438628(*(undefined4 *)(_UNK_01c80dc4 + 0x1c80af8));
    func_0x01438628(*(undefined4 *)(_UNK_01c80dc8 + 0x1c80b04));
    func_0x01438628(*(undefined4 *)(_UNK_01c80dcc + 0x1c80b10));
    func_0x01438628(*(undefined4 *)(_UNK_01c80dd0 + 0x1c80b1c));
    func_0x01438628(*(undefined4 *)(_UNK_01c80dd4 + 0x1c80b28));
    func_0x01438628(*(undefined4 *)(_UNK_01c80dd8 + 0x1c80b34));
    *pcVar6 = '\x01';
  }
  iVar3 = func_0x02953fd4(0xacd5,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0xacd5,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar7 = *(int *)(iVar3 + 8);
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar5,0,0);
    return;
  }
  iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01c80ddc + 0x1c80b8c));
  func_0x01c87e9c(iVar3,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  puVar4 = (undefined4 *)(iVar3 + 8);
  *puVar4 = param_1;
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

