
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032b2ca4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  float fVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_032b2e1c + 0x32b2cc0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b2e20 + 0x32b2cd4));
    func_0x01438628(*(undefined4 *)(_UNK_032b2e24 + 0x32b2ce0));
    *pcVar6 = '\x01';
  }
  iVar7 = 0;
  iVar1 = func_0x02953fd4(0x8260,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8260,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a6c(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar7,uVar5,&uStack_38,uVar4,0,0);
    iVar1 = func_0x024f5770(&uStack_38,0,0);
    return iVar1;
  }
  if (param_2 != 0) {
    iVar1 = FUN_032a4314(param_1);
    iVar7 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_032a7be8(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x20);
      fVar8 = *(float *)(param_2 + 0x10);
      if (*(int *)(**(int **)(_UNK_032b2e28 + 0x32b2d7c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar7 = func_0x04e4a028(**(undefined4 **)(_UNK_032b2e2c + 0x32b2da0));
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      fVar8 = fVar8 * _UNK_032b2e18;
      iVar2 = func_0x014e61a4(fVar8);
      iVar3 = func_0x014e6220(fVar8);
      if (fVar8 < 0.0) {
        iVar3 = iVar2;
      }
      iVar7 = func_0x026ffbe0(iVar7,0);
      iVar7 = (iVar3 + iVar1) - iVar7;
    }
  }
  return iVar7;
}

