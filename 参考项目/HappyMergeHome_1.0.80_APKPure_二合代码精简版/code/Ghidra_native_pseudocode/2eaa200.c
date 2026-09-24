
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02eba200(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_02eba488 + 0x2eba218);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02eba48c + 0x2eba22c));
    func_0x01438628(*(undefined4 *)(_UNK_02eba490 + 0x2eba238));
    func_0x01438628(*(undefined4 *)(_UNK_02eba494 + 0x2eba244));
    func_0x01438628(*(undefined4 *)(_UNK_02eba498 + 0x2eba250));
    func_0x01438628(*(undefined4 *)(_UNK_02eba49c + 0x2eba25c));
    func_0x01438628(*(undefined4 *)(_UNK_02eba4a0 + 0x2eba268));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x6a0a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02ebce1c(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x04cfe6f4(&uStack_40,iVar1,**(undefined4 **)(_UNK_02eba4a4 + 0x2eba2f0));
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    iStack_24 = iStack_34;
    puVar6 = *(undefined4 **)(_UNK_02eba4a8 + 0x2eba30c);
    puVar7 = *(undefined4 **)(_UNK_02eba4ac + 0x2eba314);
    do {
      do {
        iVar2 = func_0x04878f14(&uStack_30,*puVar6);
        iVar1 = iStack_24;
        if (iVar2 == 0) {
          func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02eba4bc + 0x2eba3d4));
          return 0;
        }
        iVar2 = func_0x02ebc9c0(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x20);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x04cd2d7c(iVar2,uVar4,*puVar7);
      } while (iVar2 != 0);
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar2 = func_0x02ebc9c0(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
    } while (*(int *)(iVar2 + 0xc) < iVar5);
    func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_02eba4b0 + 0x2eba3bc));
  }
  else {
    iVar1 = func_0x029540a4(0x6a0a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02910784(iVar1,param_1,0);
  }
  return iVar1;
}

