
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba9d64(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
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
  
  pcVar4 = (char *)(_UNK_02ba9f50 + 0x2ba9d7c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba9f54 + 0x2ba9d90));
    func_0x01438628(*(undefined4 *)(_UNK_02ba9f58 + 0x2ba9d9c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba9f5c + 0x2ba9da8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1030,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1030,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_30,uVar2,0,0);
    return;
  }
  piVar5 = *(int **)(_UNK_02ba9f60 + 0x2ba9e04);
  iVar1 = **(int **)(*piVar5 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x02b67784(iVar1,0);
  if (iVar1 == 0) {
    piVar7 = *(int **)(_UNK_02ba9f64 + 0x2ba9e38);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar8 = *(undefined4 **)(_UNK_02ba9f68 + 0x2ba9e54);
    iVar1 = func_0x014e9518(*puVar8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02e79bac(iVar1,0);
    if (iVar1 != 0) {
      iVar1 = func_0x01c8a72c(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x01c8b95c(iVar1,0);
      if (iVar1 != 0) {
        iVar1 = **(int **)(*piVar5 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x02b63a9c(iVar1,0xfa1,0,0);
        if (iVar1 == 0) {
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(*puVar8);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x02e7a3dc(iVar1,0);
          iVar1 = **(int **)(*piVar5 + 0x5c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uStack_20 = 0;
          func_0x02b6127c(iVar1,0xfa1,0,0);
        }
      }
    }
  }
  return;
}

