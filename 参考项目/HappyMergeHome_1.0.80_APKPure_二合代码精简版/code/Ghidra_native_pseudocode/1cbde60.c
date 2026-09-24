
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01ccde60(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
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
  
  pcVar3 = (char *)(_UNK_01ccdf70 + 0x1ccde74);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ccdf74 + 0x1ccde88));
    func_0x01438628(*(undefined4 *)(_UNK_01ccdf78 + 0x1ccde94));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xafeb,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01ccc5a4(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = *(uint *)(iVar1 + 0x28);
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (*(int *)(**(int **)(_UNK_01ccdf7c + 0x1ccdf04) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01ccdf80 + 0x1ccdf24));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar7 = func_0x026ffbe0(iVar4,0);
    iVar4 = uVar5 - (uint)uVar7;
    iVar1 = iVar1 - ((int)((ulonglong)uVar7 >> 0x20) + (uint)(uVar5 < (uint)uVar7));
    if ((int)-(iVar1 + (uint)(iVar4 != 0)) < 0 ==
        (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)(iVar4 != 0)))) {
      iVar4 = 0;
    }
    return iVar4;
  }
  iVar1 = func_0x029540a4(0xafeb,0);
  if (iVar1 == 0) {
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
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar2,0,0);
  iVar1 = func_0x024f5770(&uStack_30,0,0);
  return iVar1;
}

