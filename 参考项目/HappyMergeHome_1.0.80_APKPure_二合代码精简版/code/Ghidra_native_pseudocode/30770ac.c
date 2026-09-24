
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030870ac(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_030871e0 + 0x30870c0);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030871e4 + 0x30870d4));
    func_0x01438628(*(undefined4 *)(_UNK_030871e8 + 0x30870e0));
    *pcVar4 = '\x01';
  }
  iVar7 = 0;
  iVar1 = func_0x02953fd4(0x7570,0);
  if (iVar1 != 0) {
    iVar7 = func_0x029540a4(0x7570,0);
    if (iVar7 == 0) {
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
    if (*(int *)(iVar7 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar7 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar1 = *(int *)(iVar7 + 8);
    uVar6 = *(undefined4 *)(iVar7 + 0xc);
    iVar7 = *(int *)(iVar7 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar7 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar1,uVar6,&uStack_30,uVar3,0,0);
    iVar7 = func_0x024f56f0(&uStack_30,0,0);
    return iVar7;
  }
  iVar1 = 1;
  puVar8 = *(undefined4 **)(_UNK_030871ec + 0x3087140);
  while( true ) {
    iVar2 = FUN_0307fb70(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x18);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0xc) <= iVar1 + -1) break;
    iVar2 = FUN_0307f35c(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar5 = *(int *)(iVar2 + 0xc);
    iVar2 = FUN_0307fb70(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = *(int *)(iVar2 + 0x18);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x04cd26d0(iVar2,iVar1 + -1,*puVar8);
    if (iVar2 <= iVar5) {
      iVar7 = iVar1;
    }
    iVar1 = iVar1 + 1;
  }
  return iVar7;
}

