
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031e6814(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
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
  
  pcVar5 = (char *)(_UNK_031e6948 + 0x31e6828);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031e694c + 0x31e683c));
    func_0x01438628(*(undefined4 *)(_UNK_031e6950 + 0x31e6848));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x02953fd4(0x1af3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1af3,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar3,0,0);
    uVar6 = func_0x024f56e0(&uStack_30,0,0);
    return uVar6;
  }
  iVar1 = func_0x031e7c60(param_1);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_031e6954 + 0x31e68b4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_031e6958 + 0x31e68d0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = 0;
    uVar8 = func_0x026ffbe0(iVar1,0);
    uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
    iVar1 = FUN_031e6094(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(uint *)(iVar1 + 0x1c) <= uVar2 &&
        (uint)((uint)uVar8 <= *(uint *)(iVar1 + 0x18)) <= *(uint *)(iVar1 + 0x1c) - uVar2) {
      FUN_031e6094(param_1);
      uVar8 = func_0x031e7d54();
      iVar1 = (int)((ulonglong)uVar8 >> 0x20);
      bVar7 = (int)uVar8 != 0;
      uVar6 = 0;
      if ((int)-(iVar1 + (uint)bVar7) < 0 != (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)bVar7))) {
        uVar6 = 1;
      }
    }
  }
  return uVar6;
}

