
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f1a48c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02f1a5f0 + 0x2f1a4a4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f1a5f4 + 0x2f1a4b8));
    func_0x01438628(*(undefined4 *)(_UNK_02f1a5f8 + 0x2f1a4c4));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iVar1 = func_0x02953fd4(0x42d3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x42d3,0);
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
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    iVar1 = func_0x024f5770(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = FUN_02f197f8(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_02f197f8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    fVar7 = *(float *)(iVar1 + 0xc);
    if (*(int *)(**(int **)(_UNK_02f1a5fc + 0x2f1a54c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f1a600 + 0x2f1a56c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x014e61a4(fVar7);
    iVar5 = func_0x014e6220(fVar7);
    if (fVar7 < 0.0) {
      iVar5 = iVar2;
    }
    iVar1 = func_0x026ffbe0(iVar1,0);
    iVar5 = (iVar5 * 3600000 - iVar1) + *(int *)(param_1 + 0x18);
  }
  return iVar5;
}

