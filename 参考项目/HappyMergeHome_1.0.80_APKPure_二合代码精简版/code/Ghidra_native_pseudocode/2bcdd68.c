
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bddd68(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
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
  
  pcVar5 = (char *)(_UNK_02bddea4 + 0x2bddd80);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bddea8 + 0x2bddd94));
    func_0x01438628(*(undefined4 *)(_UNK_02bddeac + 0x2bddda0));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xfe3,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0xfe3,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_38,uVar4,0,0);
    uVar1 = func_0x024f56e0(&uStack_38,0,0);
    return uVar1;
  }
  puVar9 = *(undefined4 **)(_UNK_02bddeb0 + 0x2bdde00);
  iVar2 = 0;
  do {
    iVar7 = iVar2;
    iVar2 = FUN_02bad050(param_1,param_2);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar2 + 0xc);
    if (iVar6 <= iVar7) break;
    iVar2 = FUN_02bad050(param_1,param_2);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x03b780b0(iVar2,iVar7,*puVar9);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar2 = iVar7 + 1;
  } while (*(int *)(iVar3 + 8) != -1);
  return (uint)(iVar6 <= iVar7);
}

