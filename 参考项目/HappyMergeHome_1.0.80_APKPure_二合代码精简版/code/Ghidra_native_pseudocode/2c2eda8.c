
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02c3eda8(undefined4 param_1,int param_2,undefined4 param_3)

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
  
  pcVar6 = (char *)(_UNK_02c3f0a8 + 0x2c3edc8);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c3f0ac + 0x2c3eddc));
    func_0x01438628(*(undefined4 *)(_UNK_02c3f0b0 + 0x2c3ede8));
    func_0x01438628(*(undefined4 *)(_UNK_02c3f0b4 + 0x2c3edf4));
    func_0x01438628(*(undefined4 *)(_UNK_02c3f0b8 + 0x2c3ee00));
    func_0x01438628(*(undefined4 *)(_UNK_02c3f0bc + 0x2c3ee0c));
    func_0x01438628(*(undefined4 *)(_UNK_02c3f0c0 + 0x2c3ee18));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x5d3e,0);
  if (iVar1 == 0) {
    piVar7 = *(int **)(_UNK_02c3f0c4 + 0x2c3ee8c);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar5 = *(undefined4 **)(_UNK_02c3f0c8 + 0x2c3eea8);
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
      func_0x024ef7ac(&uStack_48,param_2,**(undefined4 **)(_UNK_02c3f0cc + 0x2c3eef8));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      while (iVar3 = func_0x04873f24(&uStack_38,**(undefined4 **)(_UNK_02c3f0d0 + 0x2c3ef14)),
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
            func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02c3f0d8 + 0x2c3efd8));
            return iVar2;
          }
          iVar3 = iVar3 + 1;
        }
      }
      func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_02c3f0e0 + 0x2c3effc));
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5d3e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028953a4(iVar1,param_1,param_2,param_3,0);
  }
  return iVar1;
}

