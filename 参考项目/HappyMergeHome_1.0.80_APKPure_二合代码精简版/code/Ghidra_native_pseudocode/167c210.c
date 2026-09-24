
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0168c210(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
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
  
  pcVar3 = (char *)(_UNK_0168c30c + 0x168c224);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0168c310 + 0x168c238));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x87c1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x87c1,0);
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
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x024f56e0(&uStack_30,0,0);
    return uVar6;
  }
  piVar4 = *(int **)(_UNK_0168c314 + 0x168c290);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_01676670();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_01678260(iVar1);
  if (iVar1 != 0) {
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = FUN_01676670();
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    FUN_016788c4(iVar5,iVar1);
    return 1;
  }
  return 0;
}

