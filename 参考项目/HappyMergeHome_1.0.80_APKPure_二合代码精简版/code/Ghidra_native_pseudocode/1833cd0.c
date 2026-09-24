
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01843cd0(int param_1)

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
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_01843de8 + 0x1843ce8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01843dec + 0x1843cfc));
    func_0x01438628(*(undefined4 *)(_UNK_01843df0 + 0x1843d08));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x9252,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x9252,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_02869558 + 0x2869478);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0286955c + 0x286948c),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    iStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    iStack_24 = iStack_3c;
    iStack_20 = iStack_38;
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
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02869560 + 0x2869548));
    return;
  }
  *(undefined1 *)(param_1 + 0x52) = 0;
  func_0x01843dfc(&iStack_20,param_1,1);
  iVar4 = iStack_1c;
  iVar1 = iStack_20;
  func_0x01843dfc(&iStack_20,param_1,0);
  iStack_20 = iStack_20 + iVar1;
  puVar6 = *(undefined4 **)(_UNK_01843df4 + 0x1843da4);
  uVar5 = func_0x014387ac(*puVar6,&iStack_20);
  iStack_24 = iStack_1c + iVar4;
  uVar2 = func_0x014387ac(*puVar6,&iStack_24);
  func_0x014e95b8(**(undefined4 **)(_UNK_01843df8 + 0x1843ddc),uVar5,uVar2,0);
  return;
}

