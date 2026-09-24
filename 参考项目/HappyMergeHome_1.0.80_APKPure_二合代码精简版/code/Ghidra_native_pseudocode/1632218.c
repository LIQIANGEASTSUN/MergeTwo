
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01642218(undefined4 param_1)

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
  
  pcVar3 = (char *)(iRam016422f8 + 0x164222c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam016422fc + 0x1642240));
    func_0x01438628(*(undefined4 *)(iRam01642300 + 0x164224c));
    func_0x01438628(*(undefined4 *)(iRam01642304 + 0x1642258));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x168d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x168d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_028a73e0 + 0x28a7300);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028a73e4 + 0x28a7314),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028a73e8 + 0x28a73d0));
    return;
  }
  if (*(int *)(**(int **)(iRam01642308 + 0x16422b0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(iRam0164230c + 0x16422cc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  thunk_FUN_036dff18(iVar1,**(undefined4 **)(iRam01642310 + 0x16422ec));
  return;
}

