
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02b4f62c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_02b4f768 + 0x2b4f640);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b4f76c + 0x2b4f654));
    func_0x01438628(*(undefined4 *)(_UNK_02b4f770 + 0x2b4f660));
    func_0x01438628(*(undefined4 *)(_UNK_02b4f774 + 0x2b4f66c));
    *pcVar3 = '\x01';
  }
  iVar4 = 0;
  iVar1 = func_0x02953fd4(0x2ee1,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2ee1,0);
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
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x024f56f0(&uStack_30,0,0);
    return uVar5;
  }
  uVar5 = 0;
  puVar6 = *(undefined4 **)(_UNK_02b4f778 + 0x2b4f6cc);
  piVar7 = *(int **)(_UNK_02b4f77c + 0x2b4f6d4);
  while( true ) {
    iVar1 = FUN_02b4f3d8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar4) break;
    iVar1 = FUN_02b4f3d8(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0152983c(iVar1,iVar4,*puVar6);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar5 = func_0x0152ae0c(uVar2,uVar5,0);
    iVar4 = iVar4 + 1;
  }
  return uVar5;
}

