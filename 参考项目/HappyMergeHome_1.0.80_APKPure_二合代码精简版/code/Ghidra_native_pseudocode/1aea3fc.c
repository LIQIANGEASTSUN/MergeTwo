
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01afa3fc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01afa550 + 0x1afa410);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01afa554 + 0x1afa424));
    func_0x01438628(*(undefined4 *)(_UNK_01afa558 + 0x1afa430));
    *pcVar4 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x02953fd4(0xa505,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xa505,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  piVar8 = *(int **)(_UNK_01afa55c + 0x1afa494);
  piVar9 = *(int **)(_UNK_01afa560 + 0x1afa49c);
  while( true ) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar6) break;
    if (*(uint *)(iVar1 + 0xc) <= uVar6) {
      func_0x014388e8();
    }
    iVar5 = *(int *)(iVar1 + 0x10 + uVar6 * 4);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(undefined4 *)(iVar5 + 0xc);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x024ef144(uVar7,0,0);
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar5 + 0xc);
      iVar5 = **(int **)(*piVar9 + 0x5c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x014e94d8(iVar2,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      func_0x02b599b4(iVar5,uVar7,0);
    }
    uVar6 = uVar6 + 1;
  }
  return;
}

