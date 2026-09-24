
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be29b4(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
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
  
  iVar3 = func_0x02953fd4(0x5d15,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x5d15,0);
    if (iVar3 == 0) {
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
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar3 + 8);
    uVar7 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar3 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  iVar3 = FUN_02bad050(param_1,param_2);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar5 = *(int *)(iVar3 + 0x2c) + 1;
  pcVar6 = (char *)(_UNK_026f62f8 + 0x26f6270);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026f62fc + 0x26f6284),iVar5,0);
    func_0x01438628(*(undefined4 *)(_UNK_026f6300 + 0x26f6290));
    *pcVar6 = '\x01';
  }
  if (*(int *)(iVar3 + 0x2c) == iVar5) {
    return;
  }
  piVar1 = *(int **)(_UNK_026f6304 + 0x26f62b0);
  *(int *)(iVar3 + 0x2c) = iVar5;
  if (*(int *)(*piVar1 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_026f6308 + 0x26f62d0));
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar2 = *(uint *)(iVar3 + 0x60);
  *(uint *)(iVar3 + 0x60) = uVar2 + 1;
  *(uint *)(iVar3 + 100) = *(int *)(iVar3 + 100) + (uint)(0xfffffffe < uVar2);
  return;
}

