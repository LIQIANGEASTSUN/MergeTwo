
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bda9bc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
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
  
  pcVar3 = (char *)(_UNK_02bdaa9c + 0x2bda9d8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdaaa0 + 0x2bda9ec));
    *pcVar3 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x02953fd4(0x5cf2,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5cf2,0);
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
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x28);
  puVar7 = *(undefined4 **)(_UNK_02bdaaa4 + 0x2bdaa58);
  while( true ) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar6) break;
    if (*(uint *)(iVar1 + 0xc) <= uVar6) {
      func_0x014388e8();
    }
    func_0x02bdaaa8(param_1,*(undefined4 *)(iVar1 + 0x10 + uVar6 * 4),param_2,*puVar7);
    uVar6 = uVar6 + 1;
  }
  return;
}

