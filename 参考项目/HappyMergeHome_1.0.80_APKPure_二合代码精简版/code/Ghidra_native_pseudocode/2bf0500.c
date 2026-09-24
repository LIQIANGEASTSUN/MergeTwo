
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c00500(undefined4 param_1)

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
  
  pcVar4 = (char *)(_UNK_02c006a4 + 0x2c00514);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c006a8 + 0x2c00528));
    func_0x01438628(*(undefined4 *)(_UNK_02c006ac + 0x2c00534));
    func_0x01438628(*(undefined4 *)(_UNK_02c006b0 + 0x2c00540));
    func_0x01438628(*(undefined4 *)(_UNK_02c006b4 + 0x2c0054c));
    func_0x01438628(*(undefined4 *)(_UNK_02c006b8 + 0x2c00558));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e94,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5e94,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x024f56e0(&uStack_30,0,0);
    return uVar5;
  }
  if (*(int *)(**(int **)(_UNK_02c006bc + 0x2c005b0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c006c0 + 0x2c005cc));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar5 = 0;
  iVar1 = FUN_02be8708(iVar1,0);
  if (iVar1 != 0) {
    iVar3 = **(int **)(_UNK_02c006c4 + 0x2c00604);
    iVar1 = *(int *)(iVar3 + 0x1c);
    if (iVar1 == 0) {
      func_0x014909d8(iVar3);
      iVar1 = *(int *)(iVar3 + 0x1c);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = *(int *)(*(int *)(iVar3 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    uVar5 = **(undefined4 **)(iVar1 + 0x5c);
    if (*(int *)(**(int **)(_UNK_02c006c8 + 0x2c00664) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_02c006c8 + 0x2c00664));
    }
    func_0x026794a8(**(undefined4 **)(_UNK_02c006cc + 0x2c00694),uVar5,0);
    uVar5 = 1;
  }
  return uVar5;
}

