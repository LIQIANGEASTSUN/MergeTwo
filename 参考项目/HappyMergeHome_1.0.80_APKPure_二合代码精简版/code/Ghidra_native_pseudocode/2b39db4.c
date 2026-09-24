
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02b49db4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
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
  
  pcVar6 = (char *)(_UNK_02b49e90 + 0x2b49dcc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b49e94 + 0x2b49de0));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x63c,0);
  if (iVar1 == 0) {
    puVar7 = *(undefined4 **)(_UNK_02b49e98 + 0x2b49e40);
    iVar1 = *(int *)(param_1 + 0x68);
    do {
      iVar4 = iVar1;
      if (*(int *)(param_1 + 100) <= iVar4) {
        return *(int *)(param_1 + 100);
      }
      iVar1 = *(int *)(param_1 + 0x60);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x046cc810(iVar1,iVar4 + 1,*puVar7);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar1 = iVar4 + 1;
    } while (*(int *)(iVar2 + 0x14) <= param_2);
    return iVar4;
  }
  iVar1 = func_0x029540a4(0x63c,0);
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
  func_0x01523a2c(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
  iVar1 = func_0x024f56f0(&uStack_38,0,0);
  return iVar1;
}

