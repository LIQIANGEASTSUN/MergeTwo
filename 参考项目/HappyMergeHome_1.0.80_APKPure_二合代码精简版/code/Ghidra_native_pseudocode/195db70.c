
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0196db70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
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
  
  pcVar4 = (char *)(_UNK_0196dc9c + 0x196db88);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0196dca0 + 0x196db9c));
    func_0x01438628(*(undefined4 *)(_UNK_0196dca4 + 0x196dba8));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0x2c69,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2c69,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_38,uVar2,0,0);
    uVar5 = func_0x024f56e0(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = FUN_019594e8(param_1);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_0196dca8 + 0x196dc18) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0196dcac + 0x196dc34));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = 0;
    iVar1 = func_0x029a6fa8(iVar1,param_2,0);
    if (iVar1 != 0) {
      iVar3 = FUN_019608c4(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar5 = (uint)(*(int *)(iVar3 + 0xc) == *(int *)(iVar1 + 0x30));
    }
  }
  return uVar5;
}

