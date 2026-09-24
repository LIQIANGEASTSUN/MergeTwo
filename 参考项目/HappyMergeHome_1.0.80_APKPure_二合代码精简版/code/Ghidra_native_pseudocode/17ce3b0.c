
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_017de3b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
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
  
  pcVar6 = (char *)(_UNK_017de4f8 + 0x17de3c4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017de4fc + 0x17de3d8));
    func_0x01438628(*(undefined4 *)(_UNK_017de500 + 0x17de3e4));
    func_0x01438628(*(undefined4 *)(_UNK_017de504 + 0x17de3f0));
    func_0x01438628(*(undefined4 *)(_UNK_017de508 + 0x17de3fc));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8fbf,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8fbf,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar8,uVar9,&uStack_30,uVar5,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(**(int **)(_UNK_017de50c + 0x17de454) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017de510 + 0x17de470));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar8 = *(int *)(iVar1 + 0x24);
  puVar10 = *(undefined4 **)(_UNK_017de514 + 0x17de498);
  iVar1 = 0;
  do {
    iVar4 = iVar1;
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar8 + 0xc);
    if (iVar7 <= iVar4) break;
    iVar1 = func_0x0152983c(iVar8,iVar4,*puVar10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x017de72c(param_1,*(undefined4 *)(iVar1 + 8));
    iVar1 = iVar4 + 1;
  } while (iVar2 != 0);
  return (uint)(iVar7 <= iVar4);
}

