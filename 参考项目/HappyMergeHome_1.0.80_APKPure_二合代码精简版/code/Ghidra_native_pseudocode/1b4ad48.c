
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b5ad48(int *param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
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
  
  pcVar7 = (char *)(_UNK_01b5af74 + 0x1b5ad5c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b5af78 + 0x1b5ad70));
    func_0x01438628(*(undefined4 *)(_UNK_01b5af7c + 0x1b5ad7c));
    func_0x01438628(*(undefined4 *)(_UNK_01b5af80 + 0x1b5ad88));
    func_0x01438628(*(undefined4 *)(_UNK_01b5af84 + 0x1b5ad94));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0xa687,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0xa687,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar3 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar8,uVar9,&uStack_30,uVar6,0,0);
    return;
  }
  iVar3 = func_0x029f3fe4(param_1,0);
  if (iVar3 == 0) {
    return;
  }
  if ((*(char *)((int)param_1 + 0x39) != '\0') &&
     (iVar3 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114)),
     iVar3 != 0)) {
    bVar2 = FUN_01b57624(param_1);
    *(byte *)((int)param_1 + 0x39) = bVar2 ^ 1;
  }
  uVar4 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
  if (*(byte *)((int)param_1 + 0x3a) == uVar4) {
    return;
  }
  iVar3 = **(int **)(**(int **)(_UNK_01b5af88 + 0x1b5ae64) + 0x5c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar5 = func_0x02b2f170(iVar3,0);
  uVar1 = uVar5;
  if (uVar5 == 0xb) {
    uVar1 = (uint)(*(char *)((int)param_1 + 0x3a) == '\0');
  }
  if (uVar5 != 0xb || (uVar4 != 0 || uVar1 != 0)) {
    iVar3 = **(int **)(**(int **)(_UNK_01b5af8c + 0x1b5aeac) + 0x5c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02b67784(iVar3,0);
    if (iVar3 != 0) {
      return;
    }
    if (*(int *)(**(int **)(_UNK_01b5af90 + 0x1b5aee0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01b5af94 + 0x1b5aefc));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x02b0c7f8(iVar3,0);
    if (iVar3 == 0) {
      return;
    }
    if (0xb < uVar5) {
      return;
    }
    if ((1 << (uVar5 & 0xff) & 0x818U) == 0) {
      return;
    }
    if (uVar4 != 0 || *(byte *)((int)param_1 + 0x3a) == 0) {
      if ((~(uint)*(byte *)((int)param_1 + 0x3a) & uVar4) != 0) {
        FUN_01b58cd4(param_1);
      }
      goto LAB_01b5af6c;
    }
  }
  FUN_01b587a0(param_1);
LAB_01b5af6c:
  *(char *)((int)param_1 + 0x3a) = (char)uVar4;
  return;
}

