
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cc7b28(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_r1;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined8 uVar8;
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
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_01cc7c48 + 0x1cc7b44);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc7c4c + 0x1cc7b58));
    func_0x01438628(*(undefined4 *)(_UNK_01cc7c50 + 0x1cc7b64));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xafc3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xafc3,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = FUN_01cc28c8(param_1);
  if (*(int *)(**(int **)(_UNK_01cc7c54 + 0x1cc7bd0) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_01cc7c58 + 0x1cc7bec));
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar8 = func_0x026ffbe0(iVar5,0);
  iVar3 = (int)((ulonglong)uVar8 >> 0x20);
  iVar5 = iVar3;
  if (iVar1 == 0) {
    func_0x014388e4();
    iVar5 = extraout_r1;
  }
  uStack_20 = 0;
  uVar2 = param_2 * 1000;
  func_0x026a7dd0(iVar1,iVar5,(uint)uVar8 + uVar2,
                  iVar3 + ((int)uVar2 >> 0x1f) + (uint)CARRY4((uint)uVar8,uVar2));
  return;
}

