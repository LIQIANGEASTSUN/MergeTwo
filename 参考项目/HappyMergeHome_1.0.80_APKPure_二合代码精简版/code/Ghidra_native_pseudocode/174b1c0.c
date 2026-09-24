
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0175b1c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar4 = (char *)(_UNK_0175b320 + 0x175b1d4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0175b324 + 0x175b1e8));
    func_0x01438628(*(undefined4 *)(_UNK_0175b328 + 0x175b1f4));
    func_0x01438628(*(undefined4 *)(_UNK_0175b32c + 0x175b200));
    func_0x01438628(*(undefined4 *)(_UNK_0175b330 + 0x175b20c));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x15de,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x15de,0);
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
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar6 = func_0x024f56f0(&uStack_30,0,0);
    return uVar6;
  }
  if (*(int *)(**(int **)(_UNK_0175b334 + 0x175b264) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0175b338 + 0x175b280));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = *(int *)(iVar1 + 0x40);
  iVar5 = 0;
  puVar7 = *(undefined4 **)(_UNK_0175b33c + 0x175b2a8);
  while( true ) {
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar5) break;
    iVar2 = func_0x0152983c(iVar1,iVar5,*puVar7);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0x14) == 2) {
      iVar1 = func_0x0152983c(iVar1,iVar5,*puVar7);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      return *(undefined4 *)(iVar1 + 0x18);
    }
    iVar5 = iVar5 + 1;
  }
  return 0;
}

