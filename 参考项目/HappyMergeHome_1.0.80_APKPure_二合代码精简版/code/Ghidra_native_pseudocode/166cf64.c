
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0167cf64(undefined4 param_1)

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
  
  pcVar3 = (char *)(_UNK_0167d078 + 0x167cf78);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0167d07c + 0x167cf8c));
    func_0x01438628(*(undefined4 *)(_UNK_0167d080 + 0x167cf98));
    func_0x01438628(*(undefined4 *)(_UNK_0167d084 + 0x167cfa4));
    func_0x01438628(*(undefined4 *)(_UNK_0167d088 + 0x167cfb0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xf71,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xf71,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar3 = (char *)(_UNK_0289727c + 0x289719c);
    if (*pcVar3 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02897280 + 0x28971b0),param_1,0);
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
    func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02897284 + 0x289726c));
    return;
  }
  if (*(int *)(**(int **)(_UNK_0167d08c + 0x167d008) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0167d090 + 0x167d024));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024f12b8(iVar1,**(undefined4 **)(_UNK_0167d094 + 0x167d044));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  (*(code *)&SUB_04cfd760)(iVar1,0,**(undefined4 **)(_UNK_0167d098 + 0x167d06c));
  return;
}

