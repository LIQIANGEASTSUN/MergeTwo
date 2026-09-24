
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c85fb4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
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
  undefined4 uStack_1c;
  
  iVar1 = func_0x02953fd4(0x5dc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5dc,0);
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
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = FUN_01c81224(param_1);
  if (iVar1 != 0) {
    pcVar7 = (char *)(_UNK_01c860b0 + 0x1c8602c);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01c860b4 + 0x1c86040));
      *pcVar7 = '\x01';
    }
    puVar2 = *(undefined4 **)(**(int **)(_UNK_01c860b8 + 0x1c86058) + 0x5c);
    uStack_20 = puVar2[2];
    uStack_1c = 0;
    FUN_01c85744(param_1,param_2,*puVar2,puVar2[1]);
    iVar1 = FUN_01c733a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    param_2 = *(int *)(iVar1 + 0x40) + param_2;
    pcVar7 = (char *)(_UNK_026aec00 + 0x26aeb78);
    if (*pcVar7 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_026aec04 + 0x26aeb8c),param_2,0);
      func_0x01438628(*(undefined4 *)(_UNK_026aec08 + 0x26aeb98));
      *pcVar7 = '\x01';
    }
    if (*(int *)(iVar1 + 0x40) == param_2) {
      return;
    }
    piVar3 = *(int **)(_UNK_026aec0c + 0x26aebb8);
    *(int *)(iVar1 + 0x40) = param_2;
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_026aec10 + 0x26aebd8));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = *(uint *)(iVar1 + 0x60);
    *(uint *)(iVar1 + 0x60) = uVar4 + 1;
    *(uint *)(iVar1 + 100) = *(int *)(iVar1 + 100) + (uint)(0xfffffffe < uVar4);
    return;
  }
  return;
}

