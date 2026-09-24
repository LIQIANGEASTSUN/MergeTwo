
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bae8e0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined8 uVar7;
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
  
  pcVar5 = (char *)(_UNK_02baea90 + 0x2bae8f4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02baea94 + 0x2bae908));
    func_0x01438628(*(undefined4 *)(_UNK_02baea98 + 0x2bae914));
    func_0x01438628(*(undefined4 *)(_UNK_02baea9c + 0x2bae920));
    func_0x01438628(*(undefined4 *)(_UNK_02baeaa0 + 0x2bae92c));
    func_0x01438628(*(undefined4 *)(_UNK_02baeaa4 + 0x2bae938));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x7a5,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x7a5,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar2 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar1 = func_0x024f56f0(&uStack_30,0,0);
    return uVar1;
  }
  if (*(int *)(**(int **)(_UNK_02baeaa8 + 0x2bae990) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02baeaac + 0x2bae9ac));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x026ffbe0(iVar2,0);
  uVar7 = func_0x014e6e04((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
  uVar1 = (uint)((ulonglong)uVar7 >> 0x20);
  iVar2 = FUN_02baddd0(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (uVar1 <= *(uint *)(iVar2 + 0x44) &&
      (uint)(*(uint *)(iVar2 + 0x40) <= (uint)uVar7) <= uVar1 - *(uint *)(iVar2 + 0x44)) {
    return 0;
  }
  iVar2 = FUN_02baddd0(param_1);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar2 = *(int *)(iVar2 + 0x40);
  if (*(int *)(**(int **)(_UNK_02baeab0 + 0x2baea34) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_02baeab4 + 0x2baea54));
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  iVar4 = func_0x029b3f20(iVar4,**(undefined4 **)(_UNK_02baeab8 + 0x2baea78),0);
  uVar1 = iVar4 + (iVar2 - (uint)uVar7);
  return uVar1 & ~((int)uVar1 >> 0x1f);
}

