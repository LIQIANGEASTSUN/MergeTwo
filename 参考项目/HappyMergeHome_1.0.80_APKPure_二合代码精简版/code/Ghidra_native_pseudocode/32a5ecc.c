
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032b5ecc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
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
  
  pcVar5 = (char *)(_UNK_032b5fc8 + 0x32b5ee4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b5fcc + 0x32b5ef8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x82b3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x82b3,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x024f5730(&uStack_30,0,0);
    return uVar6;
  }
  iVar1 = FUN_032b5114(param_1);
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    iVar4 = FUN_032a7be8(param_1);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar7 = *(uint *)(iVar4 + 0x70);
    iVar4 = *(int *)(iVar4 + 0x74);
    uVar3 = *(uint *)(iVar1 + 0xc);
    if (*(int *)(**(int **)(_UNK_032b5fd0 + 0x32b5f80) + 0x74) == 0) {
      func_0x014387a4();
    }
    uStack_20 = 0;
    uVar6 = func_0x05160900(0,0,uVar3 - uVar7,((int)uVar3 >> 0x1f) - (iVar4 + (uint)(uVar3 < uVar7))
                           );
  }
  return uVar6;
}

