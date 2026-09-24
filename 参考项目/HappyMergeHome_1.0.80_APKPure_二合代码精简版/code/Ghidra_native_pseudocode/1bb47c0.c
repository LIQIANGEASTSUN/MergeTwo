
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bc47c0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  pcVar6 = (char *)(_UNK_01bc4a6c + 0x1bc47e8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01bc4a70 + 0x1bc4800));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4a74 + 0x1bc480c));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4a78 + 0x1bc4818));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4a7c + 0x1bc4824));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4a80 + 0x1bc4830));
    func_0x01438628(*(undefined4 *)(_UNK_01bc4a84 + 0x1bc483c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e50,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01bc4a88 + 0x1bc48b8));
    func_0x024eeca8(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 0x14) = param_6;
    func_0x014385cc((undefined4 *)(iVar1 + 0x14),param_6);
    if (param_3 == 0) {
      func_0x014388e4();
    }
    func_0x024ef228(&uStack_50,param_3,0);
    piVar2 = *(int **)(_UNK_01bc4a8c + 0x1bc4914);
    *(undefined4 *)(iVar1 + 0x10) = uStack_48;
    *(undefined8 *)(iVar1 + 8) = uStack_50;
    uStack_38 = uStack_48;
    uStack_40 = uStack_50;
    if (*(int *)(*piVar2 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x01bc4aa0();
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar3,1,0);
    if (*(int *)(**(int **)(_UNK_01bc4a90 + 0x1bc496c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01bc4a94 + 0x1bc4988));
    uVar4 = func_0x01bc4aa0();
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    uVar8 = *(undefined4 *)(iVar1 + 0x10);
    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01bc4a98 + 0x1bc49b0));
    func_0x0152e3ec(uVar5,iVar1,**(undefined4 **)(_UNK_01bc4a9c + 0x1bc49d0),0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x02b80c5c(iVar3,uVar4,param_1,param_2,0,uVar7,uVar9,uVar8,param_5,param_4,0x3f000000,0,
                    uVar5,0,0x3f000000,0x40200000,0);
    iVar1 = func_0x01bc4aa0();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x014e94e8(iVar1,0,0);
  }
  else {
    iVar1 = func_0x029540a4(0x5e50,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028fbc2c(iVar1,param_1,param_2,param_3,param_4,param_5,param_6,0);
  }
  return;
}

