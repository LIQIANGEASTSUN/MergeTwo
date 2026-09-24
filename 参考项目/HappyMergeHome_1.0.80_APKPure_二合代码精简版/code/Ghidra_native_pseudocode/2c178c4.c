
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c278c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = func_0x02953fd4(0x5efe,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5efe,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = func_0x014e94d8(param_1,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x024ef308(iVar1,0);
  pcVar5 = (char *)(_UNK_02c279cc + 0x2c27950);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c279d0 + 0x2c27964));
    *pcVar5 = '\x01';
  }
  iVar3 = *(int *)(**(int **)(_UNK_02c279d4 + 0x2c2797c) + 0x5c);
  uVar4 = *(undefined4 *)(iVar3 + 0xc);
  uVar2 = *(undefined4 *)(iVar3 + 0x10);
  uVar6 = *(undefined4 *)(iVar3 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_28 = 0;
  func_0x024ef328(iVar1,uVar4,uVar2,uVar6);
  FUN_02c1c2ec(param_1);
  FUN_02c1c724(param_1,0xffffffff);
  *(undefined1 *)(param_1 + 0x15c) = 0;
  return;
}

