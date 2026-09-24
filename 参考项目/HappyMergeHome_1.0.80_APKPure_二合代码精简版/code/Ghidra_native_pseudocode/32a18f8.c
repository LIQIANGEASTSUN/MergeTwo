
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_032b18f8(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_032b1a40 + 0x32b190c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b1a44 + 0x32b1920));
    func_0x01438628(*(undefined4 *)(_UNK_032b1a48 + 0x32b192c));
    func_0x01438628(*(undefined4 *)(_UNK_032b1a4c + 0x32b1938));
    func_0x01438628(*(undefined4 *)(_UNK_032b1a50 + 0x32b1944));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x829d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x829d,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar8,uVar9,&uStack_30,uVar5,0,0);
    uVar1 = func_0x024f56e0(&uStack_30,0,0);
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_032b1a54 + 0x32b199c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032b1a58 + 0x32b19b8));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar8 = *(int *)(iVar2 + 0x24);
  puVar10 = *(undefined4 **)(_UNK_032b1a5c + 0x32b19e0);
  iVar2 = 0;
  do {
    iVar4 = iVar2;
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar8 + 0xc);
    if (iVar7 <= iVar4) break;
    iVar2 = func_0x04cfd760(iVar8,iVar4,*puVar10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x032b1c74(param_1,*(undefined4 *)(iVar2 + 8));
    iVar2 = iVar4 + 1;
  } while (iVar3 != 0);
  return (uint)(iVar7 <= iVar4);
}

