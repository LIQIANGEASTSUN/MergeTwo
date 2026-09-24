
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b4f974(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_029f2248 + 0x29f2180);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029f224c + 0x29f2194),param_2,0);
    func_0x01438628(*(undefined4 *)(_UNK_029f2250 + 0x29f21a0));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x16d,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x16d,0);
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
    iVar4 = *(int *)(iVar2 + 8);
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_029f2254 + 0x29f21fc) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_029f2258 + 0x29f2218));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  lVar1 = func_0x026ffbe0(iVar2,0);
  *(longlong *)(param_1 + 0x20) = (longlong)param_2 * 1000 + lVar1;
  return;
}

