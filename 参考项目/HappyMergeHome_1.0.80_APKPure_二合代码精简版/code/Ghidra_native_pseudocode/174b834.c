
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0175b834(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
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
  
  pcVar3 = (char *)(_UNK_0175b960 + 0x175b84c);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0175b964 + 0x175b860));
    func_0x01438628(*(undefined4 *)(_UNK_0175b968 + 0x175b86c));
    *pcVar3 = '\x01';
  }
  iVar4 = 0;
  iVar1 = func_0x02953fd4(0x8cae,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar1 = FUN_017479d8(param_1);
      iVar4 = 0;
      if (iVar1 != 0) {
        iVar1 = FUN_0174e5a0(param_1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar1 + 0x80);
        if (*(int *)(**(int **)(_UNK_0175b96c + 0x175b904) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0175b970 + 0x175b928));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x026ffbe0(iVar1,0);
        iVar4 = iVar4 - iVar1;
      }
    }
    return iVar4;
  }
  iVar1 = func_0x029540a4(0x8cae,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar2,0,0);
  iVar1 = func_0x024f5770(&uStack_38,0,0);
  return iVar1;
}

