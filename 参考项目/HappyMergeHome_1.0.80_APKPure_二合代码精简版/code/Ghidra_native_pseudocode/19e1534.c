
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_019f1534(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
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
  
  pcVar3 = (char *)(_UNK_019f16a4 + 0x19f1548);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019f16a8 + 0x19f155c));
    func_0x01438628(*(undefined4 *)(_UNK_019f16ac + 0x19f1568));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x02953fd4(0x1a18,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1a18,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar4 = func_0x024f56e0(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = FUN_019edb58(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_019edb58(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if ((int)(uint)(*(int *)(iVar1 + 0x18) == 0) <= *(int *)(iVar1 + 0x1c)) {
      if (*(int *)(**(int **)(_UNK_019f16b0 + 0x19f15fc) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_019f16b4 + 0x19f1618));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar9 = func_0x026ffbe0(iVar1,0);
      iVar5 = (int)((ulonglong)uVar9 >> 0x20);
      iVar1 = FUN_019edb58(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar4 = *(uint *)(iVar1 + 0x18);
      iVar7 = *(int *)(iVar1 + 0x1c);
      iVar1 = FUN_019edb58(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      bVar8 = uVar4 < (uint)uVar9;
      uVar4 = (uint)((int)(iVar7 - (iVar5 + (uint)bVar8)) < 0 !=
                     (SBORROW4(iVar7,iVar5) != SBORROW4(iVar7 - iVar5,(uint)bVar8)) &&
                    0 < *(int *)(iVar1 + 0x20));
    }
  }
  return uVar4;
}

