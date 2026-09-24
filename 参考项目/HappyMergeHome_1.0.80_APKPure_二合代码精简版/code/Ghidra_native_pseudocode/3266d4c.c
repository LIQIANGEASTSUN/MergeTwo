
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03276d4c(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_03277004 + 0x3276d64);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03277008 + 0x3276d78));
    func_0x01438628(*(undefined4 *)(_UNK_0327700c + 0x3276d84));
    func_0x01438628(*(undefined4 *)(_UNK_03277010 + 0x3276d90));
    func_0x01438628(*(undefined4 *)(_UNK_03277014 + 0x3276d9c));
    func_0x01438628(*(undefined4 *)(_UNK_03277018 + 0x3276da8));
    func_0x01438628(*(undefined4 *)(_UNK_0327701c + 0x3276db4));
    func_0x01438628(*(undefined4 *)(_UNK_03277020 + 0x3276dc0));
    func_0x01438628(*(undefined4 *)(_UNK_03277024 + 0x3276dcc));
    func_0x01438628(*(undefined4 *)(_UNK_03277028 + 0x3276dd8));
    func_0x01438628(*(undefined4 *)(_UNK_0327702c + 0x3276de4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x8126,0);
  if (iVar1 == 0) {
    piVar6 = (int *)(param_1 + 0x40);
    if (*piVar6 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03277030 + 0x3276e54));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_03277034 + 0x3276e68));
      *piVar6 = iVar1;
      func_0x014385cc(piVar6,iVar1);
      if (*(int *)(**(int **)(_UNK_03277038 + 0x3276e8c) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0327703c + 0x3276ea8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x036e2b78(iVar1,**(undefined4 **)(_UNK_03277040 + 0x3276ec8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_03277044 + 0x3276ef4));
      puVar5 = *(undefined4 **)(_UNK_03277048 + 0x3276f08);
      puVar7 = *(undefined4 **)(_UNK_0327704c + 0x3276f10);
      while (iVar2 = func_0x04878f14(&uStack_30,*puVar5), iVar1 = iStack_24, iVar2 != 0) {
        iVar2 = *piVar6;
        if (iStack_24 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x046cc8c8(iVar2,uVar4,iVar1,*puVar7);
      }
      func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03277050 + 0x3276f68));
    }
    iVar1 = *piVar6;
  }
  else {
    iVar1 = func_0x029540a4(0x8126,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x0291f30c(iVar1,param_1,0);
  }
  return iVar1;
}

