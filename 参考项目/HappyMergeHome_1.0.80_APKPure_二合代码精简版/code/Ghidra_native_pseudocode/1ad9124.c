
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ae9124(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
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
  
  pcVar6 = (char *)(_UNK_01ae9368 + 0x1ae9138);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ae936c + 0x1ae914c));
    func_0x01438628(*(undefined4 *)(_UNK_01ae9370 + 0x1ae9158));
    func_0x01438628(*(undefined4 *)(_UNK_01ae9374 + 0x1ae9164));
    func_0x01438628(*(undefined4 *)(_UNK_01ae9378 + 0x1ae9170));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xa49f,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0xa49f,0);
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
    iVar7 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar2 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar5,0,0);
    return;
  }
  iVar2 = func_0x029f3fe4(param_1,0);
  if (iVar2 == 0) {
    return;
  }
  if ((*(char *)((int)param_1 + 0x39) != '\0') &&
     (iVar2 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114)),
     iVar2 != 0)) {
    uVar3 = FUN_01ae4a20(param_1);
    *(char *)((int)param_1 + 0x39) = (char)(uVar3 ^ 1);
    if ((uVar3 ^ 1) == 0) {
      (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
  if (*(byte *)((int)param_1 + 0x3a) == uVar3) {
    return;
  }
  iVar2 = **(int **)(**(int **)(_UNK_01ae937c + 0x1ae9258) + 0x5c);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar4 = func_0x02b2f170(iVar2,0);
  uVar1 = uVar4;
  if (uVar4 == 0xb) {
    uVar1 = (uint)(*(char *)((int)param_1 + 0x3a) == '\0');
  }
  if (uVar4 != 0xb || (uVar3 != 0 || uVar1 != 0)) {
    iVar2 = **(int **)(**(int **)(_UNK_01ae9380 + 0x1ae92a0) + 0x5c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02b67784(iVar2,0);
    if (iVar2 != 0) {
      return;
    }
    if (*(int *)(**(int **)(_UNK_01ae9384 + 0x1ae92d4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01ae9388 + 0x1ae92f0));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x02b0c7f8(iVar2,0);
    if (iVar2 == 0) {
      return;
    }
    if (0xb < uVar4) {
      return;
    }
    if ((1 << (uVar4 & 0xff) & 0x818U) == 0) {
      return;
    }
    if (uVar3 != 0 || *(byte *)((int)param_1 + 0x3a) == 0) {
      if ((~(uint)*(byte *)((int)param_1 + 0x3a) & uVar3) != 0) {
        FUN_01ae6760(param_1);
      }
      goto LAB_01ae9360;
    }
  }
  FUN_01ae6228(param_1);
LAB_01ae9360:
  *(char *)((int)param_1 + 0x3a) = (char)uVar3;
  return;
}

