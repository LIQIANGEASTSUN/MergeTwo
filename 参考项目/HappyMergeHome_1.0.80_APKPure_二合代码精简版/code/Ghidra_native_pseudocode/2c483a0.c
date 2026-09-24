
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c583a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
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
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_02c585fc + 0x2c583b8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c58600 + 0x2c583cc));
    func_0x01438628(*(undefined4 *)(_UNK_02c58604 + 0x2c583d8));
    func_0x01438628(*(undefined4 *)(_UNK_02c58608 + 0x2c583e4));
    func_0x01438628(*(undefined4 *)(_UNK_02c5860c + 0x2c583f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c58610 + 0x2c583fc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5f62,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5f62,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_028714ac + 0x28713cc);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_028714b0 + 0x28713e0),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_028714b4 + 0x287149c));
    return uVar6;
  }
  piVar7 = *(int **)(_UNK_02c58614 + 0x2c5845c);
  puVar5 = (undefined4 *)(param_1 + 0x1c);
  uVar6 = *puVar5;
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar6,0,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_02c58618 + 0x2c58494) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c5861c + 0x2c584b0));
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar6 = (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_1c = **(undefined4 **)(_UNK_02c58620 + 0x2c58500);
    uStack_20 = 0;
    uVar6 = func_0x036ac4cc(iVar1,uVar6,0,1);
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0xd4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x024eff78(iVar1,0);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x03680314(uVar6,uVar2,**(undefined4 **)(_UNK_02c58624 + 0x2c5856c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x024ef308(iVar1,0);
    *(undefined4 *)(param_1 + 0x1c) = uVar6;
    func_0x014385cc(puVar5,uVar6);
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0xd4);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f5ff0(iVar1,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x024f00a0(iVar3,iVar1 + 1,0);
  }
  return *puVar5;
}

