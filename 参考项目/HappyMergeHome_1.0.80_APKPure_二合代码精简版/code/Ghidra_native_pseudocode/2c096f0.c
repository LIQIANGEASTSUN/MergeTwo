
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c196f0(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
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
  
  pcVar7 = (char *)(_UNK_02c198dc + 0x2c19708);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c198e0 + 0x2c1971c));
    func_0x01438628(*(undefined4 *)(_UNK_02c198e4 + 0x2c19728));
    func_0x01438628(*(undefined4 *)(_UNK_02c198e8 + 0x2c19734));
    func_0x01438628(*(undefined4 *)(_UNK_02c198ec + 0x2c19740));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x4fc5,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x4fc5,0);
    if (iVar2 == 0) {
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
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar2 + 8);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar2 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  *(int *)(param_1 + 0x10c) = param_2;
  if (-1 < param_2) {
    if (*(int *)(**(int **)(_UNK_02c198f0 + 0x2c197a8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c198f4 + 0x2c197c4));
    uVar6 = *(undefined4 *)(param_1 + 0x10c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar6 = func_0x029a6fa8(iVar2,uVar6,0);
    puVar5 = (undefined4 *)(param_1 + 0x1c);
    *puVar5 = uVar6;
    func_0x014385cc(puVar5,uVar6);
    if (*(int *)(**(int **)(_UNK_02c198f8 + 0x2c1980c) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar8 = *(undefined4 **)(_UNK_02c198fc + 0x2c19828);
    iVar2 = func_0x014e9518(*puVar8);
    uVar6 = *puVar5;
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar1 = func_0x02c4ab04(iVar2,uVar6,0);
    uVar6 = *puVar8;
    *(undefined1 *)(param_1 + 0x118) = uVar1;
    iVar2 = func_0x014e9518(uVar6);
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar1 = func_0x02c4acc8(iVar2,uVar6,0);
    uVar6 = *puVar8;
    *(undefined1 *)(param_1 + 0x119) = uVar1;
    iVar2 = func_0x014e9518(uVar6);
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar1 = func_0x02c4aa30(iVar2,uVar6,0);
    *(undefined1 *)(param_1 + 0x11a) = uVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  func_0x014385cc((undefined4 *)(param_1 + 0x1c),0);
  *(undefined1 *)(param_1 + 0x118) = 0;
  return;
}

