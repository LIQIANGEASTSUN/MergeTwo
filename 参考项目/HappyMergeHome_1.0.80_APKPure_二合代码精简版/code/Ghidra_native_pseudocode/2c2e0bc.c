
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c3e0bc(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_02c3e3bc + 0x2c3e0dc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3e3c0 + 0x2c3e0f0));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e3c4 + 0x2c3e0fc));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e3c8 + 0x2c3e108));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e3cc + 0x2c3e114));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e3d0 + 0x2c3e120));
    func_0x01438628(*(undefined4 *)(_UNK_02c3e3d4 + 0x2c3e12c));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0xe90,0);
  if (iVar1 == 0) {
    piVar7 = *(int **)(_UNK_02c3e3d8 + 0x2c3e1a0);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar5 = *(undefined4 **)(_UNK_02c3e3dc + 0x2c3e1bc);
    iVar1 = func_0x014e9518(*puVar5);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = FUN_02be0a54(iVar1,param_3,0);
    iVar1 = -1;
    if (iVar2 != 0) {
      if (param_2 == 0) {
        func_0x014388e4();
      }
      func_0x024ef7ac(&uStack_48,param_2,**(undefined4 **)(_UNK_02c3e3e0 + 0x2c3e20c));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      while (iVar3 = func_0x04873f24(&uStack_38,**(undefined4 **)(_UNK_02c3e3e4 + 0x2c3e228)),
            iVar2 = iStack_2c, iVar3 != 0) {
        iVar3 = 0;
        while( true ) {
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(*puVar5);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = FUN_02be0a54(iVar4,param_3,0);
          if (iVar4 <= iVar3) break;
          if (*(int *)(*piVar7 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar4 = func_0x014e9518(*puVar5);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = FUN_02be0b0c(iVar4,iVar3,param_3,0);
          if ((iVar4 != 0) && (*(int *)(iVar4 + 8) == iVar2)) {
            func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02c3e3ec + 0x2c3e2ec));
            return iVar2;
          }
          iVar3 = iVar3 + 1;
        }
      }
      func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02c3e3f4 + 0x2c3e310));
    }
  }
  else {
    iVar1 = func_0x029540a4(0xe90,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028953a4(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}

