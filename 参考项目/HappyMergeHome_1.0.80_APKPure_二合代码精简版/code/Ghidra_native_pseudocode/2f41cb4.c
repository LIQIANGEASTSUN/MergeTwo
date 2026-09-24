
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f51cb4(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  iVar3 = func_0x02953fd4(0x2b64,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x2b64,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  iVar3 = FUN_02f44c50(param_1);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  pcVar6 = (char *)(_UNK_026cf40c + 0x26cf384);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026cf410 + 0x26cf398),param_2,0);
    func_0x01438628(*(undefined4 *)(_UNK_026cf414 + 0x26cf3a4));
    *pcVar6 = '\x01';
  }
  if (*(int *)(iVar3 + 0x5c) == param_2) {
    return;
  }
  piVar1 = *(int **)(_UNK_026cf418 + 0x26cf3c4);
  *(int *)(iVar3 + 0x5c) = param_2;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_026cf41c + 0x26cf3e4));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar2 = *(uint *)(iVar3 + 0x60);
  *(uint *)(iVar3 + 0x60) = uVar2 + 1;
  *(uint *)(iVar3 + 100) = *(int *)(iVar3 + 100) + (uint)(0xfffffffe < uVar2);
  return;
}

