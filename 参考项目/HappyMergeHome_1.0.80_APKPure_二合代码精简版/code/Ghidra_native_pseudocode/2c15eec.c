
/* WARNING: Possible PIC construction at 0x02c2607c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02c26080) */
/* WARNING: Removing unreachable block (ram,0x02c260cc) */
/* WARNING: Removing unreachable block (ram,0x02c260d0) */
/* WARNING: Removing unreachable block (ram,0x024ef208) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c25eec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
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
  
  pcVar4 = (char *)(_UNK_02c26180 + 0x2c25f04);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c26184 + 0x2c25f18));
    func_0x01438628(*(undefined4 *)(_UNK_02c26188 + 0x2c25f24));
    func_0x01438628(*(undefined4 *)(_UNK_02c2618c + 0x2c25f30));
    func_0x01438628(*(undefined4 *)(_UNK_02c26190 + 0x2c25f3c));
    func_0x01438628(*(undefined4 *)(_UNK_02c26194 + 0x2c25f48));
    func_0x01438628(*(undefined4 *)(_UNK_02c26198 + 0x2c25f54));
    func_0x01438628(*(undefined4 *)(_UNK_02c2619c + 0x2c25f60));
    func_0x01438628(*(undefined4 *)(_UNK_02c261a0 + 0x2c25f6c));
    func_0x01438628(*(undefined4 *)(_UNK_02c261a4 + 0x2c25f78));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5ef0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5ef0,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02c261a8 + 0x2c25fd4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c261ac + 0x2c25ff0));
  uVar5 = FUN_02c19900(param_1);
  uVar2 = FUN_02c0c0ac(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_02bad204(iVar1,uVar5,uVar2,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar1 + 0xc) == 2) {
    FUN_02c23358(param_1,*(undefined4 *)(param_1 + 200),**(undefined4 **)(_UNK_02c261b4 + 0x2c26058)
                );
    uVar5 = **(undefined4 **)(_UNK_02c261b8 + 0x2c26078);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x014e94d8(iVar3,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar3,0,0);
    FUN_026f7464(iVar1,0,0);
    uVar5 = **(undefined4 **)(_UNK_02c261b0 + 0x2c26170);
  }
  (*(code *)&UNK_05d3fb3c)(param_1,uVar5,0);
  return;
}

